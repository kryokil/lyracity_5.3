// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Util/CitySampleTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CITYSAMPLE_CitySampleTypes_generated_h
#error "CitySampleTypes.generated.h already included, missing '#pragma once' in CitySampleTypes.h"
#endif
#define CITYSAMPLE_CitySampleTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleTypes_h


#define FOREACH_ENUM_EDEVICEPROFILEOVERRIDEMODE(op) \
	op(EDeviceProfileOverrideMode::DroneMode) \
	op(EDeviceProfileOverrideMode::DrivingMode) 

enum class EDeviceProfileOverrideMode : uint8;
template<> struct TIsUEnumClass<EDeviceProfileOverrideMode> { enum { Value = true }; };
template<> CITYSAMPLE_API UEnum* StaticEnum<EDeviceProfileOverrideMode>();

#define FOREACH_ENUM_EPLAYERTRAVERSALSTATE(op) \
	op(EPlayerTraversalState::OnFoot) \
	op(EPlayerTraversalState::InVehicle) \
	op(EPlayerTraversalState::Drone) 

enum class EPlayerTraversalState : uint8;
template<> struct TIsUEnumClass<EPlayerTraversalState> { enum { Value = true }; };
template<> CITYSAMPLE_API UEnum* StaticEnum<EPlayerTraversalState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
