#pragma once

#include "CoreMinimal.h"
#include "AssetTypeCategories.h"
#include "ContentOrganizerAsset.h"
#include "Modules/ModuleManager.h"

class UContentOrganizerGraph;
class FContentOrganizerModule : public IModuleInterface
{
public:
	
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	
	void OpenGraphEditorForAsset(UContentOrganizerAsset* Asset);
	void CreateDefaultFolder(UContentOrganizerGraph* Graph);

	TSharedRef<SDockTab> OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs);
	void RegisterMenus();
	void InitializeSlateStyle();
	void ShutdownSlateStyle();
	static const FName ContentOrganizerTabName;

	
#if WITH_EDITOR
	TSharedRef<SDockTab> CreateGraphEditorTab(UContentOrganizerAsset* Asset);
	UContentOrganizerAsset* EditingAsset;
	static FContentOrganizerModule& Get()
	{
		return FModuleManager::LoadModuleChecked<FContentOrganizerModule>("ContentOrganizer");
	}
	TSharedPtr<FSlateStyleSet> StyleSet;

private:
	FString ScanBasePath = TEXT("/Game");
	void SetMapActionForCommandList(
		TSharedRef<SGraphEditor> GraphEditor,
		const TSharedPtr<FUICommandList>& CommandList);
	UContentOrganizerGraph* EnsureGraph(UContentOrganizerAsset* Asset);
	static EAssetTypeCategories::Type AssetCategory;
#endif


};
