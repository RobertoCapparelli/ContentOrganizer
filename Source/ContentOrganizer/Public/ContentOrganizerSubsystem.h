#pragma once

#include "CoreMinimal.h"
#include "ContentOrganizerGraph.h"
#include "EditorSubsystem.h"
#include "ContentOrganizerSubsystem.generated.h"


/**Subsystem, attach to Unreal Event
 * being a tool for portfolio at the moment the OnAssetAdd is not implemented
 * there's crash when a new asset is importend, the problem is because when the asset are renomenate Unreal "reimporte"
 * the asset and active again the call
 */
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnOrganizeComplete, double /*ElapsedSeconds*/, int32 /*MovedCount*/);

UCLASS()
class CONTENTORGANIZER_API UContentOrganizerSubsystem : public UEditorSubsystem
{
	GENERATED_BODY()
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	//Define the current graph
	void SetActiveGraph(UContentOrganizerGraph* InGraph);
	void ClearActiveGraph();

	UPROPERTY()
	FString ScanBasePath;
	
	UFUNCTION()
	void SetScanBasePath(const FString& NewBasePath)
	{
		ScanBasePath = NewBasePath;
	}
	UFUNCTION()
	void OrganizeContent(UContentOrganizerGraph* Graph, const FString& BasePath);
	
	FOnOrganizeComplete OnOrganizeComplete;
private:

	FDelegateHandle OnAssetAddedHandle;
	
	TWeakObjectPtr<UContentOrganizerGraph> ActiveGraph;
	
	UFUNCTION()
	void OnAssetAdded(const FAssetData& NewAsset) const;

};
