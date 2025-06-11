#include "ContentOrganizerSchema.h"
#include "ContentOrganizerGraph.h"
#include "FolderNode.h"
#include "FilterNode.h"
#include "GraphEditorActions.h"
#include "EdGraph/EdGraphPin.h"
#include "EdGraph/EdGraphSchema.h"
#include "Framework/Commands/GenericCommands.h"

#define LOCTEXT_NAMESPACE "ContentOrganizerSchema"

TSharedPtr<FUICommandList> UContentOrganizerSchema::StaticCommandList = nullptr;

void UContentOrganizerSchema::GetGraphContextActions(FGraphContextMenuBuilder& ContextMenuBuilder) const
{
	//Only on graph type UContentOrganizerGraph
	if (!ContextMenuBuilder.CurrentGraph ||
		ContextMenuBuilder.CurrentGraph->GetClass() != UContentOrganizerGraph::StaticClass())
	{
		return;
	}

	// Helper for create node type (filter, folder)
	auto AddNodeAction = [&](UContentOrganizerNode* NodeTemplate,
	                         const FText& Category,
	                         const FText& MenuDesc,
	                         const FText& Tooltip)
	{
		TSharedPtr<FEdGraphSchemaAction_NewNode> Action =
			MakeShareable(new FEdGraphSchemaAction_NewNode(
				Category,
				MenuDesc,
				Tooltip,
				0
			));
		//Node Type
		Action->NodeTemplate = NodeTemplate;
		ContextMenuBuilder.AddAction(Action);
	};

	// Folder Node
	AddNodeAction(
		NewObject<UFolderNode>(ContextMenuBuilder.OwnerOfTemporaries),
		LOCTEXT("FolderCategory", "Folder"),
		LOCTEXT("AddFolderNode", "Add Folder Node"),
		LOCTEXT("AddFolderNodeTooltip", "Add Folder Node"));

	// Filter Node
	AddNodeAction(
		NewObject<UFilterNode>(ContextMenuBuilder.OwnerOfTemporaries),
		LOCTEXT("FilterCategory", "Filter"),
		LOCTEXT("AddFilterNode", "Add Filter Node"),
		LOCTEXT("AddFilterNodeTooltip", "Add Filter Node"));
}

const FPinConnectionResponse UContentOrganizerSchema::CanCreateConnection(
	const UEdGraphPin* A, const UEdGraphPin* B) const
{
	// Not connection with same direction
	if (A->Direction == B->Direction)
	{
		return FPinConnectionResponse(
			CONNECT_RESPONSE_DISALLOW,
			LOCTEXT("SameDirection", "Pin have same direction"));
	}

	//Same category (not action, but CratePin() ) 
	if (A->PinType.PinCategory != B->PinType.PinCategory)
	{
		return FPinConnectionResponse(
			CONNECT_RESPONSE_DISALLOW,
			LOCTEXT("DifferentCategory", "Different category between node"));
	}

	return FPinConnectionResponse(
		CONNECT_RESPONSE_MAKE,
		LOCTEXT("ConnectOK", "Connection valid"));
}

void UContentOrganizerSchema::GetContextMenuActions(UToolMenu* Menu, UGraphNodeContextMenuContext* Context) const
{
	if (!Context || !Context->Node || !StaticCommandList.IsValid())
	{
		return;
	}

	//Selected node
	if (!Context->Pin)
	{
		FToolMenuSection& Section =
			Menu->AddSection("ContentOrganizerNodeActions",
			                 LOCTEXT("NodeActionsHeader", "Node Actions"));


		//Actions
		Section.AddMenuEntryWithCommandList(
			FGenericCommands::Get().Delete,
			StaticCommandList.ToSharedRef()
		);
		Section.AddMenuEntryWithCommandList(
			FGraphEditorCommands::Get().ReconstructNodes,
			StaticCommandList.ToSharedRef()
		);
		Section.AddMenuEntryWithCommandList(
			FGraphEditorCommands::Get().BreakNodeLinks,
			StaticCommandList.ToSharedRef()
		);
	}
	else
	{
		//Pin Menu
		FToolMenuSection& Section =
			Menu->AddSection("ContentOrganizerPinActions",
			                 LOCTEXT("PinActionsHeader", "Pin Actions"));
		Section.AddMenuEntryWithCommandList(
			FGraphEditorCommands::Get().BreakPinLinks,
			StaticCommandList.ToSharedRef()
		);
	}
}

#undef LOCTEXT_NAMESPACE
