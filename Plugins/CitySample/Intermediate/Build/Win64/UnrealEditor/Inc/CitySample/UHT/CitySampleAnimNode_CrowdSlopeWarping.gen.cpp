// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h"
#include "../../Source/Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "../../Source/Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleAnimNode_CrowdSlopeWarping() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFloatSpringState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorSpringState();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySample_VectorSpringInterp;
class UScriptStruct* FCitySample_VectorSpringInterp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySample_VectorSpringInterp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySample_VectorSpringInterp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CitySample_VectorSpringInterp"));
	}
	return Z_Registration_Info_UScriptStruct_CitySample_VectorSpringInterp.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySample_VectorSpringInterp>()
{
	return FCitySample_VectorSpringInterp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetVelocityAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetVelocityAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CriticalDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CriticalDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Current;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpringState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitializeFromTarget_MetaData[];
#endif
		static void NewProp_bInitializeFromTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitializeFromTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySample_VectorSpringInterp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySample_VectorSpringInterp, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_Strength_MetaData), Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_Strength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_TargetVelocityAmount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_TargetVelocityAmount = { "TargetVelocityAmount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySample_VectorSpringInterp, TargetVelocityAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_TargetVelocityAmount_MetaData), Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_TargetVelocityAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_CriticalDamping_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_CriticalDamping = { "CriticalDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySample_VectorSpringInterp, CriticalDamping), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_CriticalDamping_MetaData), Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_CriticalDamping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_Force_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySample_VectorSpringInterp, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_Force_MetaData), Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_Force_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySample_VectorSpringInterp, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_Velocity_MetaData), Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_Velocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_Current_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySample_VectorSpringInterp, Current), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_Current_MetaData), Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_Current_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_SpringState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_SpringState = { "SpringState", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySample_VectorSpringInterp, SpringState), Z_Construct_UScriptStruct_FVectorSpringState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_SpringState_MetaData), Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_SpringState_MetaData) }; // 3222812862
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_bInitializeFromTarget_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_bInitializeFromTarget_SetBit(void* Obj)
	{
		((FCitySample_VectorSpringInterp*)Obj)->bInitializeFromTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_bInitializeFromTarget = { "bInitializeFromTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySample_VectorSpringInterp), &Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_bInitializeFromTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_bInitializeFromTarget_MetaData), Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_bInitializeFromTarget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_TargetVelocityAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_CriticalDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_Force,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_SpringState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewProp_bInitializeFromTarget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"CitySample_VectorSpringInterp",
		Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::PropPointers),
		sizeof(FCitySample_VectorSpringInterp),
		alignof(FCitySample_VectorSpringInterp),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp()
	{
		if (!Z_Registration_Info_UScriptStruct_CitySample_VectorSpringInterp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySample_VectorSpringInterp.InnerSingleton, Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CitySample_VectorSpringInterp.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySample_FloatSpringInterp;
class UScriptStruct* FCitySample_FloatSpringInterp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySample_FloatSpringInterp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySample_FloatSpringInterp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CitySample_FloatSpringInterp"));
	}
	return Z_Registration_Info_UScriptStruct_CitySample_FloatSpringInterp.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySample_FloatSpringInterp>()
{
	return FCitySample_FloatSpringInterp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetVelocityAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetVelocityAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CriticalDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CriticalDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Force;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Current;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpringState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitializeFromTarget_MetaData[];
#endif
		static void NewProp_bInitializeFromTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitializeFromTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySample_FloatSpringInterp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySample_FloatSpringInterp, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_Strength_MetaData), Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_Strength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_TargetVelocityAmount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_TargetVelocityAmount = { "TargetVelocityAmount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySample_FloatSpringInterp, TargetVelocityAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_TargetVelocityAmount_MetaData), Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_TargetVelocityAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_CriticalDamping_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_CriticalDamping = { "CriticalDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySample_FloatSpringInterp, CriticalDamping), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_CriticalDamping_MetaData), Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_CriticalDamping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_Force_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySample_FloatSpringInterp, Force), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_Force_MetaData), Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_Force_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySample_FloatSpringInterp, Velocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_Velocity_MetaData), Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_Velocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_Current_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySample_FloatSpringInterp, Current), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_Current_MetaData), Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_Current_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_SpringState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_SpringState = { "SpringState", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySample_FloatSpringInterp, SpringState), Z_Construct_UScriptStruct_FFloatSpringState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_SpringState_MetaData), Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_SpringState_MetaData) }; // 2156018547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_bInitializeFromTarget_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_bInitializeFromTarget_SetBit(void* Obj)
	{
		((FCitySample_FloatSpringInterp*)Obj)->bInitializeFromTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_bInitializeFromTarget = { "bInitializeFromTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySample_FloatSpringInterp), &Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_bInitializeFromTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_bInitializeFromTarget_MetaData), Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_bInitializeFromTarget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_TargetVelocityAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_CriticalDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_Force,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_Current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_SpringState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewProp_bInitializeFromTarget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"CitySample_FloatSpringInterp",
		Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::PropPointers),
		sizeof(FCitySample_FloatSpringInterp),
		alignof(FCitySample_FloatSpringInterp),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp()
	{
		if (!Z_Registration_Info_UScriptStruct_CitySample_FloatSpringInterp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySample_FloatSpringInterp.InnerSingleton, Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CitySample_FloatSpringInterp.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySample_CrowdSlopeWarpingFootData;
class UScriptStruct* FCitySample_CrowdSlopeWarpingFootData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySample_CrowdSlopeWarpingFootData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySample_CrowdSlopeWarpingFootData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CitySample_CrowdSlopeWarpingFootData"));
	}
	return Z_Registration_Info_UScriptStruct_CitySample_CrowdSlopeWarpingFootData.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySample_CrowdSlopeWarpingFootData>()
{
	return FCitySample_CrowdSlopeWarpingFootData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKFootBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IKFootBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FKFootBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FKFootBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKFootBallBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IKFootBallBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootPinningCurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FootPinningCurveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootOffsetSpringInterp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootOffsetSpringInterp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootNormalSpringInterp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootNormalSpringInterp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySample_CrowdSlopeWarpingFootData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_IKFootBone_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_IKFootBone = { "IKFootBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySample_CrowdSlopeWarpingFootData, IKFootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_IKFootBone_MetaData), Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_IKFootBone_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_FKFootBone_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_FKFootBone = { "FKFootBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySample_CrowdSlopeWarpingFootData, FKFootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_FKFootBone_MetaData), Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_FKFootBone_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_IKFootBallBone_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_IKFootBallBone = { "IKFootBallBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySample_CrowdSlopeWarpingFootData, IKFootBallBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_IKFootBallBone_MetaData), Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_IKFootBallBone_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_FootPinningCurveName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_FootPinningCurveName = { "FootPinningCurveName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySample_CrowdSlopeWarpingFootData, FootPinningCurveName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_FootPinningCurveName_MetaData), Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_FootPinningCurveName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_FootOffsetSpringInterp_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_FootOffsetSpringInterp = { "FootOffsetSpringInterp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySample_CrowdSlopeWarpingFootData, FootOffsetSpringInterp), Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_FootOffsetSpringInterp_MetaData), Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_FootOffsetSpringInterp_MetaData) }; // 1132811817
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_FootNormalSpringInterp_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_FootNormalSpringInterp = { "FootNormalSpringInterp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySample_CrowdSlopeWarpingFootData, FootNormalSpringInterp), Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_FootNormalSpringInterp_MetaData), Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_FootNormalSpringInterp_MetaData) }; // 1132811817
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_IKFootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_FKFootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_IKFootBallBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_FootPinningCurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_FootOffsetSpringInterp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewProp_FootNormalSpringInterp,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"CitySample_CrowdSlopeWarpingFootData",
		Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::PropPointers),
		sizeof(FCitySample_CrowdSlopeWarpingFootData),
		alignof(FCitySample_CrowdSlopeWarpingFootData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData()
	{
		if (!Z_Registration_Info_UScriptStruct_CitySample_CrowdSlopeWarpingFootData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySample_CrowdSlopeWarpingFootData.InnerSingleton, Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CitySample_CrowdSlopeWarpingFootData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCitySampleAnimNode_CrowdSlopeWarping>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FCitySampleAnimNode_CrowdSlopeWarping cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySampleAnimNode_CrowdSlopeWarping;
class UScriptStruct* FCitySampleAnimNode_CrowdSlopeWarping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleAnimNode_CrowdSlopeWarping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySampleAnimNode_CrowdSlopeWarping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CitySampleAnimNode_CrowdSlopeWarping"));
	}
	return Z_Registration_Info_UScriptStruct_CitySampleAnimNode_CrowdSlopeWarping.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySampleAnimNode_CrowdSlopeWarping>()
{
	return FCitySampleAnimNode_CrowdSlopeWarping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PelvisBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisSpringInterp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PelvisSpringInterp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftFootData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftFootData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightFootData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightFootData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKFootRootBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IKFootRootBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeetRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FeetRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceStartOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStartOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootPinningCurveAlphaThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FootPinningCurveAlphaThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredMaxLegLengthPercentageFromRefPose_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredMaxLegLengthPercentageFromRefPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinStepAdjustHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinStepAdjustHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkableFloorAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkableFloorAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckForLegOverextension_MetaData[];
#endif
		static void NewProp_bCheckForLegOverextension_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckForLegOverextension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoForwardStepAdjustment_MetaData[];
#endif
		static void NewProp_bDoForwardStepAdjustment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoForwardStepAdjustment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoTraces_MetaData[];
#endif
		static void NewProp_bDoTraces_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoTraces;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySampleAnimNode_CrowdSlopeWarping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_PelvisBone_MetaData[] = {
		{ "Category", "Pelvis" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_PelvisBone = { "PelvisBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleAnimNode_CrowdSlopeWarping, PelvisBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_PelvisBone_MetaData), Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_PelvisBone_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_PelvisSpringInterp_MetaData[] = {
		{ "Category", "Pelvis" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_PelvisSpringInterp = { "PelvisSpringInterp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleAnimNode_CrowdSlopeWarping, PelvisSpringInterp), Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_PelvisSpringInterp_MetaData), Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_PelvisSpringInterp_MetaData) }; // 1132811817
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_LeftFootData_MetaData[] = {
		{ "Category", "Feet" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_LeftFootData = { "LeftFootData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleAnimNode_CrowdSlopeWarping, LeftFootData), Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_LeftFootData_MetaData), Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_LeftFootData_MetaData) }; // 4110999768
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_RightFootData_MetaData[] = {
		{ "Category", "Feet" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_RightFootData = { "RightFootData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleAnimNode_CrowdSlopeWarping, RightFootData), Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_RightFootData_MetaData), Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_RightFootData_MetaData) }; // 4110999768
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_IKFootRootBone_MetaData[] = {
		{ "Category", "Feet" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_IKFootRootBone = { "IKFootRootBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleAnimNode_CrowdSlopeWarping, IKFootRootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_IKFootRootBone_MetaData), Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_IKFootRootBone_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_FeetRadius_MetaData[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_FeetRadius = { "FeetRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleAnimNode_CrowdSlopeWarping, FeetRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_FeetRadius_MetaData), Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_FeetRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_TraceStartOffset_MetaData[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_TraceStartOffset = { "TraceStartOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleAnimNode_CrowdSlopeWarping, TraceStartOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_TraceStartOffset_MetaData), Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_TraceStartOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_GroundOffset_MetaData[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_GroundOffset = { "GroundOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleAnimNode_CrowdSlopeWarping, GroundOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_GroundOffset_MetaData), Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_GroundOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_TraceLength_MetaData[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_TraceLength = { "TraceLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleAnimNode_CrowdSlopeWarping, TraceLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_TraceLength_MetaData), Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_TraceLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_FootPinningCurveAlphaThreshold_MetaData[] = {
		{ "Category", "FootPinning" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_FootPinningCurveAlphaThreshold = { "FootPinningCurveAlphaThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleAnimNode_CrowdSlopeWarping, FootPinningCurveAlphaThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_FootPinningCurveAlphaThreshold_MetaData), Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_FootPinningCurveAlphaThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_DesiredMaxLegLengthPercentageFromRefPose_MetaData[] = {
		{ "Category", "Feet" },
		{ "ClampMin", "0.100000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Legs may over-extend a bit during foot pinning. This is sometimes desirable in CitySample. (@Caleb.Longmire)\n" },
#endif
		{ "EditCondition", "bCheckForLegOverextension" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Legs may over-extend a bit during foot pinning. This is sometimes desirable in CitySample. (@Caleb.Longmire)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_DesiredMaxLegLengthPercentageFromRefPose = { "DesiredMaxLegLengthPercentageFromRefPose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleAnimNode_CrowdSlopeWarping, DesiredMaxLegLengthPercentageFromRefPose), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_DesiredMaxLegLengthPercentageFromRefPose_MetaData), Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_DesiredMaxLegLengthPercentageFromRefPose_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_MinStepAdjustHeight_MetaData[] = {
		{ "Category", "Feet" },
		{ "ClampMax", "90.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_MinStepAdjustHeight = { "MinStepAdjustHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleAnimNode_CrowdSlopeWarping, MinStepAdjustHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_MinStepAdjustHeight_MetaData), Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_MinStepAdjustHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_WalkableFloorAngle_MetaData[] = {
		{ "Category", "Feet" },
		{ "ClampMax", "90.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_WalkableFloorAngle = { "WalkableFloorAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleAnimNode_CrowdSlopeWarping, WalkableFloorAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_WalkableFloorAngle_MetaData), Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_WalkableFloorAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_bCheckForLegOverextension_MetaData[] = {
		{ "Category", "Feet" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_bCheckForLegOverextension_SetBit(void* Obj)
	{
		((FCitySampleAnimNode_CrowdSlopeWarping*)Obj)->bCheckForLegOverextension = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_bCheckForLegOverextension = { "bCheckForLegOverextension", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySampleAnimNode_CrowdSlopeWarping), &Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_bCheckForLegOverextension_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_bCheckForLegOverextension_MetaData), Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_bCheckForLegOverextension_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_bDoForwardStepAdjustment_MetaData[] = {
		{ "Category", "Feet" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_bDoForwardStepAdjustment_SetBit(void* Obj)
	{
		((FCitySampleAnimNode_CrowdSlopeWarping*)Obj)->bDoForwardStepAdjustment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_bDoForwardStepAdjustment = { "bDoForwardStepAdjustment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySampleAnimNode_CrowdSlopeWarping), &Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_bDoForwardStepAdjustment_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_bDoForwardStepAdjustment_MetaData), Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_bDoForwardStepAdjustment_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_bDoTraces_MetaData[] = {
		{ "Category", "Trace" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_bDoTraces_SetBit(void* Obj)
	{
		((FCitySampleAnimNode_CrowdSlopeWarping*)Obj)->bDoTraces = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_bDoTraces = { "bDoTraces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySampleAnimNode_CrowdSlopeWarping), &Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_bDoTraces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_bDoTraces_MetaData), Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_bDoTraces_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 3930035403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "Category", "Trace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The types of objects that this trace can hit */" },
#endif
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_CrowdSlopeWarping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The types of objects that this trace can hit" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleAnimNode_CrowdSlopeWarping, ObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_ObjectTypes_MetaData), Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_ObjectTypes_MetaData) }; // 3930035403
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_PelvisBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_PelvisSpringInterp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_LeftFootData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_RightFootData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_IKFootRootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_FeetRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_TraceStartOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_GroundOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_TraceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_FootPinningCurveAlphaThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_DesiredMaxLegLengthPercentageFromRefPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_MinStepAdjustHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_WalkableFloorAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_bCheckForLegOverextension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_bDoForwardStepAdjustment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_bDoTraces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_ObjectTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewProp_ObjectTypes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"CitySampleAnimNode_CrowdSlopeWarping",
		Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::PropPointers),
		sizeof(FCitySampleAnimNode_CrowdSlopeWarping),
		alignof(FCitySampleAnimNode_CrowdSlopeWarping),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping()
	{
		if (!Z_Registration_Info_UScriptStruct_CitySampleAnimNode_CrowdSlopeWarping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySampleAnimNode_CrowdSlopeWarping.InnerSingleton, Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CitySampleAnimNode_CrowdSlopeWarping.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimNode_CrowdSlopeWarping_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimNode_CrowdSlopeWarping_h_Statics::ScriptStructInfo[] = {
		{ FCitySample_VectorSpringInterp::StaticStruct, Z_Construct_UScriptStruct_FCitySample_VectorSpringInterp_Statics::NewStructOps, TEXT("CitySample_VectorSpringInterp"), &Z_Registration_Info_UScriptStruct_CitySample_VectorSpringInterp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySample_VectorSpringInterp), 1132811817U) },
		{ FCitySample_FloatSpringInterp::StaticStruct, Z_Construct_UScriptStruct_FCitySample_FloatSpringInterp_Statics::NewStructOps, TEXT("CitySample_FloatSpringInterp"), &Z_Registration_Info_UScriptStruct_CitySample_FloatSpringInterp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySample_FloatSpringInterp), 2819241655U) },
		{ FCitySample_CrowdSlopeWarpingFootData::StaticStruct, Z_Construct_UScriptStruct_FCitySample_CrowdSlopeWarpingFootData_Statics::NewStructOps, TEXT("CitySample_CrowdSlopeWarpingFootData"), &Z_Registration_Info_UScriptStruct_CitySample_CrowdSlopeWarpingFootData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySample_CrowdSlopeWarpingFootData), 4110999768U) },
		{ FCitySampleAnimNode_CrowdSlopeWarping::StaticStruct, Z_Construct_UScriptStruct_FCitySampleAnimNode_CrowdSlopeWarping_Statics::NewStructOps, TEXT("CitySampleAnimNode_CrowdSlopeWarping"), &Z_Registration_Info_UScriptStruct_CitySampleAnimNode_CrowdSlopeWarping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySampleAnimNode_CrowdSlopeWarping), 3956721150U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimNode_CrowdSlopeWarping_h_478362304(TEXT("/Script/CitySample"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimNode_CrowdSlopeWarping_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimNode_CrowdSlopeWarping_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
