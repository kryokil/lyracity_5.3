// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSTRAFFIC_MassTrafficSubsystem_generated_h
#error "MassTrafficSubsystem.generated.h already included, missing '#pragma once' in MassTrafficSubsystem.h"
#endif
#define MASSTRAFFIC_MassTrafficSubsystem_generated_h

#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_28_SPARSE_DATA
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_28_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearAllTrafficLanes); \
	DECLARE_FUNCTION(execHasParkedVehicleAgents); \
	DECLARE_FUNCTION(execGetNumParkedVehicleAgents); \
	DECLARE_FUNCTION(execHasTrafficVehicleAgents); \
	DECLARE_FUNCTION(execGetNumTrafficVehicleAgents);


#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_28_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficSubsystem(); \
	friend struct Z_Construct_UClass_UMassTrafficSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMassTrafficSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassTraffic"), NO_API) \
	DECLARE_SERIALIZER(UMassTrafficSubsystem)


#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassTrafficSubsystem(UMassTrafficSubsystem&&); \
	NO_API UMassTrafficSubsystem(const UMassTrafficSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassTrafficSubsystem) \
	NO_API virtual ~UMassTrafficSubsystem();


#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_25_PROLOG
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_28_SPARSE_DATA \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_28_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_28_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_28_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSTRAFFIC_API UClass* StaticClass<class UMassTrafficSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
