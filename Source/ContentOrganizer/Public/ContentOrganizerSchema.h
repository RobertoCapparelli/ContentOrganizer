#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraphSchema.h"
#include "ContentOrganizerSchema.generated.h"

/* rules of the graph, which node can be creating
 * Action (drag drop, delete, duble click)
 * 
 */

UCLASS()
class CONTENTORGANIZER_API UContentOrganizerSchema : public UEdGraphSchema
{
	GENERATED_BODY()
public:
	virtual void GetGraphContextActions(FGraphContextMenuBuilder& ContextMenuBuilder) const override;
	virtual const FPinConnectionResponse CanCreateConnection(const UEdGraphPin* A, const UEdGraphPin* B) const override;
	virtual void GetContextMenuActions(UToolMenu* Menu, UGraphNodeContextMenuContext* Context) const override;
	static TSharedPtr<FUICommandList> StaticCommandList;
};
