#pragma once

#include "CoreMinimal.h"
#include "ContentOrganizerNode.h"
#include "FolderNode.generated.h"

UCLASS()
class CONTENTORGANIZER_API UFolderNode : public UContentOrganizerNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category="Folder", meta=(DisplayName="Output Folder"))
	FString TargetFolderName;
	
	virtual void AllocateDefaultPins() override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
#if WITH_EDITOR
	virtual FLinearColor GetNodeTitleColor() const override;
	
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	UPROPERTY(EditAnywhere, Category = "Folder")
	FString TargetPath; // Es: "/Game/Meshes/"

	
	bool bIsRoot = false;
private:
};
