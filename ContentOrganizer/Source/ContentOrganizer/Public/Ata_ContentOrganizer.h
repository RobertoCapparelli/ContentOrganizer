#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"
#include "ContentOrganizerAsset.h"
/*This class define the behavior of custom asset in the content browser (FAssetTypeActions_Base)
 *All the asset the content derive from FAssetTypeActionBase
 *
 *
 */

class FAta_ContentOrganizer : public FAssetTypeActions_Base
{
public:
	FAta_ContentOrganizer(EAssetTypeCategories::Type InCategory)
		: MyCategory(InCategory) {}
	
	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetName", "Content Organizer"); }
	virtual FColor GetTypeColor() const override { return FColor::Emerald; }
	virtual UClass* GetSupportedClass() const override { return UContentOrganizerAsset::StaticClass(); }
	virtual uint32 GetCategories() override { return MyCategory; }

	virtual void OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<IToolkitHost> EditWithinLevelEditor) override;
private:
	EAssetTypeCategories::Type MyCategory;
};
