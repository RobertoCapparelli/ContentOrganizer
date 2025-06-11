// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContentOrganizer/Public/ContentOrganizerGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentOrganizerGraph() {}

// Begin Cross Module References
CONTENTORGANIZER_API UClass* Z_Construct_UClass_UContentOrganizerGraph();
CONTENTORGANIZER_API UClass* Z_Construct_UClass_UContentOrganizerGraph_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
UPackage* Z_Construct_UPackage__Script_ContentOrganizer();
// End Cross Module References

// Begin Class UContentOrganizerGraph
void UContentOrganizerGraph::StaticRegisterNativesUContentOrganizerGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentOrganizerGraph);
UClass* Z_Construct_UClass_UContentOrganizerGraph_NoRegister()
{
	return UContentOrganizerGraph::StaticClass();
}
struct Z_Construct_UClass_UContentOrganizerGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* This is the graph, in there we have node and pin,  \n * Take care of modification (undo, redo, etc)\n * Can be saved like an asset \n */" },
#endif
		{ "IncludePath", "ContentOrganizerGraph.h" },
		{ "ModuleRelativePath", "Public/ContentOrganizerGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the graph, in there we have node and pin,\n* Take care of modification (undo, redo, etc)\n* Can be saved like an asset" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentOrganizerGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UContentOrganizerGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraph,
	(UObject* (*)())Z_Construct_UPackage__Script_ContentOrganizer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContentOrganizerGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentOrganizerGraph_Statics::ClassParams = {
	&UContentOrganizerGraph::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UContentOrganizerGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UContentOrganizerGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UContentOrganizerGraph()
{
	if (!Z_Registration_Info_UClass_UContentOrganizerGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentOrganizerGraph.OuterSingleton, Z_Construct_UClass_UContentOrganizerGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UContentOrganizerGraph.OuterSingleton;
}
template<> CONTENTORGANIZER_API UClass* StaticClass<UContentOrganizerGraph>()
{
	return UContentOrganizerGraph::StaticClass();
}
UContentOrganizerGraph::UContentOrganizerGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UContentOrganizerGraph);
UContentOrganizerGraph::~UContentOrganizerGraph() {}
// End Class UContentOrganizerGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerGraph_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UContentOrganizerGraph, UContentOrganizerGraph::StaticClass, TEXT("UContentOrganizerGraph"), &Z_Registration_Info_UClass_UContentOrganizerGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentOrganizerGraph), 186369444U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerGraph_h_474384647(TEXT("/Script/ContentOrganizer"),
	Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerGraph_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
