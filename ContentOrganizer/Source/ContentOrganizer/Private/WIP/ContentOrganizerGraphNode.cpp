#include "ContentOrganizerGraphNode.h"
#include "SGraphPin.h"
#include "Widgets/SBoxPanel.h"  
#include "EdGraph/EdGraphPin.h"

void SContentOrganizerGraphNode::Construct(const FArguments& InArgs, UEdGraphNode* InNode)
{
	GraphNode = InNode;
	this->UpdateGraphNode();
}
void SContentOrganizerGraphNode::UpdateGraphNode()
{
	//Always clear the node
	InputPins.Empty();
	OutputPins.Empty();
	LeftNodeBox.Reset();
	RightNodeBox.Reset();

	//SGraphNode create pin widgets for every UEdGraphPin defined
	CreatePinWidgets();

	//buildvertical layout and insert the pin widgets
	this->ContentScale.Bind(this, &SGraphNode::GetContentScale);

	this->GetOrAddSlot(ENodeZone::Center)
	[
	  SNew(SVerticalBox)

	  // Top: all input pins
	  + SVerticalBox::Slot().AutoHeight()
	  [
		BuildTopPinArea()
	  ]

	  // Middle: node body (title, icon, etc)
	  + SVerticalBox::Slot().AutoHeight().Padding(4)
	  [
		BuildBodyArea()
	  ]

	  // Bottom: all output pins
	  + SVerticalBox::Slot().AutoHeight()
	  [
		BuildBottomPinArea()
	  ]
	];
}
TSharedRef<SWidget> SContentOrganizerGraphNode::BuildTopPinArea()
{
	TSharedRef<SVerticalBox> VBox = SNew(SVerticalBox);

	for (const TSharedRef<SGraphPin>& PinWidgetRef : InputPins)
	{
		VBox->AddSlot()
			.AutoHeight()
		[
			StaticCastSharedRef<SWidget>(PinWidgetRef)
		];
	}

	return VBox;
}

TSharedRef<SWidget> SContentOrganizerGraphNode::BuildBottomPinArea()
{
	TSharedRef<SVerticalBox> VBox = SNew(SVerticalBox);

	for (const TSharedRef<SGraphPin>& PinWidgetRef : OutputPins)
	{
		VBox->AddSlot()
			.AutoHeight()
		[
			StaticCastSharedRef<SWidget>(PinWidgetRef)
		];
	}

	return VBox;
}

TSharedRef<SWidget> SContentOrganizerGraphNode::BuildBodyArea()
{
	// Bind to the UEdGraphNode's Title
	return SNew(STextBlock)
		.Text_Lambda([this]()
		{
			return GraphNode->GetNodeTitle(ENodeTitleType::FullTitle);
		});
}
