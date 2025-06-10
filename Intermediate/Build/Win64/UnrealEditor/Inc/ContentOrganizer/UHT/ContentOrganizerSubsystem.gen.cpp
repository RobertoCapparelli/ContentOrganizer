// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContentOrganizer/Public/ContentOrganizerSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentOrganizerSubsystem() {}

// Begin Cross Module References
CONTENTORGANIZER_API UClass* Z_Construct_UClass_UContentOrganizerSubsystem();
CONTENTORGANIZER_API UClass* Z_Construct_UClass_UContentOrganizerSubsystem_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
UPackage* Z_Construct_UPackage__Script_ContentOrganizer();
// End Cross Module References

// Begin Class UContentOrganizerSubsystem Function OnAssetAdded
struct Z_Construct_UFunction_UContentOrganizerSubsystem_OnAssetAdded_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct ContentOrganizerSubsystem_eventOnAssetAdded_Parms
	{
		FAssetData NewAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContentOrganizerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContentOrganizerSubsystem_OnAssetAdded_Statics::NewProp_NewAsset = { "NewAsset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ContentOrganizerSubsystem_eventOnAssetAdded_Parms, NewAsset), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewAsset_MetaData), NewProp_NewAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentOrganizerSubsystem_OnAssetAdded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentOrganizerSubsystem_OnAssetAdded_Statics::NewProp_NewAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UContentOrganizerSubsystem_OnAssetAdded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentOrganizerSubsystem_OnAssetAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentOrganizerSubsystem, nullptr, "OnAssetAdded", nullptr, nullptr, Z_Construct_UFunction_UContentOrganizerSubsystem_OnAssetAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentOrganizerSubsystem_OnAssetAdded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UContentOrganizerSubsystem_OnAssetAdded_Statics::ContentOrganizerSubsystem_eventOnAssetAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UContentOrganizerSubsystem_OnAssetAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UContentOrganizerSubsystem_OnAssetAdded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UContentOrganizerSubsystem_OnAssetAdded_Statics::ContentOrganizerSubsystem_eventOnAssetAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UContentOrganizerSubsystem_OnAssetAdded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContentOrganizerSubsystem_OnAssetAdded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UContentOrganizerSubsystem::execOnAssetAdded)
{
	P_GET_STRUCT_REF(FAssetData,Z_Param_Out_NewAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAssetAdded(Z_Param_Out_NewAsset);
	P_NATIVE_END;
}
// End Class UContentOrganizerSubsystem Function OnAssetAdded

// Begin Class UContentOrganizerSubsystem Function SetScanBasePath
struct Z_Construct_UFunction_UContentOrganizerSubsystem_SetScanBasePath_Statics
{
	struct ContentOrganizerSubsystem_eventSetScanBasePath_Parms
	{
		FString NewBasePath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContentOrganizerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewBasePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewBasePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UContentOrganizerSubsystem_SetScanBasePath_Statics::NewProp_NewBasePath = { "NewBasePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ContentOrganizerSubsystem_eventSetScanBasePath_Parms, NewBasePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewBasePath_MetaData), NewProp_NewBasePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentOrganizerSubsystem_SetScanBasePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentOrganizerSubsystem_SetScanBasePath_Statics::NewProp_NewBasePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UContentOrganizerSubsystem_SetScanBasePath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentOrganizerSubsystem_SetScanBasePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentOrganizerSubsystem, nullptr, "SetScanBasePath", nullptr, nullptr, Z_Construct_UFunction_UContentOrganizerSubsystem_SetScanBasePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentOrganizerSubsystem_SetScanBasePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UContentOrganizerSubsystem_SetScanBasePath_Statics::ContentOrganizerSubsystem_eventSetScanBasePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UContentOrganizerSubsystem_SetScanBasePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UContentOrganizerSubsystem_SetScanBasePath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UContentOrganizerSubsystem_SetScanBasePath_Statics::ContentOrganizerSubsystem_eventSetScanBasePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UContentOrganizerSubsystem_SetScanBasePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContentOrganizerSubsystem_SetScanBasePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UContentOrganizerSubsystem::execSetScanBasePath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NewBasePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetScanBasePath(Z_Param_NewBasePath);
	P_NATIVE_END;
}
// End Class UContentOrganizerSubsystem Function SetScanBasePath

// Begin Class UContentOrganizerSubsystem
void UContentOrganizerSubsystem::StaticRegisterNativesUContentOrganizerSubsystem()
{
	UClass* Class = UContentOrganizerSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnAssetAdded", &UContentOrganizerSubsystem::execOnAssetAdded },
		{ "SetScanBasePath", &UContentOrganizerSubsystem::execSetScanBasePath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentOrganizerSubsystem);
UClass* Z_Construct_UClass_UContentOrganizerSubsystem_NoRegister()
{
	return UContentOrganizerSubsystem::StaticClass();
}
struct Z_Construct_UClass_UContentOrganizerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Subsystem, attach to Unreal Event\n * being a tool for portfolio at the moment the OnAssetAdd is not implemented\n * there's crash when a new asset is importend, the problem is because when the asset are renomenate Unreal \"reimporte\"\n * the asset and active again the call\n */" },
#endif
		{ "IncludePath", "ContentOrganizerSubsystem.h" },
		{ "ModuleRelativePath", "Public/ContentOrganizerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subsystem, attach to Unreal Event\nbeing a tool for portfolio at the moment the OnAssetAdd is not implemented\nthere's crash when a new asset is importend, the problem is because when the asset are renomenate Unreal \"reimporte\"\nthe asset and active again the call" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScanBasePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContentOrganizerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ScanBasePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UContentOrganizerSubsystem_OnAssetAdded, "OnAssetAdded" }, // 1451407461
		{ &Z_Construct_UFunction_UContentOrganizerSubsystem_SetScanBasePath, "SetScanBasePath" }, // 2613887148
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentOrganizerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UContentOrganizerSubsystem_Statics::NewProp_ScanBasePath = { "ScanBasePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UContentOrganizerSubsystem, ScanBasePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScanBasePath_MetaData), NewProp_ScanBasePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContentOrganizerSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentOrganizerSubsystem_Statics::NewProp_ScanBasePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContentOrganizerSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UContentOrganizerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ContentOrganizer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContentOrganizerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentOrganizerSubsystem_Statics::ClassParams = {
	&UContentOrganizerSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UContentOrganizerSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UContentOrganizerSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UContentOrganizerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UContentOrganizerSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UContentOrganizerSubsystem()
{
	if (!Z_Registration_Info_UClass_UContentOrganizerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentOrganizerSubsystem.OuterSingleton, Z_Construct_UClass_UContentOrganizerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UContentOrganizerSubsystem.OuterSingleton;
}
template<> CONTENTORGANIZER_API UClass* StaticClass<UContentOrganizerSubsystem>()
{
	return UContentOrganizerSubsystem::StaticClass();
}
UContentOrganizerSubsystem::UContentOrganizerSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UContentOrganizerSubsystem);
UContentOrganizerSubsystem::~UContentOrganizerSubsystem() {}
// End Class UContentOrganizerSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UContentOrganizerSubsystem, UContentOrganizerSubsystem::StaticClass, TEXT("UContentOrganizerSubsystem"), &Z_Registration_Info_UClass_UContentOrganizerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentOrganizerSubsystem), 2089917929U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerSubsystem_h_2119504297(TEXT("/Script/ContentOrganizer"),
	Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
