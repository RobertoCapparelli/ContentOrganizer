// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContentOrganizer/Public/ContentOrganizerAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentOrganizerAsset() {}

// Begin Cross Module References
CONTENTORGANIZER_API UClass* Z_Construct_UClass_UContentOrganizerAsset();
CONTENTORGANIZER_API UClass* Z_Construct_UClass_UContentOrganizerAsset_NoRegister();
CONTENTORGANIZER_API UClass* Z_Construct_UClass_UContentOrganizerGraph_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_ContentOrganizer();
// End Cross Module References

// Begin Class UContentOrganizerAsset
void UContentOrganizerAsset::StaticRegisterNativesUContentOrganizerAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentOrganizerAsset);
UClass* Z_Construct_UClass_UContentOrganizerAsset_NoRegister()
{
	return UContentOrganizerAsset::StaticClass();
}
struct Z_Construct_UClass_UContentOrganizerAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ContentOrganizerAsset.h" },
		{ "ModuleRelativePath", "Public/ContentOrganizerAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContentOrganizerAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//void PostInitProperties() override;\n" },
#endif
		{ "DisplayName", "Description" },
		{ "ModuleRelativePath", "Public/ContentOrganizerAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "void PostInitProperties() override;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "Graph" },
		{ "DisplayName", "Version" },
		{ "ModuleRelativePath", "Public/ContentOrganizerAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Author_MetaData[] = {
		{ "Category", "Graph" },
		{ "DisplayName", "Author" },
		{ "ModuleRelativePath", "Public/ContentOrganizerAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedAssetTypes_MetaData[] = {
		{ "Category", "Graph" },
		{ "DisplayName", "Allowed Asset Types" },
		{ "ModuleRelativePath", "Public/ContentOrganizerAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Version;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Author;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AllowedAssetTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedAssetTypes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentOrganizerAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UContentOrganizerAsset_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UContentOrganizerAsset, Graph), Z_Construct_UClass_UContentOrganizerGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Graph_MetaData), NewProp_Graph_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UContentOrganizerAsset_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UContentOrganizerAsset, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UContentOrganizerAsset_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UContentOrganizerAsset, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UContentOrganizerAsset_Statics::NewProp_Author = { "Author", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UContentOrganizerAsset, Author), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Author_MetaData), NewProp_Author_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UContentOrganizerAsset_Statics::NewProp_AllowedAssetTypes_Inner = { "AllowedAssetTypes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UContentOrganizerAsset_Statics::NewProp_AllowedAssetTypes = { "AllowedAssetTypes", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UContentOrganizerAsset, AllowedAssetTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedAssetTypes_MetaData), NewProp_AllowedAssetTypes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContentOrganizerAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentOrganizerAsset_Statics::NewProp_Graph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentOrganizerAsset_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentOrganizerAsset_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentOrganizerAsset_Statics::NewProp_Author,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentOrganizerAsset_Statics::NewProp_AllowedAssetTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentOrganizerAsset_Statics::NewProp_AllowedAssetTypes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContentOrganizerAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UContentOrganizerAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ContentOrganizer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContentOrganizerAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentOrganizerAsset_Statics::ClassParams = {
	&UContentOrganizerAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UContentOrganizerAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UContentOrganizerAsset_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UContentOrganizerAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UContentOrganizerAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UContentOrganizerAsset()
{
	if (!Z_Registration_Info_UClass_UContentOrganizerAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentOrganizerAsset.OuterSingleton, Z_Construct_UClass_UContentOrganizerAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UContentOrganizerAsset.OuterSingleton;
}
template<> CONTENTORGANIZER_API UClass* StaticClass<UContentOrganizerAsset>()
{
	return UContentOrganizerAsset::StaticClass();
}
UContentOrganizerAsset::UContentOrganizerAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UContentOrganizerAsset);
UContentOrganizerAsset::~UContentOrganizerAsset() {}
// End Class UContentOrganizerAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UContentOrganizerAsset, UContentOrganizerAsset::StaticClass, TEXT("UContentOrganizerAsset"), &Z_Registration_Info_UClass_UContentOrganizerAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentOrganizerAsset), 3557070724U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerAsset_h_542648225(TEXT("/Script/ContentOrganizer"),
	Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
