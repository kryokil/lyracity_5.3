// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficVehicleControlInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSTRAFFIC_MassTrafficVehicleControlInterface_generated_h
#error "MassTrafficVehicleControlInterface.generated.h already included, missing '#pragma once' in MassTrafficVehicleControlInterface.h"
#endif
#define MASSTRAFFIC_MassTrafficVehicleControlInterface_generated_h

#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_SPARSE_DATA
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_RPC_WRAPPERS \
	virtual void OnTrafficVehicleSpawned_Implementation() {}; \
	virtual void OnParkedVehicleSpawned_Implementation() {}; \
	virtual void SetVehicleInputs_Implementation(const float Throttle, const float Brake, bool bHandBrake, const float Steering, bool bSetSteering) {}; \
 \
	DECLARE_FUNCTION(execOnTrafficVehicleSpawned); \
	DECLARE_FUNCTION(execOnParkedVehicleSpawned); \
	DECLARE_FUNCTION(execSetVehicleInputs);


#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_CALLBACK_WRAPPERS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassTrafficVehicleControlInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassTrafficVehicleControlInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficVehicleControlInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficVehicleControlInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassTrafficVehicleControlInterface(UMassTrafficVehicleControlInterface&&); \
	NO_API UMassTrafficVehicleControlInterface(const UMassTrafficVehicleControlInterface&); \
public: \
	NO_API virtual ~UMassTrafficVehicleControlInterface();


#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMassTrafficVehicleControlInterface(); \
	friend struct Z_Construct_UClass_UMassTrafficVehicleControlInterface_Statics; \
public: \
	DECLARE_CLASS(UMassTrafficVehicleControlInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MassTraffic"), NO_API) \
	DECLARE_SERIALIZER(UMassTrafficVehicleControlInterface)


#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_GENERATED_UINTERFACE_BODY() \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IMassTrafficVehicleControlInterface() {} \
public: \
	typedef UMassTrafficVehicleControlInterface UClassType; \
	typedef IMassTrafficVehicleControlInterface ThisClass; \
	static void Execute_OnParkedVehicleSpawned(UObject* O); \
	static void Execute_OnTrafficVehicleSpawned(UObject* O); \
	static void Execute_SetVehicleInputs(UObject* O, const float Throttle, const float Brake, bool bHandBrake, const float Steering, bool bSetSteering); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_8_PROLOG
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_SPARSE_DATA \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_RPC_WRAPPERS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_CALLBACK_WRAPPERS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSTRAFFIC_API UClass* StaticClass<class UMassTrafficVehicleControlInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
