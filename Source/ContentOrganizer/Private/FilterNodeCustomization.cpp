#include "FilterNodeCustomization.h"
#include "DetailLayoutBuilder.h"
#include "DetailWidgetRow.h"
#include "DetailCategoryBuilder.h"
#include "FilterNode.h"
#include "ContentOrganizerAsset.h"
#include "ContentOrganizerGraph.h"
#include "Widgets/Text/STextBlock.h"
#include "Framework/Application/SlateApplication.h"


void FFilterNodeCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
    //Select filterNode
    TArray<TWeakObjectPtr<UObject>> Objs;
    DetailBuilder.GetObjectsBeingCustomized(Objs);
    if (Objs.Num() != 1) return;
    UFilterNode* Node = Cast<UFilterNode>(Objs[0].Get());
    if (!Node) return;

    //GTet asset and handler
    UEdGraph* Graph = Node->GetGraph();
    UContentOrganizerAsset* Asset = Graph ? Cast<UContentOrganizerAsset>(Graph->GetOuter()) : nullptr;
    if (!Asset) return;

    TSharedRef<IPropertyHandle> AssetTypeHandle =
        DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UFilterNode, AssetType), UFilterNode::StaticClass());
    DetailBuilder.HideProperty(AssetTypeHandle);

    //Option classViewer
    FClassViewerInitializationOptions Options;
    Options.Mode = EClassViewerMode::ClassPicker;
    Options.bShowNoneOption = true;
    Options.bShowUnloadedBlueprints = false;
    Options.ClassFilters.Add(MakeShared<FAllowedAssetTypeFilter>(Asset->AllowedAssetTypes));

    //Set ComboBox
    TSharedPtr<SComboButton> ComboButton;

    IDetailCategoryBuilder& Category = DetailBuilder.EditCategory("Filter");
    Category.AddCustomRow(AssetTypeHandle->GetPropertyDisplayName())
    .NameContent()
    [
        AssetTypeHandle->CreatePropertyNameWidget()
    ]
    .ValueContent()
    .MinDesiredWidth(250)
    [
        SAssignNew(ComboButton, SComboButton)
        .ContentPadding(FMargin(2,2))
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
        //Use only assetTypeHandle and close comboBox
        .OnGetMenuContent_Lambda(
            [Options, AssetTypeHandle, WeakCombo = TWeakPtr<SComboButton>(ComboButton)]() -> TSharedRef<SWidget>
            {
                return FModuleManager::LoadModuleChecked<FClassViewerModule>("ClassViewer")
                    .CreateClassViewer(
                        Options,
                        FOnClassPicked::CreateLambda([AssetTypeHandle, WeakCombo](UClass* Picked)
                        {
                            if (Picked)
                            {
                                //Set property
                                AssetTypeHandle->SetValue(Picked);
                                //Class menu 
                                FSlateApplication::Get().DismissAllMenus();
                                //Not closing in comboBox
                                if (TSharedPtr<SComboButton> Combo = WeakCombo.Pin())
                                {
                                    Combo->SetIsOpen(false);
                                }
                            }
                        })
                    )
                    ->AsShared();
            }
        )

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
    ];
}