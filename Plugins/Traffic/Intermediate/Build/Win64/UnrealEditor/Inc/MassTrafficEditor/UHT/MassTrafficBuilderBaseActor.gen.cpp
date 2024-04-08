// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficEditor/Public/MassTrafficBuilderBaseActor.h"
#include "MassTrafficEditor/Public/MassTrafficBuilderTypes.h"
#include "ZoneGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficBuilderBaseActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MASSTRAFFICEDITOR_API UClass* Z_Construct_UClass_AMassTrafficBuilderBaseActor();
	MASSTRAFFICEDITOR_API UClass* Z_Construct_UClass_AMassTrafficBuilderBaseActor_NoRegister();
	MASSTRAFFICEDITOR_API UClass* Z_Construct_UClass_AMassTrafficEditorBaseActor();
	MASSTRAFFICEDITOR_API UEnum* Z_Construct_UEnum_MassTrafficEditor_EMassTrafficBuildType();
	MASSTRAFFICEDITOR_API UEnum* Z_Construct_UEnum_MassTrafficEditor_EMassTrafficSpecialConnectionType();
	MASSTRAFFICEDITOR_API UEnum* Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser();
	MASSTRAFFICEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficDebugLineSegment();
	MASSTRAFFICEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficDebugPoint();
	MASSTRAFFICEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey();
	MASSTRAFFICEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficIntersection();
	MASSTRAFFICEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficIntersectionMapKey();
	MASSTRAFFICEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPoint();
	MASSTRAFFICEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPointHints();
	MASSTRAFFICEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficRoadSegment();
	MASSTRAFFICEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficRoadSegmentMapKey();
	MASSTRAFFICEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficRoadSpline();
	MASSTRAFFICEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficRoadSplineMapKey();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloud_NoRegister();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudView_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassTrafficEditor();
	ZONEGRAPH_API UClass* Z_Construct_UClass_UZoneShapeComponent_NoRegister();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTag();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagMask();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneLaneProfileRef();
// End Cross Module References
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execClearAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execBuildZoneShapeAsIntersection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Label);
		P_GET_STRUCT_REF(FMassTrafficIntersection,Z_Param_Out_Intersection);
		P_GET_TARRAY(FZoneLaneProfileRef,Z_Param_PerPointZoneLaneProfileRefs);
		P_GET_TARRAY(bool,Z_Param_DoReverseZoneLaneProfiles);
		P_GET_UBOOL(Z_Param_bAutomaticallySetConnectionRestrictionsWithSpecialConnections);
		P_GET_UBOOL(Z_Param_bUseArcsForLanes);
		P_GET_STRUCT(FZoneGraphTagMask,Z_Param_ZoneGraphTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UZoneShapeComponent**)Z_Param__Result=P_THIS->BuildZoneShapeAsIntersection(Z_Param_Label,Z_Param_Out_Intersection,Z_Param_PerPointZoneLaneProfileRefs,Z_Param_DoReverseZoneLaneProfiles,Z_Param_bAutomaticallySetConnectionRestrictionsWithSpecialConnections,Z_Param_bUseArcsForLanes,Z_Param_ZoneGraphTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execBuildZoneShapeAsRoadSpline)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Label);
		P_GET_STRUCT_REF(FMassTrafficRoadSpline,Z_Param_Out_RoadSpline);
		P_GET_STRUCT(FZoneLaneProfileRef,Z_Param_ZoneLaneProfileRef);
		P_GET_UBOOL(Z_Param_bDoReverseZoneLaneProfile);
		P_GET_STRUCT(FZoneGraphTagMask,Z_Param_ZoneGraphTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UZoneShapeComponent**)Z_Param__Result=P_THIS->BuildZoneShapeAsRoadSpline(Z_Param_Label,Z_Param_Out_RoadSpline,Z_Param_ZoneLaneProfileRef,Z_Param_bDoReverseZoneLaneProfile,Z_Param_ZoneGraphTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execBuildZoneShapeAsRoadSegment)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Label);
		P_GET_STRUCT_REF(FMassTrafficRoadSegment,Z_Param_Out_RoadSegment);
		P_GET_STRUCT(FZoneLaneProfileRef,Z_Param_ZoneLaneProfileRef);
		P_GET_UBOOL(Z_Param_bDoReverseZoneLaneProfile);
		P_GET_STRUCT(FZoneGraphTagMask,Z_Param_ZoneGraphTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UZoneShapeComponent**)Z_Param__Result=P_THIS->BuildZoneShapeAsRoadSegment(Z_Param_Label,Z_Param_Out_RoadSegment,Z_Param_ZoneLaneProfileRef,Z_Param_bDoReverseZoneLaneProfile,Z_Param_ZoneGraphTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execMarkAllCrosswalkRoadSegments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MarkAllCrosswalkRoadSegments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execGetRuleProcessorPoints)
	{
		P_GET_OBJECT(UPointCloud,Z_Param_PointCloud);
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_Transforms);
		P_GET_TARRAY_REF(int32,Z_Param_Out_IDs);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPointCloudView**)Z_Param__Result=P_THIS->GetRuleProcessorPoints(Z_Param_PointCloud,Z_Param_Out_Transforms,Z_Param_Out_IDs,Z_Param_Out_bIsValid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execGetPointHints)
	{
		P_GET_STRUCT(FVector,Z_Param_Point);
		P_GET_STRUCT_REF(FMassTrafficPointHints,Z_Param_Out_PointHints);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointHints(Z_Param_Point,Z_Param_Out_PointHints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execAddPointHints)
	{
		P_GET_STRUCT(FVector,Z_Param_Point);
		P_GET_UBOOL(Z_Param_bIsRoadSegmentPoint);
		P_GET_UBOOL(Z_Param_bIsRoadSegmentStartPoint);
		P_GET_UBOOL(Z_Param_bIsRoadSegmentEndPoint);
		P_GET_UBOOL(Z_Param_bIsRoadSplinePoint);
		P_GET_UBOOL(Z_Param_bIsIntersectionLinkPoint);
		P_GET_UBOOL(Z_Param_bIsIntersectionCenterPoint);
		P_GET_PROPERTY(FStrProperty,Z_Param_RoadSegmentID);
		P_GET_PROPERTY(FStrProperty,Z_Param_RoadSplineID);
		P_GET_PROPERTY(FStrProperty,Z_Param_IntersectionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPointHints(Z_Param_Point,Z_Param_bIsRoadSegmentPoint,Z_Param_bIsRoadSegmentStartPoint,Z_Param_bIsRoadSegmentEndPoint,Z_Param_bIsRoadSplinePoint,Z_Param_bIsIntersectionLinkPoint,Z_Param_bIsIntersectionCenterPoint,Z_Param_RoadSegmentID,Z_Param_RoadSplineID,Z_Param_IntersectionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execCompareLaneWidthsOnIntersectionLinks)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IntersectionID1);
		P_GET_ENUM(EMassTrafficUser,Z_Param_User1);
		P_GET_PROPERTY(FIntProperty,Z_Param_IntersectionSequenceNumber1);
		P_GET_PROPERTY(FStrProperty,Z_Param_IntersectionID2);
		P_GET_ENUM(EMassTrafficUser,Z_Param_User2);
		P_GET_PROPERTY(FIntProperty,Z_Param_IntersectionSequenceNumber2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CompareLaneWidthsOnIntersectionLinks(Z_Param_IntersectionID1,EMassTrafficUser(Z_Param_User1),Z_Param_IntersectionSequenceNumber1,Z_Param_IntersectionID2,EMassTrafficUser(Z_Param_User2),Z_Param_IntersectionSequenceNumber2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execCompareNumberOfLanesOnIntersectionLinks)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IntersectionID1);
		P_GET_ENUM(EMassTrafficUser,Z_Param_User1);
		P_GET_PROPERTY(FIntProperty,Z_Param_IntersectionSequenceNumber1);
		P_GET_PROPERTY(FStrProperty,Z_Param_IntersectionID2);
		P_GET_ENUM(EMassTrafficUser,Z_Param_User2);
		P_GET_PROPERTY(FIntProperty,Z_Param_IntersectionSequenceNumber2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CompareNumberOfLanesOnIntersectionLinks(Z_Param_IntersectionID1,EMassTrafficUser(Z_Param_User1),Z_Param_IntersectionSequenceNumber1,Z_Param_IntersectionID2,EMassTrafficUser(Z_Param_User2),Z_Param_IntersectionSequenceNumber2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execSegmentCrossesRoadEnteringOrLeavingIntersectionSide)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IntersectionID);
		P_GET_ENUM(EMassTrafficUser,Z_Param_User);
		P_GET_STRUCT(FVector,Z_Param_SegmentPointA);
		P_GET_STRUCT(FVector,Z_Param_SegmentPointB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SegmentCrossesRoadEnteringOrLeavingIntersectionSide(Z_Param_IntersectionID,EMassTrafficUser(Z_Param_User),Z_Param_SegmentPointA,Z_Param_SegmentPointB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execClearLanesFromIntersectionLink)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IntersectionID);
		P_GET_ENUM(EMassTrafficUser,Z_Param_User);
		P_GET_PROPERTY(FIntProperty,Z_Param_IntersectionSequenceNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearLanesFromIntersectionLink(Z_Param_IntersectionID,EMassTrafficUser(Z_Param_User),Z_Param_IntersectionSequenceNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execAddIntersectionLinkForwardAndUpVectors)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IntersectionID);
		P_GET_PROPERTY(FIntProperty,Z_Param_IntersectionSequenceNumber);
		P_GET_STRUCT(FVector,Z_Param_ForwardVector);
		P_GET_STRUCT(FVector,Z_Param_UpVector);
		P_GET_ENUM(EMassTrafficUser,Z_Param_User);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddIntersectionLinkForwardAndUpVectors(Z_Param_IntersectionID,Z_Param_IntersectionSequenceNumber,Z_Param_ForwardVector,Z_Param_UpVector,EMassTrafficUser(Z_Param_User));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execAddIntersectionCenter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IntersectionID);
		P_GET_STRUCT(FVector,Z_Param_Point);
		P_GET_ENUM(EMassTrafficUser,Z_Param_User);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddIntersectionCenter(Z_Param_IntersectionID,Z_Param_Point,EMassTrafficUser(Z_Param_User));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execAddIntersectionLink)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IntersectionID);
		P_GET_PROPERTY(FIntProperty,Z_Param_IntersectionSequenceNumber);
		P_GET_STRUCT(FMassTrafficPoint,Z_Param_Point);
		P_GET_PROPERTY(FStrProperty,Z_Param_ConnectedIntersectionID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ConnectedIntersectionSequenceNumber);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfLanes);
		P_GET_UBOOL(Z_Param_bHasCenterDivider);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LaneWidthCM);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CenterDividerWidthCM);
		P_GET_UBOOL(Z_Param_bIsUnidirectional);
		P_GET_UBOOL(Z_Param_bHasTrafficLight);
		P_GET_STRUCT(FVector,Z_Param_TrafficLightPosition);
		P_GET_ENUM(EMassTrafficSpecialConnectionType,Z_Param_SpecialConnectionType);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserDensity);
		P_GET_ENUM(EMassTrafficUser,Z_Param_User);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddIntersectionLink(Z_Param_IntersectionID,Z_Param_IntersectionSequenceNumber,Z_Param_Point,Z_Param_ConnectedIntersectionID,Z_Param_ConnectedIntersectionSequenceNumber,Z_Param_NumberOfLanes,Z_Param_bHasCenterDivider,Z_Param_LaneWidthCM,Z_Param_CenterDividerWidthCM,Z_Param_bIsUnidirectional,Z_Param_bHasTrafficLight,Z_Param_TrafficLightPosition,EMassTrafficSpecialConnectionType(Z_Param_SpecialConnectionType),Z_Param_UserDensity,EMassTrafficUser(Z_Param_User));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execAddIntersection)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IntersectionID);
		P_GET_PROPERTY(FStrProperty,Z_Param_ParentIntersectionID);
		P_GET_UBOOL(Z_Param_bCanSupportLongVehicles);
		P_GET_UBOOL(Z_Param_bIsFreeway);
		P_GET_UBOOL(Z_Param_bIsMainPartOfFreeway);
		P_GET_UBOOL(Z_Param_bIsFreewayOnramp);
		P_GET_UBOOL(Z_Param_bIsFreewayOfframp);
		P_GET_ENUM(EMassTrafficUser,Z_Param_User);
		P_GET_UBOOL(Z_Param_bIsCrosswalk);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddIntersection(Z_Param_IntersectionID,Z_Param_ParentIntersectionID,Z_Param_bCanSupportLongVehicles,Z_Param_bIsFreeway,Z_Param_bIsMainPartOfFreeway,Z_Param_bIsFreewayOnramp,Z_Param_bIsFreewayOfframp,EMassTrafficUser(Z_Param_User),Z_Param_bIsCrosswalk);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execStringToSpecialConnectionType)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMassTrafficSpecialConnectionType*)Z_Param__Result=P_THIS->StringToSpecialConnectionType(Z_Param_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execChopUpAllRoadSplines)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxPointsInChunk);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxAngleInChunk);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChopUpAllRoadSplines(Z_Param_MaxPointsInChunk,Z_Param_MaxAngleInChunk);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execAdjustTangentsForCoincidentRoadSplineEndPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustTangentsForCoincidentRoadSplineEndPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execLoopAllClosedRoadSplines)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoopAllClosedRoadSplines();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execAddRoadSplinePoint)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RoadSpineID);
		P_GET_PROPERTY(FIntProperty,Z_Param_RoadSplineSequenceNumber);
		P_GET_STRUCT(FMassTrafficPoint,Z_Param_Point);
		P_GET_ENUM(EMassTrafficUser,Z_Param_User);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRoadSplinePoint(Z_Param_RoadSpineID,Z_Param_RoadSplineSequenceNumber,Z_Param_Point,EMassTrafficUser(Z_Param_User));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execAddRoadSpline)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RoadSplineID);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfLanes);
		P_GET_UBOOL(Z_Param_bHasCenterDivider);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LaneWidthCM);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CenterDividerWidthCM);
		P_GET_UBOOL(Z_Param_bIsUnidirectional);
		P_GET_UBOOL(Z_Param_bIsClosed);
		P_GET_UBOOL(Z_Param_bCanSupportLongVehicles);
		P_GET_UBOOL(Z_Param_bIsFreeway);
		P_GET_UBOOL(Z_Param_bIsMainPartOfFreeway);
		P_GET_UBOOL(Z_Param_bIsFreewayOnramp);
		P_GET_UBOOL(Z_Param_bIsFreewayOfframp);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserDensity);
		P_GET_ENUM(EMassTrafficUser,Z_Param_User);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRoadSpline(Z_Param_RoadSplineID,Z_Param_NumberOfLanes,Z_Param_bHasCenterDivider,Z_Param_LaneWidthCM,Z_Param_CenterDividerWidthCM,Z_Param_bIsUnidirectional,Z_Param_bIsClosed,Z_Param_bCanSupportLongVehicles,Z_Param_bIsFreeway,Z_Param_bIsMainPartOfFreeway,Z_Param_bIsFreewayOnramp,Z_Param_bIsFreewayOfframp,Z_Param_UserDensity,EMassTrafficUser(Z_Param_User));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execAddRoadSegment)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RoadSegmentID);
		P_GET_STRUCT(FMassTrafficPoint,Z_Param_StartPoint);
		P_GET_STRUCT(FMassTrafficPoint,Z_Param_EndPoint);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfLanes);
		P_GET_UBOOL(Z_Param_bHasCenterDivider);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LaneWidthCM);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CenterDividerWidthCM);
		P_GET_UBOOL(Z_Param_bCanSupportLongVehicles);
		P_GET_UBOOL(Z_Param_bIsFreeway);
		P_GET_UBOOL(Z_Param_bIsMainPartOfFreeway);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserDensity);
		P_GET_ENUM(EMassTrafficUser,Z_Param_User);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRoadSegment(Z_Param_RoadSegmentID,Z_Param_StartPoint,Z_Param_EndPoint,Z_Param_NumberOfLanes,Z_Param_bHasCenterDivider,Z_Param_LaneWidthCM,Z_Param_CenterDividerWidthCM,Z_Param_bCanSupportLongVehicles,Z_Param_bIsFreeway,Z_Param_bIsMainPartOfFreeway,Z_Param_UserDensity,EMassTrafficUser(Z_Param_User));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execVectorToMapKey)
	{
		P_GET_STRUCT(FVector,Z_Param_Vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->VectorToMapKey(Z_Param_Vector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execFindAsQuaternion)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_StringMap);
		P_GET_PROPERTY(FStrProperty,Z_Param_WKey);
		P_GET_PROPERTY(FStrProperty,Z_Param_XKey);
		P_GET_PROPERTY(FStrProperty,Z_Param_YKey);
		P_GET_PROPERTY(FStrProperty,Z_Param_ZKey);
		P_GET_STRUCT(FQuat,Z_Param_Default);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValid);
		P_GET_UBOOL(Z_Param_bDoAllowMissingKeys);
		P_GET_UBOOL(Z_Param_bDoPrintErrors);
		P_GET_UBOOL(Z_Param_bDoCheckForNaNs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=P_THIS->FindAsQuaternion(Z_Param_Out_StringMap,Z_Param_WKey,Z_Param_XKey,Z_Param_YKey,Z_Param_ZKey,Z_Param_Default,Z_Param_Out_bIsValid,Z_Param_bDoAllowMissingKeys,Z_Param_bDoPrintErrors,Z_Param_bDoCheckForNaNs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execFindAsVector)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_StringMap);
		P_GET_PROPERTY(FStrProperty,Z_Param_XKey);
		P_GET_PROPERTY(FStrProperty,Z_Param_YKey);
		P_GET_PROPERTY(FStrProperty,Z_Param_ZKey);
		P_GET_STRUCT(FVector,Z_Param_Default);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValid);
		P_GET_UBOOL(Z_Param_bDoAllowMissingKeys);
		P_GET_UBOOL(Z_Param_bDoPrintErrors);
		P_GET_UBOOL(Z_Param_bDoCheckForNaNs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->FindAsVector(Z_Param_Out_StringMap,Z_Param_XKey,Z_Param_YKey,Z_Param_ZKey,Z_Param_Default,Z_Param_Out_bIsValid,Z_Param_bDoAllowMissingKeys,Z_Param_bDoPrintErrors,Z_Param_bDoCheckForNaNs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execFindAsFloat)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_StringMap);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Default);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValid);
		P_GET_UBOOL(Z_Param_bDoAllowMissingKey);
		P_GET_UBOOL(Z_Param_bDoPrintErrors);
		P_GET_UBOOL(Z_Param_bDoCheckForNaNs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->FindAsFloat(Z_Param_Out_StringMap,Z_Param_Key,Z_Param_Default,Z_Param_Out_bIsValid,Z_Param_bDoAllowMissingKey,Z_Param_bDoPrintErrors,Z_Param_bDoCheckForNaNs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execFindAsInt)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_StringMap);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_Default);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValid);
		P_GET_UBOOL(Z_Param_bDoAllowMissingKey);
		P_GET_UBOOL(Z_Param_bDoPrintErrors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FindAsInt(Z_Param_Out_StringMap,Z_Param_Key,Z_Param_Default,Z_Param_Out_bIsValid,Z_Param_bDoAllowMissingKey,Z_Param_bDoPrintErrors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execFindAsBool)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_StringMap);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_UBOOL(Z_Param_Default);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValid);
		P_GET_UBOOL(Z_Param_bDoAllowMissingKey);
		P_GET_UBOOL(Z_Param_bDoPrintErrors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindAsBool(Z_Param_Out_StringMap,Z_Param_Key,Z_Param_Default,Z_Param_Out_bIsValid,Z_Param_bDoAllowMissingKey,Z_Param_bDoPrintErrors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execFindAsName)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_StringMap);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FNameProperty,Z_Param_Default);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValid);
		P_GET_UBOOL(Z_Param_bDoAllowMissingKey);
		P_GET_UBOOL(Z_Param_bDoPrintErrors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->FindAsName(Z_Param_Out_StringMap,Z_Param_Key,Z_Param_Default,Z_Param_Out_bIsValid,Z_Param_bDoAllowMissingKey,Z_Param_bDoPrintErrors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execFindAsString)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_StringMap);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Default);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValid);
		P_GET_UBOOL(Z_Param_bDoAllowMissingKey);
		P_GET_UBOOL(Z_Param_bDoPrintErrors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->FindAsString(Z_Param_Out_StringMap,Z_Param_Key,Z_Param_Default,Z_Param_Out_bIsValid,Z_Param_bDoAllowMissingKey,Z_Param_bDoPrintErrors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execClearDebug)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearDebug();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execDrawDebugLineSegments)
	{
		P_GET_TARRAY_REF(FMassTrafficDebugLineSegment,Z_Param_Out_DebugLineSegments);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawDebugLineSegments(Z_Param_Out_DebugLineSegments);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execDrawDebugPoints)
	{
		P_GET_TARRAY_REF(FMassTrafficDebugPoint,Z_Param_Out_DebugPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawDebugPoints(Z_Param_Out_DebugPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execDrawDebugLineSegment)
	{
		P_GET_STRUCT(FMassTrafficDebugLineSegment,Z_Param_DebugLineSegment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawDebugLineSegment(Z_Param_DebugLineSegment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execDrawDebugPoint)
	{
		P_GET_STRUCT(FMassTrafficDebugPoint,Z_Param_DebugPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawDebugPoint(Z_Param_DebugPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execAddDebugErrorMarker)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_ID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Error);
		P_GET_PROPERTY(FStrProperty,Z_Param_Caller);
		P_GET_PROPERTY(FIntProperty,Z_Param_SequenceNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDebugErrorMarker(Z_Param_Location,Z_Param_Prefix,Z_Param_ID,Z_Param_Error,Z_Param_Caller,Z_Param_SequenceNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execAddDebugMarker)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_ID);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDebugMarker(Z_Param_Location,Z_Param_Prefix,Z_Param_ID,Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execJitterPoint)
	{
		P_GET_STRUCT(FVector,Z_Param_Point);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->JitterPoint(Z_Param_Point);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execJitterColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->JitterColor(Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execMakeDebugColorFromID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ID);
		P_GET_STRUCT(FLinearColor,Z_Param_ColorTint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->MakeDebugColorFromID(Z_Param_ID,Z_Param_ColorTint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execConvertVectorFromHoudini)
	{
		P_GET_STRUCT(FVector,Z_Param_Vector);
		P_GET_UBOOL(Z_Param_bDoConvert);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->ConvertVectorFromHoudini(Z_Param_Vector,Z_Param_bDoConvert);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execConvertPositionFromHoudini)
	{
		P_GET_STRUCT(FVector,Z_Param_Vector);
		P_GET_UBOOL(Z_Param_bDoConvert);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->ConvertPositionFromHoudini(Z_Param_Vector,Z_Param_bDoConvert);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficBuilderBaseActor::execFlatVectorToFlatRightVector)
	{
		P_GET_STRUCT(FVector,Z_Param_Vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->FlatVectorToFlatRightVector(Z_Param_Vector);
		P_NATIVE_END;
	}
	void AMassTrafficBuilderBaseActor::StaticRegisterNativesAMassTrafficBuilderBaseActor()
	{
		UClass* Class = AMassTrafficBuilderBaseActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDebugErrorMarker", &AMassTrafficBuilderBaseActor::execAddDebugErrorMarker },
			{ "AddDebugMarker", &AMassTrafficBuilderBaseActor::execAddDebugMarker },
			{ "AddIntersection", &AMassTrafficBuilderBaseActor::execAddIntersection },
			{ "AddIntersectionCenter", &AMassTrafficBuilderBaseActor::execAddIntersectionCenter },
			{ "AddIntersectionLink", &AMassTrafficBuilderBaseActor::execAddIntersectionLink },
			{ "AddIntersectionLinkForwardAndUpVectors", &AMassTrafficBuilderBaseActor::execAddIntersectionLinkForwardAndUpVectors },
			{ "AddPointHints", &AMassTrafficBuilderBaseActor::execAddPointHints },
			{ "AddRoadSegment", &AMassTrafficBuilderBaseActor::execAddRoadSegment },
			{ "AddRoadSpline", &AMassTrafficBuilderBaseActor::execAddRoadSpline },
			{ "AddRoadSplinePoint", &AMassTrafficBuilderBaseActor::execAddRoadSplinePoint },
			{ "AdjustTangentsForCoincidentRoadSplineEndPoints", &AMassTrafficBuilderBaseActor::execAdjustTangentsForCoincidentRoadSplineEndPoints },
			{ "BuildZoneShapeAsIntersection", &AMassTrafficBuilderBaseActor::execBuildZoneShapeAsIntersection },
			{ "BuildZoneShapeAsRoadSegment", &AMassTrafficBuilderBaseActor::execBuildZoneShapeAsRoadSegment },
			{ "BuildZoneShapeAsRoadSpline", &AMassTrafficBuilderBaseActor::execBuildZoneShapeAsRoadSpline },
			{ "ChopUpAllRoadSplines", &AMassTrafficBuilderBaseActor::execChopUpAllRoadSplines },
			{ "ClearAll", &AMassTrafficBuilderBaseActor::execClearAll },
			{ "ClearDebug", &AMassTrafficBuilderBaseActor::execClearDebug },
			{ "ClearLanesFromIntersectionLink", &AMassTrafficBuilderBaseActor::execClearLanesFromIntersectionLink },
			{ "CompareLaneWidthsOnIntersectionLinks", &AMassTrafficBuilderBaseActor::execCompareLaneWidthsOnIntersectionLinks },
			{ "CompareNumberOfLanesOnIntersectionLinks", &AMassTrafficBuilderBaseActor::execCompareNumberOfLanesOnIntersectionLinks },
			{ "ConvertPositionFromHoudini", &AMassTrafficBuilderBaseActor::execConvertPositionFromHoudini },
			{ "ConvertVectorFromHoudini", &AMassTrafficBuilderBaseActor::execConvertVectorFromHoudini },
			{ "DrawDebugLineSegment", &AMassTrafficBuilderBaseActor::execDrawDebugLineSegment },
			{ "DrawDebugLineSegments", &AMassTrafficBuilderBaseActor::execDrawDebugLineSegments },
			{ "DrawDebugPoint", &AMassTrafficBuilderBaseActor::execDrawDebugPoint },
			{ "DrawDebugPoints", &AMassTrafficBuilderBaseActor::execDrawDebugPoints },
			{ "FindAsBool", &AMassTrafficBuilderBaseActor::execFindAsBool },
			{ "FindAsFloat", &AMassTrafficBuilderBaseActor::execFindAsFloat },
			{ "FindAsInt", &AMassTrafficBuilderBaseActor::execFindAsInt },
			{ "FindAsName", &AMassTrafficBuilderBaseActor::execFindAsName },
			{ "FindAsQuaternion", &AMassTrafficBuilderBaseActor::execFindAsQuaternion },
			{ "FindAsString", &AMassTrafficBuilderBaseActor::execFindAsString },
			{ "FindAsVector", &AMassTrafficBuilderBaseActor::execFindAsVector },
			{ "FlatVectorToFlatRightVector", &AMassTrafficBuilderBaseActor::execFlatVectorToFlatRightVector },
			{ "GetPointHints", &AMassTrafficBuilderBaseActor::execGetPointHints },
			{ "GetRuleProcessorPoints", &AMassTrafficBuilderBaseActor::execGetRuleProcessorPoints },
			{ "JitterColor", &AMassTrafficBuilderBaseActor::execJitterColor },
			{ "JitterPoint", &AMassTrafficBuilderBaseActor::execJitterPoint },
			{ "LoopAllClosedRoadSplines", &AMassTrafficBuilderBaseActor::execLoopAllClosedRoadSplines },
			{ "MakeDebugColorFromID", &AMassTrafficBuilderBaseActor::execMakeDebugColorFromID },
			{ "MarkAllCrosswalkRoadSegments", &AMassTrafficBuilderBaseActor::execMarkAllCrosswalkRoadSegments },
			{ "SegmentCrossesRoadEnteringOrLeavingIntersectionSide", &AMassTrafficBuilderBaseActor::execSegmentCrossesRoadEnteringOrLeavingIntersectionSide },
			{ "StringToSpecialConnectionType", &AMassTrafficBuilderBaseActor::execStringToSpecialConnectionType },
			{ "VectorToMapKey", &AMassTrafficBuilderBaseActor::execVectorToMapKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugErrorMarker_Statics
	{
		struct MassTrafficBuilderBaseActor_eventAddDebugErrorMarker_Parms
		{
			FVector Location;
			FString Prefix;
			FString ID;
			FString Error;
			FString Caller;
			int32 SequenceNumber;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Caller;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SequenceNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugErrorMarker_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddDebugErrorMarker_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugErrorMarker_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddDebugErrorMarker_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugErrorMarker_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddDebugErrorMarker_Parms, ID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugErrorMarker_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddDebugErrorMarker_Parms, Error), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugErrorMarker_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddDebugErrorMarker_Parms, Caller), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugErrorMarker_Statics::NewProp_SequenceNumber = { "SequenceNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddDebugErrorMarker_Parms, SequenceNumber), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugErrorMarker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugErrorMarker_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugErrorMarker_Statics::NewProp_Prefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugErrorMarker_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugErrorMarker_Statics::NewProp_Error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugErrorMarker_Statics::NewProp_Caller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugErrorMarker_Statics::NewProp_SequenceNumber,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugErrorMarker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds an 'error marker' - which is a special 'debug marker' (see above.)\n\x09 * Provides an additional error string, caller names, and a 'sequence number' used if the error regards sequenced data.\n\x09 * Also prints error to log, whether or not DoAddDebugMarkers is true.\n\x09 */" },
#endif
		{ "CPP_Default_SequenceNumber", "-1" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds an 'error marker' - which is a special 'debug marker' (see above.)\nProvides an additional error string, caller names, and a 'sequence number' used if the error regards sequenced data.\nAlso prints error to log, whether or not DoAddDebugMarkers is true." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugErrorMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "AddDebugErrorMarker", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugErrorMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugErrorMarker_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugErrorMarker_Statics::MassTrafficBuilderBaseActor_eventAddDebugErrorMarker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugErrorMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugErrorMarker_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugErrorMarker_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugErrorMarker_Statics::MassTrafficBuilderBaseActor_eventAddDebugErrorMarker_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugErrorMarker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugErrorMarker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugMarker_Statics
	{
		struct MassTrafficBuilderBaseActor_eventAddDebugMarker_Parms
		{
			FVector Location;
			FString Prefix;
			FString ID;
			FLinearColor Color;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugMarker_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddDebugMarker_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugMarker_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddDebugMarker_Parms, Prefix), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugMarker_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddDebugMarker_Parms, ID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugMarker_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddDebugMarker_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugMarker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugMarker_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugMarker_Statics::NewProp_Prefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugMarker_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugMarker_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugMarker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds a 'debug marker' - which is a line segment pointing to a problem area, and a MassTrafficBuilderMarkerActor.\n\x09 * The text in the marker actor is former from Prefix and ID.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a 'debug marker' - which is a line segment pointing to a problem area, and a MassTrafficBuilderMarkerActor.\nThe text in the marker actor is former from Prefix and ID." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "AddDebugMarker", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugMarker_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugMarker_Statics::MassTrafficBuilderBaseActor_eventAddDebugMarker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugMarker_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugMarker_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugMarker_Statics::MassTrafficBuilderBaseActor_eventAddDebugMarker_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugMarker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugMarker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics
	{
		struct MassTrafficBuilderBaseActor_eventAddIntersection_Parms
		{
			FString IntersectionID;
			FString ParentIntersectionID;
			bool bCanSupportLongVehicles;
			bool bIsFreeway;
			bool bIsMainPartOfFreeway;
			bool bIsFreewayOnramp;
			bool bIsFreewayOfframp;
			EMassTrafficUser User;
			bool bIsCrosswalk;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_IntersectionID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParentIntersectionID;
		static void NewProp_bCanSupportLongVehicles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanSupportLongVehicles;
		static void NewProp_bIsFreeway_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFreeway;
		static void NewProp_bIsMainPartOfFreeway_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMainPartOfFreeway;
		static void NewProp_bIsFreewayOnramp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFreewayOnramp;
		static void NewProp_bIsFreewayOfframp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFreewayOfframp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_User_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_User;
		static void NewProp_bIsCrosswalk_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCrosswalk;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_IntersectionID = { "IntersectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddIntersection_Parms, IntersectionID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_ParentIntersectionID = { "ParentIntersectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddIntersection_Parms, ParentIntersectionID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_bCanSupportLongVehicles_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventAddIntersection_Parms*)Obj)->bCanSupportLongVehicles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_bCanSupportLongVehicles = { "bCanSupportLongVehicles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventAddIntersection_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_bCanSupportLongVehicles_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_bIsFreeway_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventAddIntersection_Parms*)Obj)->bIsFreeway = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_bIsFreeway = { "bIsFreeway", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventAddIntersection_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_bIsFreeway_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_bIsMainPartOfFreeway_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventAddIntersection_Parms*)Obj)->bIsMainPartOfFreeway = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_bIsMainPartOfFreeway = { "bIsMainPartOfFreeway", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventAddIntersection_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_bIsMainPartOfFreeway_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_bIsFreewayOnramp_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventAddIntersection_Parms*)Obj)->bIsFreewayOnramp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_bIsFreewayOnramp = { "bIsFreewayOnramp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventAddIntersection_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_bIsFreewayOnramp_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_bIsFreewayOfframp_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventAddIntersection_Parms*)Obj)->bIsFreewayOfframp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_bIsFreewayOfframp = { "bIsFreewayOfframp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventAddIntersection_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_bIsFreewayOfframp_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_User_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddIntersection_Parms, User), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser, METADATA_PARAMS(0, nullptr) }; // 3485938918
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_bIsCrosswalk_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventAddIntersection_Parms*)Obj)->bIsCrosswalk = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_bIsCrosswalk = { "bIsCrosswalk", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventAddIntersection_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_bIsCrosswalk_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_IntersectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_ParentIntersectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_bCanSupportLongVehicles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_bIsFreeway,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_bIsMainPartOfFreeway,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_bIsFreewayOnramp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_bIsFreewayOfframp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_User_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_User,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::NewProp_bIsCrosswalk,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Intersections" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds an intersection to the internal intersections map. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds an intersection to the internal intersections map." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "AddIntersection", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::MassTrafficBuilderBaseActor_eventAddIntersection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::MassTrafficBuilderBaseActor_eventAddIntersection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionCenter_Statics
	{
		struct MassTrafficBuilderBaseActor_eventAddIntersectionCenter_Parms
		{
			FString IntersectionID;
			FVector Point;
			EMassTrafficUser User;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_IntersectionID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FBytePropertyParams NewProp_User_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_User;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionCenter_Statics::NewProp_IntersectionID = { "IntersectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddIntersectionCenter_Parms, IntersectionID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionCenter_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddIntersectionCenter_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionCenter_Statics::NewProp_User_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionCenter_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddIntersectionCenter_Parms, User), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser, METADATA_PARAMS(0, nullptr) }; // 3485938918
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionCenter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionCenter_Statics::NewProp_IntersectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionCenter_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionCenter_Statics::NewProp_User_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionCenter_Statics::NewProp_User,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionCenter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Intersections" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds a center pointer to an intersection. The intersection must have been previously already be added. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a center pointer to an intersection. The intersection must have been previously already be added." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "AddIntersectionCenter", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionCenter_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionCenter_Statics::MassTrafficBuilderBaseActor_eventAddIntersectionCenter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionCenter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionCenter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionCenter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionCenter_Statics::MassTrafficBuilderBaseActor_eventAddIntersectionCenter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics
	{
		struct MassTrafficBuilderBaseActor_eventAddIntersectionLink_Parms
		{
			FString IntersectionID;
			int32 IntersectionSequenceNumber;
			FMassTrafficPoint Point;
			FString ConnectedIntersectionID;
			int32 ConnectedIntersectionSequenceNumber;
			int32 NumberOfLanes;
			bool bHasCenterDivider;
			float LaneWidthCM;
			float CenterDividerWidthCM;
			bool bIsUnidirectional;
			bool bHasTrafficLight;
			FVector TrafficLightPosition;
			EMassTrafficSpecialConnectionType SpecialConnectionType;
			int32 UserDensity;
			EMassTrafficUser User;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_IntersectionID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntersectionSequenceNumber;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectedIntersectionID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConnectedIntersectionSequenceNumber;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfLanes;
		static void NewProp_bHasCenterDivider_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCenterDivider;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LaneWidthCM;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CenterDividerWidthCM;
		static void NewProp_bIsUnidirectional_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUnidirectional;
		static void NewProp_bHasTrafficLight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasTrafficLight;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrafficLightPosition;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpecialConnectionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpecialConnectionType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserDensity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_User_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_User;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_IntersectionID = { "IntersectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddIntersectionLink_Parms, IntersectionID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_IntersectionSequenceNumber = { "IntersectionSequenceNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddIntersectionLink_Parms, IntersectionSequenceNumber), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddIntersectionLink_Parms, Point), Z_Construct_UScriptStruct_FMassTrafficPoint, METADATA_PARAMS(0, nullptr) }; // 2283559416
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_ConnectedIntersectionID = { "ConnectedIntersectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddIntersectionLink_Parms, ConnectedIntersectionID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_ConnectedIntersectionSequenceNumber = { "ConnectedIntersectionSequenceNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddIntersectionLink_Parms, ConnectedIntersectionSequenceNumber), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_NumberOfLanes = { "NumberOfLanes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddIntersectionLink_Parms, NumberOfLanes), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_bHasCenterDivider_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventAddIntersectionLink_Parms*)Obj)->bHasCenterDivider = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_bHasCenterDivider = { "bHasCenterDivider", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventAddIntersectionLink_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_bHasCenterDivider_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_LaneWidthCM = { "LaneWidthCM", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddIntersectionLink_Parms, LaneWidthCM), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_CenterDividerWidthCM = { "CenterDividerWidthCM", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddIntersectionLink_Parms, CenterDividerWidthCM), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_bIsUnidirectional_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventAddIntersectionLink_Parms*)Obj)->bIsUnidirectional = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_bIsUnidirectional = { "bIsUnidirectional", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventAddIntersectionLink_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_bIsUnidirectional_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_bHasTrafficLight_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventAddIntersectionLink_Parms*)Obj)->bHasTrafficLight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_bHasTrafficLight = { "bHasTrafficLight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventAddIntersectionLink_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_bHasTrafficLight_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_TrafficLightPosition = { "TrafficLightPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddIntersectionLink_Parms, TrafficLightPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_SpecialConnectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_SpecialConnectionType = { "SpecialConnectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddIntersectionLink_Parms, SpecialConnectionType), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficSpecialConnectionType, METADATA_PARAMS(0, nullptr) }; // 1010026627
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_UserDensity = { "UserDensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddIntersectionLink_Parms, UserDensity), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_User_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddIntersectionLink_Parms, User), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser, METADATA_PARAMS(0, nullptr) }; // 3485938918
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_IntersectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_IntersectionSequenceNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_ConnectedIntersectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_ConnectedIntersectionSequenceNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_NumberOfLanes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_bHasCenterDivider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_LaneWidthCM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_CenterDividerWidthCM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_bIsUnidirectional,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_bHasTrafficLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_TrafficLightPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_SpecialConnectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_SpecialConnectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_UserDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_User_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::NewProp_User,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Intersections" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds an intersection link (intersection side) to an intersection. The intersection must have been previously already be added. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds an intersection link (intersection side) to an intersection. The intersection must have been previously already be added." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "AddIntersectionLink", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::MassTrafficBuilderBaseActor_eventAddIntersectionLink_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::MassTrafficBuilderBaseActor_eventAddIntersectionLink_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors_Statics
	{
		struct MassTrafficBuilderBaseActor_eventAddIntersectionLinkForwardAndUpVectors_Parms
		{
			FString IntersectionID;
			int32 IntersectionSequenceNumber;
			FVector ForwardVector;
			FVector UpVector;
			EMassTrafficUser User;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_IntersectionID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntersectionSequenceNumber;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardVector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpVector;
		static const UECodeGen_Private::FBytePropertyParams NewProp_User_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_User;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors_Statics::NewProp_IntersectionID = { "IntersectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddIntersectionLinkForwardAndUpVectors_Parms, IntersectionID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors_Statics::NewProp_IntersectionSequenceNumber = { "IntersectionSequenceNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddIntersectionLinkForwardAndUpVectors_Parms, IntersectionSequenceNumber), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors_Statics::NewProp_ForwardVector = { "ForwardVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddIntersectionLinkForwardAndUpVectors_Parms, ForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors_Statics::NewProp_UpVector = { "UpVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddIntersectionLinkForwardAndUpVectors_Parms, UpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors_Statics::NewProp_User_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddIntersectionLinkForwardAndUpVectors_Parms, User), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser, METADATA_PARAMS(0, nullptr) }; // 3485938918
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventAddIntersectionLinkForwardAndUpVectors_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventAddIntersectionLinkForwardAndUpVectors_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors_Statics::NewProp_IntersectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors_Statics::NewProp_IntersectionSequenceNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors_Statics::NewProp_ForwardVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors_Statics::NewProp_UpVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors_Statics::NewProp_User_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors_Statics::NewProp_User,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Intersections" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds forward and up vectors an intersection. The intersection must have been previously already be added. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds forward and up vectors an intersection. The intersection must have been previously already be added." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "AddIntersectionLinkForwardAndUpVectors", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors_Statics::MassTrafficBuilderBaseActor_eventAddIntersectionLinkForwardAndUpVectors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors_Statics::MassTrafficBuilderBaseActor_eventAddIntersectionLinkForwardAndUpVectors_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics
	{
		struct MassTrafficBuilderBaseActor_eventAddPointHints_Parms
		{
			FVector Point;
			bool bIsRoadSegmentPoint;
			bool bIsRoadSegmentStartPoint;
			bool bIsRoadSegmentEndPoint;
			bool bIsRoadSplinePoint;
			bool bIsIntersectionLinkPoint;
			bool bIsIntersectionCenterPoint;
			FString RoadSegmentID;
			FString RoadSplineID;
			FString IntersectionID;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static void NewProp_bIsRoadSegmentPoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRoadSegmentPoint;
		static void NewProp_bIsRoadSegmentStartPoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRoadSegmentStartPoint;
		static void NewProp_bIsRoadSegmentEndPoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRoadSegmentEndPoint;
		static void NewProp_bIsRoadSplinePoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRoadSplinePoint;
		static void NewProp_bIsIntersectionLinkPoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsIntersectionLinkPoint;
		static void NewProp_bIsIntersectionCenterPoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsIntersectionCenterPoint;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoadSegmentID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoadSplineID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_IntersectionID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddPointHints_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_bIsRoadSegmentPoint_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventAddPointHints_Parms*)Obj)->bIsRoadSegmentPoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_bIsRoadSegmentPoint = { "bIsRoadSegmentPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventAddPointHints_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_bIsRoadSegmentPoint_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_bIsRoadSegmentStartPoint_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventAddPointHints_Parms*)Obj)->bIsRoadSegmentStartPoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_bIsRoadSegmentStartPoint = { "bIsRoadSegmentStartPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventAddPointHints_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_bIsRoadSegmentStartPoint_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_bIsRoadSegmentEndPoint_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventAddPointHints_Parms*)Obj)->bIsRoadSegmentEndPoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_bIsRoadSegmentEndPoint = { "bIsRoadSegmentEndPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventAddPointHints_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_bIsRoadSegmentEndPoint_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_bIsRoadSplinePoint_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventAddPointHints_Parms*)Obj)->bIsRoadSplinePoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_bIsRoadSplinePoint = { "bIsRoadSplinePoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventAddPointHints_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_bIsRoadSplinePoint_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_bIsIntersectionLinkPoint_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventAddPointHints_Parms*)Obj)->bIsIntersectionLinkPoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_bIsIntersectionLinkPoint = { "bIsIntersectionLinkPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventAddPointHints_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_bIsIntersectionLinkPoint_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_bIsIntersectionCenterPoint_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventAddPointHints_Parms*)Obj)->bIsIntersectionCenterPoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_bIsIntersectionCenterPoint = { "bIsIntersectionCenterPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventAddPointHints_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_bIsIntersectionCenterPoint_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_RoadSegmentID = { "RoadSegmentID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddPointHints_Parms, RoadSegmentID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_RoadSplineID = { "RoadSplineID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddPointHints_Parms, RoadSplineID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_IntersectionID = { "IntersectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddPointHints_Parms, IntersectionID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_bIsRoadSegmentPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_bIsRoadSegmentStartPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_bIsRoadSegmentEndPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_bIsRoadSplinePoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_bIsIntersectionLinkPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_bIsIntersectionCenterPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_RoadSegmentID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_RoadSplineID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::NewProp_IntersectionID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Point Hints" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds hints about a point in space. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds hints about a point in space." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "AddPointHints", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::MassTrafficBuilderBaseActor_eventAddPointHints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::MassTrafficBuilderBaseActor_eventAddPointHints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics
	{
		struct MassTrafficBuilderBaseActor_eventAddRoadSegment_Parms
		{
			FString RoadSegmentID;
			FMassTrafficPoint StartPoint;
			FMassTrafficPoint EndPoint;
			int32 NumberOfLanes;
			bool bHasCenterDivider;
			float LaneWidthCM;
			float CenterDividerWidthCM;
			bool bCanSupportLongVehicles;
			bool bIsFreeway;
			bool bIsMainPartOfFreeway;
			int32 UserDensity;
			EMassTrafficUser User;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoadSegmentID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoint;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfLanes;
		static void NewProp_bHasCenterDivider_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCenterDivider;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LaneWidthCM;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CenterDividerWidthCM;
		static void NewProp_bCanSupportLongVehicles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanSupportLongVehicles;
		static void NewProp_bIsFreeway_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFreeway;
		static void NewProp_bIsMainPartOfFreeway_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMainPartOfFreeway;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserDensity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_User_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_User;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_RoadSegmentID = { "RoadSegmentID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddRoadSegment_Parms, RoadSegmentID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddRoadSegment_Parms, StartPoint), Z_Construct_UScriptStruct_FMassTrafficPoint, METADATA_PARAMS(0, nullptr) }; // 2283559416
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddRoadSegment_Parms, EndPoint), Z_Construct_UScriptStruct_FMassTrafficPoint, METADATA_PARAMS(0, nullptr) }; // 2283559416
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_NumberOfLanes = { "NumberOfLanes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddRoadSegment_Parms, NumberOfLanes), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_bHasCenterDivider_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventAddRoadSegment_Parms*)Obj)->bHasCenterDivider = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_bHasCenterDivider = { "bHasCenterDivider", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventAddRoadSegment_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_bHasCenterDivider_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_LaneWidthCM = { "LaneWidthCM", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddRoadSegment_Parms, LaneWidthCM), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_CenterDividerWidthCM = { "CenterDividerWidthCM", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddRoadSegment_Parms, CenterDividerWidthCM), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_bCanSupportLongVehicles_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventAddRoadSegment_Parms*)Obj)->bCanSupportLongVehicles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_bCanSupportLongVehicles = { "bCanSupportLongVehicles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventAddRoadSegment_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_bCanSupportLongVehicles_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_bIsFreeway_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventAddRoadSegment_Parms*)Obj)->bIsFreeway = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_bIsFreeway = { "bIsFreeway", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventAddRoadSegment_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_bIsFreeway_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_bIsMainPartOfFreeway_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventAddRoadSegment_Parms*)Obj)->bIsMainPartOfFreeway = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_bIsMainPartOfFreeway = { "bIsMainPartOfFreeway", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventAddRoadSegment_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_bIsMainPartOfFreeway_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_UserDensity = { "UserDensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddRoadSegment_Parms, UserDensity), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_User_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddRoadSegment_Parms, User), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser, METADATA_PARAMS(0, nullptr) }; // 3485938918
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_RoadSegmentID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_StartPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_EndPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_NumberOfLanes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_bHasCenterDivider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_LaneWidthCM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_CenterDividerWidthCM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_bCanSupportLongVehicles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_bIsFreeway,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_bIsMainPartOfFreeway,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_UserDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_User_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::NewProp_User,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Road Segments" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds a road segment to the internal road segments map. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a road segment to the internal road segments map." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "AddRoadSegment", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::MassTrafficBuilderBaseActor_eventAddRoadSegment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::MassTrafficBuilderBaseActor_eventAddRoadSegment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics
	{
		struct MassTrafficBuilderBaseActor_eventAddRoadSpline_Parms
		{
			FString RoadSplineID;
			int32 NumberOfLanes;
			bool bHasCenterDivider;
			float LaneWidthCM;
			float CenterDividerWidthCM;
			bool bIsUnidirectional;
			bool bIsClosed;
			bool bCanSupportLongVehicles;
			bool bIsFreeway;
			bool bIsMainPartOfFreeway;
			bool bIsFreewayOnramp;
			bool bIsFreewayOfframp;
			int32 UserDensity;
			EMassTrafficUser User;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoadSplineID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfLanes;
		static void NewProp_bHasCenterDivider_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCenterDivider;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LaneWidthCM;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CenterDividerWidthCM;
		static void NewProp_bIsUnidirectional_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUnidirectional;
		static void NewProp_bIsClosed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsClosed;
		static void NewProp_bCanSupportLongVehicles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanSupportLongVehicles;
		static void NewProp_bIsFreeway_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFreeway;
		static void NewProp_bIsMainPartOfFreeway_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMainPartOfFreeway;
		static void NewProp_bIsFreewayOnramp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFreewayOnramp;
		static void NewProp_bIsFreewayOfframp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFreewayOfframp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserDensity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_User_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_User;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_RoadSplineID = { "RoadSplineID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddRoadSpline_Parms, RoadSplineID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_NumberOfLanes = { "NumberOfLanes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddRoadSpline_Parms, NumberOfLanes), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bHasCenterDivider_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventAddRoadSpline_Parms*)Obj)->bHasCenterDivider = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bHasCenterDivider = { "bHasCenterDivider", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventAddRoadSpline_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bHasCenterDivider_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_LaneWidthCM = { "LaneWidthCM", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddRoadSpline_Parms, LaneWidthCM), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_CenterDividerWidthCM = { "CenterDividerWidthCM", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddRoadSpline_Parms, CenterDividerWidthCM), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bIsUnidirectional_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventAddRoadSpline_Parms*)Obj)->bIsUnidirectional = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bIsUnidirectional = { "bIsUnidirectional", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventAddRoadSpline_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bIsUnidirectional_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bIsClosed_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventAddRoadSpline_Parms*)Obj)->bIsClosed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bIsClosed = { "bIsClosed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventAddRoadSpline_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bIsClosed_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bCanSupportLongVehicles_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventAddRoadSpline_Parms*)Obj)->bCanSupportLongVehicles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bCanSupportLongVehicles = { "bCanSupportLongVehicles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventAddRoadSpline_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bCanSupportLongVehicles_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bIsFreeway_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventAddRoadSpline_Parms*)Obj)->bIsFreeway = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bIsFreeway = { "bIsFreeway", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventAddRoadSpline_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bIsFreeway_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bIsMainPartOfFreeway_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventAddRoadSpline_Parms*)Obj)->bIsMainPartOfFreeway = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bIsMainPartOfFreeway = { "bIsMainPartOfFreeway", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventAddRoadSpline_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bIsMainPartOfFreeway_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bIsFreewayOnramp_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventAddRoadSpline_Parms*)Obj)->bIsFreewayOnramp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bIsFreewayOnramp = { "bIsFreewayOnramp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventAddRoadSpline_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bIsFreewayOnramp_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bIsFreewayOfframp_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventAddRoadSpline_Parms*)Obj)->bIsFreewayOfframp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bIsFreewayOfframp = { "bIsFreewayOfframp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventAddRoadSpline_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bIsFreewayOfframp_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_UserDensity = { "UserDensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddRoadSpline_Parms, UserDensity), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_User_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddRoadSpline_Parms, User), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser, METADATA_PARAMS(0, nullptr) }; // 3485938918
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_RoadSplineID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_NumberOfLanes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bHasCenterDivider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_LaneWidthCM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_CenterDividerWidthCM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bIsUnidirectional,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bIsClosed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bCanSupportLongVehicles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bIsFreeway,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bIsMainPartOfFreeway,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bIsFreewayOnramp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_bIsFreewayOfframp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_UserDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_User_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::NewProp_User,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Road Splines" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds a road spline to the internal road splines map. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a road spline to the internal road splines map." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "AddRoadSpline", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::MassTrafficBuilderBaseActor_eventAddRoadSpline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::MassTrafficBuilderBaseActor_eventAddRoadSpline_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSplinePoint_Statics
	{
		struct MassTrafficBuilderBaseActor_eventAddRoadSplinePoint_Parms
		{
			FString RoadSpineID;
			int32 RoadSplineSequenceNumber;
			FMassTrafficPoint Point;
			EMassTrafficUser User;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoadSpineID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RoadSplineSequenceNumber;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FBytePropertyParams NewProp_User_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_User;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSplinePoint_Statics::NewProp_RoadSpineID = { "RoadSpineID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddRoadSplinePoint_Parms, RoadSpineID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSplinePoint_Statics::NewProp_RoadSplineSequenceNumber = { "RoadSplineSequenceNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddRoadSplinePoint_Parms, RoadSplineSequenceNumber), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSplinePoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddRoadSplinePoint_Parms, Point), Z_Construct_UScriptStruct_FMassTrafficPoint, METADATA_PARAMS(0, nullptr) }; // 2283559416
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSplinePoint_Statics::NewProp_User_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSplinePoint_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventAddRoadSplinePoint_Parms, User), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser, METADATA_PARAMS(0, nullptr) }; // 3485938918
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSplinePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSplinePoint_Statics::NewProp_RoadSpineID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSplinePoint_Statics::NewProp_RoadSplineSequenceNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSplinePoint_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSplinePoint_Statics::NewProp_User_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSplinePoint_Statics::NewProp_User,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Road Splines" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds a point to a road spline. The road spline must have been previously already be added. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a point to a road spline. The road spline must have been previously already be added." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "AddRoadSplinePoint", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSplinePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSplinePoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSplinePoint_Statics::MassTrafficBuilderBaseActor_eventAddRoadSplinePoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSplinePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSplinePoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSplinePoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSplinePoint_Statics::MassTrafficBuilderBaseActor_eventAddRoadSplinePoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AdjustTangentsForCoincidentRoadSplineEndPoints_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AdjustTangentsForCoincidentRoadSplineEndPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Road Splines" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Finds road splines that are joined head-to-tail or tail-to-head, and adjusts the end-point tangents to be smooth.\n\x09 * An end-point of a road spline is considered joined to the end-point on another spline when these points are coincident.\n\x09 * (Splines with joined heads or joined tails are ignored.)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds road splines that are joined head-to-tail or tail-to-head, and adjusts the end-point tangents to be smooth.\nAn end-point of a road spline is considered joined to the end-point on another spline when these points are coincident.\n(Splines with joined heads or joined tails are ignored.)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AdjustTangentsForCoincidentRoadSplineEndPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "AdjustTangentsForCoincidentRoadSplineEndPoints", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AdjustTangentsForCoincidentRoadSplineEndPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AdjustTangentsForCoincidentRoadSplineEndPoints_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AdjustTangentsForCoincidentRoadSplineEndPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AdjustTangentsForCoincidentRoadSplineEndPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics
	{
		struct MassTrafficBuilderBaseActor_eventBuildZoneShapeAsIntersection_Parms
		{
			FName Label;
			FMassTrafficIntersection Intersection;
			TArray<FZoneLaneProfileRef> PerPointZoneLaneProfileRefs;
			TArray<bool> DoReverseZoneLaneProfiles;
			bool bAutomaticallySetConnectionRestrictionsWithSpecialConnections;
			bool bUseArcsForLanes;
			FZoneGraphTagMask ZoneGraphTags;
			UZoneShapeComponent* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Label;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intersection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Intersection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerPointZoneLaneProfileRefs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PerPointZoneLaneProfileRefs;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoReverseZoneLaneProfiles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DoReverseZoneLaneProfiles;
		static void NewProp_bAutomaticallySetConnectionRestrictionsWithSpecialConnections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallySetConnectionRestrictionsWithSpecialConnections;
		static void NewProp_bUseArcsForLanes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseArcsForLanes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneGraphTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventBuildZoneShapeAsIntersection_Parms, Label), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_Intersection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_Intersection = { "Intersection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventBuildZoneShapeAsIntersection_Parms, Intersection), Z_Construct_UScriptStruct_FMassTrafficIntersection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_Intersection_MetaData), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_Intersection_MetaData) }; // 1807554690
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_PerPointZoneLaneProfileRefs_Inner = { "PerPointZoneLaneProfileRefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FZoneLaneProfileRef, METADATA_PARAMS(0, nullptr) }; // 3751612976
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_PerPointZoneLaneProfileRefs = { "PerPointZoneLaneProfileRefs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventBuildZoneShapeAsIntersection_Parms, PerPointZoneLaneProfileRefs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3751612976
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_DoReverseZoneLaneProfiles_Inner = { "DoReverseZoneLaneProfiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_DoReverseZoneLaneProfiles = { "DoReverseZoneLaneProfiles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventBuildZoneShapeAsIntersection_Parms, DoReverseZoneLaneProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_bAutomaticallySetConnectionRestrictionsWithSpecialConnections_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventBuildZoneShapeAsIntersection_Parms*)Obj)->bAutomaticallySetConnectionRestrictionsWithSpecialConnections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_bAutomaticallySetConnectionRestrictionsWithSpecialConnections = { "bAutomaticallySetConnectionRestrictionsWithSpecialConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventBuildZoneShapeAsIntersection_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_bAutomaticallySetConnectionRestrictionsWithSpecialConnections_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_bUseArcsForLanes_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventBuildZoneShapeAsIntersection_Parms*)Obj)->bUseArcsForLanes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_bUseArcsForLanes = { "bUseArcsForLanes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventBuildZoneShapeAsIntersection_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_bUseArcsForLanes_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_ZoneGraphTags = { "ZoneGraphTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventBuildZoneShapeAsIntersection_Parms, ZoneGraphTags), Z_Construct_UScriptStruct_FZoneGraphTagMask, METADATA_PARAMS(0, nullptr) }; // 2479371343
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventBuildZoneShapeAsIntersection_Parms, ReturnValue), Z_Construct_UClass_UZoneShapeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_Intersection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_PerPointZoneLaneProfileRefs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_PerPointZoneLaneProfileRefs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_DoReverseZoneLaneProfiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_DoReverseZoneLaneProfiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_bAutomaticallySetConnectionRestrictionsWithSpecialConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_bUseArcsForLanes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_ZoneGraphTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Zone Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Creates and builds a Zone Shape component as an intersection. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates and builds a Zone Shape component as an intersection." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "BuildZoneShapeAsIntersection", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::MassTrafficBuilderBaseActor_eventBuildZoneShapeAsIntersection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::MassTrafficBuilderBaseActor_eventBuildZoneShapeAsIntersection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics
	{
		struct MassTrafficBuilderBaseActor_eventBuildZoneShapeAsRoadSegment_Parms
		{
			FName Label;
			FMassTrafficRoadSegment RoadSegment;
			FZoneLaneProfileRef ZoneLaneProfileRef;
			bool bDoReverseZoneLaneProfile;
			FZoneGraphTagMask ZoneGraphTags;
			UZoneShapeComponent* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Label;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoadSegment_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoadSegment;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneLaneProfileRef;
		static void NewProp_bDoReverseZoneLaneProfile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoReverseZoneLaneProfile;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneGraphTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventBuildZoneShapeAsRoadSegment_Parms, Label), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::NewProp_RoadSegment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::NewProp_RoadSegment = { "RoadSegment", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventBuildZoneShapeAsRoadSegment_Parms, RoadSegment), Z_Construct_UScriptStruct_FMassTrafficRoadSegment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::NewProp_RoadSegment_MetaData), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::NewProp_RoadSegment_MetaData) }; // 3416794825
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::NewProp_ZoneLaneProfileRef = { "ZoneLaneProfileRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventBuildZoneShapeAsRoadSegment_Parms, ZoneLaneProfileRef), Z_Construct_UScriptStruct_FZoneLaneProfileRef, METADATA_PARAMS(0, nullptr) }; // 3751612976
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::NewProp_bDoReverseZoneLaneProfile_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventBuildZoneShapeAsRoadSegment_Parms*)Obj)->bDoReverseZoneLaneProfile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::NewProp_bDoReverseZoneLaneProfile = { "bDoReverseZoneLaneProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventBuildZoneShapeAsRoadSegment_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::NewProp_bDoReverseZoneLaneProfile_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::NewProp_ZoneGraphTags = { "ZoneGraphTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventBuildZoneShapeAsRoadSegment_Parms, ZoneGraphTags), Z_Construct_UScriptStruct_FZoneGraphTagMask, METADATA_PARAMS(0, nullptr) }; // 2479371343
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventBuildZoneShapeAsRoadSegment_Parms, ReturnValue), Z_Construct_UClass_UZoneShapeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::NewProp_RoadSegment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::NewProp_ZoneLaneProfileRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::NewProp_bDoReverseZoneLaneProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::NewProp_ZoneGraphTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Zone Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Creates and builds a Zone Shape component as a straight road segment. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates and builds a Zone Shape component as a straight road segment." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "BuildZoneShapeAsRoadSegment", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::MassTrafficBuilderBaseActor_eventBuildZoneShapeAsRoadSegment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::MassTrafficBuilderBaseActor_eventBuildZoneShapeAsRoadSegment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics
	{
		struct MassTrafficBuilderBaseActor_eventBuildZoneShapeAsRoadSpline_Parms
		{
			FName Label;
			FMassTrafficRoadSpline RoadSpline;
			FZoneLaneProfileRef ZoneLaneProfileRef;
			bool bDoReverseZoneLaneProfile;
			FZoneGraphTagMask ZoneGraphTags;
			UZoneShapeComponent* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Label;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoadSpline_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoadSpline;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneLaneProfileRef;
		static void NewProp_bDoReverseZoneLaneProfile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoReverseZoneLaneProfile;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneGraphTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventBuildZoneShapeAsRoadSpline_Parms, Label), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::NewProp_RoadSpline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::NewProp_RoadSpline = { "RoadSpline", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventBuildZoneShapeAsRoadSpline_Parms, RoadSpline), Z_Construct_UScriptStruct_FMassTrafficRoadSpline, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::NewProp_RoadSpline_MetaData), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::NewProp_RoadSpline_MetaData) }; // 3382057186
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::NewProp_ZoneLaneProfileRef = { "ZoneLaneProfileRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventBuildZoneShapeAsRoadSpline_Parms, ZoneLaneProfileRef), Z_Construct_UScriptStruct_FZoneLaneProfileRef, METADATA_PARAMS(0, nullptr) }; // 3751612976
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::NewProp_bDoReverseZoneLaneProfile_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventBuildZoneShapeAsRoadSpline_Parms*)Obj)->bDoReverseZoneLaneProfile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::NewProp_bDoReverseZoneLaneProfile = { "bDoReverseZoneLaneProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventBuildZoneShapeAsRoadSpline_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::NewProp_bDoReverseZoneLaneProfile_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::NewProp_ZoneGraphTags = { "ZoneGraphTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventBuildZoneShapeAsRoadSpline_Parms, ZoneGraphTags), Z_Construct_UScriptStruct_FZoneGraphTagMask, METADATA_PARAMS(0, nullptr) }; // 2479371343
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventBuildZoneShapeAsRoadSpline_Parms, ReturnValue), Z_Construct_UClass_UZoneShapeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::NewProp_RoadSpline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::NewProp_ZoneLaneProfileRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::NewProp_bDoReverseZoneLaneProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::NewProp_ZoneGraphTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Zone Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Creates and builds a Zone Shape component as a road spline. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates and builds a Zone Shape component as a road spline." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "BuildZoneShapeAsRoadSpline", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::MassTrafficBuilderBaseActor_eventBuildZoneShapeAsRoadSpline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::MassTrafficBuilderBaseActor_eventBuildZoneShapeAsRoadSpline_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ChopUpAllRoadSplines_Statics
	{
		struct MassTrafficBuilderBaseActor_eventChopUpAllRoadSplines_Parms
		{
			int32 MaxPointsInChunk;
			float MaxAngleInChunk;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPointsInChunk;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngleInChunk;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ChopUpAllRoadSplines_Statics::NewProp_MaxPointsInChunk = { "MaxPointsInChunk", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventChopUpAllRoadSplines_Parms, MaxPointsInChunk), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ChopUpAllRoadSplines_Statics::NewProp_MaxAngleInChunk = { "MaxAngleInChunk", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventChopUpAllRoadSplines_Parms, MaxAngleInChunk), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ChopUpAllRoadSplines_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ChopUpAllRoadSplines_Statics::NewProp_MaxPointsInChunk,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ChopUpAllRoadSplines_Statics::NewProp_MaxAngleInChunk,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ChopUpAllRoadSplines_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Road Splines" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*means ignore*/" },
#endif
		{ "CPP_Default_MaxAngleInChunk", "-1.000000" },
		{ "CPP_Default_MaxPointsInChunk", "-1" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "means ignore" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ChopUpAllRoadSplines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "ChopUpAllRoadSplines", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ChopUpAllRoadSplines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ChopUpAllRoadSplines_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ChopUpAllRoadSplines_Statics::MassTrafficBuilderBaseActor_eventChopUpAllRoadSplines_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ChopUpAllRoadSplines_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ChopUpAllRoadSplines_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ChopUpAllRoadSplines_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ChopUpAllRoadSplines_Statics::MassTrafficBuilderBaseActor_eventChopUpAllRoadSplines_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ChopUpAllRoadSplines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ChopUpAllRoadSplines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearAll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Zone Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Destroys all Zone Shape actors that:\n\x09 *   - Have been added.\n\x09 *   - Have the ZoneShapeTagName (see above) added as a tag.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destroys all Zone Shape actors that:\n  - Have been added.\n  - Have the ZoneShapeTagName (see above) added as a tag." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "ClearAll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearAll_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearDebug_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearDebug_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Destroys all actors that:\n\x09 *   - Are added as a child of us.\n\x09 *   - Have the DebugTagName (see above) added as a tag.\n\x09 * Also clears -\n\x09 *   - DebugMarkerLineSegments\n\x09 *   - PointHintsMap\n\x09 *   - RoadSegmentsMap.\n\x09 *   - RoadSplinesMap\n\x09 *   - IntersectionsMap\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destroys all actors that:\n  - Are added as a child of us.\n  - Have the DebugTagName (see above) added as a tag.\nAlso clears -\n  - DebugMarkerLineSegments\n  - PointHintsMap\n  - RoadSegmentsMap.\n  - RoadSplinesMap\n  - IntersectionsMap" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "ClearDebug", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearDebug_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearDebug_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearLanesFromIntersectionLink_Statics
	{
		struct MassTrafficBuilderBaseActor_eventClearLanesFromIntersectionLink_Parms
		{
			FString IntersectionID;
			EMassTrafficUser User;
			int32 IntersectionSequenceNumber;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_IntersectionID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_User_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_User;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntersectionSequenceNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearLanesFromIntersectionLink_Statics::NewProp_IntersectionID = { "IntersectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventClearLanesFromIntersectionLink_Parms, IntersectionID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearLanesFromIntersectionLink_Statics::NewProp_User_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearLanesFromIntersectionLink_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventClearLanesFromIntersectionLink_Parms, User), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser, METADATA_PARAMS(0, nullptr) }; // 3485938918
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearLanesFromIntersectionLink_Statics::NewProp_IntersectionSequenceNumber = { "IntersectionSequenceNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventClearLanesFromIntersectionLink_Parms, IntersectionSequenceNumber), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearLanesFromIntersectionLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearLanesFromIntersectionLink_Statics::NewProp_IntersectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearLanesFromIntersectionLink_Statics::NewProp_User_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearLanesFromIntersectionLink_Statics::NewProp_User,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearLanesFromIntersectionLink_Statics::NewProp_IntersectionSequenceNumber,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearLanesFromIntersectionLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Intersections" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Removes an intersection link (or intersection side) from an intersection. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes an intersection link (or intersection side) from an intersection." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearLanesFromIntersectionLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "ClearLanesFromIntersectionLink", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearLanesFromIntersectionLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearLanesFromIntersectionLink_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearLanesFromIntersectionLink_Statics::MassTrafficBuilderBaseActor_eventClearLanesFromIntersectionLink_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearLanesFromIntersectionLink_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearLanesFromIntersectionLink_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearLanesFromIntersectionLink_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearLanesFromIntersectionLink_Statics::MassTrafficBuilderBaseActor_eventClearLanesFromIntersectionLink_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearLanesFromIntersectionLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearLanesFromIntersectionLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics
	{
		struct MassTrafficBuilderBaseActor_eventCompareLaneWidthsOnIntersectionLinks_Parms
		{
			FString IntersectionID1;
			EMassTrafficUser User1;
			int32 IntersectionSequenceNumber1;
			FString IntersectionID2;
			EMassTrafficUser User2;
			int32 IntersectionSequenceNumber2;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_IntersectionID1;
		static const UECodeGen_Private::FBytePropertyParams NewProp_User1_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_User1;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntersectionSequenceNumber1;
		static const UECodeGen_Private::FStrPropertyParams NewProp_IntersectionID2;
		static const UECodeGen_Private::FBytePropertyParams NewProp_User2_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_User2;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntersectionSequenceNumber2;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::NewProp_IntersectionID1 = { "IntersectionID1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventCompareLaneWidthsOnIntersectionLinks_Parms, IntersectionID1), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::NewProp_User1_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::NewProp_User1 = { "User1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventCompareLaneWidthsOnIntersectionLinks_Parms, User1), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser, METADATA_PARAMS(0, nullptr) }; // 3485938918
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::NewProp_IntersectionSequenceNumber1 = { "IntersectionSequenceNumber1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventCompareLaneWidthsOnIntersectionLinks_Parms, IntersectionSequenceNumber1), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::NewProp_IntersectionID2 = { "IntersectionID2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventCompareLaneWidthsOnIntersectionLinks_Parms, IntersectionID2), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::NewProp_User2_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::NewProp_User2 = { "User2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventCompareLaneWidthsOnIntersectionLinks_Parms, User2), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser, METADATA_PARAMS(0, nullptr) }; // 3485938918
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::NewProp_IntersectionSequenceNumber2 = { "IntersectionSequenceNumber2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventCompareLaneWidthsOnIntersectionLinks_Parms, IntersectionSequenceNumber2), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventCompareLaneWidthsOnIntersectionLinks_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventCompareLaneWidthsOnIntersectionLinks_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::NewProp_IntersectionID1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::NewProp_User1_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::NewProp_User1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::NewProp_IntersectionSequenceNumber1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::NewProp_IntersectionID2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::NewProp_User2_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::NewProp_User2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::NewProp_IntersectionSequenceNumber2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Intersections" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "CompareLaneWidthsOnIntersectionLinks", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::MassTrafficBuilderBaseActor_eventCompareLaneWidthsOnIntersectionLinks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::MassTrafficBuilderBaseActor_eventCompareLaneWidthsOnIntersectionLinks_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics
	{
		struct MassTrafficBuilderBaseActor_eventCompareNumberOfLanesOnIntersectionLinks_Parms
		{
			FString IntersectionID1;
			EMassTrafficUser User1;
			int32 IntersectionSequenceNumber1;
			FString IntersectionID2;
			EMassTrafficUser User2;
			int32 IntersectionSequenceNumber2;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_IntersectionID1;
		static const UECodeGen_Private::FBytePropertyParams NewProp_User1_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_User1;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntersectionSequenceNumber1;
		static const UECodeGen_Private::FStrPropertyParams NewProp_IntersectionID2;
		static const UECodeGen_Private::FBytePropertyParams NewProp_User2_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_User2;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntersectionSequenceNumber2;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::NewProp_IntersectionID1 = { "IntersectionID1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventCompareNumberOfLanesOnIntersectionLinks_Parms, IntersectionID1), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::NewProp_User1_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::NewProp_User1 = { "User1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventCompareNumberOfLanesOnIntersectionLinks_Parms, User1), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser, METADATA_PARAMS(0, nullptr) }; // 3485938918
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::NewProp_IntersectionSequenceNumber1 = { "IntersectionSequenceNumber1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventCompareNumberOfLanesOnIntersectionLinks_Parms, IntersectionSequenceNumber1), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::NewProp_IntersectionID2 = { "IntersectionID2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventCompareNumberOfLanesOnIntersectionLinks_Parms, IntersectionID2), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::NewProp_User2_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::NewProp_User2 = { "User2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventCompareNumberOfLanesOnIntersectionLinks_Parms, User2), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser, METADATA_PARAMS(0, nullptr) }; // 3485938918
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::NewProp_IntersectionSequenceNumber2 = { "IntersectionSequenceNumber2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventCompareNumberOfLanesOnIntersectionLinks_Parms, IntersectionSequenceNumber2), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventCompareNumberOfLanesOnIntersectionLinks_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventCompareNumberOfLanesOnIntersectionLinks_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::NewProp_IntersectionID1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::NewProp_User1_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::NewProp_User1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::NewProp_IntersectionSequenceNumber1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::NewProp_IntersectionID2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::NewProp_User2_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::NewProp_User2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::NewProp_IntersectionSequenceNumber2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Intersections" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "CompareNumberOfLanesOnIntersectionLinks", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::MassTrafficBuilderBaseActor_eventCompareNumberOfLanesOnIntersectionLinks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::MassTrafficBuilderBaseActor_eventCompareNumberOfLanesOnIntersectionLinks_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertPositionFromHoudini_Statics
	{
		struct MassTrafficBuilderBaseActor_eventConvertPositionFromHoudini_Parms
		{
			FVector Vector;
			bool bDoConvert;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
		static void NewProp_bDoConvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoConvert;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertPositionFromHoudini_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventConvertPositionFromHoudini_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertPositionFromHoudini_Statics::NewProp_bDoConvert_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventConvertPositionFromHoudini_Parms*)Obj)->bDoConvert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertPositionFromHoudini_Statics::NewProp_bDoConvert = { "bDoConvert", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventConvertPositionFromHoudini_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertPositionFromHoudini_Statics::NewProp_bDoConvert_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertPositionFromHoudini_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventConvertPositionFromHoudini_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertPositionFromHoudini_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertPositionFromHoudini_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertPositionFromHoudini_Statics::NewProp_bDoConvert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertPositionFromHoudini_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertPositionFromHoudini_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Math" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Converts a position from Houdini coordinate space to Unreal coordinate space. */" },
#endif
		{ "CPP_Default_bDoConvert", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts a position from Houdini coordinate space to Unreal coordinate space." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertPositionFromHoudini_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "ConvertPositionFromHoudini", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertPositionFromHoudini_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertPositionFromHoudini_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertPositionFromHoudini_Statics::MassTrafficBuilderBaseActor_eventConvertPositionFromHoudini_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertPositionFromHoudini_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertPositionFromHoudini_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertPositionFromHoudini_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertPositionFromHoudini_Statics::MassTrafficBuilderBaseActor_eventConvertPositionFromHoudini_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertPositionFromHoudini()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertPositionFromHoudini_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertVectorFromHoudini_Statics
	{
		struct MassTrafficBuilderBaseActor_eventConvertVectorFromHoudini_Parms
		{
			FVector Vector;
			bool bDoConvert;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
		static void NewProp_bDoConvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoConvert;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertVectorFromHoudini_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventConvertVectorFromHoudini_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertVectorFromHoudini_Statics::NewProp_bDoConvert_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventConvertVectorFromHoudini_Parms*)Obj)->bDoConvert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertVectorFromHoudini_Statics::NewProp_bDoConvert = { "bDoConvert", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventConvertVectorFromHoudini_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertVectorFromHoudini_Statics::NewProp_bDoConvert_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertVectorFromHoudini_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventConvertVectorFromHoudini_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertVectorFromHoudini_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertVectorFromHoudini_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertVectorFromHoudini_Statics::NewProp_bDoConvert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertVectorFromHoudini_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertVectorFromHoudini_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Math" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Converts a vector (normal, direction, etc.) from Houdini coordinate space to Unreal coordinate space. */" },
#endif
		{ "CPP_Default_bDoConvert", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts a vector (normal, direction, etc.) from Houdini coordinate space to Unreal coordinate space." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertVectorFromHoudini_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "ConvertVectorFromHoudini", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertVectorFromHoudini_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertVectorFromHoudini_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertVectorFromHoudini_Statics::MassTrafficBuilderBaseActor_eventConvertVectorFromHoudini_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertVectorFromHoudini_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertVectorFromHoudini_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertVectorFromHoudini_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertVectorFromHoudini_Statics::MassTrafficBuilderBaseActor_eventConvertVectorFromHoudini_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertVectorFromHoudini()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertVectorFromHoudini_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegment_Statics
	{
		struct MassTrafficBuilderBaseActor_eventDrawDebugLineSegment_Parms
		{
			FMassTrafficDebugLineSegment DebugLineSegment;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugLineSegment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegment_Statics::NewProp_DebugLineSegment = { "DebugLineSegment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventDrawDebugLineSegment_Parms, DebugLineSegment), Z_Construct_UScriptStruct_FMassTrafficDebugLineSegment, METADATA_PARAMS(0, nullptr) }; // 1083092863
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegment_Statics::NewProp_DebugLineSegment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Draws a debug line segment. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draws a debug line segment." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "DrawDebugLineSegment", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegment_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegment_Statics::MassTrafficBuilderBaseActor_eventDrawDebugLineSegment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegment_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegment_Statics::MassTrafficBuilderBaseActor_eventDrawDebugLineSegment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegments_Statics
	{
		struct MassTrafficBuilderBaseActor_eventDrawDebugLineSegments_Parms
		{
			TArray<FMassTrafficDebugLineSegment> DebugLineSegments;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugLineSegments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugLineSegments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugLineSegments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegments_Statics::NewProp_DebugLineSegments_Inner = { "DebugLineSegments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMassTrafficDebugLineSegment, METADATA_PARAMS(0, nullptr) }; // 1083092863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegments_Statics::NewProp_DebugLineSegments_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegments_Statics::NewProp_DebugLineSegments = { "DebugLineSegments", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventDrawDebugLineSegments_Parms, DebugLineSegments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegments_Statics::NewProp_DebugLineSegments_MetaData), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegments_Statics::NewProp_DebugLineSegments_MetaData) }; // 1083092863
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegments_Statics::NewProp_DebugLineSegments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegments_Statics::NewProp_DebugLineSegments,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegments_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Draws debug line segments. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draws debug line segments." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "DrawDebugLineSegments", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegments_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegments_Statics::MassTrafficBuilderBaseActor_eventDrawDebugLineSegments_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegments_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegments_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegments_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegments_Statics::MassTrafficBuilderBaseActor_eventDrawDebugLineSegments_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoint_Statics
	{
		struct MassTrafficBuilderBaseActor_eventDrawDebugPoint_Parms
		{
			FMassTrafficDebugPoint DebugPoint;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoint_Statics::NewProp_DebugPoint = { "DebugPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventDrawDebugPoint_Parms, DebugPoint), Z_Construct_UScriptStruct_FMassTrafficDebugPoint, METADATA_PARAMS(0, nullptr) }; // 1262457682
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoint_Statics::NewProp_DebugPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Draws a debug point. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draws a debug point." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "DrawDebugPoint", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoint_Statics::MassTrafficBuilderBaseActor_eventDrawDebugPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoint_Statics::MassTrafficBuilderBaseActor_eventDrawDebugPoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoints_Statics
	{
		struct MassTrafficBuilderBaseActor_eventDrawDebugPoints_Parms
		{
			TArray<FMassTrafficDebugPoint> DebugPoints;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoints_Statics::NewProp_DebugPoints_Inner = { "DebugPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMassTrafficDebugPoint, METADATA_PARAMS(0, nullptr) }; // 1262457682
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoints_Statics::NewProp_DebugPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoints_Statics::NewProp_DebugPoints = { "DebugPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventDrawDebugPoints_Parms, DebugPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoints_Statics::NewProp_DebugPoints_MetaData), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoints_Statics::NewProp_DebugPoints_MetaData) }; // 1262457682
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoints_Statics::NewProp_DebugPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoints_Statics::NewProp_DebugPoints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Draws debug points. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draws debug points." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "DrawDebugPoints", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoints_Statics::MassTrafficBuilderBaseActor_eventDrawDebugPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoints_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoints_Statics::MassTrafficBuilderBaseActor_eventDrawDebugPoints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics
	{
		struct MassTrafficBuilderBaseActor_eventFindAsBool_Parms
		{
			TMap<FString,FString> StringMap;
			FString Key;
			bool Default;
			bool bIsValid;
			bool bDoAllowMissingKey;
			bool bDoPrintErrors;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StringMap;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static void NewProp_Default_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Default;
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
		static void NewProp_bDoAllowMissingKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoAllowMissingKey;
		static void NewProp_bDoPrintErrors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoPrintErrors;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_StringMap_ValueProp = { "StringMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_StringMap_Key_KeyProp = { "StringMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_StringMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_StringMap = { "StringMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsBool_Parms, StringMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_StringMap_MetaData), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_StringMap_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsBool_Parms, Key), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_Default_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventFindAsBool_Parms*)Obj)->Default = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventFindAsBool_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_Default_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventFindAsBool_Parms*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventFindAsBool_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_bDoAllowMissingKey_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventFindAsBool_Parms*)Obj)->bDoAllowMissingKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_bDoAllowMissingKey = { "bDoAllowMissingKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventFindAsBool_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_bDoAllowMissingKey_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_bDoPrintErrors_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventFindAsBool_Parms*)Obj)->bDoPrintErrors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_bDoPrintErrors = { "bDoPrintErrors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventFindAsBool_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_bDoPrintErrors_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventFindAsBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventFindAsBool_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_StringMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_StringMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_StringMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_Default,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_bIsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_bDoAllowMissingKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_bDoPrintErrors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Finds a bool, in a string-to-string map. */" },
#endif
		{ "CPP_Default_bDoAllowMissingKey", "false" },
		{ "CPP_Default_bDoPrintErrors", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds a bool, in a string-to-string map." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "FindAsBool", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::MassTrafficBuilderBaseActor_eventFindAsBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::MassTrafficBuilderBaseActor_eventFindAsBool_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics
	{
		struct MassTrafficBuilderBaseActor_eventFindAsFloat_Parms
		{
			TMap<FString,FString> StringMap;
			FString Key;
			float Default;
			bool bIsValid;
			bool bDoAllowMissingKey;
			bool bDoPrintErrors;
			bool bDoCheckForNaNs;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StringMap;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Default;
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
		static void NewProp_bDoAllowMissingKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoAllowMissingKey;
		static void NewProp_bDoPrintErrors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoPrintErrors;
		static void NewProp_bDoCheckForNaNs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoCheckForNaNs;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_StringMap_ValueProp = { "StringMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_StringMap_Key_KeyProp = { "StringMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_StringMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_StringMap = { "StringMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsFloat_Parms, StringMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_StringMap_MetaData), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_StringMap_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsFloat_Parms, Key), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsFloat_Parms, Default), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventFindAsFloat_Parms*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventFindAsFloat_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_bDoAllowMissingKey_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventFindAsFloat_Parms*)Obj)->bDoAllowMissingKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_bDoAllowMissingKey = { "bDoAllowMissingKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventFindAsFloat_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_bDoAllowMissingKey_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_bDoPrintErrors_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventFindAsFloat_Parms*)Obj)->bDoPrintErrors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_bDoPrintErrors = { "bDoPrintErrors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventFindAsFloat_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_bDoPrintErrors_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_bDoCheckForNaNs_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventFindAsFloat_Parms*)Obj)->bDoCheckForNaNs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_bDoCheckForNaNs = { "bDoCheckForNaNs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventFindAsFloat_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_bDoCheckForNaNs_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_StringMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_StringMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_StringMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_Default,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_bIsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_bDoAllowMissingKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_bDoPrintErrors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_bDoCheckForNaNs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Finds a float, in a string-to-string map. */" },
#endif
		{ "CPP_Default_bDoAllowMissingKey", "false" },
		{ "CPP_Default_bDoCheckForNaNs", "true" },
		{ "CPP_Default_bDoPrintErrors", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds a float, in a string-to-string map." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "FindAsFloat", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::MassTrafficBuilderBaseActor_eventFindAsFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::MassTrafficBuilderBaseActor_eventFindAsFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics
	{
		struct MassTrafficBuilderBaseActor_eventFindAsInt_Parms
		{
			TMap<FString,FString> StringMap;
			FString Key;
			int32 Default;
			bool bIsValid;
			bool bDoAllowMissingKey;
			bool bDoPrintErrors;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StringMap;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Default;
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
		static void NewProp_bDoAllowMissingKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoAllowMissingKey;
		static void NewProp_bDoPrintErrors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoPrintErrors;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::NewProp_StringMap_ValueProp = { "StringMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::NewProp_StringMap_Key_KeyProp = { "StringMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::NewProp_StringMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::NewProp_StringMap = { "StringMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsInt_Parms, StringMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::NewProp_StringMap_MetaData), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::NewProp_StringMap_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsInt_Parms, Key), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsInt_Parms, Default), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventFindAsInt_Parms*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventFindAsInt_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::NewProp_bDoAllowMissingKey_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventFindAsInt_Parms*)Obj)->bDoAllowMissingKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::NewProp_bDoAllowMissingKey = { "bDoAllowMissingKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventFindAsInt_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::NewProp_bDoAllowMissingKey_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::NewProp_bDoPrintErrors_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventFindAsInt_Parms*)Obj)->bDoPrintErrors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::NewProp_bDoPrintErrors = { "bDoPrintErrors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventFindAsInt_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::NewProp_bDoPrintErrors_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::NewProp_StringMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::NewProp_StringMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::NewProp_StringMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::NewProp_Default,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::NewProp_bIsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::NewProp_bDoAllowMissingKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::NewProp_bDoPrintErrors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Finds an int, in a string-to-string map. */" },
#endif
		{ "CPP_Default_bDoAllowMissingKey", "false" },
		{ "CPP_Default_bDoPrintErrors", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds an int, in a string-to-string map." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "FindAsInt", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::MassTrafficBuilderBaseActor_eventFindAsInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::MassTrafficBuilderBaseActor_eventFindAsInt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics
	{
		struct MassTrafficBuilderBaseActor_eventFindAsName_Parms
		{
			TMap<FString,FString> StringMap;
			FString Key;
			FName Default;
			bool bIsValid;
			bool bDoAllowMissingKey;
			bool bDoPrintErrors;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StringMap;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Default;
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
		static void NewProp_bDoAllowMissingKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoAllowMissingKey;
		static void NewProp_bDoPrintErrors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoPrintErrors;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::NewProp_StringMap_ValueProp = { "StringMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::NewProp_StringMap_Key_KeyProp = { "StringMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::NewProp_StringMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::NewProp_StringMap = { "StringMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsName_Parms, StringMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::NewProp_StringMap_MetaData), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::NewProp_StringMap_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsName_Parms, Key), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsName_Parms, Default), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventFindAsName_Parms*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventFindAsName_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::NewProp_bDoAllowMissingKey_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventFindAsName_Parms*)Obj)->bDoAllowMissingKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::NewProp_bDoAllowMissingKey = { "bDoAllowMissingKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventFindAsName_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::NewProp_bDoAllowMissingKey_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::NewProp_bDoPrintErrors_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventFindAsName_Parms*)Obj)->bDoPrintErrors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::NewProp_bDoPrintErrors = { "bDoPrintErrors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventFindAsName_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::NewProp_bDoPrintErrors_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::NewProp_StringMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::NewProp_StringMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::NewProp_StringMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::NewProp_Default,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::NewProp_bIsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::NewProp_bDoAllowMissingKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::NewProp_bDoPrintErrors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Finds a name, in a string-to-string map. */" },
#endif
		{ "CPP_Default_bDoAllowMissingKey", "false" },
		{ "CPP_Default_bDoPrintErrors", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds a name, in a string-to-string map." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "FindAsName", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::MassTrafficBuilderBaseActor_eventFindAsName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::MassTrafficBuilderBaseActor_eventFindAsName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics
	{
		struct MassTrafficBuilderBaseActor_eventFindAsQuaternion_Parms
		{
			TMap<FString,FString> StringMap;
			FString WKey;
			FString XKey;
			FString YKey;
			FString ZKey;
			FQuat Default;
			bool bIsValid;
			bool bDoAllowMissingKeys;
			bool bDoPrintErrors;
			bool bDoCheckForNaNs;
			FQuat ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StringMap;
		static const UECodeGen_Private::FStrPropertyParams NewProp_WKey;
		static const UECodeGen_Private::FStrPropertyParams NewProp_XKey;
		static const UECodeGen_Private::FStrPropertyParams NewProp_YKey;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ZKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Default;
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
		static void NewProp_bDoAllowMissingKeys_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoAllowMissingKeys;
		static void NewProp_bDoPrintErrors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoPrintErrors;
		static void NewProp_bDoCheckForNaNs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoCheckForNaNs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_StringMap_ValueProp = { "StringMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_StringMap_Key_KeyProp = { "StringMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_StringMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_StringMap = { "StringMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsQuaternion_Parms, StringMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_StringMap_MetaData), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_StringMap_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_WKey = { "WKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsQuaternion_Parms, WKey), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_XKey = { "XKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsQuaternion_Parms, XKey), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_YKey = { "YKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsQuaternion_Parms, YKey), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_ZKey = { "ZKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsQuaternion_Parms, ZKey), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsQuaternion_Parms, Default), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventFindAsQuaternion_Parms*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventFindAsQuaternion_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_bDoAllowMissingKeys_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventFindAsQuaternion_Parms*)Obj)->bDoAllowMissingKeys = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_bDoAllowMissingKeys = { "bDoAllowMissingKeys", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventFindAsQuaternion_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_bDoAllowMissingKeys_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_bDoPrintErrors_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventFindAsQuaternion_Parms*)Obj)->bDoPrintErrors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_bDoPrintErrors = { "bDoPrintErrors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventFindAsQuaternion_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_bDoPrintErrors_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_bDoCheckForNaNs_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventFindAsQuaternion_Parms*)Obj)->bDoCheckForNaNs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_bDoCheckForNaNs = { "bDoCheckForNaNs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventFindAsQuaternion_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_bDoCheckForNaNs_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsQuaternion_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_StringMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_StringMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_StringMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_WKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_XKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_YKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_ZKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_Default,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_bIsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_bDoAllowMissingKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_bDoPrintErrors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_bDoCheckForNaNs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Finds a quaternion, in a string-to-string map. */" },
#endif
		{ "CPP_Default_bDoAllowMissingKeys", "false" },
		{ "CPP_Default_bDoCheckForNaNs", "true" },
		{ "CPP_Default_bDoPrintErrors", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds a quaternion, in a string-to-string map." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "FindAsQuaternion", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::MassTrafficBuilderBaseActor_eventFindAsQuaternion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::MassTrafficBuilderBaseActor_eventFindAsQuaternion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics
	{
		struct MassTrafficBuilderBaseActor_eventFindAsString_Parms
		{
			TMap<FString,FString> StringMap;
			FString Key;
			FString Default;
			bool bIsValid;
			bool bDoAllowMissingKey;
			bool bDoPrintErrors;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StringMap;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Default;
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
		static void NewProp_bDoAllowMissingKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoAllowMissingKey;
		static void NewProp_bDoPrintErrors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoPrintErrors;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::NewProp_StringMap_ValueProp = { "StringMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::NewProp_StringMap_Key_KeyProp = { "StringMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::NewProp_StringMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::NewProp_StringMap = { "StringMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsString_Parms, StringMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::NewProp_StringMap_MetaData), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::NewProp_StringMap_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsString_Parms, Key), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsString_Parms, Default), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventFindAsString_Parms*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventFindAsString_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::NewProp_bDoAllowMissingKey_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventFindAsString_Parms*)Obj)->bDoAllowMissingKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::NewProp_bDoAllowMissingKey = { "bDoAllowMissingKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventFindAsString_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::NewProp_bDoAllowMissingKey_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::NewProp_bDoPrintErrors_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventFindAsString_Parms*)Obj)->bDoPrintErrors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::NewProp_bDoPrintErrors = { "bDoPrintErrors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventFindAsString_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::NewProp_bDoPrintErrors_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::NewProp_StringMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::NewProp_StringMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::NewProp_StringMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::NewProp_Default,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::NewProp_bIsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::NewProp_bDoAllowMissingKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::NewProp_bDoPrintErrors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Finds a string, in a string-to-string map. */" },
#endif
		{ "CPP_Default_bDoAllowMissingKey", "false" },
		{ "CPP_Default_bDoPrintErrors", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds a string, in a string-to-string map." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "FindAsString", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::MassTrafficBuilderBaseActor_eventFindAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::MassTrafficBuilderBaseActor_eventFindAsString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics
	{
		struct MassTrafficBuilderBaseActor_eventFindAsVector_Parms
		{
			TMap<FString,FString> StringMap;
			FString XKey;
			FString YKey;
			FString ZKey;
			FVector Default;
			bool bIsValid;
			bool bDoAllowMissingKeys;
			bool bDoPrintErrors;
			bool bDoCheckForNaNs;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StringMap;
		static const UECodeGen_Private::FStrPropertyParams NewProp_XKey;
		static const UECodeGen_Private::FStrPropertyParams NewProp_YKey;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ZKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Default;
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
		static void NewProp_bDoAllowMissingKeys_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoAllowMissingKeys;
		static void NewProp_bDoPrintErrors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoPrintErrors;
		static void NewProp_bDoCheckForNaNs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoCheckForNaNs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_StringMap_ValueProp = { "StringMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_StringMap_Key_KeyProp = { "StringMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_StringMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_StringMap = { "StringMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsVector_Parms, StringMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_StringMap_MetaData), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_StringMap_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_XKey = { "XKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsVector_Parms, XKey), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_YKey = { "YKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsVector_Parms, YKey), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_ZKey = { "ZKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsVector_Parms, ZKey), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsVector_Parms, Default), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventFindAsVector_Parms*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventFindAsVector_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_bDoAllowMissingKeys_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventFindAsVector_Parms*)Obj)->bDoAllowMissingKeys = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_bDoAllowMissingKeys = { "bDoAllowMissingKeys", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventFindAsVector_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_bDoAllowMissingKeys_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_bDoPrintErrors_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventFindAsVector_Parms*)Obj)->bDoPrintErrors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_bDoPrintErrors = { "bDoPrintErrors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventFindAsVector_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_bDoPrintErrors_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_bDoCheckForNaNs_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventFindAsVector_Parms*)Obj)->bDoCheckForNaNs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_bDoCheckForNaNs = { "bDoCheckForNaNs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventFindAsVector_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_bDoCheckForNaNs_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFindAsVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_StringMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_StringMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_StringMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_XKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_YKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_ZKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_Default,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_bIsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_bDoAllowMissingKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_bDoPrintErrors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_bDoCheckForNaNs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Finds a vector, in a string-to-string map. */" },
#endif
		{ "CPP_Default_bDoAllowMissingKeys", "false" },
		{ "CPP_Default_bDoCheckForNaNs", "true" },
		{ "CPP_Default_bDoPrintErrors", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds a vector, in a string-to-string map." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "FindAsVector", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::MassTrafficBuilderBaseActor_eventFindAsVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::MassTrafficBuilderBaseActor_eventFindAsVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FlatVectorToFlatRightVector_Statics
	{
		struct MassTrafficBuilderBaseActor_eventFlatVectorToFlatRightVector_Parms
		{
			FVector Vector;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FlatVectorToFlatRightVector_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFlatVectorToFlatRightVector_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FlatVectorToFlatRightVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventFlatVectorToFlatRightVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FlatVectorToFlatRightVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FlatVectorToFlatRightVector_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FlatVectorToFlatRightVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FlatVectorToFlatRightVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Math" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Form a proper right-vector from another vector. DEPRECATED */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Form a proper right-vector from another vector. DEPRECATED" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FlatVectorToFlatRightVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "FlatVectorToFlatRightVector", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FlatVectorToFlatRightVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FlatVectorToFlatRightVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FlatVectorToFlatRightVector_Statics::MassTrafficBuilderBaseActor_eventFlatVectorToFlatRightVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FlatVectorToFlatRightVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FlatVectorToFlatRightVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FlatVectorToFlatRightVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FlatVectorToFlatRightVector_Statics::MassTrafficBuilderBaseActor_eventFlatVectorToFlatRightVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FlatVectorToFlatRightVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FlatVectorToFlatRightVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetPointHints_Statics
	{
		struct MassTrafficBuilderBaseActor_eventGetPointHints_Parms
		{
			FVector Point;
			FMassTrafficPointHints PointHints;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointHints;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetPointHints_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventGetPointHints_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetPointHints_Statics::NewProp_PointHints = { "PointHints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventGetPointHints_Parms, PointHints), Z_Construct_UScriptStruct_FMassTrafficPointHints, METADATA_PARAMS(0, nullptr) }; // 552940593
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetPointHints_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventGetPointHints_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetPointHints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventGetPointHints_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetPointHints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetPointHints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetPointHints_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetPointHints_Statics::NewProp_PointHints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetPointHints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetPointHints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Point Hints" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets hints about a point in space. \x09\n\x09 * The FractionalFloatPercisionForMapKeys class property controls percision for this lookup.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets hints about a point in space.\nThe FractionalFloatPercisionForMapKeys class property controls percision for this lookup." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetPointHints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "GetPointHints", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetPointHints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetPointHints_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetPointHints_Statics::MassTrafficBuilderBaseActor_eventGetPointHints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetPointHints_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetPointHints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetPointHints_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetPointHints_Statics::MassTrafficBuilderBaseActor_eventGetPointHints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetPointHints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetPointHints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints_Statics
	{
		struct MassTrafficBuilderBaseActor_eventGetRuleProcessorPoints_Parms
		{
			UPointCloud* PointCloud;
			TArray<FTransform> Transforms;
			TArray<int32> IDs;
			bool bIsValid;
			UPointCloudView* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PointCloud;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IDs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IDs;
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints_Statics::NewProp_PointCloud = { "PointCloud", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventGetRuleProcessorPoints_Parms, PointCloud), Z_Construct_UClass_UPointCloud_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventGetRuleProcessorPoints_Parms, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints_Statics::NewProp_IDs_Inner = { "IDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints_Statics::NewProp_IDs = { "IDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventGetRuleProcessorPoints_Parms, IDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((MassTrafficBuilderBaseActor_eventGetRuleProcessorPoints_Parms*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficBuilderBaseActor_eventGetRuleProcessorPoints_Parms), &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventGetRuleProcessorPoints_Parms, ReturnValue), Z_Construct_UClass_UPointCloudView_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints_Statics::NewProp_PointCloud,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints_Statics::NewProp_Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints_Statics::NewProp_Transforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints_Statics::NewProp_IDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints_Statics::NewProp_IDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints_Statics::NewProp_bIsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Rule Processor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets all points and IDs from a RuleProcessor point cloud. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets all points and IDs from a RuleProcessor point cloud." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "GetRuleProcessorPoints", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints_Statics::MassTrafficBuilderBaseActor_eventGetRuleProcessorPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints_Statics::MassTrafficBuilderBaseActor_eventGetRuleProcessorPoints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterColor_Statics
	{
		struct MassTrafficBuilderBaseActor_eventJitterColor_Parms
		{
			FLinearColor Color;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventJitterColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventJitterColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterColor_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jitters a color. Quality of this jitter is controlled by other class properties. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jitters a color. Quality of this jitter is controlled by other class properties." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "JitterColor", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterColor_Statics::MassTrafficBuilderBaseActor_eventJitterColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterColor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterColor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterColor_Statics::MassTrafficBuilderBaseActor_eventJitterColor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterPoint_Statics
	{
		struct MassTrafficBuilderBaseActor_eventJitterPoint_Parms
		{
			FVector Point;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterPoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventJitterPoint_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventJitterPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterPoint_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jitters a vector. Quality of this jitter is controlled by other class properties. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jitters a vector. Quality of this jitter is controlled by other class properties." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "JitterPoint", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterPoint_Statics::MassTrafficBuilderBaseActor_eventJitterPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterPoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterPoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterPoint_Statics::MassTrafficBuilderBaseActor_eventJitterPoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_LoopAllClosedRoadSplines_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_LoopAllClosedRoadSplines_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Road Splines" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * For all road splines that are marked as 'closed' - makes sure the last point is joined to the first point,\n\x09 * and with a smooth tangent.\n\x09 * DEPRECATED\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For all road splines that are marked as 'closed' - makes sure the last point is joined to the first point,\nand with a smooth tangent.\nDEPRECATED" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_LoopAllClosedRoadSplines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "LoopAllClosedRoadSplines", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_LoopAllClosedRoadSplines_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_LoopAllClosedRoadSplines_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_LoopAllClosedRoadSplines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_LoopAllClosedRoadSplines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_MakeDebugColorFromID_Statics
	{
		struct MassTrafficBuilderBaseActor_eventMakeDebugColorFromID_Parms
		{
			FString ID;
			FLinearColor ColorTint;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorTint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_MakeDebugColorFromID_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventMakeDebugColorFromID_Parms, ID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_MakeDebugColorFromID_Statics::NewProp_ColorTint = { "ColorTint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventMakeDebugColorFromID_Parms, ColorTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_MakeDebugColorFromID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventMakeDebugColorFromID_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_MakeDebugColorFromID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_MakeDebugColorFromID_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_MakeDebugColorFromID_Statics::NewProp_ColorTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_MakeDebugColorFromID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_MakeDebugColorFromID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Makes a color from an ID string. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Makes a color from an ID string." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_MakeDebugColorFromID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "MakeDebugColorFromID", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_MakeDebugColorFromID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_MakeDebugColorFromID_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_MakeDebugColorFromID_Statics::MassTrafficBuilderBaseActor_eventMakeDebugColorFromID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_MakeDebugColorFromID_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_MakeDebugColorFromID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_MakeDebugColorFromID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_MakeDebugColorFromID_Statics::MassTrafficBuilderBaseActor_eventMakeDebugColorFromID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_MakeDebugColorFromID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_MakeDebugColorFromID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_MarkAllCrosswalkRoadSegments_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_MarkAllCrosswalkRoadSegments_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Identifies all road segments that look like crosswalks, and marks them.\n\x09 * Call this AFTER road segment and intersection maps are filled, and BEFORE generating Zone Shapes.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Identifies all road segments that look like crosswalks, and marks them.\nCall this AFTER road segment and intersection maps are filled, and BEFORE generating Zone Shapes." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_MarkAllCrosswalkRoadSegments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "MarkAllCrosswalkRoadSegments", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_MarkAllCrosswalkRoadSegments_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_MarkAllCrosswalkRoadSegments_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_MarkAllCrosswalkRoadSegments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_MarkAllCrosswalkRoadSegments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_SegmentCrossesRoadEnteringOrLeavingIntersectionSide_Statics
	{
		struct MassTrafficBuilderBaseActor_eventSegmentCrossesRoadEnteringOrLeavingIntersectionSide_Parms
		{
			FString IntersectionID;
			EMassTrafficUser User;
			FVector SegmentPointA;
			FVector SegmentPointB;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_IntersectionID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_User_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_User;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentPointA;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentPointB;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_SegmentCrossesRoadEnteringOrLeavingIntersectionSide_Statics::NewProp_IntersectionID = { "IntersectionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventSegmentCrossesRoadEnteringOrLeavingIntersectionSide_Parms, IntersectionID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_SegmentCrossesRoadEnteringOrLeavingIntersectionSide_Statics::NewProp_User_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_SegmentCrossesRoadEnteringOrLeavingIntersectionSide_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventSegmentCrossesRoadEnteringOrLeavingIntersectionSide_Parms, User), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficUser, METADATA_PARAMS(0, nullptr) }; // 3485938918
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_SegmentCrossesRoadEnteringOrLeavingIntersectionSide_Statics::NewProp_SegmentPointA = { "SegmentPointA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventSegmentCrossesRoadEnteringOrLeavingIntersectionSide_Parms, SegmentPointA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_SegmentCrossesRoadEnteringOrLeavingIntersectionSide_Statics::NewProp_SegmentPointB = { "SegmentPointB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventSegmentCrossesRoadEnteringOrLeavingIntersectionSide_Parms, SegmentPointB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_SegmentCrossesRoadEnteringOrLeavingIntersectionSide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventSegmentCrossesRoadEnteringOrLeavingIntersectionSide_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_SegmentCrossesRoadEnteringOrLeavingIntersectionSide_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_SegmentCrossesRoadEnteringOrLeavingIntersectionSide_Statics::NewProp_IntersectionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_SegmentCrossesRoadEnteringOrLeavingIntersectionSide_Statics::NewProp_User_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_SegmentCrossesRoadEnteringOrLeavingIntersectionSide_Statics::NewProp_User,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_SegmentCrossesRoadEnteringOrLeavingIntersectionSide_Statics::NewProp_SegmentPointA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_SegmentCrossesRoadEnteringOrLeavingIntersectionSide_Statics::NewProp_SegmentPointB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_SegmentCrossesRoadEnteringOrLeavingIntersectionSide_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_SegmentCrossesRoadEnteringOrLeavingIntersectionSide_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Intersections" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Find intersection side (sequence number) that has a road that enters or leaves intersection and crosses over a segment.\n\x09 * Returns intersection side (sequence number), or -1 if none found.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find intersection side (sequence number) that has a road that enters or leaves intersection and crosses over a segment.\nReturns intersection side (sequence number), or -1 if none found." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_SegmentCrossesRoadEnteringOrLeavingIntersectionSide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "SegmentCrossesRoadEnteringOrLeavingIntersectionSide", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_SegmentCrossesRoadEnteringOrLeavingIntersectionSide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_SegmentCrossesRoadEnteringOrLeavingIntersectionSide_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_SegmentCrossesRoadEnteringOrLeavingIntersectionSide_Statics::MassTrafficBuilderBaseActor_eventSegmentCrossesRoadEnteringOrLeavingIntersectionSide_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_SegmentCrossesRoadEnteringOrLeavingIntersectionSide_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_SegmentCrossesRoadEnteringOrLeavingIntersectionSide_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_SegmentCrossesRoadEnteringOrLeavingIntersectionSide_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_SegmentCrossesRoadEnteringOrLeavingIntersectionSide_Statics::MassTrafficBuilderBaseActor_eventSegmentCrossesRoadEnteringOrLeavingIntersectionSide_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_SegmentCrossesRoadEnteringOrLeavingIntersectionSide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_SegmentCrossesRoadEnteringOrLeavingIntersectionSide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_StringToSpecialConnectionType_Statics
	{
		struct MassTrafficBuilderBaseActor_eventStringToSpecialConnectionType_Parms
		{
			FString String;
			EMassTrafficSpecialConnectionType ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_StringToSpecialConnectionType_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventStringToSpecialConnectionType_Parms, String), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_StringToSpecialConnectionType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_StringToSpecialConnectionType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventStringToSpecialConnectionType_Parms, ReturnValue), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficSpecialConnectionType, METADATA_PARAMS(0, nullptr) }; // 1010026627
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_StringToSpecialConnectionType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_StringToSpecialConnectionType_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_StringToSpecialConnectionType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_StringToSpecialConnectionType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_StringToSpecialConnectionType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Intersections" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_StringToSpecialConnectionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "StringToSpecialConnectionType", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_StringToSpecialConnectionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_StringToSpecialConnectionType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_StringToSpecialConnectionType_Statics::MassTrafficBuilderBaseActor_eventStringToSpecialConnectionType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_StringToSpecialConnectionType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_StringToSpecialConnectionType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_StringToSpecialConnectionType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_StringToSpecialConnectionType_Statics::MassTrafficBuilderBaseActor_eventStringToSpecialConnectionType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_StringToSpecialConnectionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_StringToSpecialConnectionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficBuilderBaseActor_VectorToMapKey_Statics
	{
		struct MassTrafficBuilderBaseActor_eventVectorToMapKey_Parms
		{
			FVector Vector;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_VectorToMapKey_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventVectorToMapKey_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_VectorToMapKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBuilderBaseActor_eventVectorToMapKey_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBuilderBaseActor_VectorToMapKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_VectorToMapKey_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBuilderBaseActor_VectorToMapKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficBuilderBaseActor_VectorToMapKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Turns a vector into a string, often used to map keys.\n\x09 * The FractionalFloatPercisionForMapKeys class property controls percision used in generating this map key string.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turns a vector into a string, often used to map keys.\nThe FractionalFloatPercisionForMapKeys class property controls percision used in generating this map key string." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBuilderBaseActor_VectorToMapKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficBuilderBaseActor, nullptr, "VectorToMapKey", nullptr, nullptr, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_VectorToMapKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_VectorToMapKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_VectorToMapKey_Statics::MassTrafficBuilderBaseActor_eventVectorToMapKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_VectorToMapKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBuilderBaseActor_VectorToMapKey_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_VectorToMapKey_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBuilderBaseActor_VectorToMapKey_Statics::MassTrafficBuilderBaseActor_eventVectorToMapKey_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMassTrafficBuilderBaseActor_VectorToMapKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBuilderBaseActor_VectorToMapKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMassTrafficBuilderBaseActor);
	UClass* Z_Construct_UClass_AMassTrafficBuilderBaseActor_NoRegister()
	{
		return AMassTrafficBuilderBaseActor::StaticClass();
	}
	struct Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniToUEConversionTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniToUEConversionTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoAddDebugMarkers_MetaData[];
#endif
		static void NewProp_bDoAddDebugMarkers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoAddDebugMarkers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugArrowSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugArrowSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugPointSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugPointSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugLineSegmentThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugLineSegmentThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugPointJitter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugPointJitter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugColorJitter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugColorJitter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugColorTintBlend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugColorTintBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugRandomStream_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugRandomStream;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DebugLocateMarkerIDs_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugLocateMarkerIDs_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_DebugLocateMarkerIDs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugLocateTextZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugLocateTextZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugLocateTextSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugLocateTextSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FractionalFloatPrecisionForMapKeys_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FractionalFloatPrecisionForMapKeys;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoadSegmentsMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoadSegmentsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoadSegmentsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RoadSegmentsMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoadSplinesMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoadSplinesMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoadSplinesMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RoadSplinesMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IntersectionsMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IntersectionsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_IntersectionsMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointHintsMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PointHintsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointHintsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PointHintsMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionSideToCrosswalkSearchDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IntersectionSideToCrosswalkSearchDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneShapeParentActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ZoneShapeParentActor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BuildType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BuildType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExplicitLaneProfileRefMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExplicitLaneProfileRefMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplicitLaneProfileRefMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ExplicitLaneProfileRefMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraphTagForVehicles_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneGraphTagForVehicles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraphTagForPedestrians_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneGraphTagForPedestrians;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraphTagForIntersections_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneGraphTagForIntersections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraphTagForCity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneGraphTagForCity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraphTagForFreeway_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneGraphTagForFreeway;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraphTagForCrosswalks_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneGraphTagForCrosswalks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraphTagForFreewayOnramps_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneGraphTagForFreewayOnramps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraphTagForFreewayOfframps_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneGraphTagForFreewayOfframps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraphTagForPedestrianDensity0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneGraphTagForPedestrianDensity0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraphTagForPedestrianDensity1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneGraphTagForPedestrianDensity1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraphTagForPedestrianDensity2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneGraphTagForPedestrianDensity2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraphTagForPedestrianDensity3_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneGraphTagForPedestrianDensity3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraphTagForVehicleDensity0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneGraphTagForVehicleDensity0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraphTagForVehicleDensity1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneGraphTagForVehicleDensity1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraphTagForVehicleDensity2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneGraphTagForVehicleDensity2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraphTagForVehicleDensity3_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneGraphTagForVehicleDensity3;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMassTrafficEditorBaseActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTrafficEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugErrorMarker, "AddDebugErrorMarker" }, // 221467086
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddDebugMarker, "AddDebugMarker" }, // 1233694098
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersection, "AddIntersection" }, // 869899906
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionCenter, "AddIntersectionCenter" }, // 3870403256
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLink, "AddIntersectionLink" }, // 2724159822
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddIntersectionLinkForwardAndUpVectors, "AddIntersectionLinkForwardAndUpVectors" }, // 264426681
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddPointHints, "AddPointHints" }, // 73601444
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSegment, "AddRoadSegment" }, // 2353827477
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSpline, "AddRoadSpline" }, // 1619085007
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AddRoadSplinePoint, "AddRoadSplinePoint" }, // 114601131
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_AdjustTangentsForCoincidentRoadSplineEndPoints, "AdjustTangentsForCoincidentRoadSplineEndPoints" }, // 1385601625
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsIntersection, "BuildZoneShapeAsIntersection" }, // 2494794695
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSegment, "BuildZoneShapeAsRoadSegment" }, // 4139514150
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_BuildZoneShapeAsRoadSpline, "BuildZoneShapeAsRoadSpline" }, // 2493468223
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ChopUpAllRoadSplines, "ChopUpAllRoadSplines" }, // 3732612677
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearAll, "ClearAll" }, // 1646984798
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearDebug, "ClearDebug" }, // 4046489741
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ClearLanesFromIntersectionLink, "ClearLanesFromIntersectionLink" }, // 4221965157
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareLaneWidthsOnIntersectionLinks, "CompareLaneWidthsOnIntersectionLinks" }, // 1861323579
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_CompareNumberOfLanesOnIntersectionLinks, "CompareNumberOfLanesOnIntersectionLinks" }, // 2215257061
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertPositionFromHoudini, "ConvertPositionFromHoudini" }, // 1224018277
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_ConvertVectorFromHoudini, "ConvertVectorFromHoudini" }, // 2172459637
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegment, "DrawDebugLineSegment" }, // 1998472803
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugLineSegments, "DrawDebugLineSegments" }, // 3317853174
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoint, "DrawDebugPoint" }, // 1214722957
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_DrawDebugPoints, "DrawDebugPoints" }, // 226818953
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsBool, "FindAsBool" }, // 3988244172
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsFloat, "FindAsFloat" }, // 3046940680
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsInt, "FindAsInt" }, // 3054919484
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsName, "FindAsName" }, // 1039929452
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsQuaternion, "FindAsQuaternion" }, // 2908946347
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsString, "FindAsString" }, // 4101381748
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FindAsVector, "FindAsVector" }, // 197270718
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_FlatVectorToFlatRightVector, "FlatVectorToFlatRightVector" }, // 215114213
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetPointHints, "GetPointHints" }, // 2327093658
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_GetRuleProcessorPoints, "GetRuleProcessorPoints" }, // 2211130810
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterColor, "JitterColor" }, // 564964288
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_JitterPoint, "JitterPoint" }, // 1764855825
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_LoopAllClosedRoadSplines, "LoopAllClosedRoadSplines" }, // 1753331608
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_MakeDebugColorFromID, "MakeDebugColorFromID" }, // 2872840311
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_MarkAllCrosswalkRoadSegments, "MarkAllCrosswalkRoadSegments" }, // 3037094322
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_SegmentCrossesRoadEnteringOrLeavingIntersectionSide, "SegmentCrossesRoadEnteringOrLeavingIntersectionSide" }, // 2051329964
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_StringToSpecialConnectionType, "StringToSpecialConnectionType" }, // 2432297465
		{ &Z_Construct_UFunction_AMassTrafficBuilderBaseActor_VectorToMapKey, "VectorToMapKey" }, // 1190569874
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MassTrafficBuilderBaseActor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_HoudiniToUEConversionTransform_MetaData[] = {
		{ "Category", "Math" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**  The transform used in converting from Houdini to Unreal coordinate spaces. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The transform used in converting from Houdini to Unreal coordinate spaces." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_HoudiniToUEConversionTransform = { "HoudiniToUEConversionTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, HoudiniToUEConversionTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_HoudiniToUEConversionTransform_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_HoudiniToUEConversionTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_bDoAddDebugMarkers_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to add debug (and error) markers to the scene. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to add debug (and error) markers to the scene." },
#endif
	};
#endif
	void Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_bDoAddDebugMarkers_SetBit(void* Obj)
	{
		((AMassTrafficBuilderBaseActor*)Obj)->bDoAddDebugMarkers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_bDoAddDebugMarkers = { "bDoAddDebugMarkers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMassTrafficBuilderBaseActor), &Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_bDoAddDebugMarkers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_bDoAddDebugMarkers_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_bDoAddDebugMarkers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugArrowSize_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugArrowSize = { "DebugArrowSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, DebugArrowSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugArrowSize_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugArrowSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugPointSize_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Debug point size. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug point size." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugPointSize = { "DebugPointSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, DebugPointSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugPointSize_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugPointSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugLineSegmentThickness_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Debug line thickness. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug line thickness." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugLineSegmentThickness = { "DebugLineSegmentThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, DebugLineSegmentThickness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugLineSegmentThickness_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugLineSegmentThickness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugPointJitter_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Debug point jitter magnitude. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug point jitter magnitude." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugPointJitter = { "DebugPointJitter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, DebugPointJitter), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugPointJitter_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugPointJitter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugColorJitter_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Debug color jitter magnitude. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug color jitter magnitude." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugColorJitter = { "DebugColorJitter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, DebugColorJitter), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugColorJitter_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugColorJitter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugColorTintBlend_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Debug colors are random, but strongly blended towards specific debug colors. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug colors are random, but strongly blended towards specific debug colors." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugColorTintBlend = { "DebugColorTintBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, DebugColorTintBlend), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugColorTintBlend_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugColorTintBlend_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugRandomStream_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Random number stream used for jittering, and other random numbers, used when debugging. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Random number stream used for jittering, and other random numbers, used when debugging." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugRandomStream = { "DebugRandomStream", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, DebugRandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugRandomStream_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugRandomStream_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugLocateMarkerIDs_ElementProp = { "DebugLocateMarkerIDs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugLocateMarkerIDs_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Used for locating any markers that contain any of these strings in their debug text.\n\x09 * If they do, these markers are rendered differently, to stand out strongly.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used for locating any markers that contain any of these strings in their debug text.\nIf they do, these markers are rendered differently, to stand out strongly." },
#endif
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugLocateMarkerIDs = { "DebugLocateMarkerIDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, DebugLocateMarkerIDs), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugLocateMarkerIDs_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugLocateMarkerIDs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugLocateTextZ_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Debug text Z value, when using DebugLocateText. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug text Z value, when using DebugLocateText." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugLocateTextZ = { "DebugLocateTextZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, DebugLocateTextZ), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugLocateTextZ_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugLocateTextZ_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugLocateTextSize_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Debug text size, when using DebugLocateText. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug text size, when using DebugLocateText." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugLocateTextSize = { "DebugLocateTextSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, DebugLocateTextSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugLocateTextSize_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugLocateTextSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_FractionalFloatPrecisionForMapKeys_MetaData[] = {
		{ "Category", "Utilities" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Precision used in making strings returned by VectorToMapKey(). */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Precision used in making strings returned by VectorToMapKey()." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_FractionalFloatPrecisionForMapKeys = { "FractionalFloatPrecisionForMapKeys", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, FractionalFloatPrecisionForMapKeys), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_FractionalFloatPrecisionForMapKeys_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_FractionalFloatPrecisionForMapKeys_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_RoadSegmentsMap_ValueProp = { "RoadSegmentsMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMassTrafficRoadSegment, METADATA_PARAMS(0, nullptr) }; // 3416794825
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_RoadSegmentsMap_Key_KeyProp = { "RoadSegmentsMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMassTrafficRoadSegmentMapKey, METADATA_PARAMS(0, nullptr) }; // 2717122913
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_RoadSegmentsMap_MetaData[] = {
		{ "Category", "Road Segments" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Map that stores all internal road segments. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map that stores all internal road segments." },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_RoadSegmentsMap = { "RoadSegmentsMap", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, RoadSegmentsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_RoadSegmentsMap_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_RoadSegmentsMap_MetaData) }; // 2717122913 3416794825
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_RoadSplinesMap_ValueProp = { "RoadSplinesMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMassTrafficRoadSpline, METADATA_PARAMS(0, nullptr) }; // 3382057186
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_RoadSplinesMap_Key_KeyProp = { "RoadSplinesMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMassTrafficRoadSplineMapKey, METADATA_PARAMS(0, nullptr) }; // 1417373169
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_RoadSplinesMap_MetaData[] = {
		{ "Category", "Road Splines" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Map that stores all internal road splines. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map that stores all internal road splines." },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_RoadSplinesMap = { "RoadSplinesMap", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, RoadSplinesMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_RoadSplinesMap_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_RoadSplinesMap_MetaData) }; // 1417373169 3382057186
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_IntersectionsMap_ValueProp = { "IntersectionsMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMassTrafficIntersection, METADATA_PARAMS(0, nullptr) }; // 1807554690
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_IntersectionsMap_Key_KeyProp = { "IntersectionsMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMassTrafficIntersectionMapKey, METADATA_PARAMS(0, nullptr) }; // 2141650759
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_IntersectionsMap_MetaData[] = {
		{ "Category", "Intersections" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Map that stores all internal intersections. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map that stores all internal intersections." },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_IntersectionsMap = { "IntersectionsMap", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, IntersectionsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_IntersectionsMap_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_IntersectionsMap_MetaData) }; // 2141650759 1807554690
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_PointHintsMap_ValueProp = { "PointHintsMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMassTrafficPointHints, METADATA_PARAMS(0, nullptr) }; // 552940593
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_PointHintsMap_Key_KeyProp = { "PointHintsMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_PointHintsMap_MetaData[] = {
		{ "Category", "Point Hints" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hints for points, Use class function VectorToMapKey() to access the map. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hints for points, Use class function VectorToMapKey() to access the map." },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_PointHintsMap = { "PointHintsMap", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, PointHintsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_PointHintsMap_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_PointHintsMap_MetaData) }; // 552940593
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_IntersectionSideToCrosswalkSearchDistance_MetaData[] = {
		{ "Category", "Mass Traffic|Mass Traffic Builder|Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Max distance (cm) a crosswalk lane can be from an intersection side point, to be controlled by that intersection side.\n\x09 * The default value here was experimentally found, and is the best for this demo.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max distance (cm) a crosswalk lane can be from an intersection side point, to be controlled by that intersection side.\nThe default value here was experimentally found, and is the best for this demo." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_IntersectionSideToCrosswalkSearchDistance = { "IntersectionSideToCrosswalkSearchDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, IntersectionSideToCrosswalkSearchDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_IntersectionSideToCrosswalkSearchDistance_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_IntersectionSideToCrosswalkSearchDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneShapeParentActor_MetaData[] = {
		{ "Category", "Zone Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Parent under which generated Zone Shapes are placed. (Null means this class.) */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parent under which generated Zone Shapes are placed. (Null means this class.)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneShapeParentActor = { "ZoneShapeParentActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, ZoneShapeParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneShapeParentActor_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneShapeParentActor_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_BuildType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_BuildType_MetaData[] = {
		{ "Category", "Zone Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How and where to store Zone Shapes - either as there own actors under the Zone Shape parent, or as components inside the Zone Shape parent. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How and where to store Zone Shapes - either as there own actors under the Zone Shape parent, or as components inside the Zone Shape parent." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_BuildType = { "BuildType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, BuildType), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficBuildType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_BuildType_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_BuildType_MetaData) }; // 2581907603
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ExplicitLaneProfileRefMap_ValueProp = { "ExplicitLaneProfileRefMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FZoneLaneProfileRef, METADATA_PARAMS(0, nullptr) }; // 3751612976
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ExplicitLaneProfileRefMap_Key_KeyProp = { "ExplicitLaneProfileRefMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMassTrafficExplicitLaneProfileRefMapKey, METADATA_PARAMS(0, nullptr) }; // 116958349
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ExplicitLaneProfileRefMap_MetaData[] = {
		{ "Category", "Zone Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Allows storage and lookup of Zone Lane Profiles given specific conditions. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows storage and lookup of Zone Lane Profiles given specific conditions." },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ExplicitLaneProfileRefMap = { "ExplicitLaneProfileRefMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, ExplicitLaneProfileRefMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ExplicitLaneProfileRefMap_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ExplicitLaneProfileRefMap_MetaData) }; // 116958349 3751612976
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForVehicles_MetaData[] = {
		{ "Category", "Zone Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Zone Graph Tag to use for Zone Shapes that are for vehicles.\n\x09 * Only used to redundantly tag Zone Shapes. Lane profiles should provide their own per-lane 'vehicle' tags.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zone Graph Tag to use for Zone Shapes that are for vehicles.\nOnly used to redundantly tag Zone Shapes. Lane profiles should provide their own per-lane 'vehicle' tags." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForVehicles = { "ZoneGraphTagForVehicles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, ZoneGraphTagForVehicles), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForVehicles_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForVehicles_MetaData) }; // 2776536726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForPedestrians_MetaData[] = {
		{ "Category", "Zone Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Zone Graph Tag to use for Zone Shapes that are for pedestrians.\n\x09 * Only used to redundantly tag Zone Shapes. Lane profiles should provide their own per-lane 'pedestrian' tags.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zone Graph Tag to use for Zone Shapes that are for pedestrians.\nOnly used to redundantly tag Zone Shapes. Lane profiles should provide their own per-lane 'pedestrian' tags." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForPedestrians = { "ZoneGraphTagForPedestrians", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, ZoneGraphTagForPedestrians), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForPedestrians_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForPedestrians_MetaData) }; // 2776536726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForIntersections_MetaData[] = {
		{ "Category", "Zone Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Zone Graph Tag to use for Zone Shapes that are for intersections. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zone Graph Tag to use for Zone Shapes that are for intersections." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForIntersections = { "ZoneGraphTagForIntersections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, ZoneGraphTagForIntersections), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForIntersections_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForIntersections_MetaData) }; // 2776536726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForCity_MetaData[] = {
		{ "Category", "Zone Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Zone Graph Tag to use for Zone Shapes that are for intersections. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zone Graph Tag to use for Zone Shapes that are for intersections." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForCity = { "ZoneGraphTagForCity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, ZoneGraphTagForCity), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForCity_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForCity_MetaData) }; // 2776536726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForFreeway_MetaData[] = {
		{ "Category", "Zone Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Zone Graph Tag to use for Zone Shapes that are for intersections. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zone Graph Tag to use for Zone Shapes that are for intersections." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForFreeway = { "ZoneGraphTagForFreeway", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, ZoneGraphTagForFreeway), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForFreeway_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForFreeway_MetaData) }; // 2776536726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForCrosswalks_MetaData[] = {
		{ "Category", "Zone Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Zone Graph Tag to use for Zone Shapes that are for intersections. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zone Graph Tag to use for Zone Shapes that are for intersections." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForCrosswalks = { "ZoneGraphTagForCrosswalks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, ZoneGraphTagForCrosswalks), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForCrosswalks_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForCrosswalks_MetaData) }; // 2776536726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForFreewayOnramps_MetaData[] = {
		{ "Category", "Zone Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Zone Graph Tag to use for Zone Shapes that are for intersections. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zone Graph Tag to use for Zone Shapes that are for intersections." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForFreewayOnramps = { "ZoneGraphTagForFreewayOnramps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, ZoneGraphTagForFreewayOnramps), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForFreewayOnramps_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForFreewayOnramps_MetaData) }; // 2776536726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForFreewayOfframps_MetaData[] = {
		{ "Category", "Zone Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Zone Graph Tag to use for Zone Shapes that are for intersections. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zone Graph Tag to use for Zone Shapes that are for intersections." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForFreewayOfframps = { "ZoneGraphTagForFreewayOfframps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, ZoneGraphTagForFreewayOfframps), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForFreewayOfframps_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForFreewayOfframps_MetaData) }; // 2776536726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForPedestrianDensity0_MetaData[] = {
		{ "Category", "Zone Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Zone Graph Tag to use for Zone Shapes that are for intersections. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zone Graph Tag to use for Zone Shapes that are for intersections." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForPedestrianDensity0 = { "ZoneGraphTagForPedestrianDensity0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, ZoneGraphTagForPedestrianDensity0), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForPedestrianDensity0_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForPedestrianDensity0_MetaData) }; // 2776536726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForPedestrianDensity1_MetaData[] = {
		{ "Category", "Zone Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Zone Graph Tag to use for Zone Shapes that are for intersections. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zone Graph Tag to use for Zone Shapes that are for intersections." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForPedestrianDensity1 = { "ZoneGraphTagForPedestrianDensity1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, ZoneGraphTagForPedestrianDensity1), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForPedestrianDensity1_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForPedestrianDensity1_MetaData) }; // 2776536726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForPedestrianDensity2_MetaData[] = {
		{ "Category", "Zone Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Zone Graph Tag to use for Zone Shapes that are for intersections. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zone Graph Tag to use for Zone Shapes that are for intersections." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForPedestrianDensity2 = { "ZoneGraphTagForPedestrianDensity2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, ZoneGraphTagForPedestrianDensity2), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForPedestrianDensity2_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForPedestrianDensity2_MetaData) }; // 2776536726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForPedestrianDensity3_MetaData[] = {
		{ "Category", "Zone Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Zone Graph Tag to use for Zone Shapes that are for intersections. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zone Graph Tag to use for Zone Shapes that are for intersections." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForPedestrianDensity3 = { "ZoneGraphTagForPedestrianDensity3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, ZoneGraphTagForPedestrianDensity3), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForPedestrianDensity3_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForPedestrianDensity3_MetaData) }; // 2776536726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForVehicleDensity0_MetaData[] = {
		{ "Category", "Zone Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Zone Graph Tag to use for Zone Shapes that are for intersections. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zone Graph Tag to use for Zone Shapes that are for intersections." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForVehicleDensity0 = { "ZoneGraphTagForVehicleDensity0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, ZoneGraphTagForVehicleDensity0), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForVehicleDensity0_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForVehicleDensity0_MetaData) }; // 2776536726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForVehicleDensity1_MetaData[] = {
		{ "Category", "Zone Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Zone Graph Tag to use for Zone Shapes that are for intersections. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zone Graph Tag to use for Zone Shapes that are for intersections." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForVehicleDensity1 = { "ZoneGraphTagForVehicleDensity1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, ZoneGraphTagForVehicleDensity1), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForVehicleDensity1_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForVehicleDensity1_MetaData) }; // 2776536726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForVehicleDensity2_MetaData[] = {
		{ "Category", "Zone Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Zone Graph Tag to use for Zone Shapes that are for intersections. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zone Graph Tag to use for Zone Shapes that are for intersections." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForVehicleDensity2 = { "ZoneGraphTagForVehicleDensity2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, ZoneGraphTagForVehicleDensity2), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForVehicleDensity2_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForVehicleDensity2_MetaData) }; // 2776536726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForVehicleDensity3_MetaData[] = {
		{ "Category", "Zone Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Zone Graph Tag to use for Zone Shapes that are for intersections. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBuilderBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zone Graph Tag to use for Zone Shapes that are for intersections." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForVehicleDensity3 = { "ZoneGraphTagForVehicleDensity3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderBaseActor, ZoneGraphTagForVehicleDensity3), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForVehicleDensity3_MetaData), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForVehicleDensity3_MetaData) }; // 2776536726
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_HoudiniToUEConversionTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_bDoAddDebugMarkers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugArrowSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugPointSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugLineSegmentThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugPointJitter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugColorJitter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugColorTintBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugRandomStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugLocateMarkerIDs_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugLocateMarkerIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugLocateTextZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_DebugLocateTextSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_FractionalFloatPrecisionForMapKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_RoadSegmentsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_RoadSegmentsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_RoadSegmentsMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_RoadSplinesMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_RoadSplinesMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_RoadSplinesMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_IntersectionsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_IntersectionsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_IntersectionsMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_PointHintsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_PointHintsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_PointHintsMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_IntersectionSideToCrosswalkSearchDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneShapeParentActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_BuildType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_BuildType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ExplicitLaneProfileRefMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ExplicitLaneProfileRefMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ExplicitLaneProfileRefMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForVehicles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForPedestrians,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForIntersections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForCity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForFreeway,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForCrosswalks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForFreewayOnramps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForFreewayOfframps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForPedestrianDensity0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForPedestrianDensity1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForPedestrianDensity2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForPedestrianDensity3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForVehicleDensity0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForVehicleDensity1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForVehicleDensity2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::NewProp_ZoneGraphTagForVehicleDensity3,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMassTrafficBuilderBaseActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::ClassParams = {
		&AMassTrafficBuilderBaseActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMassTrafficBuilderBaseActor()
	{
		if (!Z_Registration_Info_UClass_AMassTrafficBuilderBaseActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMassTrafficBuilderBaseActor.OuterSingleton, Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMassTrafficBuilderBaseActor.OuterSingleton;
	}
	template<> MASSTRAFFICEDITOR_API UClass* StaticClass<AMassTrafficBuilderBaseActor>()
	{
		return AMassTrafficBuilderBaseActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMassTrafficBuilderBaseActor);
	AMassTrafficBuilderBaseActor::~AMassTrafficBuilderBaseActor() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMassTrafficBuilderBaseActor, AMassTrafficBuilderBaseActor::StaticClass, TEXT("AMassTrafficBuilderBaseActor"), &Z_Registration_Info_UClass_AMassTrafficBuilderBaseActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMassTrafficBuilderBaseActor), 951384020U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_1990784707(TEXT("/Script/MassTrafficEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
