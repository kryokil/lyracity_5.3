// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Util/LoadingUtilLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef CITYSAMPLE_LoadingUtilLibrary_generated_h
#error "LoadingUtilLibrary.generated.h already included, missing '#pragma once' in LoadingUtilLibrary.h"
#endif
#define CITYSAMPLE_LoadingUtilLibrary_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_LoadingUtilLibrary_h_14_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_LoadingUtilLibrary_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_LoadingUtilLibrary_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_LoadingUtilLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFlushLevelStreaming); \
	DECLARE_FUNCTION(execForceGarbageCollection); \
	DECLARE_FUNCTION(execApplyCustomPriorityLoading); \
	DECLARE_FUNCTION(execApplyHighestPriorityLoading); \
	DECLARE_FUNCTION(execApplyStreamingPriorityLoading); \
	DECLARE_FUNCTION(execApplyDefaultPriorityLoading);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_LoadingUtilLibrary_h_14_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_LoadingUtilLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoadingUtilLibrary(); \
	friend struct Z_Construct_UClass_ULoadingUtilLibrary_Statics; \
public: \
	DECLARE_CLASS(ULoadingUtilLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(ULoadingUtilLibrary)


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_LoadingUtilLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadingUtilLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadingUtilLibrary(ULoadingUtilLibrary&&); \
	NO_API ULoadingUtilLibrary(const ULoadingUtilLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadingUtilLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadingUtilLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadingUtilLibrary) \
	NO_API virtual ~ULoadingUtilLibrary();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_LoadingUtilLibrary_h_11_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_LoadingUtilLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_LoadingUtilLibrary_h_14_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_LoadingUtilLibrary_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_LoadingUtilLibrary_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_LoadingUtilLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_LoadingUtilLibrary_h_14_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_LoadingUtilLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_LoadingUtilLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class ULoadingUtilLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_LoadingUtilLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
