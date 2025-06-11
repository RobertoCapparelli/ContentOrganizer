#include "FolderNode.h"
#include "EdGraph/EdGraphPin.h"

#define LOCTEXT_NAMESPACE "ContentOrganizerFolderNode"

void UFolderNode::AllocateDefaultPins()
{
	if(!bIsRoot)
	{
		//Input
		CreatePin(
			EGPD_Input,
			TEXT("ContentOrganizerGraph"),
			TEXT("In")
		);
	}


	//Output
	UEdGraphPin* OutPin = CreatePin(
		EGPD_Output,
		TEXT("ContentOrganizerGraph"),
		TEXT("Out")
	);

	//For multi connections
	//OutPin-> bAllowMultipleConnections = true;
}

FText UFolderNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	if (!TargetFolderName.IsEmpty())
	{
		return FText::FromString(TargetFolderName);
	}
	return LOCTEXT("FolderNode_DefaultTitle", "Folder");
}
#if WITH_EDITOR

FLinearColor UFolderNode::GetNodeTitleColor() const
{
	    //Dark green
	    return FLinearColor(0.0f, 0.6f, 0.1f);
	}

void UFolderNode::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	if(bIsRoot)
	{
		TargetFolderName = TEXT("/Game");
		return;
	}
	//Change name folder
	if (PropertyChangedEvent.Property &&
		PropertyChangedEvent.Property->GetFName() == GET_MEMBER_NAME_CHECKED(UFolderNode, TargetFolderName))
	{
		ReconstructNode();
		if (UEdGraph* Graph = GetGraph())
		{
			Graph->NotifyGraphChanged();
		}
	}
}
#endif
#undef LOCTEXT_NAMESPACE
