// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoverDrone/Public/HoverDroneMovementComponent.h"
#include "HoverDrone/Public/HoverDroneTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoverDroneMovementComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_USpectatorPawnMovement();
	HOVERDRONE_API UClass* Z_Construct_UClass_UHoverDroneMovementComponent();
	HOVERDRONE_API UClass* Z_Construct_UClass_UHoverDroneMovementComponent_NoRegister();
	HOVERDRONE_API UEnum* Z_Construct_UEnum_HoverDrone_EHoverDroneDebug();
	HOVERDRONE_API UFunction* Z_Construct_UDelegateFunction_HoverDrone_MaxAllowedSpeedUpdated__DelegateSignature();
	HOVERDRONE_API UScriptStruct* Z_Construct_UScriptStruct_FDroneSpeedParameters();
	UPackage* Z_Construct_UPackage__Script_HoverDrone();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_HoverDrone_MaxAllowedSpeedUpdated__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HoverDrone_MaxAllowedSpeedUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HoverDrone_MaxAllowedSpeedUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HoverDrone, nullptr, "MaxAllowedSpeedUpdated__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HoverDrone_MaxAllowedSpeedUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HoverDrone_MaxAllowedSpeedUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_HoverDrone_MaxAllowedSpeedUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HoverDrone_MaxAllowedSpeedUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMaxAllowedSpeedUpdated_DelegateWrapper(const FMulticastScriptDelegate& MaxAllowedSpeedUpdated)
{
	MaxAllowedSpeedUpdated.ProcessMulticastDelegate<UObject>(NULL);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoverDroneDebug;
	static UEnum* EHoverDroneDebug_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoverDroneDebug.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoverDroneDebug.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoverDrone_EHoverDroneDebug, (UObject*)Z_Construct_UPackage__Script_HoverDrone(), TEXT("EHoverDroneDebug"));
		}
		return Z_Registration_Info_UEnum_EHoverDroneDebug.OuterSingleton;
	}
	template<> HOVERDRONE_API UEnum* StaticEnum<EHoverDroneDebug>()
	{
		return EHoverDroneDebug_StaticEnum();
	}
	struct Z_Construct_UEnum_HoverDrone_EHoverDroneDebug_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoverDrone_EHoverDroneDebug_Statics::Enumerators[] = {
		{ "EHoverDroneDebug::Off", (int64)EHoverDroneDebug::Off },
		{ "EHoverDroneDebug::Position", (int64)EHoverDroneDebug::Position },
		{ "EHoverDroneDebug::Velocity", (int64)EHoverDroneDebug::Velocity },
		{ "EHoverDroneDebug::RotationalVelocity", (int64)EHoverDroneDebug::RotationalVelocity },
		{ "EHoverDroneDebug::Altitude", (int64)EHoverDroneDebug::Altitude },
		{ "EHoverDroneDebug::ForceFacing", (int64)EHoverDroneDebug::ForceFacing },
		{ "EHoverDroneDebug::FOV", (int64)EHoverDroneDebug::FOV },
		{ "EHoverDroneDebug::All", (int64)EHoverDroneDebug::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoverDrone_EHoverDroneDebug_Statics::Enum_MetaDataParams[] = {
		{ "All.Name", "EHoverDroneDebug::All" },
		{ "Altitude.Name", "EHoverDroneDebug::Altitude" },
		{ "ForceFacing.Name", "EHoverDroneDebug::ForceFacing" },
		{ "FOV.Name", "EHoverDroneDebug::FOV" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
		{ "Off.Name", "EHoverDroneDebug::Off" },
		{ "Position.Name", "EHoverDroneDebug::Position" },
		{ "RotationalVelocity.Name", "EHoverDroneDebug::RotationalVelocity" },
		{ "Velocity.Name", "EHoverDroneDebug::Velocity" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoverDrone_EHoverDroneDebug_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoverDrone,
		nullptr,
		"EHoverDroneDebug",
		"EHoverDroneDebug",
		Z_Construct_UEnum_HoverDrone_EHoverDroneDebug_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoverDrone_EHoverDroneDebug_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HoverDrone_EHoverDroneDebug_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HoverDrone_EHoverDroneDebug_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_HoverDrone_EHoverDroneDebug()
	{
		if (!Z_Registration_Info_UEnum_EHoverDroneDebug.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoverDroneDebug.InnerSingleton, Z_Construct_UEnum_HoverDrone_EHoverDroneDebug_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoverDroneDebug.InnerSingleton;
	}
	DEFINE_FUNCTION(UHoverDroneMovementComponent::execSetCurrentFOV)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewFOV);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentFOV(Z_Param_NewFOV);
		P_NATIVE_END;
	}
	void UHoverDroneMovementComponent::StaticRegisterNativesUHoverDroneMovementComponent()
	{
		UClass* Class = UHoverDroneMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCurrentFOV", &UHoverDroneMovementComponent::execSetCurrentFOV },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV_Statics
	{
		struct HoverDroneMovementComponent_eventSetCurrentFOV_Parms
		{
			float NewFOV;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFOV;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV_Statics::NewProp_NewFOV = { "NewFOV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoverDroneMovementComponent_eventSetCurrentFOV_Parms, NewFOV), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV_Statics::NewProp_NewFOV,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoverDroneMovementComponent, nullptr, "SetCurrentFOV", nullptr, nullptr, Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV_Statics::HoverDroneMovementComponent_eventSetCurrentFOV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV_Statics::HoverDroneMovementComponent_eventSetCurrentFOV_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoverDroneMovementComponent);
	UClass* Z_Construct_UClass_UHoverDroneMovementComponent_NoRegister()
	{
		return UHoverDroneMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoverDroneMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedSpeedIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAllowedSpeedIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedSpeedUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_MaxAllowedSpeedUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectRotationInputYawScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectRotationInputYawScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectRotationInputPitchScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectRotationInputPitchScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectRotationInputInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectRotationInputInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFOVScaling_MetaData[];
#endif
		static void NewProp_bUseFOVScaling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFOVScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraFovRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraFovRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputFovScaleRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputFovScaleRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotDeceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotDeceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPitchRotSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPitchRotSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxYawRotSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxYawRotSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullAirFrictionVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FullAirFrictionVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementAccelFactor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementAccelFactor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DroneSpeedParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DroneSpeedParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DroneSpeedParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinAirFriction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAirFriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DroneSpeedParamIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DroneSpeedParamIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeedHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeedHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeedHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeedHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeedHeightMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeedHeightMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinPitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DroneMaxAltitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DroneMaxAltitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinHoverHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinHoverHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaintainHoverHeightTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaintainHoverHeightTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaintainHoverHeightPredictionTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaintainHoverHeightPredictionTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceFacingInterpInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForceFacingInterpInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimulateRotation_MetaData[];
#endif
		static void NewProp_bSimulateRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimulateRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowedActorPositionInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FollowedActorPositionInterpSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoverDroneMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpectatorPawnMovement,
		(UObject* (*)())Z_Construct_UPackage__Script_HoverDrone,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoverDroneMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoverDroneMovementComponent_SetCurrentFOV, "SetCurrentFOV" }, // 3388700616
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoverDroneMovementComponent.h" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxAllowedSpeedIndex_MetaData[] = {
		{ "Category", "HoverDroneMovementComponent" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxAllowedSpeedIndex = { "MaxAllowedSpeedIndex", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MaxAllowedSpeedIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxAllowedSpeedIndex_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxAllowedSpeedIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxAllowedSpeedUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxAllowedSpeedUpdated = { "MaxAllowedSpeedUpdated", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MaxAllowedSpeedUpdated), Z_Construct_UDelegateFunction_HoverDrone_MaxAllowedSpeedUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxAllowedSpeedUpdated_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxAllowedSpeedUpdated_MetaData) }; // 2960481155
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DirectRotationInputYawScale_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DirectRotationInputYawScale = { "DirectRotationInputYawScale", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, DirectRotationInputYawScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DirectRotationInputYawScale_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DirectRotationInputYawScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DirectRotationInputPitchScale_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DirectRotationInputPitchScale = { "DirectRotationInputPitchScale", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, DirectRotationInputPitchScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DirectRotationInputPitchScale_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DirectRotationInputPitchScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DirectRotationInputInterpSpeed_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DirectRotationInputInterpSpeed = { "DirectRotationInputInterpSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, DirectRotationInputInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DirectRotationInputInterpSpeed_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DirectRotationInputInterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_bUseFOVScaling_MetaData[] = {
		{ "Category", "HoverDroneMovement|FOVScaling" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_bUseFOVScaling_SetBit(void* Obj)
	{
		((UHoverDroneMovementComponent*)Obj)->bUseFOVScaling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_bUseFOVScaling = { "bUseFOVScaling", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoverDroneMovementComponent), &Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_bUseFOVScaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_bUseFOVScaling_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_bUseFOVScaling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_CameraFovRange_MetaData[] = {
		{ "Category", "HoverDroneMovement|FOVScaling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera FOV ranges the drone should expect to deal with*/" },
#endif
		{ "EditCondition", "bUseFOVScaling" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera FOV ranges the drone should expect to deal with" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_CameraFovRange = { "CameraFovRange", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, CameraFovRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_CameraFovRange_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_CameraFovRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_InputFovScaleRange_MetaData[] = {
		{ "Category", "HoverDroneMovement|FOVScaling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Value scaling that is mapped to the CameraFOVRange. Affects how intense inputs can be at certain FOV values.*/" },
#endif
		{ "EditCondition", "bUseFOVScaling" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Value scaling that is mapped to the CameraFOVRange. Affects how intense inputs can be at certain FOV values." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_InputFovScaleRange = { "InputFovScaleRange", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, InputFovScaleRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_InputFovScaleRange_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_InputFovScaleRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_RotAcceleration_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rotational acceleration when turning. */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotational acceleration when turning." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_RotAcceleration = { "RotAcceleration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, RotAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_RotAcceleration_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_RotAcceleration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_RotDeceleration_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rotational deceleration when not turning. */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotational deceleration when not turning." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_RotDeceleration = { "RotDeceleration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, RotDeceleration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_RotDeceleration_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_RotDeceleration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxPitchRotSpeed_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum rotational speed, pitch */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum rotational speed, pitch" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxPitchRotSpeed = { "MaxPitchRotSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MaxPitchRotSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxPitchRotSpeed_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxPitchRotSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxYawRotSpeed_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum rotational speed, yaw */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum rotational speed, yaw" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxYawRotSpeed = { "MaxYawRotSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MaxYawRotSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxYawRotSpeed_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxYawRotSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_FullAirFrictionVelocity_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Controls how much Deceleration to apply based on velocity. At this velocity, air friction will be 100% of Deceleration. Uncapped. */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls how much Deceleration to apply based on velocity. At this velocity, air friction will be 100% of Deceleration. Uncapped." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_FullAirFrictionVelocity = { "FullAirFrictionVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, FullAirFrictionVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_FullAirFrictionVelocity_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_FullAirFrictionVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MovementAccelFactor_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum rotational speed, yaw */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum rotational speed, yaw" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MovementAccelFactor = { "MovementAccelFactor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MovementAccelFactor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MovementAccelFactor_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MovementAccelFactor_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DroneSpeedParameters_Inner = { "DroneSpeedParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDroneSpeedParameters, METADATA_PARAMS(0, nullptr) }; // 1361305052
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DroneSpeedParameters_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DroneSpeedParameters = { "DroneSpeedParameters", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, DroneSpeedParameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DroneSpeedParameters_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DroneSpeedParameters_MetaData) }; // 1361305052
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MinAirFriction_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MinAirFriction = { "MinAirFriction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MinAirFriction), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MinAirFriction_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MinAirFriction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DroneSpeedParamIndex_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DroneSpeedParamIndex = { "DroneSpeedParamIndex", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, DroneSpeedParamIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DroneSpeedParamIndex_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DroneSpeedParamIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MinSpeedHeight_MetaData[] = {
		{ "Category", "HoverDroneMovementComponent" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MinSpeedHeight = { "MinSpeedHeight", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MinSpeedHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MinSpeedHeight_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MinSpeedHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxSpeedHeight_MetaData[] = {
		{ "Category", "HoverDroneMovementComponent" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxSpeedHeight = { "MaxSpeedHeight", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MaxSpeedHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxSpeedHeight_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxSpeedHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxSpeedHeightMultiplier_MetaData[] = {
		{ "Category", "HoverDroneMovementComponent" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxSpeedHeightMultiplier = { "MaxSpeedHeightMultiplier", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MaxSpeedHeightMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxSpeedHeightMultiplier_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxSpeedHeightMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MinPitch_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Valid Pitch range */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Valid Pitch range" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MinPitch = { "MinPitch", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MinPitch), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MinPitch_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MinPitch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxPitch_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxPitch = { "MaxPitch", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MaxPitch), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxPitch_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxPitch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DroneMaxAltitude_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Height limit for the drone. */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Height limit for the drone." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DroneMaxAltitude = { "DroneMaxAltitude", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, DroneMaxAltitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DroneMaxAltitude_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DroneMaxAltitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MinHoverHeight_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set hover height must exceed this value. */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set hover height must exceed this value." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MinHoverHeight = { "MinHoverHeight", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MinHoverHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MinHoverHeight_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MinHoverHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaintainHoverHeightTolerance_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Within this absolute distance of DesiredHoverHeight, we are considered to be at the desired height and making no corrections. */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Within this absolute distance of DesiredHoverHeight, we are considered to be at the desired height and making no corrections." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaintainHoverHeightTolerance = { "MaintainHoverHeightTolerance", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MaintainHoverHeightTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaintainHoverHeightTolerance_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaintainHoverHeightTolerance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaintainHoverHeightPredictionTime_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How far ahead, in seconds, to check for and respond to upcoming ground height changes. */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far ahead, in seconds, to check for and respond to upcoming ground height changes." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaintainHoverHeightPredictionTime = { "MaintainHoverHeightPredictionTime", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, MaintainHoverHeightPredictionTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaintainHoverHeightPredictionTime_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaintainHoverHeightPredictionTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_ForceFacingInterpInTime_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_ForceFacingInterpInTime = { "ForceFacingInterpInTime", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, ForceFacingInterpInTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_ForceFacingInterpInTime_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_ForceFacingInterpInTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_bSimulateRotation_MetaData[] = {
		{ "Category", "HoverDroneMovementComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** true to simulate rotation with rot acceleration, false to ignore rotation. */" },
#endif
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "true to simulate rotation with rot acceleration, false to ignore rotation." },
#endif
	};
#endif
	void Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_bSimulateRotation_SetBit(void* Obj)
	{
		((UHoverDroneMovementComponent*)Obj)->bSimulateRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_bSimulateRotation = { "bSimulateRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UHoverDroneMovementComponent), &Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_bSimulateRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_bSimulateRotation_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_bSimulateRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_FollowedActorPositionInterpSpeed_MetaData[] = {
		{ "Category", "HoverDroneMovement" },
		{ "ModuleRelativePath", "Public/HoverDroneMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_FollowedActorPositionInterpSpeed = { "FollowedActorPositionInterpSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHoverDroneMovementComponent, FollowedActorPositionInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_FollowedActorPositionInterpSpeed_MetaData), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_FollowedActorPositionInterpSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoverDroneMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxAllowedSpeedIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxAllowedSpeedUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DirectRotationInputYawScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DirectRotationInputPitchScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DirectRotationInputInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_bUseFOVScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_CameraFovRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_InputFovScaleRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_RotAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_RotDeceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxPitchRotSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxYawRotSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_FullAirFrictionVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MovementAccelFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DroneSpeedParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DroneSpeedParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MinAirFriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DroneSpeedParamIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MinSpeedHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxSpeedHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxSpeedHeightMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MinPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaxPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_DroneMaxAltitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MinHoverHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaintainHoverHeightTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_MaintainHoverHeightPredictionTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_ForceFacingInterpInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_bSimulateRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoverDroneMovementComponent_Statics::NewProp_FollowedActorPositionInterpSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoverDroneMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoverDroneMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoverDroneMovementComponent_Statics::ClassParams = {
		&UHoverDroneMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHoverDroneMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoverDroneMovementComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoverDroneMovementComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHoverDroneMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UHoverDroneMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoverDroneMovementComponent.OuterSingleton, Z_Construct_UClass_UHoverDroneMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoverDroneMovementComponent.OuterSingleton;
	}
	template<> HOVERDRONE_API UClass* StaticClass<UHoverDroneMovementComponent>()
	{
		return UHoverDroneMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoverDroneMovementComponent);
	UHoverDroneMovementComponent::~UHoverDroneMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_Statics::EnumInfo[] = {
		{ EHoverDroneDebug_StaticEnum, TEXT("EHoverDroneDebug"), &Z_Registration_Info_UEnum_EHoverDroneDebug, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1022014047U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoverDroneMovementComponent, UHoverDroneMovementComponent::StaticClass, TEXT("UHoverDroneMovementComponent"), &Z_Registration_Info_UClass_UHoverDroneMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoverDroneMovementComponent), 3619891951U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_4034769827(TEXT("/Script/HoverDrone"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_lyracity_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneMovementComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
