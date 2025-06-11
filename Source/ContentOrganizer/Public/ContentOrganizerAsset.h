#pragma once

#include "CoreMinimal.h"
#include "ContentOrganizerGraph.h"
#include "ContentOrganizerAsset.generated.h"

UCLASS()
/* The obj for the asset browser
 *
 */
class UContentOrganizerAsset : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY()
	UContentOrganizerGraph* Graph;
	//void PostInitProperties() override;
	UPROPERTY(EditAnywhere, Category="Graph", meta=(DisplayName="Description"))
	FString Description;

	UPROPERTY(EditAnywhere, Category="Graph", meta=(DisplayName="Version"))
	FString Version;

	UPROPERTY(EditAnywhere, Category="Graph", meta=(DisplayName="Author"))
	FString Author;

	UPROPERTY(EditAnywhere, Category="Graph", meta=(DisplayName="Allowed Asset Types"))
	TArray<TSubclassOf<UObject>> AllowedAssetTypes;

};
