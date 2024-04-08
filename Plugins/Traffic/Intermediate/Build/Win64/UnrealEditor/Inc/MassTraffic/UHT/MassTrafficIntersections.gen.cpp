// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficIntersections.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficIntersections() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail();
	MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints();
	MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficIntersectionSide();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficIntersectionSide;
class UScriptStruct* FMassTrafficIntersectionSide::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficIntersectionSide.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficIntersectionSide.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficIntersectionSide, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficIntersectionSide"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficIntersectionSide.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficIntersectionSide>()
{
	return FMassTrafficIntersectionSide::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_CrosswalkLanes_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosswalkLanes_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_CrosswalkLanes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CrosswalkWaitingLanes_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosswalkWaitingLanes_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_CrosswalkWaitingLanes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionLanesBeginMidpoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IntersectionLanesBeginMidpoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionIntoIntersection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionIntoIntersection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightDetailIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrafficLightDetailIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasInboundLanesFromFreeway_MetaData[];
#endif
		static void NewProp_bHasInboundLanesFromFreeway_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasInboundLanesFromFreeway;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficIntersections.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficIntersectionSide>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_CrosswalkLanes_ElementProp = { "CrosswalkLanes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_CrosswalkLanes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Indices used to construct FZoneGraphLaneHandle(s) for crosswalk lanes. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficIntersections.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indices used to construct FZoneGraphLaneHandle(s) for crosswalk lanes." },
#endif
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_CrosswalkLanes = { "CrosswalkLanes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersectionSide, CrosswalkLanes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_CrosswalkLanes_MetaData), Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_CrosswalkLanes_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_CrosswalkWaitingLanes_ElementProp = { "CrosswalkWaitingLanes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_CrosswalkWaitingLanes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Indices used to construct FZoneGraphLaneHandle(s) for crosswalk waiting area lanes. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficIntersections.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indices used to construct FZoneGraphLaneHandle(s) for crosswalk waiting area lanes." },
#endif
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_CrosswalkWaitingLanes = { "CrosswalkWaitingLanes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersectionSide, CrosswalkWaitingLanes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_CrosswalkWaitingLanes_MetaData), Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_CrosswalkWaitingLanes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_IntersectionLanesBeginMidpoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficIntersections.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_IntersectionLanesBeginMidpoint = { "IntersectionLanesBeginMidpoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersectionSide, IntersectionLanesBeginMidpoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_IntersectionLanesBeginMidpoint_MetaData), Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_IntersectionLanesBeginMidpoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_DirectionIntoIntersection_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficIntersections.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_DirectionIntoIntersection = { "DirectionIntoIntersection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersectionSide, DirectionIntoIntersection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_DirectionIntoIntersection_MetaData), Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_DirectionIntoIntersection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_TrafficLightDetailIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficIntersections.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_TrafficLightDetailIndex = { "TrafficLightDetailIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersectionSide, TrafficLightDetailIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_TrafficLightDetailIndex_MetaData), Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_TrafficLightDetailIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_bHasInboundLanesFromFreeway_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficIntersections.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_bHasInboundLanesFromFreeway_SetBit(void* Obj)
	{
		((FMassTrafficIntersectionSide*)Obj)->bHasInboundLanesFromFreeway = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_bHasInboundLanesFromFreeway = { "bHasInboundLanesFromFreeway", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficIntersectionSide), &Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_bHasInboundLanesFromFreeway_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_bHasInboundLanesFromFreeway_MetaData), Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_bHasInboundLanesFromFreeway_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_CrosswalkLanes_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_CrosswalkLanes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_CrosswalkWaitingLanes_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_CrosswalkWaitingLanes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_IntersectionLanesBeginMidpoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_DirectionIntoIntersection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_TrafficLightDetailIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewProp_bHasInboundLanesFromFreeway,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
		nullptr,
		&NewStructOps,
		"MassTrafficIntersectionSide",
		Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::PropPointers),
		sizeof(FMassTrafficIntersectionSide),
		alignof(FMassTrafficIntersectionSide),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficIntersectionSide()
	{
		if (!Z_Registration_Info_UScriptStruct_MassTrafficIntersectionSide.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficIntersectionSide.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassTrafficIntersectionSide.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficIntersectionHiddenOutboundSideHints;
class UScriptStruct* FMassTrafficIntersectionHiddenOutboundSideHints::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficIntersectionHiddenOutboundSideHints.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficIntersectionHiddenOutboundSideHints.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficIntersectionHiddenOutboundSideHints"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficIntersectionHiddenOutboundSideHints.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficIntersectionHiddenOutboundSideHints>()
{
	return FMassTrafficIntersectionHiddenOutboundSideHints::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionsIntoIntersection_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionsIntoIntersection_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DirectionsIntoIntersection;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CrosswalkLanes_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosswalkLanes_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_CrosswalkLanes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CrosswalkWaitingLanes_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosswalkWaitingLanes_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_CrosswalkWaitingLanes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * See 'NOTE ON HIDDEN SIDES'\n * Struct to temporarily store information about the hidden outbound-only lanes on of an intersection.\n */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficIntersections.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "See 'NOTE ON HIDDEN SIDES'\nStruct to temporarily store information about the hidden outbound-only lanes on of an intersection." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficIntersectionHiddenOutboundSideHints>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewProp_Points_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * See 'NOTE ON HIDDEN SIDES'\n\x09 * All of the points found on all of the hidden (outbound-only) sides, in no particular order.\n\x09 * Some of these may seem redundant.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficIntersections.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "See 'NOTE ON HIDDEN SIDES'\nAll of the points found on all of the hidden (outbound-only) sides, in no particular order.\nSome of these may seem redundant." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersectionHiddenOutboundSideHints, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewProp_Points_MetaData), Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewProp_Points_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewProp_DirectionsIntoIntersection_Inner = { "DirectionsIntoIntersection", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewProp_DirectionsIntoIntersection_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * See 'NOTE ON HIDDEN SIDES'\n\x09 * All of the into-intersection-directions found on all of the hidden (outbound-only) sides, in no particular order.\n\x09 * Some of these may seem redundant.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficIntersections.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "See 'NOTE ON HIDDEN SIDES'\nAll of the into-intersection-directions found on all of the hidden (outbound-only) sides, in no particular order.\nSome of these may seem redundant." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewProp_DirectionsIntoIntersection = { "DirectionsIntoIntersection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersectionHiddenOutboundSideHints, DirectionsIntoIntersection), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewProp_DirectionsIntoIntersection_MetaData), Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewProp_DirectionsIntoIntersection_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewProp_CrosswalkLanes_ElementProp = { "CrosswalkLanes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewProp_CrosswalkLanes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** See 'NOTE ON HIDDEN SIDES'. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficIntersections.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "See 'NOTE ON HIDDEN SIDES'." },
#endif
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewProp_CrosswalkLanes = { "CrosswalkLanes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersectionHiddenOutboundSideHints, CrosswalkLanes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewProp_CrosswalkLanes_MetaData), Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewProp_CrosswalkLanes_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewProp_CrosswalkWaitingLanes_ElementProp = { "CrosswalkWaitingLanes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewProp_CrosswalkWaitingLanes_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficIntersections.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewProp_CrosswalkWaitingLanes = { "CrosswalkWaitingLanes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersectionHiddenOutboundSideHints, CrosswalkWaitingLanes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewProp_CrosswalkWaitingLanes_MetaData), Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewProp_CrosswalkWaitingLanes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewProp_DirectionsIntoIntersection_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewProp_DirectionsIntoIntersection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewProp_CrosswalkLanes_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewProp_CrosswalkLanes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewProp_CrosswalkWaitingLanes_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewProp_CrosswalkWaitingLanes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
		nullptr,
		&NewStructOps,
		"MassTrafficIntersectionHiddenOutboundSideHints",
		Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::PropPointers),
		sizeof(FMassTrafficIntersectionHiddenOutboundSideHints),
		alignof(FMassTrafficIntersectionHiddenOutboundSideHints),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints()
	{
		if (!Z_Registration_Info_UScriptStruct_MassTrafficIntersectionHiddenOutboundSideHints.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficIntersectionHiddenOutboundSideHints.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassTrafficIntersectionHiddenOutboundSideHints.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficIntersectionDetail;
class UScriptStruct* FMassTrafficIntersectionDetail::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficIntersectionDetail.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficIntersectionDetail.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficIntersectionDetail"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficIntersectionDetail.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficIntersectionDetail>()
{
	return FMassTrafficIntersectionDetail::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SidesCenter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SidesCenter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sides_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sides_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSidesAreOrderedClockwise_MetaData[];
#endif
		static void NewProp_bSidesAreOrderedClockwise_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSidesAreOrderedClockwise;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ZoneIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasTrafficLights_MetaData[];
#endif
		static void NewProp_bHasTrafficLights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasTrafficLights;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficIntersections.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficIntersectionDetail>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_SidesCenter_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficIntersections.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_SidesCenter = { "SidesCenter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersectionDetail, SidesCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_SidesCenter_MetaData), Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_SidesCenter_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_Sides_Inner = { "Sides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMassTrafficIntersectionSide, METADATA_PARAMS(0, nullptr) }; // 1526443670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_Sides_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficIntersections.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_Sides = { "Sides", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersectionDetail, Sides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_Sides_MetaData), Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_Sides_MetaData) }; // 1526443670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_bSidesAreOrderedClockwise_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficIntersections.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_bSidesAreOrderedClockwise_SetBit(void* Obj)
	{
		((FMassTrafficIntersectionDetail*)Obj)->bSidesAreOrderedClockwise = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_bSidesAreOrderedClockwise = { "bSidesAreOrderedClockwise", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficIntersectionDetail), &Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_bSidesAreOrderedClockwise_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_bSidesAreOrderedClockwise_MetaData), Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_bSidesAreOrderedClockwise_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_ZoneIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficIntersections.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_ZoneIndex = { "ZoneIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficIntersectionDetail, ZoneIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_ZoneIndex_MetaData), Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_ZoneIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_bHasTrafficLights_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficIntersections.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_bHasTrafficLights_SetBit(void* Obj)
	{
		((FMassTrafficIntersectionDetail*)Obj)->bHasTrafficLights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_bHasTrafficLights = { "bHasTrafficLights", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficIntersectionDetail), &Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_bHasTrafficLights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_bHasTrafficLights_MetaData), Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_bHasTrafficLights_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_SidesCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_Sides_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_Sides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_bSidesAreOrderedClockwise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_ZoneIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewProp_bHasTrafficLights,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
		nullptr,
		&NewStructOps,
		"MassTrafficIntersectionDetail",
		Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::PropPointers),
		sizeof(FMassTrafficIntersectionDetail),
		alignof(FMassTrafficIntersectionDetail),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail()
	{
		if (!Z_Registration_Info_UScriptStruct_MassTrafficIntersectionDetail.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficIntersectionDetail.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassTrafficIntersectionDetail.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersections_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersections_h_Statics::ScriptStructInfo[] = {
		{ FMassTrafficIntersectionSide::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficIntersectionSide_Statics::NewStructOps, TEXT("MassTrafficIntersectionSide"), &Z_Registration_Info_UScriptStruct_MassTrafficIntersectionSide, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficIntersectionSide), 1526443670U) },
		{ FMassTrafficIntersectionHiddenOutboundSideHints::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficIntersectionHiddenOutboundSideHints_Statics::NewStructOps, TEXT("MassTrafficIntersectionHiddenOutboundSideHints"), &Z_Registration_Info_UScriptStruct_MassTrafficIntersectionHiddenOutboundSideHints, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficIntersectionHiddenOutboundSideHints), 2777058109U) },
		{ FMassTrafficIntersectionDetail::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficIntersectionDetail_Statics::NewStructOps, TEXT("MassTrafficIntersectionDetail"), &Z_Registration_Info_UScriptStruct_MassTrafficIntersectionDetail, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficIntersectionDetail), 1923647156U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersections_h_2697936001(TEXT("/Script/MassTraffic"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersections_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersections_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
