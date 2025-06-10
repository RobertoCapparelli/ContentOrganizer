#include "ContentOrganizerAssetFactory.h"

#include "ContentOrganizerAsset.h"
#include "ContentOrganizerGraph.h"
#include "ContentOrganizerSchema.h"

UContentOrganizerAssetFactory::UContentOrganizerAssetFactory()
{
	SupportedClass = UContentOrganizerAsset::StaticClass();
	bCreateNew = true;
	bEditAfterNew = true;
}

UObject* UContentOrganizerAssetFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name,
	EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	UContentOrganizerAsset* NewAsset = NewObject<UContentOrganizerAsset>(InParent, Class, Name, Flags);
	NewAsset->Graph = NewObject<UContentOrganizerGraph>(NewAsset, TEXT("ContentGraph"));
	NewAsset->Graph->Schema = UContentOrganizerSchema::StaticClass();
	return NewAsset;
}