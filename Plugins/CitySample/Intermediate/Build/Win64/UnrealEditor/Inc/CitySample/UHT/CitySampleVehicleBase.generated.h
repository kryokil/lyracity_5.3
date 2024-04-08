// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Vehicles/CitySampleVehicleBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACitySampleCharacter;
class UCitySampleMenu;
class UCitySampleUIComponent;
class UMaterialInstanceDynamic;
class USkeletalMeshComponent;
enum class ECitySampleVehicleSeat : uint8;
struct FCitySampleDrivingState;
#ifdef CITYSAMPLE_CitySampleVehicleBase_generated_h
#error "CitySampleVehicleBase.generated.h already included, missing '#pragma once' in CitySampleVehicleBase.h"
#endif
#define CITYSAMPLE_CitySampleVehicleBase_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimestampedTransform_Statics; \
	CITYSAMPLE_API static class UScriptStruct* StaticStruct();


template<> CITYSAMPLE_API UScriptStruct* StaticStruct<struct FTimestampedTransform>();

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_79_DELEGATE \
CITYSAMPLE_API void FOnPlayerEnterVehicle_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerEnterVehicle);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_80_DELEGATE \
CITYSAMPLE_API void FOnPlayerExitVehicle_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerExitVehicle);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_82_DELEGATE \
CITYSAMPLE_API void FOnAccelerationStart_DelegateWrapper(const FMulticastScriptDelegate& OnAccelerationStart);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_83_DELEGATE \
CITYSAMPLE_API void FOnAccelerationStop_DelegateWrapper(const FMulticastScriptDelegate& OnAccelerationStop);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_85_DELEGATE \
CITYSAMPLE_API void FOnReverseStart_DelegateWrapper(const FMulticastScriptDelegate& OnReverseStart);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_86_DELEGATE \
CITYSAMPLE_API void FOnReverseStop_DelegateWrapper(const FMulticastScriptDelegate& OnReverseStop);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_88_DELEGATE \
CITYSAMPLE_API void FOnAirborneStart_DelegateWrapper(const FMulticastScriptDelegate& OnAirborneStart);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_89_DELEGATE \
CITYSAMPLE_API void FOnAirborneStop_DelegateWrapper(const FMulticastScriptDelegate& OnAirborneStop);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_91_DELEGATE \
CITYSAMPLE_API void FOnDriftStart_DelegateWrapper(const FMulticastScriptDelegate& OnDriftStart);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_92_DELEGATE \
CITYSAMPLE_API void FOnDriftStop_DelegateWrapper(const FMulticastScriptDelegate& OnDriftStop);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_94_DELEGATE \
CITYSAMPLE_API void FOnBrakeStart_DelegateWrapper(const FMulticastScriptDelegate& OnBrakeStart);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_95_DELEGATE \
CITYSAMPLE_API void FOnBrakeStop_DelegateWrapper(const FMulticastScriptDelegate& OnBrakeStop);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_97_DELEGATE \
CITYSAMPLE_API void FOnHandbrakeStart_DelegateWrapper(const FMulticastScriptDelegate& OnHandbrakeStart);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_98_DELEGATE \
CITYSAMPLE_API void FOnHandbrakeStop_DelegateWrapper(const FMulticastScriptDelegate& OnHandbrakeStop);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_100_DELEGATE \
CITYSAMPLE_API void FOnDoorOpen_DelegateWrapper(const FMulticastScriptDelegate& OnDoorOpen);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_101_DELEGATE \
CITYSAMPLE_API void FOnDoorClose_DelegateWrapper(const FMulticastScriptDelegate& OnDoorClose);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_103_DELEGATE \
CITYSAMPLE_API void FOnIgnitionStart_DelegateWrapper(const FMulticastScriptDelegate& OnIgnitionStart);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_105_DELEGATE \
CITYSAMPLE_API void FOnVehicleBackfire_DelegateWrapper(const FMulticastScriptDelegate& OnVehicleBackfire);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_107_DELEGATE \
CITYSAMPLE_API void FOnSleepStart_DelegateWrapper(const FMulticastScriptDelegate& OnSleepStart);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_108_DELEGATE \
CITYSAMPLE_API void FOnSleepStop_DelegateWrapper(const FMulticastScriptDelegate& OnSleepStop);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_110_DELEGATE \
CITYSAMPLE_API void FOnWheelBump_DelegateWrapper(const FMulticastScriptDelegate& OnWheelBump, int32 WheelIndex, float BumpStrength);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_124_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_124_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_124_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_124_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartParkingReleaseTimer); \
	DECLARE_FUNCTION(execOnExitPhotomode); \
	DECLARE_FUNCTION(execOnEnterPhotomode); \
	DECLARE_FUNCTION(execGetPhysicalSurfaceUnderWheel); \
	DECLARE_FUNCTION(execTriggerCollisionRumble); \
	DECLARE_FUNCTION(execTriggerRightBumpRumble); \
	DECLARE_FUNCTION(execTriggerLeftBumpRumble); \
	DECLARE_FUNCTION(execTriggerRightSuspensionRumble); \
	DECLARE_FUNCTION(execTriggerLeftSuspensionRumble); \
	DECLARE_FUNCTION(execSetHandbrakeInput); \
	DECLARE_FUNCTION(execSetSteeringInput); \
	DECLARE_FUNCTION(execSetBrakeInput); \
	DECLARE_FUNCTION(execSetThrottleInput); \
	DECLARE_FUNCTION(execOnOptionsMenuOpened); \
	DECLARE_FUNCTION(execSetParked); \
	DECLARE_FUNCTION(execResetMotionBlurForAllComponentsThisFrame); \
	DECLARE_FUNCTION(execUpdateContinuousCollisionDetectionAtSpeed); \
	DECLARE_FUNCTION(execUpdateTransformsOverTime); \
	DECLARE_FUNCTION(execOnExitVehicle); \
	DECLARE_FUNCTION(execSetSteeringModifier); \
	DECLARE_FUNCTION(execSetThrottleDisabled); \
	DECLARE_FUNCTION(execGetNormalizedSuspensionLength); \
	DECLARE_FUNCTION(execGetWheelSlipAngleInDegrees); \
	DECLARE_FUNCTION(execIsVehicleDrifting); \
	DECLARE_FUNCTION(execGetCOMPositionRatio); \
	DECLARE_FUNCTION(execGetOccupantInSeat); \
	DECLARE_FUNCTION(execGetSeatSocket); \
	DECLARE_FUNCTION(execFlipVehicle); \
	DECLARE_FUNCTION(execIsVehicleFlippedOver); \
	DECLARE_FUNCTION(execApplyWheelMotionBlurNative); \
	DECLARE_FUNCTION(execShouldDrawRumbleDebugInfo); \
	DECLARE_FUNCTION(execGetLookAtPointOffsetOverride); \
	DECLARE_FUNCTION(execGetCameraToPivotOffsetOverride); \
	DECLARE_FUNCTION(execShouldOverrideLookAtPointOffset); \
	DECLARE_FUNCTION(execShouldOverrideCameraToPivotOffset); \
	DECLARE_FUNCTION(execGetTimeSpentSharpSteering); \
	DECLARE_FUNCTION(execIsPossessedByPlayer); \
	DECLARE_FUNCTION(execIsPossessableByPlayer); \
	DECLARE_FUNCTION(execRequestHideDrivingUI); \
	DECLARE_FUNCTION(execShouldHideDrivingUI); \
	DECLARE_FUNCTION(execHasAllWheelsOnGround); \
	DECLARE_FUNCTION(execIsUsingAutoGears); \
	DECLARE_FUNCTION(execGetGear); \
	DECLARE_FUNCTION(execGetRPM); \
	DECLARE_FUNCTION(execGetForwardSpeed); \
	DECLARE_FUNCTION(execIsHandbrakeOn); \
	DECLARE_FUNCTION(execGetBrakeInput); \
	DECLARE_FUNCTION(execGetThrottleInput); \
	DECLARE_FUNCTION(execGetMeasuredVelocity); \
	DECLARE_FUNCTION(execGetDrivingState);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_124_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_124_CALLBACK_WRAPPERS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_124_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACitySampleVehicleBase(); \
	friend struct Z_Construct_UClass_ACitySampleVehicleBase_Statics; \
public: \
	DECLARE_CLASS(ACitySampleVehicleBase, AWheeledVehiclePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(ACitySampleVehicleBase) \
	virtual UObject* _getUObject() const override { return const_cast<ACitySampleVehicleBase*>(this); }


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_124_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACitySampleVehicleBase(ACitySampleVehicleBase&&); \
	NO_API ACitySampleVehicleBase(const ACitySampleVehicleBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACitySampleVehicleBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACitySampleVehicleBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACitySampleVehicleBase) \
	NO_API virtual ~ACitySampleVehicleBase();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_115_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_124_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_124_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_124_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_124_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_124_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_124_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_124_CALLBACK_WRAPPERS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_124_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_124_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class ACitySampleVehicleBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h


#define FOREACH_ENUM_ECITYSAMPLEVEHICLESEAT(op) \
	op(ECitySampleVehicleSeat::Driver) \
	op(ECitySampleVehicleSeat::FrontPassenger) \
	op(ECitySampleVehicleSeat::RearDriver) \
	op(ECitySampleVehicleSeat::RearPassenger) 

enum class ECitySampleVehicleSeat : uint8;
template<> struct TIsUEnumClass<ECitySampleVehicleSeat> { enum { Value = true }; };
template<> CITYSAMPLE_API UEnum* StaticEnum<ECitySampleVehicleSeat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
