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
	return FText::FromString("Filter");
}
#if WITH_EDITOR
FLinearColor UFilterNode::GetNodeTitleColor() const
{
	//Dark blue
	return FLinearColor(0.1f, 0.1f, 0.8f);
}

void UFilterNode::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	if (PropertyChangedEvent.GetPropertyName() != GET_MEMBER_NAME_CHECKED(UFilterNode, AssetType))
	{
		Super::PostEditChangeProperty(PropertyChangedEvent);
	}
	if (UEdGraph* Graph = GetGraph())
	{
		Graph->NotifyGraphChanged();
			
	}
}

#endif
#undef LOCTEXT_NAMESPACE
