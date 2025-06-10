#include "ContentOrganizerSubsystem.h"

#include "ContentOrganizerLibrary.h"
#include "AssetRegistry/AssetRegistryModule.h"

DECLARE_LOG_CATEGORY_EXTERN(LogContentOrganizerSUBSYSTEM, Log, All);
DEFINE_LOG_CATEGORY(LogContentOrganizerSUBSYSTEM);

void UContentOrganizerSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	
	//@TODO: Fix problem with addObj in path
	//FAssetRegistryModule& ARM = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	//OnAssetAddedHandle = ARM.Get().OnAssetAdded().AddUObject(this, &UContentOrganizerSubsystem::OnAssetAdded); 
}

void UContentOrganizerSubsystem::Deinitialize()
{
	/*
	if (FModuleManager::Get().IsModuleLoaded("AssetRegistry"))
	{
		FAssetRegistryModule& ARM = FModuleManager::GetModuleChecked<FAssetRegistryModule>("AssetRegistry");
		ARM.Get().OnAssetAdded().Remove(OnAssetAddedHandle);
	}  */
	Super::Deinitialize();
}

void UContentOrganizerSubsystem::SetActiveGraph(UContentOrganizerGraph* InGraph)
{
	ActiveGraph = InGraph;
}

void UContentOrganizerSubsystem::OnAssetAdded(const FAssetData& NewAsset) const
{
	if (!ActiveGraph.IsValid())
	{
		return;
	}
	const FString PackagePath = NewAsset.PackagePath.ToString();
	if (!PackagePath.StartsWith(ScanBasePath, ESearchCase::IgnoreCase))
	{
		UE_LOG(LogContentOrganizerSUBSYSTEM, Warning, TEXT("Asset not in ScanBasePath, ScanBasePath = %s"), *ScanBasePath);
		return;
	}
	UE_LOG(LogContentOrganizerSUBSYSTEM, Warning, TEXT("Asset in ScanBasePath"));
	if (!ActiveGraph.IsValid() || !NewAsset.IsValid())
	{
		return;
	}
	UE_LOG(LogContentOrganizerSUBSYSTEM, Log, TEXT("About to ApplySingleAsset on %s"), *NewAsset.PackagePath.ToString());
	UContentOrganizerLibrary::ApplySingleAsset(ActiveGraph.Get(), NewAsset);
	
}
void UContentOrganizerSubsystem::ClearActiveGraph()
{
	ActiveGraph = nullptr;
}