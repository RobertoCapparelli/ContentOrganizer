// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContentOrganizer/Public/ContentOrganizerNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentOrganizerNode() {}

// Begin Cross Module References
CONTENTORGANIZER_API UClass* Z_Construct_UClass_UContentOrganizerNode();
CONTENTORGANIZER_API UClass* Z_Construct_UClass_UContentOrganizerNode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
UPackage* Z_Construct_UPackage__Script_ContentOrganizer();
// End Cross Module References

// Begin Class UContentOrganizerNode
void UContentOrganizerNode::StaticRegisterNativesUContentOrganizerNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentOrganizerNode);
UClass* Z_Construct_UClass_UContentOrganizerNode_NoRegister()
{
	return UContentOrganizerNode::StaticClass();
}
struct Z_Construct_UClass_UContentOrganizerNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Base class for each node, each new node we want to create has inherited from that class\n * There we create pin (even in the child)\n * can have custom param \n * \n */" },
#endif
		{ "IncludePath", "ContentOrganizerNode.h" },
		{ "ModuleRelativePath", "Public/ContentOrganizerNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for each node, each new node we want to create has inherited from that class\n* There we create pin (even in the child)\n* can have custom param" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentOrganizerNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UContentOrganizerNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_ContentOrganizer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContentOrganizerNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentOrganizerNode_Statics::ClassParams = {
	&UContentOrganizerNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UContentOrganizerNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UContentOrganizerNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UContentOrganizerNode()
{
	if (!Z_Registration_Info_UClass_UContentOrganizerNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentOrganizerNode.OuterSingleton, Z_Construct_UClass_UContentOrganizerNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UContentOrganizerNode.OuterSingleton;
}
template<> CONTENTORGANIZER_API UClass* StaticClass<UContentOrganizerNode>()
{
	return UContentOrganizerNode::StaticClass();
}
UContentOrganizerNode::UContentOrganizerNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UContentOrganizerNode);
UContentOrganizerNode::~UContentOrganizerNode() {}
// End Class UContentOrganizerNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UContentOrganizerNode, UContentOrganizerNode::StaticClass, TEXT("UContentOrganizerNode"), &Z_Registration_Info_UClass_UContentOrganizerNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentOrganizerNode), 1431715515U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerNode_h_2545325133(TEXT("/Script/ContentOrganizer"),
	Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
