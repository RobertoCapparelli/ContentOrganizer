#pragma once

#include "CoreMinimal.h"
#include "SGraphNode.h"
/*
 *
 *THIS CLASS IS NOT USED, MAYBE IN THE FUTURE FOR IMPLEMENTS THE NODE IN VERTICAL LIKE THE BEHAVIOR TREE!
 *
 *
 */


/*This class define how OnPaint() each node in the graph (Slate class)
 *
 */
class SContentOrganizerGraphNode : public SGraphNode
{
public:
	SLATE_BEGIN_ARGS(SContentOrganizerGraphNode) {}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, UEdGraphNode* InNode);

	virtual void UpdateGraphNode() override;

private:
	TSharedRef<SWidget> BuildTopPinArea();
	TSharedRef<SWidget> BuildBodyArea();
	TSharedRef<SWidget> BuildBottomPinArea();
};
