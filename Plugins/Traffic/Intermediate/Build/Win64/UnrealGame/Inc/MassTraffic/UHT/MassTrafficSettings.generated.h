// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSTRAFFIC_MassTrafficSettings_generated_h
#error "MassTrafficSettings.generated.h already included, missing '#pragma once' in MassTrafficSettings.h"
#endif
#define MASSTRAFFIC_MassTrafficSettings_generated_h

#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassTrafficLaneSpeedLimit_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<struct FMassTrafficLaneSpeedLimit>();

#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassTrafficLaneDensity_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<struct FMassTrafficLaneDensity>();

#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_54_SPARSE_DATA
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_54_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_54_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_54_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_54_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficSettings(); \
	friend struct Z_Construct_UClass_UMassTrafficSettings_Statics; \
public: \
	DECLARE_CLASS(UMassTrafficSettings, UMassModuleSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassTraffic"), NO_API) \
	DECLARE_SERIALIZER(UMassTrafficSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Plugins");} \



#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassTrafficSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassTrafficSettings(UMassTrafficSettings&&); \
	NO_API UMassTrafficSettings(const UMassTrafficSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassTrafficSettings) \
	NO_API virtual ~UMassTrafficSettings();


#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_51_PROLOG
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_54_SPARSE_DATA \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_54_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_54_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_54_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_54_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSTRAFFIC_API UClass* StaticClass<class UMassTrafficSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h


#define FOREACH_ENUM_EMASSTRAFFICLANECHANGEMODE(op) \
	op(EMassTrafficLaneChangeMode::Off) \
	op(EMassTrafficLaneChangeMode::On) \
	op(EMassTrafficLaneChangeMode::On_OnlyForOffLOD) 

enum class EMassTrafficLaneChangeMode : uint8;
template<> struct TIsUEnumClass<EMassTrafficLaneChangeMode> { enum { Value = true }; };
template<> MASSTRAFFIC_API UEnum* StaticEnum<EMassTrafficLaneChangeMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
