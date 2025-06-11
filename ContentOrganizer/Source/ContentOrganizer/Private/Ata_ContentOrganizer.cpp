#include "Ata_ContentOrganizer.h"
#include "ContentOrganizer.h"
#include "ContentOrganizerAsset.h"
#include "ToolMenus.h"

void FAta_ContentOrganizer::OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<IToolkitHost> EditWithinLevelEditor)
{
	// Loop through selected assets
	for (UObject* Obj : InObjects)
	{
		if (UContentOrganizerAsset* Asset = Cast<UContentOrganizerAsset>(Obj))
		{
			//Call the openGraph in Module
			FContentOrganizerModule::Get().OpenGraphEditorForAsset(Asset);
		}
	}
}
