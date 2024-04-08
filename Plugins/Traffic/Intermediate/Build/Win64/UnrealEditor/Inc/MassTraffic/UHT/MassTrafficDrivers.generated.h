// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficDrivers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSTRAFFIC_MassTrafficDrivers_generated_h
#error "MassTrafficDrivers.generated.h already included, missing '#pragma once' in MassTrafficDrivers.h"
#endif
#define MASSTRAFFIC_MassTrafficDrivers_generated_h

#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassTrafficDriverMesh_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<struct FMassTrafficDriverMesh>();

#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassTrafficDriverTypeData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<struct FMassTrafficDriverTypeData>();

#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h_64_SPARSE_DATA
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h_64_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h_64_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h_64_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h_64_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficDriverTypesDataAsset(); \
	friend struct Z_Construct_UClass_UMassTrafficDriverTypesDataAsset_Statics; \
public: \
	DECLARE_CLASS(UMassTrafficDriverTypesDataAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassTraffic"), NO_API) \
	DECLARE_SERIALIZER(UMassTrafficDriverTypesDataAsset)


#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassTrafficDriverTypesDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassTrafficDriverTypesDataAsset(UMassTrafficDriverTypesDataAsset&&); \
	NO_API UMassTrafficDriverTypesDataAsset(const UMassTrafficDriverTypesDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficDriverTypesDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficDriverTypesDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassTrafficDriverTypesDataAsset) \
	NO_API virtual ~UMassTrafficDriverTypesDataAsset();


#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h_61_PROLOG
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h_64_SPARSE_DATA \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h_64_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h_64_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h_64_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h_64_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSTRAFFIC_API UClass* StaticClass<class UMassTrafficDriverTypesDataAsset>();

#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassTrafficDriversParameters_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMassSharedFragment Super;


template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<struct FMassTrafficDriversParameters>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h


#define FOREACH_ENUM_EDRIVERANIMSTATEVARIATION(op) \
	op(EDriverAnimStateVariation::TwoHands) \
	op(EDriverAnimStateVariation::OneHand) \
	op(EDriverAnimStateVariation::Bus) \
	op(EDriverAnimStateVariation::None) 

enum class EDriverAnimStateVariation : uint8;
template<> struct TIsUEnumClass<EDriverAnimStateVariation> { enum { Value = true }; };
template<> MASSTRAFFIC_API UEnum* StaticEnum<EDriverAnimStateVariation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
