#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraph.h"
#include "ContentOrganizerGraph.generated.h"

/* This is the graph, in there we have node and pin,  
 * Take care of modification (undo, redo, etc)
 * Can be saved like an asset 
 */
UCLASS()
class CONTENTORGANIZER_API UContentOrganizerGraph : public UEdGraph
{
	GENERATED_BODY()
};
