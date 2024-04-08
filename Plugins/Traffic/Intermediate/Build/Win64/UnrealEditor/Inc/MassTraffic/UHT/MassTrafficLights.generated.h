// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficLights.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSTRAFFIC_MassTrafficLights_generated_h
#error "MassTrafficLights.generated.h already included, missing '#pragma once' in MassTrafficLights.h"
#endif
#define MASSTRAFFIC_MassTrafficLights_generated_h

#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<struct FMassTrafficLightTypeData>();

#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_34_SPARSE_DATA
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_34_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_34_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_34_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficLightTypesDataAsset(); \
	friend struct Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics; \
public: \
	DECLARE_CLASS(UMassTrafficLightTypesDataAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassTraffic"), NO_API) \
	DECLARE_SERIALIZER(UMassTrafficLightTypesDataAsset)


#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassTrafficLightTypesDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassTrafficLightTypesDataAsset(UMassTrafficLightTypesDataAsset&&); \
	NO_API UMassTrafficLightTypesDataAsset(const UMassTrafficLightTypesDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficLightTypesDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficLightTypesDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassTrafficLightTypesDataAsset) \
	NO_API virtual ~UMassTrafficLightTypesDataAsset();


#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_31_PROLOG
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_34_SPARSE_DATA \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_34_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_34_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_34_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSTRAFFIC_API UClass* StaticClass<class UMassTrafficLightTypesDataAsset>();

#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<struct FMassTrafficLightInstanceDesc>();

#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_73_SPARSE_DATA
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_73_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_73_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_73_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_73_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearTrafficLights); \
	DECLARE_FUNCTION(execPopulateTrafficLightsFromPointCloud);


#else
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_73_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_73_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficLightInstancesDataAsset(); \
	friend struct Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics; \
public: \
	DECLARE_CLASS(UMassTrafficLightInstancesDataAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassTraffic"), NO_API) \
	DECLARE_SERIALIZER(UMassTrafficLightInstancesDataAsset)


#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassTrafficLightInstancesDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassTrafficLightInstancesDataAsset(UMassTrafficLightInstancesDataAsset&&); \
	NO_API UMassTrafficLightInstancesDataAsset(const UMassTrafficLightInstancesDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficLightInstancesDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficLightInstancesDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassTrafficLightInstancesDataAsset) \
	NO_API virtual ~UMassTrafficLightInstancesDataAsset();


#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_70_PROLOG
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_73_SPARSE_DATA \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_73_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_73_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_73_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_73_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_73_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSTRAFFIC_API UClass* StaticClass<class UMassTrafficLightInstancesDataAsset>();

#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_140_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMassSharedFragment Super;


template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<struct FMassTrafficLightsParameters>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
