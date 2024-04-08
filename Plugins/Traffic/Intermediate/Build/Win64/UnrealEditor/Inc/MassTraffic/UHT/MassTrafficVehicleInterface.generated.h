// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficVehicleInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMassTrafficVehicleDamageState : uint8;
struct FMassTrafficDriverTypeData;
struct FMassTrafficInstancePlaybackData;
#ifdef MASSTRAFFIC_MassTrafficVehicleInterface_generated_h
#error "MassTrafficVehicleInterface.generated.h already included, missing '#pragma once' in MassTrafficVehicleInterface.h"
#endif
#define MASSTRAFFIC_MassTrafficVehicleInterface_generated_h

#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleInterface_h_15_SPARSE_DATA
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleInterface_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleInterface_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleInterface_h_15_RPC_WRAPPERS \
	virtual void OnDriverRemoved_Implementation(FMassTrafficDriverTypeData const& DriverTypeData, FMassTrafficInstancePlaybackData const& DriverInstanceData, FTransform const& DriverTransformWorldSpace) {}; \
	virtual void RepairDamage_Implementation() {}; \
	virtual EMassTrafficVehicleDamageState GetDamageState_Implementation() const { return (EMassTrafficVehicleDamageState)0; }; \
 \
	DECLARE_FUNCTION(execOnDriverRemoved); \
	DECLARE_FUNCTION(execRepairDamage); \
	DECLARE_FUNCTION(execGetDamageState);


#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleInterface_h_15_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleInterface_h_15_CALLBACK_WRAPPERS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassTrafficVehicleInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassTrafficVehicleInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficVehicleInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficVehicleInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassTrafficVehicleInterface(UMassTrafficVehicleInterface&&); \
	NO_API UMassTrafficVehicleInterface(const UMassTrafficVehicleInterface&); \
public: \
	NO_API virtual ~UMassTrafficVehicleInterface();


#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMassTrafficVehicleInterface(); \
	friend struct Z_Construct_UClass_UMassTrafficVehicleInterface_Statics; \
public: \
	DECLARE_CLASS(UMassTrafficVehicleInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MassTraffic"), NO_API) \
	DECLARE_SERIALIZER(UMassTrafficVehicleInterface)


#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IMassTrafficVehicleInterface() {} \
public: \
	typedef UMassTrafficVehicleInterface UClassType; \
	typedef IMassTrafficVehicleInterface ThisClass; \
	static EMassTrafficVehicleDamageState Execute_GetDamageState(const UObject* O); \
	static void Execute_OnDriverRemoved(UObject* O, FMassTrafficDriverTypeData const& DriverTypeData, FMassTrafficInstancePlaybackData const& DriverInstanceData, FTransform const& DriverTransformWorldSpace); \
	static void Execute_RepairDamage(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleInterface_h_12_PROLOG
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleInterface_h_15_SPARSE_DATA \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleInterface_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleInterface_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleInterface_h_15_RPC_WRAPPERS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleInterface_h_15_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleInterface_h_15_CALLBACK_WRAPPERS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSTRAFFIC_API UClass* StaticClass<class UMassTrafficVehicleInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
