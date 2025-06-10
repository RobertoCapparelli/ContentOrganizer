#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraphNode.h"
#include "ContentOrganizerNode.generated.h"

/* Base class for each node, each new node we want to create has inherited from that class
 * There we create pin (even in the child)
 * can have custom param 
 * 
 */
UCLASS()
class CONTENTORGANIZER_API UContentOrganizerNode : public UEdGraphNode
{
	GENERATED_BODY()
public:
	virtual void AllocateDefaultPins() override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	
};
