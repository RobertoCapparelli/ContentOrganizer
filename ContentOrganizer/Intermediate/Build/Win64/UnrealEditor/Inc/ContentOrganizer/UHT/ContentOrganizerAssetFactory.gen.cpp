// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContentOrganizer/Public/ContentOrganizerAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentOrganizerAssetFactory() {}

// Begin Cross Module References
CONTENTORGANIZER_API UClass* Z_Construct_UClass_UContentOrganizerAssetFactory();
CONTENTORGANIZER_API UClass* Z_Construct_UClass_UContentOrganizerAssetFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_ContentOrganizer();
// End Cross Module References

// Begin Class UContentOrganizerAssetFactory
void UContentOrganizerAssetFactory::StaticRegisterNativesUContentOrganizerAssetFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentOrganizerAssetFactory);
UClass* Z_Construct_UClass_UContentOrganizerAssetFactory_NoRegister()
{
	return UContentOrganizerAssetFactory::StaticClass();
}
struct Z_Construct_UClass_UContentOrganizerAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ContentOrganizerAssetFactory.h" },
		{ "ModuleRelativePath", "Public/ContentOrganizerAssetFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentOrganizerAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UContentOrganizerAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_ContentOrganizer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContentOrganizerAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentOrganizerAssetFactory_Statics::ClassParams = {
	&UContentOrganizerAssetFactory::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UContentOrganizerAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UContentOrganizerAssetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UContentOrganizerAssetFactory()
{
	if (!Z_Registration_Info_UClass_UContentOrganizerAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentOrganizerAssetFactory.OuterSingleton, Z_Construct_UClass_UContentOrganizerAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UContentOrganizerAssetFactory.OuterSingleton;
}
template<> CONTENTORGANIZER_API UClass* StaticClass<UContentOrganizerAssetFactory>()
{
	return UContentOrganizerAssetFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UContentOrganizerAssetFactory);
UContentOrganizerAssetFactory::~UContentOrganizerAssetFactory() {}
// End Class UContentOrganizerAssetFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerAssetFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UContentOrganizerAssetFactory, UContentOrganizerAssetFactory::StaticClass, TEXT("UContentOrganizerAssetFactory"), &Z_Registration_Info_UClass_UContentOrganizerAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentOrganizerAssetFactory), 891318802U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerAssetFactory_h_1281350865(TEXT("/Script/ContentOrganizer"),
	Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerAssetFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
