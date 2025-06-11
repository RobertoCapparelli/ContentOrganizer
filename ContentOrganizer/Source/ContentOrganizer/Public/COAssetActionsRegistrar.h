#pragma once

#include "AssetTypeCategories.h"
#include "IAssetTypeActions.h"
#include "Modules/ModuleManager.h"
/**
 * This class does not implement any business logic itself.
 * It only registers and unregisters the Content Organizer
 * asset type actions (FAta_ContentOrganizer) with the AssetTools module.
 *
 * All the actual asset behavior (name, category, editor opening, etc.)
 * is implemented inside FAta_ContentOrganizer.
 */

class FCOAssetActionsRegistrar 
{
public:
	static void Register(EAssetTypeCategories::Type AssetCategory);
	static void Unregister();

private:
	static TSharedPtr<IAssetTypeActions> AssetActions;
};