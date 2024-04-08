// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficEditor/Public/MassTrafficZoneGraphDataModifier.h"
#include "ZoneGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficZoneGraphDataModifier() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_AEditorUtilityActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	MASSTRAFFICEDITOR_API UClass* Z_Construct_UClass_AMassTrafficZoneGraphDataModifier();
	MASSTRAFFICEDITOR_API UClass* Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_NoRegister();
	MASSTRAFFICEDITOR_API UEnum* Z_Construct_UEnum_MassTrafficEditor_EMassTrafficZoneGraphModifierTraceType();
	UPackage* Z_Construct_UPackage__Script_MassTrafficEditor();
	ZONEGRAPH_API UClass* Z_Construct_UClass_AZoneGraphData_NoRegister();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTag();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagMask();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassTrafficZoneGraphModifierTraceType;
	static UEnum* EMassTrafficZoneGraphModifierTraceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMassTrafficZoneGraphModifierTraceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMassTrafficZoneGraphModifierTraceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassTrafficEditor_EMassTrafficZoneGraphModifierTraceType, (UObject*)Z_Construct_UPackage__Script_MassTrafficEditor(), TEXT("EMassTrafficZoneGraphModifierTraceType"));
		}
		return Z_Registration_Info_UEnum_EMassTrafficZoneGraphModifierTraceType.OuterSingleton;
	}
	template<> MASSTRAFFICEDITOR_API UEnum* StaticEnum<EMassTrafficZoneGraphModifierTraceType>()
	{
		return EMassTrafficZoneGraphModifierTraceType_StaticEnum();
	}
	struct Z_Construct_UEnum_MassTrafficEditor_EMassTrafficZoneGraphModifierTraceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MassTrafficEditor_EMassTrafficZoneGraphModifierTraceType_Statics::Enumerators[] = {
		{ "EMassTrafficZoneGraphModifierTraceType::Line", (int64)EMassTrafficZoneGraphModifierTraceType::Line },
		{ "EMassTrafficZoneGraphModifierTraceType::Sphere", (int64)EMassTrafficZoneGraphModifierTraceType::Sphere },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MassTrafficEditor_EMassTrafficZoneGraphModifierTraceType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Line.Name", "EMassTrafficZoneGraphModifierTraceType::Line" },
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
		{ "Sphere.Name", "EMassTrafficZoneGraphModifierTraceType::Sphere" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassTrafficEditor_EMassTrafficZoneGraphModifierTraceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MassTrafficEditor,
		nullptr,
		"EMassTrafficZoneGraphModifierTraceType",
		"EMassTrafficZoneGraphModifierTraceType",
		Z_Construct_UEnum_MassTrafficEditor_EMassTrafficZoneGraphModifierTraceType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MassTrafficEditor_EMassTrafficZoneGraphModifierTraceType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassTrafficEditor_EMassTrafficZoneGraphModifierTraceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficZoneGraphModifierTraceType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MassTrafficEditor_EMassTrafficZoneGraphModifierTraceType()
	{
		if (!Z_Registration_Info_UEnum_EMassTrafficZoneGraphModifierTraceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassTrafficZoneGraphModifierTraceType.InnerSingleton, Z_Construct_UEnum_MassTrafficEditor_EMassTrafficZoneGraphModifierTraceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMassTrafficZoneGraphModifierTraceType.InnerSingleton;
	}
	DEFINE_FUNCTION(AMassTrafficZoneGraphDataModifier::execUntagCrosswalkLanesNearFreewayLaneEndPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UntagCrosswalkLanesNearFreewayLaneEndPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficZoneGraphDataModifier::execSnapZoneGraphDataToGround)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SnapZoneGraphDataToGround();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassTrafficZoneGraphDataModifier::execBuildZoneGraphData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildZoneGraphData();
		P_NATIVE_END;
	}
	void AMassTrafficZoneGraphDataModifier::StaticRegisterNativesAMassTrafficZoneGraphDataModifier()
	{
		UClass* Class = AMassTrafficZoneGraphDataModifier::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildZoneGraphData", &AMassTrafficZoneGraphDataModifier::execBuildZoneGraphData },
			{ "SnapZoneGraphDataToGround", &AMassTrafficZoneGraphDataModifier::execSnapZoneGraphDataToGround },
			{ "UntagCrosswalkLanesNearFreewayLaneEndPoints", &AMassTrafficZoneGraphDataModifier::execUntagCrosswalkLanesNearFreewayLaneEndPoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMassTrafficZoneGraphDataModifier_BuildZoneGraphData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficZoneGraphDataModifier_BuildZoneGraphData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Snap to Ground" },
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficZoneGraphDataModifier_BuildZoneGraphData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficZoneGraphDataModifier, nullptr, "BuildZoneGraphData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficZoneGraphDataModifier_BuildZoneGraphData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficZoneGraphDataModifier_BuildZoneGraphData_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMassTrafficZoneGraphDataModifier_BuildZoneGraphData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficZoneGraphDataModifier_BuildZoneGraphData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficZoneGraphDataModifier_SnapZoneGraphDataToGround_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficZoneGraphDataModifier_SnapZoneGraphDataToGround_Statics::Function_MetaDataParams[] = {
		{ "Category", "Snap to Ground" },
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficZoneGraphDataModifier_SnapZoneGraphDataToGround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficZoneGraphDataModifier, nullptr, "SnapZoneGraphDataToGround", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficZoneGraphDataModifier_SnapZoneGraphDataToGround_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficZoneGraphDataModifier_SnapZoneGraphDataToGround_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMassTrafficZoneGraphDataModifier_SnapZoneGraphDataToGround()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficZoneGraphDataModifier_SnapZoneGraphDataToGround_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassTrafficZoneGraphDataModifier_UntagCrosswalkLanesNearFreewayLaneEndPoints_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficZoneGraphDataModifier_UntagCrosswalkLanesNearFreewayLaneEndPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tagging" },
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficZoneGraphDataModifier_UntagCrosswalkLanesNearFreewayLaneEndPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficZoneGraphDataModifier, nullptr, "UntagCrosswalkLanesNearFreewayLaneEndPoints", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficZoneGraphDataModifier_UntagCrosswalkLanesNearFreewayLaneEndPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficZoneGraphDataModifier_UntagCrosswalkLanesNearFreewayLaneEndPoints_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMassTrafficZoneGraphDataModifier_UntagCrosswalkLanesNearFreewayLaneEndPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficZoneGraphDataModifier_UntagCrosswalkLanesNearFreewayLaneEndPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMassTrafficZoneGraphDataModifier);
	UClass* Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_NoRegister()
	{
		return AMassTrafficZoneGraphDataModifier::StaticClass();
	}
	struct Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraphData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ZoneGraphData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapPointZ_MetaData[];
#endif
		static void NewProp_bSnapPointZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapPointZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapPointUpVector_MetaData[];
#endif
		static void NewProp_bSnapPointUpVector_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapPointUpVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceUpVectorPositiveZ_MetaData[];
#endif
		static void NewProp_bForceUpVectorPositiveZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceUpVectorPositiveZ;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TraceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceSphereRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceSphereRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceStartZOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceStartZOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceEndZOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceEndZOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceFinalZOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceFinalZOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTraceDebugDrawTrace_MetaData[];
#endif
		static void NewProp_bTraceDebugDrawTrace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceDebugDrawTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTraceDebugDrawHits_MetaData[];
#endif
		static void NewProp_bTraceDebugDrawHits_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceDebugDrawHits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTraceDebugDrawMisses_MetaData[];
#endif
		static void NewProp_bTraceDebugDrawMisses_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceDebugDrawMisses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundSnapIncludeTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroundSnapIncludeTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundSnapExcludeTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroundSnapExcludeTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundSnapTraceComplex_MetaData[];
#endif
		static void NewProp_GroundSnapTraceComplex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GroundSnapTraceComplex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundSnapTraceCollisionChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroundSnapTraceCollisionChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraphTagForFreeway_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneGraphTagForFreeway;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraphTagForCrosswalks_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneGraphTagForCrosswalks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridCellSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GridCellSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumInterpolationSteps_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumInterpolationSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceFromFreewayToCrosswalk_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceFromFreewayToCrosswalk;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCrosswalkLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCrosswalkLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugLifetime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugLifetime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugUpVectorScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugUpVectorScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugAroundActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugAroundActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugAroundActorRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugAroundActorRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEditorUtilityActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTrafficEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMassTrafficZoneGraphDataModifier_BuildZoneGraphData, "BuildZoneGraphData" }, // 650658715
		{ &Z_Construct_UFunction_AMassTrafficZoneGraphDataModifier_SnapZoneGraphDataToGround, "SnapZoneGraphDataToGround" }, // 1850525017
		{ &Z_Construct_UFunction_AMassTrafficZoneGraphDataModifier_UntagCrosswalkLanesNearFreewayLaneEndPoints, "UntagCrosswalkLanesNearFreewayLaneEndPoints" }, // 2835245209
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MassTrafficZoneGraphDataModifier.h" },
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_ZoneGraphData_MetaData[] = {
		{ "Category", "Zone Graph" },
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_ZoneGraphData = { "ZoneGraphData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficZoneGraphDataModifier, ZoneGraphData), Z_Construct_UClass_AZoneGraphData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_ZoneGraphData_MetaData), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_ZoneGraphData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bSnapPointZ_MetaData[] = {
		{ "Category", "Snap" },
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
	};
#endif
	void Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bSnapPointZ_SetBit(void* Obj)
	{
		((AMassTrafficZoneGraphDataModifier*)Obj)->bSnapPointZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bSnapPointZ = { "bSnapPointZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMassTrafficZoneGraphDataModifier), &Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bSnapPointZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bSnapPointZ_MetaData), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bSnapPointZ_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bSnapPointUpVector_MetaData[] = {
		{ "Category", "Snap" },
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
	};
#endif
	void Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bSnapPointUpVector_SetBit(void* Obj)
	{
		((AMassTrafficZoneGraphDataModifier*)Obj)->bSnapPointUpVector = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bSnapPointUpVector = { "bSnapPointUpVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMassTrafficZoneGraphDataModifier), &Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bSnapPointUpVector_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bSnapPointUpVector_MetaData), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bSnapPointUpVector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bForceUpVectorPositiveZ_MetaData[] = {
		{ "Category", "Snap" },
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
	};
#endif
	void Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bForceUpVectorPositiveZ_SetBit(void* Obj)
	{
		((AMassTrafficZoneGraphDataModifier*)Obj)->bForceUpVectorPositiveZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bForceUpVectorPositiveZ = { "bForceUpVectorPositiveZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMassTrafficZoneGraphDataModifier), &Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bForceUpVectorPositiveZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bForceUpVectorPositiveZ_MetaData), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bForceUpVectorPositiveZ_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_TraceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_TraceType_MetaData[] = {
		{ "Category", "Trace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Trace type:\n\x09 * Line - Faster, but should only be used when there are no cracks in the geometry.\n\x09 * Sphere - Slower, but should be used if there are cracks in the geometry.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trace type:\nLine - Faster, but should only be used when there are no cracks in the geometry.\nSphere - Slower, but should be used if there are cracks in the geometry." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_TraceType = { "TraceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficZoneGraphDataModifier, TraceType), Z_Construct_UEnum_MassTrafficEditor_EMassTrafficZoneGraphModifierTraceType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_TraceType_MetaData), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_TraceType_MetaData) }; // 256167139
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_TraceSphereRadius_MetaData[] = {
		{ "Category", "Trace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If using box trace, this is half the width of the box. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If using box trace, this is half the width of the box." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_TraceSphereRadius = { "TraceSphereRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficZoneGraphDataModifier, TraceSphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_TraceSphereRadius_MetaData), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_TraceSphereRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_TraceStartZOffset_MetaData[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_TraceStartZOffset = { "TraceStartZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficZoneGraphDataModifier, TraceStartZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_TraceStartZOffset_MetaData), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_TraceStartZOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_TraceEndZOffset_MetaData[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_TraceEndZOffset = { "TraceEndZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficZoneGraphDataModifier, TraceEndZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_TraceEndZOffset_MetaData), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_TraceEndZOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_TraceFinalZOffset_MetaData[] = {
		{ "Category", "Trace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Any additional Z offset to apply to the final point, once it's found. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Any additional Z offset to apply to the final point, once it's found." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_TraceFinalZOffset = { "TraceFinalZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficZoneGraphDataModifier, TraceFinalZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_TraceFinalZOffset_MetaData), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_TraceFinalZOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bTraceDebugDrawTrace_MetaData[] = {
		{ "Category", "Trace Debug" },
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
	};
#endif
	void Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bTraceDebugDrawTrace_SetBit(void* Obj)
	{
		((AMassTrafficZoneGraphDataModifier*)Obj)->bTraceDebugDrawTrace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bTraceDebugDrawTrace = { "bTraceDebugDrawTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMassTrafficZoneGraphDataModifier), &Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bTraceDebugDrawTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bTraceDebugDrawTrace_MetaData), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bTraceDebugDrawTrace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bTraceDebugDrawHits_MetaData[] = {
		{ "Category", "Trace Debug" },
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
	};
#endif
	void Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bTraceDebugDrawHits_SetBit(void* Obj)
	{
		((AMassTrafficZoneGraphDataModifier*)Obj)->bTraceDebugDrawHits = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bTraceDebugDrawHits = { "bTraceDebugDrawHits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMassTrafficZoneGraphDataModifier), &Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bTraceDebugDrawHits_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bTraceDebugDrawHits_MetaData), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bTraceDebugDrawHits_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bTraceDebugDrawMisses_MetaData[] = {
		{ "Category", "Trace Debug" },
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
	};
#endif
	void Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bTraceDebugDrawMisses_SetBit(void* Obj)
	{
		((AMassTrafficZoneGraphDataModifier*)Obj)->bTraceDebugDrawMisses = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bTraceDebugDrawMisses = { "bTraceDebugDrawMisses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMassTrafficZoneGraphDataModifier), &Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bTraceDebugDrawMisses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bTraceDebugDrawMisses_MetaData), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bTraceDebugDrawMisses_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_GroundSnapIncludeTags_MetaData[] = {
		{ "Category", "Snap to Ground" },
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_GroundSnapIncludeTags = { "GroundSnapIncludeTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficZoneGraphDataModifier, GroundSnapIncludeTags), Z_Construct_UScriptStruct_FZoneGraphTagMask, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_GroundSnapIncludeTags_MetaData), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_GroundSnapIncludeTags_MetaData) }; // 2479371343
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_GroundSnapExcludeTags_MetaData[] = {
		{ "Category", "Snap to Ground" },
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_GroundSnapExcludeTags = { "GroundSnapExcludeTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficZoneGraphDataModifier, GroundSnapExcludeTags), Z_Construct_UScriptStruct_FZoneGraphTagMask, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_GroundSnapExcludeTags_MetaData), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_GroundSnapExcludeTags_MetaData) }; // 2479371343
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_GroundSnapTraceComplex_MetaData[] = {
		{ "Category", "Snap to Ground" },
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
	};
#endif
	void Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_GroundSnapTraceComplex_SetBit(void* Obj)
	{
		((AMassTrafficZoneGraphDataModifier*)Obj)->GroundSnapTraceComplex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_GroundSnapTraceComplex = { "GroundSnapTraceComplex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMassTrafficZoneGraphDataModifier), &Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_GroundSnapTraceComplex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_GroundSnapTraceComplex_MetaData), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_GroundSnapTraceComplex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_GroundSnapTraceCollisionChannel_MetaData[] = {
		{ "Category", "Snap to Ground" },
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_GroundSnapTraceCollisionChannel = { "GroundSnapTraceCollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficZoneGraphDataModifier, GroundSnapTraceCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_GroundSnapTraceCollisionChannel_MetaData), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_GroundSnapTraceCollisionChannel_MetaData) }; // 1822723181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_ZoneGraphTagForFreeway_MetaData[] = {
		{ "Category", "Tagging" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Zone Graph Tag to use for Zone Shapes that are for intersections. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zone Graph Tag to use for Zone Shapes that are for intersections." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_ZoneGraphTagForFreeway = { "ZoneGraphTagForFreeway", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficZoneGraphDataModifier, ZoneGraphTagForFreeway), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_ZoneGraphTagForFreeway_MetaData), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_ZoneGraphTagForFreeway_MetaData) }; // 2776536726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_ZoneGraphTagForCrosswalks_MetaData[] = {
		{ "Category", "Tagging" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Zone Graph Tag to use for Zone Shapes that are for intersections.\n\x09 * Only used to redundantly tag Zone Shapes. Lane profiles should provide their own per-lane 'pedestrian' tags.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zone Graph Tag to use for Zone Shapes that are for intersections.\nOnly used to redundantly tag Zone Shapes. Lane profiles should provide their own per-lane 'pedestrian' tags." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_ZoneGraphTagForCrosswalks = { "ZoneGraphTagForCrosswalks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficZoneGraphDataModifier, ZoneGraphTagForCrosswalks), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_ZoneGraphTagForCrosswalks_MetaData), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_ZoneGraphTagForCrosswalks_MetaData) }; // 2776536726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_GridCellSize_MetaData[] = {
		{ "Category", "Tagging" },
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_GridCellSize = { "GridCellSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficZoneGraphDataModifier, GridCellSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_GridCellSize_MetaData), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_GridCellSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_NumInterpolationSteps_MetaData[] = {
		{ "Category", "Tagging" },
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_NumInterpolationSteps = { "NumInterpolationSteps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficZoneGraphDataModifier, NumInterpolationSteps), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_NumInterpolationSteps_MetaData), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_NumInterpolationSteps_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_MaxDistanceFromFreewayToCrosswalk_MetaData[] = {
		{ "Category", "Tagging" },
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_MaxDistanceFromFreewayToCrosswalk = { "MaxDistanceFromFreewayToCrosswalk", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficZoneGraphDataModifier, MaxDistanceFromFreewayToCrosswalk), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_MaxDistanceFromFreewayToCrosswalk_MetaData), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_MaxDistanceFromFreewayToCrosswalk_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_MaxCrosswalkLength_MetaData[] = {
		{ "Category", "Tagging" },
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_MaxCrosswalkLength = { "MaxCrosswalkLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficZoneGraphDataModifier, MaxCrosswalkLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_MaxCrosswalkLength_MetaData), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_MaxCrosswalkLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_DebugLifetime_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_DebugLifetime = { "DebugLifetime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficZoneGraphDataModifier, DebugLifetime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_DebugLifetime_MetaData), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_DebugLifetime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_DebugThickness_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_DebugThickness = { "DebugThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficZoneGraphDataModifier, DebugThickness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_DebugThickness_MetaData), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_DebugThickness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_DebugUpVectorScale_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_DebugUpVectorScale = { "DebugUpVectorScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficZoneGraphDataModifier, DebugUpVectorScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_DebugUpVectorScale_MetaData), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_DebugUpVectorScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_DebugAroundActor_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_DebugAroundActor = { "DebugAroundActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficZoneGraphDataModifier, DebugAroundActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_DebugAroundActor_MetaData), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_DebugAroundActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_DebugAroundActorRadius_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/MassTrafficZoneGraphDataModifier.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_DebugAroundActorRadius = { "DebugAroundActorRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficZoneGraphDataModifier, DebugAroundActorRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_DebugAroundActorRadius_MetaData), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_DebugAroundActorRadius_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_ZoneGraphData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bSnapPointZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bSnapPointUpVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bForceUpVectorPositiveZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_TraceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_TraceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_TraceSphereRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_TraceStartZOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_TraceEndZOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_TraceFinalZOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bTraceDebugDrawTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bTraceDebugDrawHits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_bTraceDebugDrawMisses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_GroundSnapIncludeTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_GroundSnapExcludeTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_GroundSnapTraceComplex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_GroundSnapTraceCollisionChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_ZoneGraphTagForFreeway,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_ZoneGraphTagForCrosswalks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_GridCellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_NumInterpolationSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_MaxDistanceFromFreewayToCrosswalk,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_MaxCrosswalkLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_DebugLifetime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_DebugThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_DebugUpVectorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_DebugAroundActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::NewProp_DebugAroundActorRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMassTrafficZoneGraphDataModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::ClassParams = {
		&AMassTrafficZoneGraphDataModifier::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMassTrafficZoneGraphDataModifier()
	{
		if (!Z_Registration_Info_UClass_AMassTrafficZoneGraphDataModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMassTrafficZoneGraphDataModifier.OuterSingleton, Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMassTrafficZoneGraphDataModifier.OuterSingleton;
	}
	template<> MASSTRAFFICEDITOR_API UClass* StaticClass<AMassTrafficZoneGraphDataModifier>()
	{
		return AMassTrafficZoneGraphDataModifier::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMassTrafficZoneGraphDataModifier);
	AMassTrafficZoneGraphDataModifier::~AMassTrafficZoneGraphDataModifier() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_Statics::EnumInfo[] = {
		{ EMassTrafficZoneGraphModifierTraceType_StaticEnum, TEXT("EMassTrafficZoneGraphModifierTraceType"), &Z_Registration_Info_UEnum_EMassTrafficZoneGraphModifierTraceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 256167139U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMassTrafficZoneGraphDataModifier, AMassTrafficZoneGraphDataModifier::StaticClass, TEXT("AMassTrafficZoneGraphDataModifier"), &Z_Registration_Info_UClass_AMassTrafficZoneGraphDataModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMassTrafficZoneGraphDataModifier), 1595361554U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_3567162551(TEXT("/Script/MassTrafficEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
