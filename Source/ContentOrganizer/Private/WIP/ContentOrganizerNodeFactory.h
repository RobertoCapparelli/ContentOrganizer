#pragma once

#include "CoreMinimal.h"
#include "ContentOrganizerGraphNode.h"
#include "ContentOrganizerNode.h"
#include "EdGraphUtilities.h"

/*
 *
 *THIS CLASS IS NOT USED, MAYBE IN THE FUTURE FOR IMPLEMENTS THE NODE IN VERTICAL LIKE THE BEHAVIOR TREE!
 *
 *
 */


struct FContentOrganizerNodeFactory final : public FGraphPanelNodeFactory
{
	virtual TSharedPtr<SGraphNode> CreateNode( UEdGraphNode* InNode ) const override
	{
		if ( InNode && InNode->IsA<UContentOrganizerNode>() )
		{
			return SNew( SContentOrganizerGraphNode, InNode );
		}
		return nullptr;
	}
};