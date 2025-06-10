#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "ContentOrganizerAssetFactory.generated.h"

UCLASS()
class UContentOrganizerAssetFactory : public UFactory
{
	GENERATED_BODY()

public:
	UContentOrganizerAssetFactory();

	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name,
		EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
};