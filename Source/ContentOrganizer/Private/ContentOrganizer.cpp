#include "ContentOrganizer.h"
#include "ContentOrganizerAsset.h"
#include "AssetToolsModule.h"
#include "Ata_ContentOrganizer.h"
#include "COAssetActionsRegistrar.h"
#include "ContentOrganizerGraph.h"
#include "ContentOrganizerLibrary.h"
#include "ContentOrganizerSchema.h"
#include "ContentOrganizerSubsystem.h"
#include "GraphEditor.h"
#include "FolderNode.h"
#include "PropertyEditorModule.h"
#include "IDetailsView.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Framework/Commands/GenericCommands.h"
#include "Interfaces/IPluginManager.h"
#include "Modules/ModuleManager.h"
#include "Styling/SlateStyleRegistry.h"
#include "UObject/ReferenceChainSearch.h"
#include "UObject/GarbageCollection.h"

#define LOCTEXT_NAMESPACE "FContentOrganizerModule"

IMPLEMENT_MODULE(FContentOrganizerModule, ContentOrganizer)

const FName FContentOrganizerModule::ContentOrganizerTabName(TEXT("ContentOrganizerGraphTab"));

// Temporary storage of the asset being edited
static UContentOrganizerAsset* GEditingAsset = nullptr;
EAssetTypeCategories::Type FContentOrganizerModule::AssetCategory = EAssetTypeCategories::Misc; //Init


void FContentOrganizerModule::StartupModule()
{
	//Register the tab spawner (hidden by default)
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(
		                        ContentOrganizerTabName,
		                        FOnSpawnTab::CreateRaw(this, &FContentOrganizerModule::OnSpawnPluginTab)
	                        )
	                        .SetDisplayName(LOCTEXT("TabTitle", "Content Organizer"))
	                        .SetMenuType(ETabSpawnerMenuType::Hidden);

	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	//AssetTools.RegisterAssetTypeActions(MakeShareable(new FAta_ContentOrganizer()));

	//Custom Category
	AssetCategory = AssetTools.RegisterAdvancedAssetCategory(
		FName("ContentOrganizer"),
		FText::FromString("Content Organizer")
	);
	AssetTools.RegisterAssetTypeActions(MakeShareable(new FAta_ContentOrganizer(AssetCategory)));

	//Register for the asset ContentOrganizer
	FCOAssetActionsRegistrar::Register(AssetCategory);

	//SlateIcon
	InitializeSlateStyle();
}

void FContentOrganizerModule::ShutdownModule()
{
	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(ContentOrganizerTabName);
	UToolMenus::UnRegisterStartupCallback(this);
	UToolMenus::UnregisterOwner(this);
	FCOAssetActionsRegistrar::Unregister();
	ShutdownSlateStyle();
}

// Called by AssetTypeActions to open an existing asset
void FContentOrganizerModule::OpenGraphEditorForAsset(UContentOrganizerAsset* Asset)
{
	GEditingAsset = Asset;

	//ShowTab
	TSharedPtr<SDockTab> OpenedTab = FGlobalTabmanager::Get()->TryInvokeTab(ContentOrganizerTabName);
	
	if (!OpenedTab.IsValid())
	{
		GEditingAsset = nullptr;
		return;
	}

	OpenedTab->SetOnTabClosed(SDockTab::FOnTabClosedCallback::CreateLambda([](TSharedRef<SDockTab>)
	{
		UE_LOG(LogTemp, Display, TEXT("Content Organizer tab closed. Cleaning subsystem reference."));
		
		if (GEditor)
		{
			if (UContentOrganizerSubsystem* Sub = GEditor->GetEditorSubsystem<UContentOrganizerSubsystem>())
			{
				Sub->ClearActiveGraph();
			}
		}
		if (GEditor)
		{
			if (auto* AssetEditor = GEditor->GetEditorSubsystem<UAssetEditorSubsystem>())
			{
				
				AssetEditor->CloseAllEditorsForAsset(GEditingAsset);
			}
		}

		GEditingAsset = nullptr;
	}));

}

// Invoked when the tab is spawned or re-opened
TSharedRef<SDockTab> FContentOrganizerModule::OnSpawnPluginTab(const FSpawnTabArgs& Args)
{
	if (!GEditingAsset)
	{
		UE_LOG(LogTemp, Warning, TEXT("No asset set when opening ContentOrganizer tab."));
		return SNew(SDockTab).TabRole(ETabRole::NomadTab);
	}
	
	TSharedRef<SDockTab> NewTab = CreateGraphEditorTab(GEditingAsset);

	GEditingAsset = nullptr;
	return NewTab;
}

TSharedRef<SDockTab> FContentOrganizerModule::CreateGraphEditorTab(UContentOrganizerAsset* Asset)
{
	UContentOrganizerGraph* Graph = EnsureGraph(Asset);
	if (!Graph)
	{
		//Empty -- Invalid
		return SNew(SDockTab).TabRole(ETabRole::NomadTab);
	}

	// Create details view
	FPropertyEditorModule& PropModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	FDetailsViewArgs DetailsArgs;
	DetailsArgs.bHideSelectionTip = true;
	TSharedRef<IDetailsView> DetailsView = PropModule.CreateDetailView(DetailsArgs);

	// Wire up selection changed
	SGraphEditor::FGraphEditorEvents GraphEvents;
	GraphEvents.OnSelectionChanged = SGraphEditor::FOnSelectionChanged::CreateLambda(
		[DetailsView](const TSet<UObject*>& Selected)
		{
			if (Selected.Num() > 0)
				DetailsView->SetObject(*Selected.CreateConstIterator());
			else
				DetailsView->SetObject(nullptr);
		}
	);

	// Setup command list
	TSharedPtr<FUICommandList> CommandList = MakeShareable(new FUICommandList);
	UContentOrganizerSchema::StaticCommandList = CommandList;


	// Create graph editor widget
	FGraphAppearanceInfo AppearanceInfo;
	TSharedRef<SGraphEditor> GraphEditorWidget =
		SNew(SGraphEditor)
		.AdditionalCommands(CommandList)
		.IsEditable(true)
		.Appearance(AppearanceInfo)
		.GraphToEdit(Graph)
		.GraphEvents(GraphEvents);

	// Map delete key to node removal
	SetMapActionForCommandList(GraphEditorWidget, CommandList);

	//SET GRAPH TO SUBSYSTEM
	if (GEditor)
	{
		if (UContentOrganizerSubsystem* Sub = GEditor->GetEditorSubsystem<UContentOrganizerSubsystem>())
		{
			Sub->SetActiveGraph(Graph);
			Sub->SetScanBasePath(ScanBasePath);
		}
	}

	return SNew(SDockTab)
			.TabRole(ETabRole::NomadTab)
			/* .OnTabClosed(SDockTab::FOnTabClosedCallback::CreateLambda([](TSharedRef<SDockTab>)
			{
				GEditingAsset = nullptr;
				if (GEditor)
				{
					if (UContentOrganizerSubsystem* Sub = GEditor->GetEditorSubsystem<UContentOrganizerSubsystem>())
					{
						Sub->ClearActiveGraph();
					}
				}
			}))*/
			[
				SNew(SVerticalBox)

				// -- Path + Button --
				+ SVerticalBox::Slot().AutoHeight().Padding(4)
				[
					SNew(SHorizontalBox)
					+ SHorizontalBox::Slot().AutoWidth()
					[
						SNew(STextBlock).Text(LOCTEXT("BasePathLabel", "Base Path:"))
					]
					+ SHorizontalBox::Slot().FillWidth(1.0f).Padding(4, 0)
					[
						SNew(SEditableTextBox)
						.Text_Lambda([this]() { return FText::FromString(ScanBasePath); })
						.OnTextCommitted_Lambda([this](const FText& NewText, ETextCommit::Type)
						{
							ScanBasePath = NewText.ToString();
							if (UContentOrganizerSubsystem* Sub = GEditor->GetEditorSubsystem<
								UContentOrganizerSubsystem>())
							{
								Sub->SetScanBasePath(ScanBasePath);
							}
						})
					]
				]
				+ SVerticalBox::Slot().AutoHeight().Padding(4)
				[
					SNew(SButton)
					.Text(LOCTEXT("OrganizeContent", "Organize Content"))
					.OnClicked_Lambda([this, Graph]()
					{
						UContentOrganizerLibrary::ApplyGraphRules(Graph, ScanBasePath);
						return FReply::Handled();
					})
				]

				// -- GraphEditor + Details --
				+ SVerticalBox::Slot().FillHeight(1.0f)
				[
					SNew(SSplitter)

					+ SSplitter::Slot().Value(0.7f)
					[
						GraphEditorWidget
					]

					+ SSplitter::Slot().Value(0.3f)
					[
						DetailsView
					]
				]
			];
}

void FContentOrganizerModule::CreateDefaultFolder(UContentOrganizerGraph* Graph)
{
	UFolderNode* RootNode = NewObject<UFolderNode>(Graph);
	RootNode->TargetFolderName = TEXT("/Game");
	RootNode->CreateNewGuid(); // For undo/redo
	RootNode->bIsRoot = true;
	RootNode->AllocateDefaultPins();
	Graph->AddNode(RootNode, false, false);
	RootNode->AutowireNewNode(nullptr);
	RootNode->ReconstructNode();
	RootNode->NodePosX = 0.0f;
	RootNode->NodePosY = 0.0f;

	Graph->NotifyGraphChanged();
}

void FContentOrganizerModule::SetMapActionForCommandList(
	TSharedRef<SGraphEditor> GraphEditor,
	const TSharedPtr<FUICommandList>& CommandList)
{
	if (!CommandList.IsValid())
		return;

	CommandList->MapAction(
		FGenericCommands::Get().Delete,
		FExecuteAction::CreateLambda([GraphEditor]()
		{
			const FGraphPanelSelectionSet Selected = GraphEditor->GetSelectedNodes();
			if (Selected.Num() == 0)
				return;

			UEdGraph* EdGraph = GraphEditor->GetCurrentGraph();
			if (!EdGraph)
				return;

			const FScopedTransaction Transaction(LOCTEXT("DeleteNodesTxn", "Delete Nodes"));
			EdGraph->Modify();

			//Catch node removable
			for (UObject* Obj : Selected)
			{
				if (UEdGraphNode* Node = Cast<UEdGraphNode>(Obj))
				{
					Node->Modify();
					EdGraph->RemoveNode(Node);
				}
			}

			EdGraph->NotifyGraphChanged();
			GraphEditor->ClearSelectionSet();
		}),
		FCanExecuteAction::CreateLambda([GraphEditor]()
		{
			//If there's a node removable
			for (UObject* Obj : GraphEditor->GetSelectedNodes())
			{
				if (UEdGraphNode* Node = Cast<UEdGraphNode>(Obj))
				{
					if (Node->CanUserDeleteNode())
					{
						return true;
					}
				}
			}
			return false;
		})
	);
}

UContentOrganizerGraph* FContentOrganizerModule::EnsureGraph(UContentOrganizerAsset* Asset)
{
	if (!Asset)
	{
		UE_LOG(LogTemp, Error, TEXT("EnsureGraph: Asset is null."));
		return nullptr;
	}
	//Check if GameNode is Valid
	if (!Asset->Graph || Asset->Graph->Nodes.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Creating new graph or default folder for asset %s"), *Asset->GetName());

		if (!Asset->Graph)
		{
			Asset->Graph = NewObject<UContentOrganizerGraph>(Asset, UContentOrganizerGraph::StaticClass(), NAME_None,
			                                                 RF_Transactional);
			Asset->Graph->Schema = UContentOrganizerSchema::StaticClass();
		}

		if (Asset->Graph->Nodes.Num() == 0)
		{
			UFolderNode* RootNode = NewObject<UFolderNode>(Asset->Graph);
			RootNode->TargetFolderName = TEXT("/Game");
			RootNode->CreateNewGuid();
			RootNode->bIsRoot = true;
			RootNode->AllocateDefaultPins();
			Asset->Graph->AddNode(RootNode);
			RootNode->AutowireNewNode(nullptr);
			RootNode->ReconstructNode();
			RootNode->NodePosX = 0.0f;
			RootNode->NodePosY = 0.0f;

			Asset->Graph->NotifyGraphChanged();
		}
	}
	Asset->Modify();
	Asset->Graph->Modify();

	return Asset->Graph;
}

void FContentOrganizerModule::RegisterMenus()
{
}

//Slate Icon
void FContentOrganizerModule::InitializeSlateStyle()
{
	//Init new styleSet 
	StyleSet = MakeShareable(new FSlateStyleSet("ContentOrganizerStyle"));

	//root
	StyleSet->SetContentRoot(
		IPluginManager::Get().FindPlugin("ContentOrganizer")->GetBaseDir() / TEXT("Resources")
	);

	//For content
	StyleSet->Set(
		"ClassThumbnail.ContentOrganizerAsset",
		new FSlateImageBrush(
			StyleSet->RootToContentDir(TEXT("IconContentOrganizer"), TEXT(".png")),
			FVector2D(128, 128)
		)
	);
	//For icon 
	StyleSet->Set(
		"ClassIcon.ContentOrganizerAsset",
		new FSlateImageBrush(
			StyleSet->RootToContentDir(TEXT("IconContentOrganizer"), TEXT(".png")),
			FVector2D(16, 16)
		)
	);

	//Register Style set
	FSlateStyleRegistry::RegisterSlateStyle(*StyleSet);
}

void FContentOrganizerModule::ShutdownSlateStyle()
{
	if (StyleSet.IsValid())
	{
		FSlateStyleRegistry::UnRegisterSlateStyle(StyleSet->GetStyleSetName());
		StyleSet.Reset();
	}
}

#undef LOCTEXT_NAMESPACE
