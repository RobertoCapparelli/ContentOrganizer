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
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentOrganizerAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UContentOrganizerAsset_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UContentOrganizerAsset, Graph), Z_Construct_UClass_UContentOrganizerGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Graph_MetaData), NewProp_Graph_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContentOrganizerAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentOrganizerAsset_Statics::NewProp_Graph,
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
		{ Z_Construct_UClass_UContentOrganizerAsset, UContentOrganizerAsset::StaticClass, TEXT("UContentOrganizerAsset"), &Z_Registration_Info_UClass_UContentOrganizerAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentOrganizerAsset), 3742819822U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerAsset_h_593885457(TEXT("/Script/ContentOrganizer"),
	Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
