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
	
	UPROPERTY(EditAnywhere, Category="Filter", meta=(DisplayName="Asset Type"))
	TSubclassOf<UObject> AssetType;

#if WITH_EDITOR
	virtual FLinearColor GetNodeTitleColor() const override;
	//virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	UPROPERTY(EditAnywhere, Category = "Filter")
	FString Prefix; //@TODO: Add the prefix

};
