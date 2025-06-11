#include "FilterNodeCustomization.h"
#include "DetailLayoutBuilder.h"
#include "DetailWidgetRow.h"
#include "DetailCategoryBuilder.h"
#include "FilterNode.h"
#include "ContentOrganizerAsset.h"
#include "ContentOrganizerGraph.h"
#include "Widgets/Text/STextBlock.h"

void FFilterNodeCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	// Only customize a single node
	TArray<TWeakObjectPtr<UObject>> ObjectsBeingCustomized;
	DetailBuilder.GetObjectsBeingCustomized(ObjectsBeingCustomized);
	if (ObjectsBeingCustomized.Num() != 1)
	{
		return;
	}

	UFilterNode* Node = Cast<UFilterNode>(ObjectsBeingCustomized[0].Get());
	if (!Node)
	{
		return;
	}

	// Retrieve the ContentOrganizerAsset
	UEdGraph* Graph = Node->GetGraph();
	UContentOrganizerAsset* Asset = Graph ? Cast<UContentOrganizerAsset>(Graph->GetOuter()) : nullptr;
	if (!Asset)
	{
		return;
	}

	TSharedRef<IPropertyHandle> AssetTypeHandle =
	   DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UFilterNode, AssetType), UFilterNode::StaticClass());

	// 2) Nascondi la riga di default
	DetailBuilder.HideProperty(AssetTypeHandle);

	// 3) Prepara class viewer options come prima
	FClassViewerInitializationOptions Options;
	Options.Mode = EClassViewerMode::ClassPicker;
	Options.bShowNoneOption = true;
	Options.bShowUnloadedBlueprints = false;
	Options.ClassFilters.Add(MakeShared<FAllowedAssetTypeFilter>(Asset->AllowedAssetTypes));

	// 4) Cattura il builder in un puntatore per la lambda
	IDetailLayoutBuilder* BuilderPtr = &DetailBuilder;

	// 5) Aggiungi la riga custom usando lo stesso PropertyHandle
	IDetailCategoryBuilder& Category = DetailBuilder.EditCategory("Filter");
	Category.AddCustomRow(AssetTypeHandle->GetPropertyDisplayName())
	.NameContent()
	[
		AssetTypeHandle->CreatePropertyNameWidget()
	]
	.ValueContent()
	.MinDesiredWidth(250)
	[
		SNew(SComboButton)
		.OnMenuOpenChanged_Lambda([NodePtr = TWeakObjectPtr<UFilterNode>(Node)](bool bIsOpen)
			{
				if (!bIsOpen && NodePtr.IsValid())
				{
					if (UEdGraph* G = NodePtr->GetGraph())
					{
						G->NotifyGraphChanged();
					}
				}
			})
		.OnGetMenuContent_Lambda([Options, Node, BuilderPtr]() mutable
		{
			return FModuleManager::LoadModuleChecked<FClassViewerModule>("ClassViewer")
				.CreateClassViewer(Options, FOnClassPicked::CreateLambda([Node, BuilderPtr](UClass* Picked)
				{
					Node->Modify();
					Node->AssetType = Picked;
					BuilderPtr->ForceRefreshDetails();
				}))
				->AsShared();
		})
		.ContentPadding(FMargin(2.0f, 2.0f))
		.ButtonContent()
		[
			SNew(STextBlock)
			.Font(IDetailLayoutBuilder::GetDetailFont())
			.Text_Lambda([Node]()
			{
				return Node->AssetType
					? FText::FromName(Node->AssetType->GetFName())
					: FText::FromString("None");
			})
		]
	];
}
