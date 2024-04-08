// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PointCloudSliceAndDiceShared.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POINTCLOUD_PointCloudSliceAndDiceShared_generated_h
#error "PointCloudSliceAndDiceShared.generated.h already included, missing '#pragma once' in PointCloudSliceAndDiceShared.h"
#endif
#define POINTCLOUD_PointCloudSliceAndDiceShared_generated_h

#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceShared_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSliceAndDiceActorMapping_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POINTCLOUD_API UScriptStruct* StaticStruct<struct FSliceAndDiceActorMapping>();

#define FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceShared_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsEntry_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POINTCLOUD_API UScriptStruct* StaticStruct<struct FSliceAndDiceManagedActorsEntry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceShared_h


#define FOREACH_ENUM_EPOINTCLOUDBOUNDSOPTION(op) \
	op(EPointCloudBoundsOption::Compute) \
	op(EPointCloudBoundsOption::Manual) 

enum class EPointCloudBoundsOption : uint8;
template<> struct TIsUEnumClass<EPointCloudBoundsOption> { enum { Value = true }; };
template<> POINTCLOUD_API UEnum* StaticEnum<EPointCloudBoundsOption>();

#define FOREACH_ENUM_EPOINTCLOUDPIVOTTYPE(op) \
	op(EPointCloudPivotType::Default) \
	op(EPointCloudPivotType::WorldOrigin) \
	op(EPointCloudPivotType::Center) \
	op(EPointCloudPivotType::CenterMinZ) 

enum class EPointCloudPivotType : uint8;
template<> struct TIsUEnumClass<EPointCloudPivotType> { enum { Value = true }; };
template<> POINTCLOUD_API UEnum* StaticEnum<EPointCloudPivotType>();

#define FOREACH_ENUM_EPOINTCLOUDREPORTLEVEL(op) \
	op(EPointCloudReportLevel::Basic) \
	op(EPointCloudReportLevel::Properties) \
	op(EPointCloudReportLevel::Values) 

enum class EPointCloudReportLevel : uint8;
template<> struct TIsUEnumClass<EPointCloudReportLevel> { enum { Value = true }; };
template<> POINTCLOUD_API UEnum* StaticEnum<EPointCloudReportLevel>();

#define FOREACH_ENUM_EPOINTCLOUDRELOADBEHAVIOR(op) \
	op(EPointCloudReloadBehavior::DontReload) \
	op(EPointCloudReloadBehavior::ReloadOnRun) 

enum class EPointCloudReloadBehavior : uint8;
template<> struct TIsUEnumClass<EPointCloudReloadBehavior> { enum { Value = true }; };
template<> POINTCLOUD_API UEnum* StaticEnum<EPointCloudReloadBehavior>();

#define FOREACH_ENUM_EPOINTCLOUDREPORTMODE(op) \
	op(EPointCloudReportMode::Invalid) \
	op(EPointCloudReportMode::Report) \
	op(EPointCloudReportMode::Execute) \
	op(EPointCloudReportMode::ReportAndExecute) 

enum class EPointCloudReportMode : uint8;
template<> struct TIsUEnumClass<EPointCloudReportMode> { enum { Value = true }; };
template<> POINTCLOUD_API UEnum* StaticEnum<EPointCloudReportMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
