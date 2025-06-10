#pragma once

#include "CoreMinimal.h"
#include "ContentOrganizerNode.h"
#include "FilterNode.generated.h"

UCLASS()
class CONTENTORGANIZER_API UFilterNode : public UContentOrganizerNode
{
	GENERATED_BODY()
public:
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;

	UPROPERTY(EditAnywhere, Category = "Filter")
	TSubclassOf<UObject> AssetClassFilter;

	UPROPERTY(EditAnywhere, Category = "Filter")
	FString NamePattern; //@TODO: Add the prefix 
};
