
#include "ContentOrganizerAsset.h"

#include "ContentOrganizerSchema.h"
#include "FolderNode.h"
/*
void UContentOrganizerAsset::PostInitProperties()
{
	Super::PostInitProperties();

	if (!HasAnyFlags(RF_ClassDefaultObject) && !Graph)
	{
		Graph = NewObject<UContentOrganizerGraph>(this, TEXT("ContentGraph"));
		Graph->Schema = UContentOrganizerSchema::StaticClass();
		UE_LOG(LogTemp, Display, TEXT("PostInitProperties Colled"));
		// Crea nodo root subito
		UFolderNode* Root = NewObject<UFolderNode>(Graph);
		Root->TargetFolderName = TEXT("/Game");
		Root->AllocateDefaultPins();
		Graph->AddNode(Root);
		
		this->Modify();
		Graph->Modify();
		Root->Modify();
	}
}
*/