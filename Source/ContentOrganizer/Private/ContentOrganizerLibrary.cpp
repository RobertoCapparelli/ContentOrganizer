#include "ContentOrganizerLibrary.h"
#include "ContentOrganizerGraph.h"
#include "FolderNode.h"
#include "FilterNode.h"
#include "EditorAssetLibrary.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "AssetToolsModule.h"

#include "Misc/Paths.h"


DECLARE_LOG_CATEGORY_EXTERN(LogContentOrganizerLIBRARY, Log, All);
DEFINE_LOG_CATEGORY(LogContentOrganizerLIBRARY);

void UContentOrganizerLibrary::FixUpRedirectorsFromBasePath(const FString& BasePath)
{
	UE_LOG(LogContentOrganizerLIBRARY, Display, TEXT("FixUpRedirectorsFromBasePath: base \"%s\""), *BasePath);

	//Class filter for redirector
	FARFilter RedirectorFilter;
	RedirectorFilter.PackagePaths.Add(*BasePath);
	RedirectorFilter.bRecursivePaths = true;
	RedirectorFilter.ClassPaths.Add(FTopLevelAssetPath(TEXT("/Script/CoreUObject.ObjectRedirector")));
	
	TArray<FAssetData> FoundRedirectors;
	FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry")
		.Get().GetAssets(RedirectorFilter, FoundRedirectors);

	UE_LOG(LogContentOrganizerLIBRARY, Display, TEXT("  Found %d redirectors"), FoundRedirectors.Num());

	TArray<UObjectRedirector*> Redirectors;
	for (const FAssetData& AD : FoundRedirectors)
	{
		if (UObjectRedirector* R = Cast<UObjectRedirector>(AD.GetAsset()))
		{
			Redirectors.Add(R);
		}
	}
	if (Redirectors.Num() == 0)
	{
		UE_LOG(LogContentOrganizerLIBRARY, Display, TEXT("  No redirectors to fix up"));
		return;
	}

	//FixupReferencers-> Use Unreal method for fixup
	FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");
	AssetToolsModule.Get().FixupReferencers(
		Redirectors,
		true,
		ERedirectFixupMode::DeleteFixedUpRedirectors
	);

	UE_LOG(LogContentOrganizerLIBRARY, Display, TEXT("  Fixed up and deleted %d redirectors"), Redirectors.Num());
}

int32 UContentOrganizerLibrary::ApplyGraphRules(UContentOrganizerGraph* Graph, const FString& BasePath)
{
	int32 MovedCount = 0;
	UE_LOG(LogContentOrganizerLIBRARY, Display, TEXT("ApplyGraphRules: BasePath=\"%s\""), *BasePath);
	if (!Graph)
	{
		UE_LOG(LogContentOrganizerLIBRARY, Warning, TEXT("  Graph is null, aborting."));
		return MovedCount;
	}

	//Get folders and filters from current graph
	TArray<UFolderNode*> FolderNodes;
	TArray<UFilterNode*> FilterNodes;
	for (UEdGraphNode* Node : Graph->Nodes)
	{
		if (UFolderNode* FN = Cast<UFolderNode>(Node))
			FolderNodes.Add(FN);
		else if (UFilterNode* FilN = Cast<UFilterNode>(Node))
			FilterNodes.Add(FilN);
	}
	UE_LOG(LogContentOrganizerLIBRARY, Display, TEXT("  Found %d FolderNodes and %d FilterNodes"), FolderNodes.Num(), FilterNodes.Num());

	//Set each filter to path
	TMap<UFilterNode*, UFolderNode*> FilterToFolder;
	TMap<UFolderNode*, FString> FolderPathCache;
	//foreach filter get the in, if 
	TMap<UFilterNode*, FString> FilterToFullPath;
	for (UFilterNode* FilN : FilterNodes)
	{
		if (UEdGraphPin* InPin = FilN->FindPin(TEXT("In"))) 
		{
			for (UEdGraphPin* Linked : InPin->LinkedTo)
			{
				if (UFolderNode* FN = Cast<UFolderNode>(Linked->GetOwningNode())) //filter has always folder connect but check for avoid error 
				{
					FString FullPath = BuildFullFolderPath(FN, &FolderPathCache);
					FilterToFullPath.Add(FilN, FullPath);
					break;
				}
			}
		}
	}
	//Scan assets
	FAssetRegistryModule& ARModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	FARFilter ScanFilter;
	ScanFilter.PackagePaths.Add(*BasePath);
	ScanFilter.bRecursivePaths = true;

	TArray<FAssetData> AssetList;
	ARModule.Get().GetAssets(ScanFilter, AssetList);
	UE_LOG(LogTemp, Display, TEXT("  Scanned %d assets under %s"), AssetList.Num(), *BasePath);

	//Foreach asset find filter 
	TArray<FString> AssetWithInvalidFilters;
	for (const FAssetData& AD : AssetList)
	{
		FString SourcePackage = AD.PackageName.ToString();
		FString AssetName = AD.AssetName.ToString();
		UClass* AssetClass = AD.GetClass();
		if (!AssetClass) continue;
		
		UFilterNode* MatchingFilter = nullptr;
		for (UFilterNode* FilN : FilterNodes)
		{
			if (FilN->AssetType && AssetClass->IsChildOf(FilN->AssetType))
			{
				MatchingFilter = FilN;
				break;
			}
		}
		if (!MatchingFilter)
		{
			AssetWithInvalidFilters.Add(AssetName);
			continue;
		}
		
		//Create destination path
		const FString* DestFolderPtr = FilterToFullPath.Find(MatchingFilter);
		if (!DestFolderPtr)
		{
			continue;
		}
		
		FString DestFolder = *DestFolderPtr;
		if (!DestFolder.StartsWith(TEXT("/Game")))
		{
			DestFolder = FPaths::Combine(TEXT("/Game"), DestFolder);
		}
		//Add prefix (if already exist continue)
		const FString& Prefix = MatchingFilter->Prefix;
		if (!Prefix.IsEmpty() && !AssetName.StartsWith(Prefix))
		{
			AssetName = Prefix + AssetName;
		}
		
		if (AD.PackagePath.ToString().Equals(DestFolder, ESearchCase::IgnoreCase))
		{
			continue;
		}

		const FString DestPackage = FString::Printf(TEXT("%s/%s"), *DestFolder, *AssetName);
		if (UEditorAssetLibrary::RenameAsset(SourcePackage, DestPackage))
		{
			++MovedCount;
		}
		else
		{
			// If asset has same name
			if (FPackageName::DoesPackageExist(DestPackage))
			{
				//NewName
				if (TOptional<FString> NewName = PromptForNewAssetName(AD))
				{
					FString NewDestPackage = FString::Printf(TEXT("%s/%s"), *DestFolder, *(*NewName));
					if (UEditorAssetLibrary::RenameAsset(SourcePackage, NewDestPackage))
					{
						++MovedCount;
					}
					else
					{
						UE_LOG(LogContentOrganizerLIBRARY, Warning,
							   TEXT("Second attempt to rename \"%s\" to \"%s\" failed."),
							   *SourcePackage, *NewDestPackage);
					}
				}
				else
				{
					UE_LOG(LogContentOrganizerLIBRARY, Warning,
						   TEXT("User cancelled renaming of \"%s\"; skipping."),
						   *SourcePackage);
				}
			}
			else
			{
				UE_LOG(LogContentOrganizerLIBRARY, Warning,
					   TEXT("      Failed to move \"%s\" to \"%s\" for unknown reason."),
					   *SourcePackage, *DestPackage);
			}
		}

		++MovedCount;
	}

	//fix redirector
	FixUpRedirectorsFromBasePath(BasePath);

	//Debug, report to asset without filter node in CurrentPath
	if (AssetWithInvalidFilters.Num() > 0)
	{
		UE_LOG(LogContentOrganizerLIBRARY, Warning, TEXT("  Assets without filters: %s"),
		       *FString::Join(AssetWithInvalidFilters, TEXT(", ")));
	}
	return MovedCount;
}

FString UContentOrganizerLibrary::BuildFullFolderPath(UFolderNode* Leaf, TMap<UFolderNode*, FString>* Cache)
{
	if (!Leaf) return TEXT("/Game");

	// if path is cached use
	if (Cache)
	{
		if (const FString* CachedPath = Cache->Find(Leaf))
		{
			return *CachedPath;
		}
	}

	FString Path = Leaf->TargetFolderName;
	UFolderNode* Current = Leaf;

	while (UEdGraphPin* InPin = Current->FindPin(TEXT("In")))
	{
		bool bFoundParent = false;

		for (UEdGraphPin* Linked : InPin->LinkedTo)
		{
			if (UFolderNode* Parent = Cast<UFolderNode>(Linked->GetOwningNode()))
			{
				Path = FPaths::Combine(Parent->TargetFolderName, Path);
				Current = Parent;
				bFoundParent = true;
				break;
			}
		}

		if (!bFoundParent)
			break;
	}
	
	if (!Path.StartsWith(TEXT("/Game")))
	{
		Path = FPaths::Combine(TEXT("/Game"), Path);
	}

	//Save path in cache for other filer
	if (Cache)
	{
		Cache->Add(Leaf, Path);
	}

	return Path;
}

TOptional<FString> UContentOrganizerLibrary::PromptForNewAssetName(const FAssetData& AssetData)
{
	 TSharedPtr<SEditableTextBox> NameBox;
    
    const FText Title = FText::Format(
        NSLOCTEXT("ContentOrganizer", "RenameConflictTitle", "Asset in conflict: {0}"),
        FText::FromName(AssetData.AssetName)
    );

    TSharedRef<SWindow> Window = SNew(SWindow)
        .Title(Title)
        .ClientSize(FVector2D(450, 140))
        .SupportsMaximize(false)
        .SupportsMinimize(false)
        .IsPopupWindow(true)
        .HasCloseButton(false);

    
    const FText BodyText = FText::Format(
        NSLOCTEXT("ContentOrganizer", "RenameConflictMessage",
                  "L’asset “{0}” ({1}) has the same name of another asset.\nClasse: {2}\nInsert new name:"),
        FText::FromName(AssetData.AssetName),
        FText::FromString(AssetData.PackageName.ToString()),
        FText::FromName(AssetData.AssetClassPath.GetAssetName())
    );

    Window->SetContent(
        SNew(SVerticalBox)
        + SVerticalBox::Slot().AutoHeight().Padding(8)
        [
            SNew(STextBlock)
            .Text(BodyText)
            .AutoWrapText(true)
        ]
        + SVerticalBox::Slot().AutoHeight().Padding(8)
        [
            SAssignNew(NameBox, SEditableTextBox)
            .Text(FText::FromName(AssetData.AssetName))
        ]
        + SVerticalBox::Slot().AutoHeight().HAlign(HAlign_Right).Padding(8)
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot().AutoWidth().Padding(4)
            [
                SNew(SButton)
                .Text(NSLOCTEXT("ContentOrganizer", "CancelButton", "Cancel"))
                .OnClicked_Lambda([Window]() {
                    Window->RequestDestroyWindow();
                    return FReply::Handled();
                })
            ]
            + SHorizontalBox::Slot().AutoWidth().Padding(4)
            [
                SNew(SButton)
                .Text(NSLOCTEXT("ContentOrganizer", "OKButton", "OK"))
                .OnClicked_Lambda([Window]() {
                    Window->RequestDestroyWindow();
                    return FReply::Handled();
                })
            ]
        ]
    );

    FSlateApplication::Get().AddModalWindow(Window, nullptr);

    if (NameBox.IsValid())
    {
        FString NewName = NameBox->GetText().ToString().TrimStartAndEnd();
        if (!NewName.IsEmpty() && NewName != AssetData.AssetName.ToString())
        {
            return TOptional<FString>(NewName);
        }
    }
    return TOptional<FString>();
}

//@TODO: Reorganize methods from ApplyGraphRules and fix method
void UContentOrganizerLibrary::ApplySingleAsset(UContentOrganizerGraph* Graph, const FAssetData& AD)
{
    if (!Graph)
    {
        UE_LOG(LogContentOrganizerLIBRARY, Warning, TEXT("ApplySingleAsset: Graph is null"));
        return;
    }
	
    TArray<UFolderNode*> FolderNodes;
    TArray<UFilterNode*> FilterNodes;
    for (UEdGraphNode* Node : Graph->Nodes)
    {
        if (auto FN = Cast<UFolderNode>(Node))       FolderNodes.Add(FN);
        else if (auto FilN = Cast<UFilterNode>(Node)) FilterNodes.Add(FilN);
    }
	
    TMap<UFilterNode*, UFolderNode*> FilterToFolder;
    for (UFilterNode* FilN : FilterNodes)
    {
        if (UEdGraphPin* InPin = FilN->FindPin(TEXT("In")))
        {
            for (UEdGraphPin* Linked : InPin->LinkedTo)
            {
                if (auto FN = Cast<UFolderNode>(Linked->GetOwningNode()))
                {
                    FilterToFolder.Add(FilN, FN);
                    break;
                }
            }
        }
    }

    UClass* AssetClass = AD.GetClass();
    if (!AssetClass) return;

    UFilterNode* MatchingFilter = nullptr;
    for (UFilterNode* FilN : FilterNodes)
    {
        if (FilN->AssetType && AssetClass->IsChildOf(FilN->AssetType))
        {
            MatchingFilter = FilN;
            break;
        }
    }
    if (!MatchingFilter)
    {
        UE_LOG(LogContentOrganizerLIBRARY, Warning, TEXT("ApplySingleAsset: No filter for %s"), *AD.AssetName.ToString());
        return;
    }



    UFolderNode* DestFolderNode = FilterToFolder.FindRef(MatchingFilter);
    if (!DestFolderNode)
    {
        UE_LOG(LogContentOrganizerLIBRARY, Warning, TEXT("ApplySingleAsset: Filter without IN node"));
        return;
    }

    FString DestFolder = BuildFullFolderPath(DestFolderNode, nullptr);
    if (!DestFolder.StartsWith(TEXT("/Game")))
    {
        DestFolder = FPaths::Combine(TEXT("/Game"), DestFolder);
    }

    if (AD.PackagePath.ToString().Equals(DestFolder, ESearchCase::IgnoreCase))
    {
        UE_LOG(LogContentOrganizerLIBRARY, Display, TEXT("ApplySingleAsset: %s già in %s"),
               *AD.AssetName.ToString(), *DestFolder);
        return;
    }

    const FString SourcePackage = AD.PackageName.ToString();
    const FString AssetName     = AD.AssetName.ToString();
    const FString DestPackage   = FString::Printf(TEXT("%s/%s"), *DestFolder, *AssetName);

    UE_LOG(LogContentOrganizerLIBRARY, Display, TEXT("ApplySingleAsset: Moving %s → %s"), *SourcePackage, *DestPackage);
    if (!UEditorAssetLibrary::RenameAsset(SourcePackage, DestPackage))
    {
        UE_LOG(LogContentOrganizerLIBRARY, Warning, TEXT("ApplySingleAsset: Faild move in %s"), *AssetName);
    }
}