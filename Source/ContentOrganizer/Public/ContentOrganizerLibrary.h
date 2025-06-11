#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ContentOrganizerLibrary.generated.h"

class UFolderNode;
class UContentOrganizerGraph;

UCLASS(CallInEditor)
class CONTENTORGANIZER_API UContentOrganizerLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	static void FixUpRedirectorsFromBasePath(const FString& BasePath);

	//MAIN FUNCTION
	UFUNCTION(CallInEditor, Category="Content Organizer")
	static int32 ApplyGraphRules(UContentOrganizerGraph* Graph, const FString& BasePath);

	UFUNCTION(CallInEditor, Category="Content Organizer")
	static void ApplySingleAsset(UContentOrganizerGraph* Graph, const FAssetData& AssetData);
	
private:
	static FString BuildFullFolderPath(UFolderNode* Leaf, TMap<UFolderNode*, FString>* Cache);

	static TOptional<FString> PromptForNewAssetName(const FAssetData& AssetData);
};