#include "FilterNode.h"
#include "Containers/Ticker.h"

#define LOCTEXT_NAMESPACE "ContentOrganizerFilterNode"

FText UFilterNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	if (AssetType)
	{
		//If display name is define

		return FText(AssetType->GetDisplayNameText());
	}
	// fallback
	return LOCTEXT("FilterNode_DefaultTitle", "Filter");
}
#if WITH_EDITOR
FLinearColor UFilterNode::GetNodeTitleColor() const
{
	//Dark blue
	return FLinearColor(0.1f, 0.1f, 0.8f);
}
/*
void UFilterNode::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (PropertyChangedEvent.Property &&
		PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UFilterNode, AssetType))
	{
		// Schedula un singolo callback al prossimo tick
		const TWeakObjectPtr<UFilterNode> WeakThis(this);
		FTSTicker::GetCoreTicker().AddTicker(
			FTickerDelegate::CreateLambda([WeakThis](float DeltaTime) -> bool
			{
				if (UFilterNode* Self = WeakThis.Get())
				{
					if (UEdGraph* G = Self->GetGraph())
					{
						G->NotifyGraphChanged();
					}
				}
				// return false = togli questo ticker dopo il primo run
				return false;
			}),
			/* Delay: 0.0f = next tick */ /* 0.0f 
		);
	}
}
*/
#endif
#undef LOCTEXT_NAMESPACE
