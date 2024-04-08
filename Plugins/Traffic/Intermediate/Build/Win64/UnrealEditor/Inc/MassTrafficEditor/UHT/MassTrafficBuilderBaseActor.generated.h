// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficBuilderBaseActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UPointCloud;
class UPointCloudView;
class UZoneShapeComponent;
enum class EMassTrafficSpecialConnectionType : uint8;
enum class EMassTrafficUser : uint8;
struct FLinearColor;
struct FMassTrafficDebugLineSegment;
struct FMassTrafficDebugPoint;
struct FMassTrafficIntersection;
struct FMassTrafficPoint;
struct FMassTrafficPointHints;
struct FMassTrafficRoadSegment;
struct FMassTrafficRoadSpline;
struct FZoneGraphTagMask;
struct FZoneLaneProfileRef;
#ifdef MASSTRAFFICEDITOR_MassTrafficBuilderBaseActor_generated_h
#error "MassTrafficBuilderBaseActor.generated.h already included, missing '#pragma once' in MassTrafficBuilderBaseActor.h"
#endif
#define MASSTRAFFICEDITOR_MassTrafficBuilderBaseActor_generated_h

#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_21_SPARSE_DATA
#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearAll); \
	DECLARE_FUNCTION(execBuildZoneShapeAsIntersection); \
	DECLARE_FUNCTION(execBuildZoneShapeAsRoadSpline); \
	DECLARE_FUNCTION(execBuildZoneShapeAsRoadSegment); \
	DECLARE_FUNCTION(execMarkAllCrosswalkRoadSegments); \
	DECLARE_FUNCTION(execGetRuleProcessorPoints); \
	DECLARE_FUNCTION(execGetPointHints); \
	DECLARE_FUNCTION(execAddPointHints); \
	DECLARE_FUNCTION(execCompareLaneWidthsOnIntersectionLinks); \
	DECLARE_FUNCTION(execCompareNumberOfLanesOnIntersectionLinks); \
	DECLARE_FUNCTION(execSegmentCrossesRoadEnteringOrLeavingIntersectionSide); \
	DECLARE_FUNCTION(execClearLanesFromIntersectionLink); \
	DECLARE_FUNCTION(execAddIntersectionLinkForwardAndUpVectors); \
	DECLARE_FUNCTION(execAddIntersectionCenter); \
	DECLARE_FUNCTION(execAddIntersectionLink); \
	DECLARE_FUNCTION(execAddIntersection); \
	DECLARE_FUNCTION(execStringToSpecialConnectionType); \
	DECLARE_FUNCTION(execChopUpAllRoadSplines); \
	DECLARE_FUNCTION(execAdjustTangentsForCoincidentRoadSplineEndPoints); \
	DECLARE_FUNCTION(execLoopAllClosedRoadSplines); \
	DECLARE_FUNCTION(execAddRoadSplinePoint); \
	DECLARE_FUNCTION(execAddRoadSpline); \
	DECLARE_FUNCTION(execAddRoadSegment); \
	DECLARE_FUNCTION(execVectorToMapKey); \
	DECLARE_FUNCTION(execFindAsQuaternion); \
	DECLARE_FUNCTION(execFindAsVector); \
	DECLARE_FUNCTION(execFindAsFloat); \
	DECLARE_FUNCTION(execFindAsInt); \
	DECLARE_FUNCTION(execFindAsBool); \
	DECLARE_FUNCTION(execFindAsName); \
	DECLARE_FUNCTION(execFindAsString); \
	DECLARE_FUNCTION(execClearDebug); \
	DECLARE_FUNCTION(execDrawDebugLineSegments); \
	DECLARE_FUNCTION(execDrawDebugPoints); \
	DECLARE_FUNCTION(execDrawDebugLineSegment); \
	DECLARE_FUNCTION(execDrawDebugPoint); \
	DECLARE_FUNCTION(execAddDebugErrorMarker); \
	DECLARE_FUNCTION(execAddDebugMarker); \
	DECLARE_FUNCTION(execJitterPoint); \
	DECLARE_FUNCTION(execJitterColor); \
	DECLARE_FUNCTION(execMakeDebugColorFromID); \
	DECLARE_FUNCTION(execConvertVectorFromHoudini); \
	DECLARE_FUNCTION(execConvertPositionFromHoudini); \
	DECLARE_FUNCTION(execFlatVectorToFlatRightVector);


#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_21_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMassTrafficBuilderBaseActor(); \
	friend struct Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics; \
public: \
	DECLARE_CLASS(AMassTrafficBuilderBaseActor, AMassTrafficEditorBaseActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassTrafficEditor"), NO_API) \
	DECLARE_SERIALIZER(AMassTrafficBuilderBaseActor)


#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMassTrafficBuilderBaseActor(AMassTrafficBuilderBaseActor&&); \
	NO_API AMassTrafficBuilderBaseActor(const AMassTrafficBuilderBaseActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMassTrafficBuilderBaseActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMassTrafficBuilderBaseActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMassTrafficBuilderBaseActor) \
	NO_API virtual ~AMassTrafficBuilderBaseActor();


#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_18_PROLOG
#define FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_21_SPARSE_DATA \
	FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_21_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_21_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSTRAFFICEDITOR_API UClass* StaticClass<class AMassTrafficBuilderBaseActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
