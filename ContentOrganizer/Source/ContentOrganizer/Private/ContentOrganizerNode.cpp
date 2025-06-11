#include "ContentOrganizerNode.h"

#define LOCTEXT_NAMESPACE "ContentOrganizerNode"

void UContentOrganizerNode::AllocateDefaultPins()
{
	CreatePin(EGPD_Input,  "ContentOrganizerGraph", FName(), nullptr, TEXT("In"));
	CreatePin(EGPD_Output, "ContentOrganizerGraph", FName(), nullptr, TEXT("Out"));
}

FText UContentOrganizerNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("ContentOrganizerNodeTitle", "Content Organizer Node");
}

#undef LOCTEXT_NAMESPACE
