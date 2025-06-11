// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContentOrganizerSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UContentOrganizerGraph;
struct FAssetData;
#ifdef CONTENTORGANIZER_ContentOrganizerSubsystem_generated_h
#error "ContentOrganizerSubsystem.generated.h already included, missing '#pragma once' in ContentOrganizerSubsystem.h"
#endif
#define CONTENTORGANIZER_ContentOrganizerSubsystem_generated_h

#define FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnAssetAdded); \
	DECLARE_FUNCTION(execOrganizeContent); \
	DECLARE_FUNCTION(execSetScanBasePath);


#define FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContentOrganizerSubsystem(); \
	friend struct Z_Construct_UClass_UContentOrganizerSubsystem_Statics; \
public: \
	DECLARE_CLASS(UContentOrganizerSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContentOrganizer"), NO_API) \
	DECLARE_SERIALIZER(UContentOrganizerSubsystem)


#define FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerSubsystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContentOrganizerSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UContentOrganizerSubsystem(UContentOrganizerSubsystem&&); \
	UContentOrganizerSubsystem(const UContentOrganizerSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContentOrganizerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentOrganizerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UContentOrganizerSubsystem) \
	NO_API virtual ~UContentOrganizerSubsystem();


#define FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerSubsystem_h_16_PROLOG
#define FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTENTORGANIZER_API UClass* StaticClass<class UContentOrganizerSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_39345_Desktop_Progetti_Unreal_ToolWidgetsExercises_Plugins_ContentOrganizer_Source_ContentOrganizer_Public_ContentOrganizerSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
