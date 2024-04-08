// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficDamage.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSTRAFFIC_MassTrafficDamage_generated_h
#error "MassTrafficDamage.generated.h already included, missing '#pragma once' in MassTrafficDamage.h"
#endif
#define MASSTRAFFIC_MassTrafficDamage_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDamage_h


#define FOREACH_ENUM_EMASSTRAFFICVEHICLEDAMAGESTATE(op) \
	op(EMassTrafficVehicleDamageState::None) \
	op(EMassTrafficVehicleDamageState::Damaged) \
	op(EMassTrafficVehicleDamageState::Totaled) \
	op(EMassTrafficVehicleDamageState::Repairing) \
	op(EMassTrafficVehicleDamageState::Irreparable) 

enum class EMassTrafficVehicleDamageState : uint8;
template<> struct TIsUEnumClass<EMassTrafficVehicleDamageState> { enum { Value = true }; };
template<> MASSTRAFFIC_API UEnum* StaticEnum<EMassTrafficVehicleDamageState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
