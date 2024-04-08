// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Vehicles/DrivableVehicleComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACitySampleCharacter;
class ACitySampleVehicleBase;
class APawn;
class UDrivableVehicleComponent;
#ifdef CITYSAMPLE_DrivableVehicleComponent_generated_h
#error "DrivableVehicleComponent.generated.h already included, missing '#pragma once' in DrivableVehicleComponent.h"
#endif
#define CITYSAMPLE_DrivableVehicleComponent_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_DrivableVehicleComponent_h_12_DELEGATE \
CITYSAMPLE_API void FCitySampleVehicleOnDriverEnter_DelegateWrapper(const FMulticastScriptDelegate& CitySampleVehicleOnDriverEnter, const UDrivableVehicleComponent* DrivableComponent, const ACitySampleVehicleBase* Vehicle, const APawn* Driver);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_DrivableVehicleComponent_h_13_DELEGATE \
CITYSAMPLE_API void FCitySampleVehicleOnDriverExit_DelegateWrapper(const FMulticastScriptDelegate& CitySampleVehicleOnDriverExit, const UDrivableVehicleComponent* DrivableComponent, const ACitySampleVehicleBase* Vehicle, const APawn* Driver);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_DrivableVehicleComponent_h_18_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_DrivableVehicleComponent_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_DrivableVehicleComponent_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_DrivableVehicleComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDriverGetOut); \
	DECLARE_FUNCTION(execDriverGetIn);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_DrivableVehicleComponent_h_18_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_DrivableVehicleComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDrivableVehicleComponent(); \
	friend struct Z_Construct_UClass_UDrivableVehicleComponent_Statics; \
public: \
	DECLARE_CLASS(UDrivableVehicleComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UDrivableVehicleComponent)


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_DrivableVehicleComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDrivableVehicleComponent(UDrivableVehicleComponent&&); \
	NO_API UDrivableVehicleComponent(const UDrivableVehicleComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDrivableVehicleComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDrivableVehicleComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDrivableVehicleComponent) \
	NO_API virtual ~UDrivableVehicleComponent();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_DrivableVehicleComponent_h_15_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_DrivableVehicleComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_DrivableVehicleComponent_h_18_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_DrivableVehicleComponent_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_DrivableVehicleComponent_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_DrivableVehicleComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_DrivableVehicleComponent_h_18_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_DrivableVehicleComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_DrivableVehicleComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class UDrivableVehicleComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_DrivableVehicleComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
