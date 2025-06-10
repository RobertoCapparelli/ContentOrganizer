// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContentOrganizer/Public/ContentOrganizerSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentOrganizerSchema() {}

// Begin Cross Module References
CONTENTORGANIZER_API UClass* Z_Construct_UClass_UContentOrganizerSchema();
CONTENTORGANIZER_API UClass* Z_Construct_UClass_UContentOrganizerSchema_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
UPackage* Z_Construct_UPackage__Script_ContentOrganizer();
// End Cross Module References

// Begin Class UContentOrganizerSchema
void UContentOrganizerSchema::StaticRegisterNativesUContentOrganizerSchema()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentOrganizerSchema);
UClass* Z_Construct_UClass_UContentOrganizerSchema_NoRegister()
{
	return UContentOrganizerSchema::StaticClass();
}
struct Z_Construct_UClass_UContentOrganizerSchema_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* rules of the graph, which node can be creating\n * Action (drag drop, delete, duble click)\n * \n */" },
#endif
		{ "IncludePath", "ContentOrganizerSchema.h" },
		{ "ModuleRelativePath", "Public/ContentOrganizerSchema.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "rules of the graph, which node can be creating\n* Action (drag drop, delete, duble click)" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentOrganizerSchema>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UContentOrganizerSchema_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
	(UObject* (*)())Z_Construct_UPackage__Script_ContentOrganizer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContentOrganizerSchema_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentOrganizerSchema_Statics::ClassParams = {
	&UContentOrganizerSchema::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UContentOrganizerSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UContentOrganizerSchema_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UContentOrganizerSchema()
{
	if (!Z_Registration_Info_UClass_UContentOrganizerSchema.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentOrganizerSchema.OuterSingleton, Z_Construct_UClass_UContentOrganizerSchema_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UContentOrganizerSchema.OuterSingleton;
}
template<> CONTENTORGANIZER_API UClass* StaticClass<UContentOrganizerSchema>()
{
	return UContentOrganizerSchema::StaticClass();
}
UContentOrganizerSchema::UContentOrganizerSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UContentOrganizerSchema);
UContentOrganizerSchema::~UContentOrganizerSchema() {}
// End Class UContentOrganizerSchema

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerSchema_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UContentOrganizerSchema, UContentOrganizerSchema::StaticClass, TEXT("UContentOrganizerSchema"), &Z_Registration_Info_UClass_UContentOrganizerSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentOrganizerSchema), 3969334593U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerSchema_h_4025527760(TEXT("/Script/ContentOrganizer"),
	Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerSchema_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
