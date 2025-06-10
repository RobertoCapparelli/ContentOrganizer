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
};
