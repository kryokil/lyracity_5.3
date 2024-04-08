// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficBuilderTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSTRAFFICEDITOR_MassTrafficBuilderTypes_generated_h
#error "MassTrafficBuilderTypes.generated.h already included, missing '#pragma once' in MassTrafficBuilderTypes.h"
#endif
#define MASSTRAFFICEDITOR_MassTrafficBuilderTypes_generated_h

#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderTypes_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSTRAFFICEDITOR_API UScriptStruct* StaticStruct<struct FMassTrafficExplicitLaneProfileRefMapKey>();

#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderTypes_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassTrafficDebugPoint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSTRAFFICEDITOR_API UScriptStruct* StaticStruct<struct FMassTrafficDebugPoint>();

#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderTypes_h_102_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassTrafficDebugLineSegment_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSTRAFFICEDITOR_API UScriptStruct* StaticStruct<struct FMassTrafficDebugLineSegment>();

#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderTypes_h_122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassTrafficPoint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSTRAFFICEDITOR_API UScriptStruct* StaticStruct<struct FMassTrafficPoint>();

#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderTypes_h_185_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassTrafficRoadSegment_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSTRAFFICEDITOR_API UScriptStruct* StaticStruct<struct FMassTrafficRoadSegment>();

#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderTypes_h_240_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassTrafficRoadSegmentMapKey_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSTRAFFICEDITOR_API UScriptStruct* StaticStruct<struct FMassTrafficRoadSegmentMapKey>();

#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderTypes_h_267_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassTrafficRoadSpline_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSTRAFFICEDITOR_API UScriptStruct* StaticStruct<struct FMassTrafficRoadSpline>();

#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderTypes_h_323_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassTrafficRoadSplineMapKey_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSTRAFFICEDITOR_API UScriptStruct* StaticStruct<struct FMassTrafficRoadSplineMapKey>();

#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderTypes_h_375_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassTrafficIntersectionLink_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSTRAFFICEDITOR_API UScriptStruct* StaticStruct<struct FMassTrafficIntersectionLink>();

#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderTypes_h_432_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassTrafficIntersection_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSTRAFFICEDITOR_API UScriptStruct* StaticStruct<struct FMassTrafficIntersection>();

#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderTypes_h_479_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassTrafficIntersectionMapKey_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSTRAFFICEDITOR_API UScriptStruct* StaticStruct<struct FMassTrafficIntersectionMapKey>();

#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderTypes_h_507_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassTrafficPointHints_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSTRAFFICEDITOR_API UScriptStruct* StaticStruct<struct FMassTrafficPointHints>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderTypes_h


#define FOREACH_ENUM_EMASSTRAFFICUSER(op) \
	op(EMassTrafficUser::None) \
	op(EMassTrafficUser::Vehicle) \
	op(EMassTrafficUser::Pedestrian) \
	op(EMassTrafficUser::Unknown) 

enum class EMassTrafficUser : uint8;
template<> struct TIsUEnumClass<EMassTrafficUser> { enum { Value = true }; };
template<> MASSTRAFFICEDITOR_API UEnum* StaticEnum<EMassTrafficUser>();

#define FOREACH_ENUM_EMASSTRAFFICSPECIALCONNECTIONTYPE(op) \
	op(EMassTrafficSpecialConnectionType::None) \
	op(EMassTrafficSpecialConnectionType::CityIntersectionLinkIsConnectionIsBlocked) \
	op(EMassTrafficSpecialConnectionType::CityIntersectionLinkConnectsRoadSegmentNeedingToBeBuilt) \
	op(EMassTrafficSpecialConnectionType::CityIntersectionLinkConnectsToIncomingFreewayRamp) \
	op(EMassTrafficSpecialConnectionType::CityIntersectionLinkConnectsToOutgoingFreewayRamp) \
	op(EMassTrafficSpecialConnectionType::FreewayIntersectionLinkConnectsToIncomingFreewayRamp) \
	op(EMassTrafficSpecialConnectionType::FreewayIntersectionLinkConnectsToOutgoingFreewayRamp) \
	op(EMassTrafficSpecialConnectionType::IntersectionLinkConnectsAsStraightLaneAdapter) \
	op(EMassTrafficSpecialConnectionType::Unknown) 

enum class EMassTrafficSpecialConnectionType : uint8;
template<> struct TIsUEnumClass<EMassTrafficSpecialConnectionType> { enum { Value = true }; };
template<> MASSTRAFFICEDITOR_API UEnum* StaticEnum<EMassTrafficSpecialConnectionType>();

#define FOREACH_ENUM_EMASSTRAFFICBUILDTYPE(op) \
	op(EMassTrafficBuildType::Components) \
	op(EMassTrafficBuildType::Actors) 

enum class EMassTrafficBuildType : uint8;
template<> struct TIsUEnumClass<EMassTrafficBuildType> { enum { Value = true }; };
template<> MASSTRAFFICEDITOR_API UEnum* StaticEnum<EMassTrafficBuildType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
