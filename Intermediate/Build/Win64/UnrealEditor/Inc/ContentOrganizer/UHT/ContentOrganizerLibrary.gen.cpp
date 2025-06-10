// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContentOrganizer/Public/ContentOrganizerLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentOrganizerLibrary() {}

// Begin Cross Module References
CONTENTORGANIZER_API UClass* Z_Construct_UClass_UContentOrganizerGraph_NoRegister();
CONTENTORGANIZER_API UClass* Z_Construct_UClass_UContentOrganizerLibrary();
CONTENTORGANIZER_API UClass* Z_Construct_UClass_UContentOrganizerLibrary_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_ContentOrganizer();
// End Cross Module References

// Begin Class UContentOrganizerLibrary Function ApplyGraphRules
struct Z_Construct_UFunction_UContentOrganizerLibrary_ApplyGraphRules_Statics
{
	struct ContentOrganizerLibrary_eventApplyGraphRules_Parms
	{
		UContentOrganizerGraph* Graph;
		FString BasePath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Content Organizer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//MAIN FUNCTION\n" },
#endif
		{ "ModuleRelativePath", "Public/ContentOrganizerLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MAIN FUNCTION" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BasePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContentOrganizerLibrary_ApplyGraphRules_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ContentOrganizerLibrary_eventApplyGraphRules_Parms, Graph), Z_Construct_UClass_UContentOrganizerGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UContentOrganizerLibrary_ApplyGraphRules_Statics::NewProp_BasePath = { "BasePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ContentOrganizerLibrary_eventApplyGraphRules_Parms, BasePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePath_MetaData), NewProp_BasePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentOrganizerLibrary_ApplyGraphRules_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentOrganizerLibrary_ApplyGraphRules_Statics::NewProp_Graph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentOrganizerLibrary_ApplyGraphRules_Statics::NewProp_BasePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UContentOrganizerLibrary_ApplyGraphRules_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentOrganizerLibrary_ApplyGraphRules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentOrganizerLibrary, nullptr, "ApplyGraphRules", nullptr, nullptr, Z_Construct_UFunction_UContentOrganizerLibrary_ApplyGraphRules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentOrganizerLibrary_ApplyGraphRules_Statics::PropPointers), sizeof(Z_Construct_UFunction_UContentOrganizerLibrary_ApplyGraphRules_Statics::ContentOrganizerLibrary_eventApplyGraphRules_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UContentOrganizerLibrary_ApplyGraphRules_Statics::Function_MetaDataParams), Z_Construct_UFunction_UContentOrganizerLibrary_ApplyGraphRules_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UContentOrganizerLibrary_ApplyGraphRules_Statics::ContentOrganizerLibrary_eventApplyGraphRules_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UContentOrganizerLibrary_ApplyGraphRules()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContentOrganizerLibrary_ApplyGraphRules_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UContentOrganizerLibrary::execApplyGraphRules)
{
	P_GET_OBJECT(UContentOrganizerGraph,Z_Param_Graph);
	P_GET_PROPERTY(FStrProperty,Z_Param_BasePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	UContentOrganizerLibrary::ApplyGraphRules(Z_Param_Graph,Z_Param_BasePath);
	P_NATIVE_END;
}
// End Class UContentOrganizerLibrary Function ApplyGraphRules

// Begin Class UContentOrganizerLibrary Function ApplySingleAsset
struct Z_Construct_UFunction_UContentOrganizerLibrary_ApplySingleAsset_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct ContentOrganizerLibrary_eventApplySingleAsset_Parms
	{
		UContentOrganizerGraph* Graph;
		FAssetData AssetData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Content Organizer" },
		{ "ModuleRelativePath", "Public/ContentOrganizerLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContentOrganizerLibrary_ApplySingleAsset_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ContentOrganizerLibrary_eventApplySingleAsset_Parms, Graph), Z_Construct_UClass_UContentOrganizerGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContentOrganizerLibrary_ApplySingleAsset_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ContentOrganizerLibrary_eventApplySingleAsset_Parms, AssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetData_MetaData), NewProp_AssetData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentOrganizerLibrary_ApplySingleAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentOrganizerLibrary_ApplySingleAsset_Statics::NewProp_Graph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentOrganizerLibrary_ApplySingleAsset_Statics::NewProp_AssetData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UContentOrganizerLibrary_ApplySingleAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentOrganizerLibrary_ApplySingleAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentOrganizerLibrary, nullptr, "ApplySingleAsset", nullptr, nullptr, Z_Construct_UFunction_UContentOrganizerLibrary_ApplySingleAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentOrganizerLibrary_ApplySingleAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UContentOrganizerLibrary_ApplySingleAsset_Statics::ContentOrganizerLibrary_eventApplySingleAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UContentOrganizerLibrary_ApplySingleAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UContentOrganizerLibrary_ApplySingleAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UContentOrganizerLibrary_ApplySingleAsset_Statics::ContentOrganizerLibrary_eventApplySingleAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UContentOrganizerLibrary_ApplySingleAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContentOrganizerLibrary_ApplySingleAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UContentOrganizerLibrary::execApplySingleAsset)
{
	P_GET_OBJECT(UContentOrganizerGraph,Z_Param_Graph);
	P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetData);
	P_FINISH;
	P_NATIVE_BEGIN;
	UContentOrganizerLibrary::ApplySingleAsset(Z_Param_Graph,Z_Param_Out_AssetData);
	P_NATIVE_END;
}
// End Class UContentOrganizerLibrary Function ApplySingleAsset

// Begin Class UContentOrganizerLibrary
void UContentOrganizerLibrary::StaticRegisterNativesUContentOrganizerLibrary()
{
	UClass* Class = UContentOrganizerLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyGraphRules", &UContentOrganizerLibrary::execApplyGraphRules },
		{ "ApplySingleAsset", &UContentOrganizerLibrary::execApplySingleAsset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentOrganizerLibrary);
UClass* Z_Construct_UClass_UContentOrganizerLibrary_NoRegister()
{
	return UContentOrganizerLibrary::StaticClass();
}
struct Z_Construct_UClass_UContentOrganizerLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "IncludePath", "ContentOrganizerLibrary.h" },
		{ "ModuleRelativePath", "Public/ContentOrganizerLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UContentOrganizerLibrary_ApplyGraphRules, "ApplyGraphRules" }, // 1668081415
		{ &Z_Construct_UFunction_UContentOrganizerLibrary_ApplySingleAsset, "ApplySingleAsset" }, // 493044924
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentOrganizerLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UContentOrganizerLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ContentOrganizer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContentOrganizerLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentOrganizerLibrary_Statics::ClassParams = {
	&UContentOrganizerLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UContentOrganizerLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UContentOrganizerLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UContentOrganizerLibrary()
{
	if (!Z_Registration_Info_UClass_UContentOrganizerLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentOrganizerLibrary.OuterSingleton, Z_Construct_UClass_UContentOrganizerLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UContentOrganizerLibrary.OuterSingleton;
}
template<> CONTENTORGANIZER_API UClass* StaticClass<UContentOrganizerLibrary>()
{
	return UContentOrganizerLibrary::StaticClass();
}
UContentOrganizerLibrary::UContentOrganizerLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UContentOrganizerLibrary);
UContentOrganizerLibrary::~UContentOrganizerLibrary() {}
// End Class UContentOrganizerLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UContentOrganizerLibrary, UContentOrganizerLibrary::StaticClass, TEXT("UContentOrganizerLibrary"), &Z_Registration_Info_UClass_UContentOrganizerLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentOrganizerLibrary), 22477703U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerLibrary_h_1685907453(TEXT("/Script/ContentOrganizer"),
	Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
