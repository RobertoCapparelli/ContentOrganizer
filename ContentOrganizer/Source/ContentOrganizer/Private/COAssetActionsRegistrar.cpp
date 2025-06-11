#include "COAssetActionsRegistrar.h"
#include "AssetToolsModule.h"
#include "Modules/ModuleManager.h"
#include "Ata_ContentOrganizer.h"

TSharedPtr<IAssetTypeActions> FCOAssetActionsRegistrar::AssetActions;

void FCOAssetActionsRegistrar::Register(EAssetTypeCategories::Type AssetCategory)
{
	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	AssetActions = MakeShareable(new FAta_ContentOrganizer(AssetCategory)); 
	AssetTools.RegisterAssetTypeActions(AssetActions.ToSharedRef());
}

void FCOAssetActionsRegistrar::Unregister()
{
	if (AssetActions.IsValid())
	{
		        if  (FAssetToolsModule* AssetToolsModule = FModuleManager::Get().GetModulePtr<FAssetToolsModule>("AssetTools"))
			        {
				           AssetToolsModule->Get().UnregisterAssetTypeActions(AssetActions.ToSharedRef());
				       }

		AssetActions.Reset();
	}
}