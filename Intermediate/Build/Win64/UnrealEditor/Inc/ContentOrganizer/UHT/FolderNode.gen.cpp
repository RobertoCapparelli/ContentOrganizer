// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContentOrganizer/Public/FolderNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFolderNode() {}

// Begin Cross Module References
CONTENTORGANIZER_API UClass* Z_Construct_UClass_UContentOrganizerNode();
CONTENTORGANIZER_API UClass* Z_Construct_UClass_UFolderNode();
CONTENTORGANIZER_API UClass* Z_Construct_UClass_UFolderNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ContentOrganizer();
// End Cross Module References

// Begin Class UFolderNode
void UFolderNode::StaticRegisterNativesUFolderNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFolderNode);
UClass* Z_Construct_UClass_UFolderNode_NoRegister()
{
	return UFolderNode::StaticClass();
}
struct Z_Construct_UClass_UFolderNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FolderNode.h" },
		{ "ModuleRelativePath", "Public/FolderNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetFolderName_MetaData[] = {
		{ "Category", "Folder" },
		{ "DisplayName", "Output Folder" },
		{ "ModuleRelativePath", "Public/FolderNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPath_MetaData[] = {
		{ "Category", "Folder" },
		{ "ModuleRelativePath", "Public/FolderNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetFolderName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFolderNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFolderNode_Statics::NewProp_TargetFolderName = { "TargetFolderName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFolderNode, TargetFolderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetFolderName_MetaData), NewProp_TargetFolderName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFolderNode_Statics::NewProp_TargetPath = { "TargetPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFolderNode, TargetPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPath_MetaData), NewProp_TargetPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFolderNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFolderNode_Statics::NewProp_TargetFolderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFolderNode_Statics::NewProp_TargetPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFolderNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFolderNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UContentOrganizerNode,
	(UObject* (*)())Z_Construct_UPackage__Script_ContentOrganizer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFolderNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFolderNode_Statics::ClassParams = {
	&UFolderNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFolderNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFolderNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFolderNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UFolderNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFolderNode()
{
	if (!Z_Registration_Info_UClass_UFolderNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFolderNode.OuterSingleton, Z_Construct_UClass_UFolderNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFolderNode.OuterSingleton;
}
template<> CONTENTORGANIZER_API UClass* StaticClass<UFolderNode>()
{
	return UFolderNode::StaticClass();
}
UFolderNode::UFolderNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFolderNode);
UFolderNode::~UFolderNode() {}
// End Class UFolderNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_FolderNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFolderNode, UFolderNode::StaticClass, TEXT("UFolderNode"), &Z_Registration_Info_UClass_UFolderNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFolderNode), 2946219475U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_FolderNode_h_349310434(TEXT("/Script/ContentOrganizer"),
	Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_FolderNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_FolderNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
