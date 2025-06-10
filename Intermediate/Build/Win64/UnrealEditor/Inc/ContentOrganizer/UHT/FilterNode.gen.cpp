// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContentOrganizer/Public/FilterNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFilterNode() {}

// Begin Cross Module References
CONTENTORGANIZER_API UClass* Z_Construct_UClass_UContentOrganizerNode();
CONTENTORGANIZER_API UClass* Z_Construct_UClass_UFilterNode();
CONTENTORGANIZER_API UClass* Z_Construct_UClass_UFilterNode_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_ContentOrganizer();
// End Cross Module References

// Begin Class UFilterNode
void UFilterNode::StaticRegisterNativesUFilterNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFilterNode);
UClass* Z_Construct_UClass_UFilterNode_NoRegister()
{
	return UFilterNode::StaticClass();
}
struct Z_Construct_UClass_UFilterNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FilterNode.h" },
		{ "ModuleRelativePath", "Public/FilterNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetClassFilter_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/FilterNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NamePattern_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/FilterNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AssetClassFilter;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NamePattern;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFilterNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFilterNode_Statics::NewProp_AssetClassFilter = { "AssetClassFilter", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFilterNode, AssetClassFilter), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetClassFilter_MetaData), NewProp_AssetClassFilter_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFilterNode_Statics::NewProp_NamePattern = { "NamePattern", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFilterNode, NamePattern), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NamePattern_MetaData), NewProp_NamePattern_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFilterNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFilterNode_Statics::NewProp_AssetClassFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFilterNode_Statics::NewProp_NamePattern,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFilterNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFilterNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UContentOrganizerNode,
	(UObject* (*)())Z_Construct_UPackage__Script_ContentOrganizer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFilterNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFilterNode_Statics::ClassParams = {
	&UFilterNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFilterNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFilterNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFilterNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UFilterNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFilterNode()
{
	if (!Z_Registration_Info_UClass_UFilterNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFilterNode.OuterSingleton, Z_Construct_UClass_UFilterNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFilterNode.OuterSingleton;
}
template<> CONTENTORGANIZER_API UClass* StaticClass<UFilterNode>()
{
	return UFilterNode::StaticClass();
}
UFilterNode::UFilterNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFilterNode);
UFilterNode::~UFilterNode() {}
// End Class UFilterNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_FilterNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFilterNode, UFilterNode::StaticClass, TEXT("UFilterNode"), &Z_Registration_Info_UClass_UFilterNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFilterNode), 1764133961U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_FilterNode_h_989055626(TEXT("/Script/ContentOrganizer"),
	Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_FilterNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_FilterNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
