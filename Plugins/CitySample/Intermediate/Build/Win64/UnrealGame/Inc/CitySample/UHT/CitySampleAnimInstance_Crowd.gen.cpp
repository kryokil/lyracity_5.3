// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Anim/CitySampleAnimInstance_Crowd.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleAnimInstance_Crowd() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleCrowdCharacter_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleAnimInstance_Crowd();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleAnimInstance_Crowd_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleAnimSet_Locomotion_NoRegister();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySampleLocomotionState();
	CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdAnimInstance();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	MASSNAVIGATION_API UEnum* Z_Construct_UEnum_MassNavigation_EMassMovementAction();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECitySampleLocomotionState;
	static UEnum* ECitySampleLocomotionState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECitySampleLocomotionState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECitySampleLocomotionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_ECitySampleLocomotionState, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("ECitySampleLocomotionState"));
		}
		return Z_Registration_Info_UEnum_ECitySampleLocomotionState.OuterSingleton;
	}
	template<> CITYSAMPLE_API UEnum* StaticEnum<ECitySampleLocomotionState>()
	{
		return ECitySampleLocomotionState_StaticEnum();
	}
	struct Z_Construct_UEnum_CitySample_ECitySampleLocomotionState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CitySample_ECitySampleLocomotionState_Statics::Enumerators[] = {
		{ "ECitySampleLocomotionState::Idle", (int64)ECitySampleLocomotionState::Idle },
		{ "ECitySampleLocomotionState::Walk", (int64)ECitySampleLocomotionState::Walk },
		{ "ECitySampleLocomotionState::Jog", (int64)ECitySampleLocomotionState::Jog },
		{ "ECitySampleLocomotionState::Animating", (int64)ECitySampleLocomotionState::Animating },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CitySample_ECitySampleLocomotionState_Statics::Enum_MetaDataParams[] = {
		{ "Animating.Name", "ECitySampleLocomotionState::Animating" },
		{ "BlueprintType", "true" },
		{ "Idle.Name", "ECitySampleLocomotionState::Idle" },
		{ "Jog.Name", "ECitySampleLocomotionState::Jog" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
		{ "Walk.Name", "ECitySampleLocomotionState::Walk" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_ECitySampleLocomotionState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		"ECitySampleLocomotionState",
		"ECitySampleLocomotionState",
		Z_Construct_UEnum_CitySample_ECitySampleLocomotionState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySampleLocomotionState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySampleLocomotionState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_ECitySampleLocomotionState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CitySample_ECitySampleLocomotionState()
	{
		if (!Z_Registration_Info_UEnum_ECitySampleLocomotionState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECitySampleLocomotionState.InnerSingleton, Z_Construct_UEnum_CitySample_ECitySampleLocomotionState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECitySampleLocomotionState.InnerSingleton;
	}
	DEFINE_FUNCTION(UCitySampleAnimInstance_Crowd::execLinkAccessoryLayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LinkAccessoryLayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleAnimInstance_Crowd::execGet_BasePose_MTU)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Get_BasePose_MTU();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleAnimInstance_Crowd::execGet_BasePose_MTO)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Get_BasePose_MTO();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleAnimInstance_Crowd::execGet_BasePose_FTO)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Get_BasePose_FTO();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleAnimInstance_Crowd::execGet_BasePose_FTU)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Get_BasePose_FTU();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleAnimInstance_Crowd::execGet_BasePose_FTN)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Get_BasePose_FTN();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleAnimInstance_Crowd::execGet_BasePose_MTN)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Get_BasePose_MTN();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleAnimInstance_Crowd::execGetGait)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGait();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleAnimInstance_Crowd::execGetMassMoveState)
	{
		P_GET_ENUM_REF(EMassMovementAction,Z_Param_Out_OutCurrentMovementAction);
		P_GET_ENUM_REF(EMassMovementAction,Z_Param_Out_OutPreviousMovementAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMassMoveState((EMassMovementAction&)(Z_Param_Out_OutCurrentMovementAction),(EMassMovementAction&)(Z_Param_Out_OutPreviousMovementAction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleAnimInstance_Crowd::execCalculateStride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalculateStride();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleAnimInstance_Crowd::execCalculateCycleDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalculateCycleDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleAnimInstance_Crowd::execCalculatePlayRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalculatePlayRate();
		P_NATIVE_END;
	}
	void UCitySampleAnimInstance_Crowd::StaticRegisterNativesUCitySampleAnimInstance_Crowd()
	{
		UClass* Class = UCitySampleAnimInstance_Crowd::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateCycleDirection", &UCitySampleAnimInstance_Crowd::execCalculateCycleDirection },
			{ "CalculatePlayRate", &UCitySampleAnimInstance_Crowd::execCalculatePlayRate },
			{ "CalculateStride", &UCitySampleAnimInstance_Crowd::execCalculateStride },
			{ "Get_BasePose_FTN", &UCitySampleAnimInstance_Crowd::execGet_BasePose_FTN },
			{ "Get_BasePose_FTO", &UCitySampleAnimInstance_Crowd::execGet_BasePose_FTO },
			{ "Get_BasePose_FTU", &UCitySampleAnimInstance_Crowd::execGet_BasePose_FTU },
			{ "Get_BasePose_MTN", &UCitySampleAnimInstance_Crowd::execGet_BasePose_MTN },
			{ "Get_BasePose_MTO", &UCitySampleAnimInstance_Crowd::execGet_BasePose_MTO },
			{ "Get_BasePose_MTU", &UCitySampleAnimInstance_Crowd::execGet_BasePose_MTU },
			{ "GetGait", &UCitySampleAnimInstance_Crowd::execGetGait },
			{ "GetMassMoveState", &UCitySampleAnimInstance_Crowd::execGetMassMoveState },
			{ "LinkAccessoryLayer", &UCitySampleAnimInstance_Crowd::execLinkAccessoryLayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection_Statics
	{
		struct CitySampleAnimInstance_Crowd_eventCalculateCycleDirection_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleAnimInstance_Crowd_eventCalculateCycleDirection_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleAnimInstance_Crowd, nullptr, "CalculateCycleDirection", nullptr, nullptr, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection_Statics::CitySampleAnimInstance_Crowd_eventCalculateCycleDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection_Statics::CitySampleAnimInstance_Crowd_eventCalculateCycleDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate_Statics
	{
		struct CitySampleAnimInstance_Crowd_eventCalculatePlayRate_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleAnimInstance_Crowd_eventCalculatePlayRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleAnimInstance_Crowd, nullptr, "CalculatePlayRate", nullptr, nullptr, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate_Statics::CitySampleAnimInstance_Crowd_eventCalculatePlayRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate_Statics::CitySampleAnimInstance_Crowd_eventCalculatePlayRate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride_Statics
	{
		struct CitySampleAnimInstance_Crowd_eventCalculateStride_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleAnimInstance_Crowd_eventCalculateStride_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleAnimInstance_Crowd, nullptr, "CalculateStride", nullptr, nullptr, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride_Statics::CitySampleAnimInstance_Crowd_eventCalculateStride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride_Statics::CitySampleAnimInstance_Crowd_eventCalculateStride_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN_Statics
	{
		struct CitySampleAnimInstance_Crowd_eventGet_BasePose_FTN_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleAnimInstance_Crowd_eventGet_BasePose_FTN_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layering" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleAnimInstance_Crowd, nullptr, "Get_BasePose_FTN", nullptr, nullptr, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN_Statics::CitySampleAnimInstance_Crowd_eventGet_BasePose_FTN_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN_Statics::CitySampleAnimInstance_Crowd_eventGet_BasePose_FTN_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO_Statics
	{
		struct CitySampleAnimInstance_Crowd_eventGet_BasePose_FTO_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleAnimInstance_Crowd_eventGet_BasePose_FTO_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layering" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleAnimInstance_Crowd, nullptr, "Get_BasePose_FTO", nullptr, nullptr, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO_Statics::CitySampleAnimInstance_Crowd_eventGet_BasePose_FTO_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO_Statics::CitySampleAnimInstance_Crowd_eventGet_BasePose_FTO_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU_Statics
	{
		struct CitySampleAnimInstance_Crowd_eventGet_BasePose_FTU_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleAnimInstance_Crowd_eventGet_BasePose_FTU_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layering" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleAnimInstance_Crowd, nullptr, "Get_BasePose_FTU", nullptr, nullptr, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU_Statics::CitySampleAnimInstance_Crowd_eventGet_BasePose_FTU_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU_Statics::CitySampleAnimInstance_Crowd_eventGet_BasePose_FTU_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN_Statics
	{
		struct CitySampleAnimInstance_Crowd_eventGet_BasePose_MTN_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleAnimInstance_Crowd_eventGet_BasePose_MTN_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layering" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleAnimInstance_Crowd, nullptr, "Get_BasePose_MTN", nullptr, nullptr, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN_Statics::CitySampleAnimInstance_Crowd_eventGet_BasePose_MTN_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN_Statics::CitySampleAnimInstance_Crowd_eventGet_BasePose_MTN_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO_Statics
	{
		struct CitySampleAnimInstance_Crowd_eventGet_BasePose_MTO_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleAnimInstance_Crowd_eventGet_BasePose_MTO_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layering" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleAnimInstance_Crowd, nullptr, "Get_BasePose_MTO", nullptr, nullptr, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO_Statics::CitySampleAnimInstance_Crowd_eventGet_BasePose_MTO_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO_Statics::CitySampleAnimInstance_Crowd_eventGet_BasePose_MTO_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU_Statics
	{
		struct CitySampleAnimInstance_Crowd_eventGet_BasePose_MTU_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleAnimInstance_Crowd_eventGet_BasePose_MTU_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layering" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleAnimInstance_Crowd, nullptr, "Get_BasePose_MTU", nullptr, nullptr, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU_Statics::CitySampleAnimInstance_Crowd_eventGet_BasePose_MTU_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU_Statics::CitySampleAnimInstance_Crowd_eventGet_BasePose_MTU_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait_Statics
	{
		struct CitySampleAnimInstance_Crowd_eventGetGait_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleAnimInstance_Crowd_eventGetGait_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layering" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleAnimInstance_Crowd, nullptr, "GetGait", nullptr, nullptr, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait_Statics::CitySampleAnimInstance_Crowd_eventGetGait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait_Statics::CitySampleAnimInstance_Crowd_eventGetGait_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics
	{
		struct CitySampleAnimInstance_Crowd_eventGetMassMoveState_Parms
		{
			EMassMovementAction OutCurrentMovementAction;
			EMassMovementAction OutPreviousMovementAction;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutCurrentMovementAction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutCurrentMovementAction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutPreviousMovementAction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutPreviousMovementAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::NewProp_OutCurrentMovementAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::NewProp_OutCurrentMovementAction = { "OutCurrentMovementAction", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleAnimInstance_Crowd_eventGetMassMoveState_Parms, OutCurrentMovementAction), Z_Construct_UEnum_MassNavigation_EMassMovementAction, METADATA_PARAMS(0, nullptr) }; // 971211434
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::NewProp_OutPreviousMovementAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::NewProp_OutPreviousMovementAction = { "OutPreviousMovementAction", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleAnimInstance_Crowd_eventGetMassMoveState_Parms, OutPreviousMovementAction), Z_Construct_UEnum_MassNavigation_EMassMovementAction, METADATA_PARAMS(0, nullptr) }; // 971211434
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::NewProp_OutCurrentMovementAction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::NewProp_OutCurrentMovementAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::NewProp_OutPreviousMovementAction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::NewProp_OutPreviousMovementAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleAnimInstance_Crowd, nullptr, "GetMassMoveState", nullptr, nullptr, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::CitySampleAnimInstance_Crowd_eventGetMassMoveState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::CitySampleAnimInstance_Crowd_eventGetMassMoveState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_LinkAccessoryLayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_LinkAccessoryLayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_LinkAccessoryLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleAnimInstance_Crowd, nullptr, "LinkAccessoryLayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_LinkAccessoryLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_LinkAccessoryLayer_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_LinkAccessoryLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_LinkAccessoryLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleAnimInstance_Crowd);
	UClass* Z_Construct_UClass_UCitySampleAnimInstance_Crowd_NoRegister()
	{
		return UCitySampleAnimInstance_Crowd::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MovementComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookAtRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomAimPitchVariation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomAimPitchVariation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LocomotionState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LocomotionState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeInLocomotionState_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeInLocomotionState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CycleDirection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CycleDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stride_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gait_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gait;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePoseMTN_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BasePoseMTN;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePoseFTN_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BasePoseFTN;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePoseFTU_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BasePoseFTU;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePoseFTO_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BasePoseFTO;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePoseMTO_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BasePoseMTO;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePoseMTU_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BasePoseMTU;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSetLocomotion_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimSetLocomotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeInLocomotionStateThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeInLocomotionStateThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassCrowdAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateCycleDirection, "CalculateCycleDirection" }, // 4037328373
		{ &Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculatePlayRate, "CalculatePlayRate" }, // 455275527
		{ &Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_CalculateStride, "CalculateStride" }, // 3190340047
		{ &Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTN, "Get_BasePose_FTN" }, // 3942851073
		{ &Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTO, "Get_BasePose_FTO" }, // 4215621727
		{ &Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_FTU, "Get_BasePose_FTU" }, // 2219603502
		{ &Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTN, "Get_BasePose_MTN" }, // 4160577857
		{ &Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTO, "Get_BasePose_MTO" }, // 3097141561
		{ &Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_Get_BasePose_MTU, "Get_BasePose_MTU" }, // 2151125754
		{ &Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetGait, "GetGait" }, // 3427665750
		{ &Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_GetMassMoveState, "GetMassMoveState" }, // 144509783
		{ &Z_Construct_UFunction_UCitySampleAnimInstance_Crowd_LinkAccessoryLayer, "LinkAccessoryLayer" }, // 3197915319
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Anim/CitySampleAnimInstance_Crowd.h" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Character_MetaData[] = {
		{ "Category", "References" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x002408000008200c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, Character), Z_Construct_UClass_ACitySampleCrowdCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Character_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Character_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "Category", "References" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x002408000008200c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_MovementComponent_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_MovementComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Essential Data" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Velocity_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Velocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Essential Data" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Speed_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Essential Data" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_MaxSpeed_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_MaxSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_CharacterRotation_MetaData[] = {
		{ "Category", "Essential Data" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_CharacterRotation = { "CharacterRotation", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, CharacterRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_CharacterRotation_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_CharacterRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_LookAtRotation_MetaData[] = {
		{ "Category", "Essential Data" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_LookAtRotation = { "LookAtRotation", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, LookAtRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_LookAtRotation_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_LookAtRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_RandomAimPitchVariation_MetaData[] = {
		{ "Category", "Essential Data" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_RandomAimPitchVariation = { "RandomAimPitchVariation", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, RandomAimPitchVariation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_RandomAimPitchVariation_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_RandomAimPitchVariation_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_LocomotionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_LocomotionState_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_LocomotionState = { "LocomotionState", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, LocomotionState), Z_Construct_UEnum_CitySample_ECitySampleLocomotionState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_LocomotionState_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_LocomotionState_MetaData) }; // 275039824
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_TimeInLocomotionState_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_TimeInLocomotionState = { "TimeInLocomotionState", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, TimeInLocomotionState), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_TimeInLocomotionState_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_TimeInLocomotionState_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_PlayRate_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_PlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_CycleDirection_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_CycleDirection = { "CycleDirection", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, CycleDirection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_CycleDirection_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_CycleDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Stride_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Stride = { "Stride", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, Stride), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Stride_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Stride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Gait_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Gait = { "Gait", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, Gait), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Gait_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Gait_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseMTN_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseMTN = { "BasePoseMTN", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, BasePoseMTN), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseMTN_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseMTN_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseFTN_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseFTN = { "BasePoseFTN", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, BasePoseFTN), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseFTN_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseFTN_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseFTU_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseFTU = { "BasePoseFTU", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, BasePoseFTU), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseFTU_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseFTU_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseFTO_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseFTO = { "BasePoseFTO", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, BasePoseFTO), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseFTO_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseFTO_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseMTO_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseMTO = { "BasePoseMTO", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, BasePoseMTO), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseMTO_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseMTO_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseMTU_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseMTU = { "BasePoseMTU", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, BasePoseMTU), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseMTU_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseMTU_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_AnimSetLocomotion_MetaData[] = {
		{ "Category", "Anim Data" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_AnimSetLocomotion = { "AnimSetLocomotion", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, AnimSetLocomotion), Z_Construct_UClass_UCitySampleAnimSet_Locomotion_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_AnimSetLocomotion_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_AnimSetLocomotion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_WalkSpeedThreshold_MetaData[] = {
		{ "Category", "Anim Data" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_WalkSpeedThreshold = { "WalkSpeedThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, WalkSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_WalkSpeedThreshold_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_WalkSpeedThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_TimeInLocomotionStateThreshold_MetaData[] = {
		{ "Category", "Anim Data" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimInstance_Crowd.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_TimeInLocomotionStateThreshold = { "TimeInLocomotionStateThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimInstance_Crowd, TimeInLocomotionStateThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_TimeInLocomotionStateThreshold_MetaData), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_TimeInLocomotionStateThreshold_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_MaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_CharacterRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_LookAtRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_RandomAimPitchVariation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_LocomotionState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_LocomotionState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_TimeInLocomotionState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_CycleDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Stride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_Gait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseMTN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseFTN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseFTU,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseFTO,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseMTO,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_BasePoseMTU,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_AnimSetLocomotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_WalkSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::NewProp_TimeInLocomotionStateThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleAnimInstance_Crowd>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::ClassParams = {
		&UCitySampleAnimInstance_Crowd::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCitySampleAnimInstance_Crowd()
	{
		if (!Z_Registration_Info_UClass_UCitySampleAnimInstance_Crowd.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleAnimInstance_Crowd.OuterSingleton, Z_Construct_UClass_UCitySampleAnimInstance_Crowd_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleAnimInstance_Crowd.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleAnimInstance_Crowd>()
	{
		return UCitySampleAnimInstance_Crowd::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleAnimInstance_Crowd);
	UCitySampleAnimInstance_Crowd::~UCitySampleAnimInstance_Crowd() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_Statics::EnumInfo[] = {
		{ ECitySampleLocomotionState_StaticEnum, TEXT("ECitySampleLocomotionState"), &Z_Registration_Info_UEnum_ECitySampleLocomotionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 275039824U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleAnimInstance_Crowd, UCitySampleAnimInstance_Crowd::StaticClass, TEXT("UCitySampleAnimInstance_Crowd"), &Z_Registration_Info_UClass_UCitySampleAnimInstance_Crowd, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleAnimInstance_Crowd), 37575864U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_762071044(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimInstance_Crowd_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
