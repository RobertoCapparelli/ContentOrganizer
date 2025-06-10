#include "FilterNode.h"

#define LOCTEXT_NAMESPACE "ContentOrganizerFilterNode"

FText UFilterNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("FilterNode_Title", "Filter Node");
}

#undef LOCTEXT_NAMESPACE