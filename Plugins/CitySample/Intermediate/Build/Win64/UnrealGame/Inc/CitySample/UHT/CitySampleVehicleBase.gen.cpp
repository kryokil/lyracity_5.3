// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Vehicles/CitySampleVehicleBase.h"
#include "CitySample/Public/Util/CitySampleRumbleInfo.h"
#include "CitySample/Public/Vehicles/CitySampleDrivingState.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleVehicleBase() {}
// Cross Module References
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn();
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleCharacter_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleVehicleBase();
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleVehicleBase_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleControlsOverlayInterface_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleInputInterface_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleMenu_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleTraversalInterface_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleUIComponent_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleUIComponentInterface_NoRegister();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECitySampleVehicleSeat();
	CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_OnAccelerationStart__DelegateSignature();
	CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_OnAccelerationStop__DelegateSignature();
	CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_OnAirborneStart__DelegateSignature();
	CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_OnAirborneStop__DelegateSignature();
	CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_OnBrakeStart__DelegateSignature();
	CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_OnBrakeStop__DelegateSignature();
	CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_OnDoorClose__DelegateSignature();
	CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_OnDoorOpen__DelegateSignature();
	CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_OnDriftStart__DelegateSignature();
	CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_OnDriftStop__DelegateSignature();
	CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_OnHandbrakeStart__DelegateSignature();
	CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_OnHandbrakeStop__DelegateSignature();
	CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_OnIgnitionStart__DelegateSignature();
	CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_OnPlayerEnterVehicle__DelegateSignature();
	CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_OnPlayerExitVehicle__DelegateSignature();
	CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_OnReverseStart__DelegateSignature();
	CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_OnReverseStop__DelegateSignature();
	CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_OnSleepStart__DelegateSignature();
	CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_OnSleepStop__DelegateSignature();
	CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_OnVehicleBackfire__DelegateSignature();
	CITYSAMPLE_API UFunction* Z_Construct_UDelegateFunction_CitySample_OnWheelBump__DelegateSignature();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleDrivingState();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleRumbleInfo();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FTimestampedTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassActorPoolableInterface_NoRegister();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleControlInterface_NoRegister();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECitySampleVehicleSeat;
	static UEnum* ECitySampleVehicleSeat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECitySampleVehicleSeat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECitySampleVehicleSeat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_ECitySampleVehicleSeat, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("ECitySampleVehicleSeat"));
		}
		return Z_Registration_Info_UEnum_ECitySampleVehicleSeat.OuterSingleton;
	}
	template<> CITYSAMPLE_API UEnum* StaticEnum<ECitySampleVehicleSeat>()
	{
		return ECitySampleVehicleSeat_StaticEnum();
	}
	struct Z_Construct_UEnum_CitySample_ECitySampleVehicleSeat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CitySample_ECitySampleVehicleSeat_Statics::Enumerators[] = {
		{ "ECitySampleVehicleSeat::Driver", (int64)ECitySampleVehicleSeat::Driver },
		{ "ECitySampleVehicleSeat::FrontPassenger", (int64)ECitySampleVehicleSeat::FrontPassenger },
		{ "ECitySampleVehicleSeat::RearDriver", (int64)ECitySampleVehicleSeat::RearDriver },
		{ "ECitySampleVehicleSeat::RearPassenger", (int64)ECitySampleVehicleSeat::RearPassenger },
		{ "ECitySampleVehicleSeat::MAX", (int64)ECitySampleVehicleSeat::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CitySample_ECitySampleVehicleSeat_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Enum to help identify seat types in drivable vehicles\n */" },
#endif
		{ "Driver.Name", "ECitySampleVehicleSeat::Driver" },
		{ "FrontPassenger.Name", "ECitySampleVehicleSeat::FrontPassenger" },
		{ "MAX.Name", "ECitySampleVehicleSeat::MAX" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
		{ "RearDriver.Name", "ECitySampleVehicleSeat::RearDriver" },
		{ "RearPassenger.Name", "ECitySampleVehicleSeat::RearPassenger" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum to help identify seat types in drivable vehicles" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_ECitySampleVehicleSeat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		"ECitySampleVehicleSeat",
		"ECitySampleVehicleSeat",
		Z_Construct_UEnum_CitySample_ECitySampleVehicleSeat_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySampleVehicleSeat_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECitySampleVehicleSeat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_ECitySampleVehicleSeat_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CitySample_ECitySampleVehicleSeat()
	{
		if (!Z_Registration_Info_UEnum_ECitySampleVehicleSeat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECitySampleVehicleSeat.InnerSingleton, Z_Construct_UEnum_CitySample_ECitySampleVehicleSeat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECitySampleVehicleSeat.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimestampedTransform;
class UScriptStruct* FTimestampedTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimestampedTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimestampedTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimestampedTransform, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("TimestampedTransform"));
	}
	return Z_Registration_Info_UScriptStruct_TimestampedTransform.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FTimestampedTransform>()
{
	return FTimestampedTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTimestampedTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimestampedTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Used by destructible vehicles to store a history of transform information\n */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used by destructible vehicles to store a history of transform information" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FTimestampedTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimestampedTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimestampedTransform_Statics::NewProp_TimeStamp_MetaData[] = {
		{ "Category", "TimestampedTransform" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimestampedTransform_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimestampedTransform, TimeStamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimestampedTransform_Statics::NewProp_TimeStamp_MetaData), Z_Construct_UScriptStruct_FTimestampedTransform_Statics::NewProp_TimeStamp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimestampedTransform_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "TimestampedTransform" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimestampedTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimestampedTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimestampedTransform_Statics::NewProp_Transform_MetaData), Z_Construct_UScriptStruct_FTimestampedTransform_Statics::NewProp_Transform_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimestampedTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimestampedTransform_Statics::NewProp_TimeStamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimestampedTransform_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimestampedTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"TimestampedTransform",
		Z_Construct_UScriptStruct_FTimestampedTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimestampedTransform_Statics::PropPointers),
		sizeof(FTimestampedTransform),
		alignof(FTimestampedTransform),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimestampedTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTimestampedTransform_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimestampedTransform_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTimestampedTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_TimestampedTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimestampedTransform.InnerSingleton, Z_Construct_UScriptStruct_FTimestampedTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TimestampedTransform.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_CitySample_OnPlayerEnterVehicle__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_OnPlayerEnterVehicle__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Multicast delegates for various vehicle events for different features like sound and animation to interact with */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multicast delegates for various vehicle events for different features like sound and animation to interact with" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_OnPlayerEnterVehicle__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "OnPlayerEnterVehicle__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnPlayerEnterVehicle__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_OnPlayerEnterVehicle__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_CitySample_OnPlayerEnterVehicle__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_OnPlayerEnterVehicle__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPlayerEnterVehicle_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerEnterVehicle)
{
	OnPlayerEnterVehicle.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_CitySample_OnPlayerExitVehicle__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_OnPlayerExitVehicle__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_OnPlayerExitVehicle__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "OnPlayerExitVehicle__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnPlayerExitVehicle__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_OnPlayerExitVehicle__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_CitySample_OnPlayerExitVehicle__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_OnPlayerExitVehicle__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPlayerExitVehicle_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerExitVehicle)
{
	OnPlayerExitVehicle.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_CitySample_OnAccelerationStart__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_OnAccelerationStart__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_OnAccelerationStart__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "OnAccelerationStart__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnAccelerationStart__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_OnAccelerationStart__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_CitySample_OnAccelerationStart__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_OnAccelerationStart__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAccelerationStart_DelegateWrapper(const FMulticastScriptDelegate& OnAccelerationStart)
{
	OnAccelerationStart.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_CitySample_OnAccelerationStop__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_OnAccelerationStop__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_OnAccelerationStop__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "OnAccelerationStop__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnAccelerationStop__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_OnAccelerationStop__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_CitySample_OnAccelerationStop__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_OnAccelerationStop__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAccelerationStop_DelegateWrapper(const FMulticastScriptDelegate& OnAccelerationStop)
{
	OnAccelerationStop.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_CitySample_OnReverseStart__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_OnReverseStart__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_OnReverseStart__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "OnReverseStart__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnReverseStart__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_OnReverseStart__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_CitySample_OnReverseStart__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_OnReverseStart__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnReverseStart_DelegateWrapper(const FMulticastScriptDelegate& OnReverseStart)
{
	OnReverseStart.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_CitySample_OnReverseStop__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_OnReverseStop__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_OnReverseStop__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "OnReverseStop__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnReverseStop__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_OnReverseStop__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_CitySample_OnReverseStop__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_OnReverseStop__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnReverseStop_DelegateWrapper(const FMulticastScriptDelegate& OnReverseStop)
{
	OnReverseStop.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_CitySample_OnAirborneStart__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_OnAirborneStart__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_OnAirborneStart__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "OnAirborneStart__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnAirborneStart__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_OnAirborneStart__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_CitySample_OnAirborneStart__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_OnAirborneStart__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAirborneStart_DelegateWrapper(const FMulticastScriptDelegate& OnAirborneStart)
{
	OnAirborneStart.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_CitySample_OnAirborneStop__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_OnAirborneStop__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_OnAirborneStop__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "OnAirborneStop__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnAirborneStop__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_OnAirborneStop__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_CitySample_OnAirborneStop__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_OnAirborneStop__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAirborneStop_DelegateWrapper(const FMulticastScriptDelegate& OnAirborneStop)
{
	OnAirborneStop.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_CitySample_OnDriftStart__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_OnDriftStart__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_OnDriftStart__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "OnDriftStart__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnDriftStart__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_OnDriftStart__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_CitySample_OnDriftStart__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_OnDriftStart__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDriftStart_DelegateWrapper(const FMulticastScriptDelegate& OnDriftStart)
{
	OnDriftStart.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_CitySample_OnDriftStop__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_OnDriftStop__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_OnDriftStop__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "OnDriftStop__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnDriftStop__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_OnDriftStop__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_CitySample_OnDriftStop__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_OnDriftStop__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDriftStop_DelegateWrapper(const FMulticastScriptDelegate& OnDriftStop)
{
	OnDriftStop.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_CitySample_OnBrakeStart__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_OnBrakeStart__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_OnBrakeStart__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "OnBrakeStart__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnBrakeStart__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_OnBrakeStart__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_CitySample_OnBrakeStart__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_OnBrakeStart__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnBrakeStart_DelegateWrapper(const FMulticastScriptDelegate& OnBrakeStart)
{
	OnBrakeStart.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_CitySample_OnBrakeStop__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_OnBrakeStop__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_OnBrakeStop__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "OnBrakeStop__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnBrakeStop__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_OnBrakeStop__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_CitySample_OnBrakeStop__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_OnBrakeStop__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnBrakeStop_DelegateWrapper(const FMulticastScriptDelegate& OnBrakeStop)
{
	OnBrakeStop.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_CitySample_OnHandbrakeStart__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_OnHandbrakeStart__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_OnHandbrakeStart__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "OnHandbrakeStart__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnHandbrakeStart__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_OnHandbrakeStart__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_CitySample_OnHandbrakeStart__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_OnHandbrakeStart__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnHandbrakeStart_DelegateWrapper(const FMulticastScriptDelegate& OnHandbrakeStart)
{
	OnHandbrakeStart.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_CitySample_OnHandbrakeStop__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_OnHandbrakeStop__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_OnHandbrakeStop__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "OnHandbrakeStop__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnHandbrakeStop__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_OnHandbrakeStop__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_CitySample_OnHandbrakeStop__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_OnHandbrakeStop__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnHandbrakeStop_DelegateWrapper(const FMulticastScriptDelegate& OnHandbrakeStop)
{
	OnHandbrakeStop.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_CitySample_OnDoorOpen__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_OnDoorOpen__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_OnDoorOpen__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "OnDoorOpen__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnDoorOpen__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_OnDoorOpen__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_CitySample_OnDoorOpen__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_OnDoorOpen__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDoorOpen_DelegateWrapper(const FMulticastScriptDelegate& OnDoorOpen)
{
	OnDoorOpen.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_CitySample_OnDoorClose__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_OnDoorClose__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_OnDoorClose__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "OnDoorClose__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnDoorClose__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_OnDoorClose__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_CitySample_OnDoorClose__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_OnDoorClose__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDoorClose_DelegateWrapper(const FMulticastScriptDelegate& OnDoorClose)
{
	OnDoorClose.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_CitySample_OnIgnitionStart__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_OnIgnitionStart__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_OnIgnitionStart__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "OnIgnitionStart__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnIgnitionStart__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_OnIgnitionStart__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_CitySample_OnIgnitionStart__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_OnIgnitionStart__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnIgnitionStart_DelegateWrapper(const FMulticastScriptDelegate& OnIgnitionStart)
{
	OnIgnitionStart.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_CitySample_OnVehicleBackfire__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_OnVehicleBackfire__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_OnVehicleBackfire__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "OnVehicleBackfire__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnVehicleBackfire__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_OnVehicleBackfire__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_CitySample_OnVehicleBackfire__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_OnVehicleBackfire__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnVehicleBackfire_DelegateWrapper(const FMulticastScriptDelegate& OnVehicleBackfire)
{
	OnVehicleBackfire.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_CitySample_OnSleepStart__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_OnSleepStart__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_OnSleepStart__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "OnSleepStart__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnSleepStart__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_OnSleepStart__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_CitySample_OnSleepStart__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_OnSleepStart__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSleepStart_DelegateWrapper(const FMulticastScriptDelegate& OnSleepStart)
{
	OnSleepStart.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_CitySample_OnSleepStop__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_OnSleepStop__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_OnSleepStop__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "OnSleepStop__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnSleepStop__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_OnSleepStop__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_CitySample_OnSleepStop__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_OnSleepStop__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSleepStop_DelegateWrapper(const FMulticastScriptDelegate& OnSleepStop)
{
	OnSleepStop.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_CitySample_OnWheelBump__DelegateSignature_Statics
	{
		struct _Script_CitySample_eventOnWheelBump_Parms
		{
			int32 WheelIndex;
			float BumpStrength;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BumpStrength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_CitySample_OnWheelBump__DelegateSignature_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CitySample_eventOnWheelBump_Parms, WheelIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_CitySample_OnWheelBump__DelegateSignature_Statics::NewProp_BumpStrength = { "BumpStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CitySample_eventOnWheelBump_Parms, BumpStrength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CitySample_OnWheelBump__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_OnWheelBump__DelegateSignature_Statics::NewProp_WheelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CitySample_OnWheelBump__DelegateSignature_Statics::NewProp_BumpStrength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CitySample_OnWheelBump__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CitySample_OnWheelBump__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CitySample, nullptr, "OnWheelBump__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CitySample_OnWheelBump__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnWheelBump__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CitySample_OnWheelBump__DelegateSignature_Statics::_Script_CitySample_eventOnWheelBump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnWheelBump__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CitySample_OnWheelBump__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CitySample_OnWheelBump__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_CitySample_OnWheelBump__DelegateSignature_Statics::_Script_CitySample_eventOnWheelBump_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_CitySample_OnWheelBump__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CitySample_OnWheelBump__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnWheelBump_DelegateWrapper(const FMulticastScriptDelegate& OnWheelBump, int32 WheelIndex, float BumpStrength)
{
	struct _Script_CitySample_eventOnWheelBump_Parms
	{
		int32 WheelIndex;
		float BumpStrength;
	};
	_Script_CitySample_eventOnWheelBump_Parms Parms;
	Parms.WheelIndex=WheelIndex;
	Parms.BumpStrength=BumpStrength;
	OnWheelBump.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execStartParkingReleaseTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartParkingReleaseTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execOnExitPhotomode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExitPhotomode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execOnEnterPhotomode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnterPhotomode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execGetPhysicalSurfaceUnderWheel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EPhysicalSurface>*)Z_Param__Result=P_THIS->GetPhysicalSurfaceUnderWheel(Z_Param_WheelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execTriggerCollisionRumble)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerCollisionRumble();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execTriggerRightBumpRumble)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerRightBumpRumble();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execTriggerLeftBumpRumble)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerLeftBumpRumble();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execTriggerRightSuspensionRumble)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerRightSuspensionRumble();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execTriggerLeftSuspensionRumble)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerLeftSuspensionRumble();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execSetHandbrakeInput)
	{
		P_GET_UBOOL(Z_Param_bHandbrakeActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHandbrakeInput(Z_Param_bHandbrakeActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execSetSteeringInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Steering);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSteeringInput(Z_Param_Steering);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execSetBrakeInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Brake);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrakeInput(Z_Param_Brake);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execSetThrottleInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Throttle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThrottleInput(Z_Param_Throttle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execOnOptionsMenuOpened)
	{
		P_GET_OBJECT(UCitySampleUIComponent,Z_Param_CitySampleUI);
		P_GET_OBJECT(UCitySampleMenu,Z_Param_OptionsMenu);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOptionsMenuOpened(Z_Param_CitySampleUI,Z_Param_OptionsMenu);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execSetParked)
	{
		P_GET_UBOOL(Z_Param_bIsParked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParked(Z_Param_bIsParked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execResetMotionBlurForAllComponentsThisFrame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetMotionBlurForAllComponentsThisFrame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execUpdateContinuousCollisionDetectionAtSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateContinuousCollisionDetectionAtSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execUpdateTransformsOverTime)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SKM_Proxy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTransformsOverTime(Z_Param_SKM_Proxy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execOnExitVehicle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExitVehicle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execSetSteeringModifier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewModifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSteeringModifier(Z_Param_NewModifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execSetThrottleDisabled)
	{
		P_GET_UBOOL(Z_Param_IsDisabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThrottleDisabled(Z_Param_IsDisabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execGetNormalizedSuspensionLength)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNormalizedSuspensionLength(Z_Param_WheelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execGetWheelSlipAngleInDegrees)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWheelSlipAngleInDegrees(Z_Param_WheelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execIsVehicleDrifting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVehicleDrifting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execGetCOMPositionRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetCOMPositionRatio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execGetOccupantInSeat)
	{
		P_GET_ENUM(ECitySampleVehicleSeat,Z_Param_Seat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACitySampleCharacter**)Z_Param__Result=P_THIS->GetOccupantInSeat(ECitySampleVehicleSeat(Z_Param_Seat));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execGetSeatSocket)
	{
		P_GET_ENUM(ECitySampleVehicleSeat,Z_Param_Seat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetSeatSocket(ECitySampleVehicleSeat(Z_Param_Seat));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execFlipVehicle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlipVehicle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execIsVehicleFlippedOver)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_RollThreshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVehicleFlippedOver(Z_Param_RollThreshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execApplyWheelMotionBlurNative)
	{
		P_GET_TARRAY_REF(UMaterialInstanceDynamic*,Z_Param_Out_MotionBlurMIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyWheelMotionBlurNative(Z_Param_Out_MotionBlurMIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execShouldDrawRumbleDebugInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldDrawRumbleDebugInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execGetLookAtPointOffsetOverride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLookAtPointOffsetOverride();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execGetCameraToPivotOffsetOverride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCameraToPivotOffsetOverride();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execShouldOverrideLookAtPointOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldOverrideLookAtPointOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execShouldOverrideCameraToPivotOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldOverrideCameraToPivotOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execGetTimeSpentSharpSteering)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeSpentSharpSteering();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execIsPossessedByPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPossessedByPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execIsPossessableByPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPossessableByPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execRequestHideDrivingUI)
	{
		P_GET_UBOOL(Z_Param_bShouldHideDrivingUI);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestHideDrivingUI(Z_Param_bShouldHideDrivingUI);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execShouldHideDrivingUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldHideDrivingUI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execHasAllWheelsOnGround)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAllWheelsOnGround();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execIsUsingAutoGears)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingAutoGears();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execGetGear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execGetRPM)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRPM();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execGetForwardSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetForwardSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execIsHandbrakeOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHandbrakeOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execGetBrakeInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBrakeInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execGetThrottleInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetThrottleInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execGetMeasuredVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetMeasuredVelocity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySampleVehicleBase::execGetDrivingState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCitySampleDrivingState*)Z_Param__Result=P_THIS->GetDrivingState();
		P_NATIVE_END;
	}
	struct CitySampleVehicleBase_eventUpdateLeftBumpRumbleInfo_Parms
	{
		float SuspensionDiff;
	};
	struct CitySampleVehicleBase_eventUpdateLeftSuspensionRumbleInfo_Parms
	{
		float MaxSuspensionTime;
	};
	struct CitySampleVehicleBase_eventUpdateRightBumpRumbleInfo_Parms
	{
		float SuspensionDiff;
	};
	struct CitySampleVehicleBase_eventUpdateRightSuspensionRumbleInfo_Parms
	{
		float MaxSuspensionTime;
	};
	static FName NAME_ACitySampleVehicleBase_UpdateLeftBumpRumbleInfo = FName(TEXT("UpdateLeftBumpRumbleInfo"));
	void ACitySampleVehicleBase::UpdateLeftBumpRumbleInfo(float SuspensionDiff)
	{
		CitySampleVehicleBase_eventUpdateLeftBumpRumbleInfo_Parms Parms;
		Parms.SuspensionDiff=SuspensionDiff;
		ProcessEvent(FindFunctionChecked(NAME_ACitySampleVehicleBase_UpdateLeftBumpRumbleInfo),&Parms);
	}
	static FName NAME_ACitySampleVehicleBase_UpdateLeftSuspensionRumbleInfo = FName(TEXT("UpdateLeftSuspensionRumbleInfo"));
	void ACitySampleVehicleBase::UpdateLeftSuspensionRumbleInfo(float MaxSuspensionTime)
	{
		CitySampleVehicleBase_eventUpdateLeftSuspensionRumbleInfo_Parms Parms;
		Parms.MaxSuspensionTime=MaxSuspensionTime;
		ProcessEvent(FindFunctionChecked(NAME_ACitySampleVehicleBase_UpdateLeftSuspensionRumbleInfo),&Parms);
	}
	static FName NAME_ACitySampleVehicleBase_UpdateRightBumpRumbleInfo = FName(TEXT("UpdateRightBumpRumbleInfo"));
	void ACitySampleVehicleBase::UpdateRightBumpRumbleInfo(float SuspensionDiff)
	{
		CitySampleVehicleBase_eventUpdateRightBumpRumbleInfo_Parms Parms;
		Parms.SuspensionDiff=SuspensionDiff;
		ProcessEvent(FindFunctionChecked(NAME_ACitySampleVehicleBase_UpdateRightBumpRumbleInfo),&Parms);
	}
	static FName NAME_ACitySampleVehicleBase_UpdateRightSuspensionRumbleInfo = FName(TEXT("UpdateRightSuspensionRumbleInfo"));
	void ACitySampleVehicleBase::UpdateRightSuspensionRumbleInfo(float MaxSuspensionTime)
	{
		CitySampleVehicleBase_eventUpdateRightSuspensionRumbleInfo_Parms Parms;
		Parms.MaxSuspensionTime=MaxSuspensionTime;
		ProcessEvent(FindFunctionChecked(NAME_ACitySampleVehicleBase_UpdateRightSuspensionRumbleInfo),&Parms);
	}
	void ACitySampleVehicleBase::StaticRegisterNativesACitySampleVehicleBase()
	{
		UClass* Class = ACitySampleVehicleBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyWheelMotionBlurNative", &ACitySampleVehicleBase::execApplyWheelMotionBlurNative },
			{ "FlipVehicle", &ACitySampleVehicleBase::execFlipVehicle },
			{ "GetBrakeInput", &ACitySampleVehicleBase::execGetBrakeInput },
			{ "GetCameraToPivotOffsetOverride", &ACitySampleVehicleBase::execGetCameraToPivotOffsetOverride },
			{ "GetCOMPositionRatio", &ACitySampleVehicleBase::execGetCOMPositionRatio },
			{ "GetDrivingState", &ACitySampleVehicleBase::execGetDrivingState },
			{ "GetForwardSpeed", &ACitySampleVehicleBase::execGetForwardSpeed },
			{ "GetGear", &ACitySampleVehicleBase::execGetGear },
			{ "GetLookAtPointOffsetOverride", &ACitySampleVehicleBase::execGetLookAtPointOffsetOverride },
			{ "GetMeasuredVelocity", &ACitySampleVehicleBase::execGetMeasuredVelocity },
			{ "GetNormalizedSuspensionLength", &ACitySampleVehicleBase::execGetNormalizedSuspensionLength },
			{ "GetOccupantInSeat", &ACitySampleVehicleBase::execGetOccupantInSeat },
			{ "GetPhysicalSurfaceUnderWheel", &ACitySampleVehicleBase::execGetPhysicalSurfaceUnderWheel },
			{ "GetRPM", &ACitySampleVehicleBase::execGetRPM },
			{ "GetSeatSocket", &ACitySampleVehicleBase::execGetSeatSocket },
			{ "GetThrottleInput", &ACitySampleVehicleBase::execGetThrottleInput },
			{ "GetTimeSpentSharpSteering", &ACitySampleVehicleBase::execGetTimeSpentSharpSteering },
			{ "GetWheelSlipAngleInDegrees", &ACitySampleVehicleBase::execGetWheelSlipAngleInDegrees },
			{ "HasAllWheelsOnGround", &ACitySampleVehicleBase::execHasAllWheelsOnGround },
			{ "IsHandbrakeOn", &ACitySampleVehicleBase::execIsHandbrakeOn },
			{ "IsPossessableByPlayer", &ACitySampleVehicleBase::execIsPossessableByPlayer },
			{ "IsPossessedByPlayer", &ACitySampleVehicleBase::execIsPossessedByPlayer },
			{ "IsUsingAutoGears", &ACitySampleVehicleBase::execIsUsingAutoGears },
			{ "IsVehicleDrifting", &ACitySampleVehicleBase::execIsVehicleDrifting },
			{ "IsVehicleFlippedOver", &ACitySampleVehicleBase::execIsVehicleFlippedOver },
			{ "OnEnterPhotomode", &ACitySampleVehicleBase::execOnEnterPhotomode },
			{ "OnExitPhotomode", &ACitySampleVehicleBase::execOnExitPhotomode },
			{ "OnExitVehicle", &ACitySampleVehicleBase::execOnExitVehicle },
			{ "OnOptionsMenuOpened", &ACitySampleVehicleBase::execOnOptionsMenuOpened },
			{ "RequestHideDrivingUI", &ACitySampleVehicleBase::execRequestHideDrivingUI },
			{ "ResetMotionBlurForAllComponentsThisFrame", &ACitySampleVehicleBase::execResetMotionBlurForAllComponentsThisFrame },
			{ "SetBrakeInput", &ACitySampleVehicleBase::execSetBrakeInput },
			{ "SetHandbrakeInput", &ACitySampleVehicleBase::execSetHandbrakeInput },
			{ "SetParked", &ACitySampleVehicleBase::execSetParked },
			{ "SetSteeringInput", &ACitySampleVehicleBase::execSetSteeringInput },
			{ "SetSteeringModifier", &ACitySampleVehicleBase::execSetSteeringModifier },
			{ "SetThrottleDisabled", &ACitySampleVehicleBase::execSetThrottleDisabled },
			{ "SetThrottleInput", &ACitySampleVehicleBase::execSetThrottleInput },
			{ "ShouldDrawRumbleDebugInfo", &ACitySampleVehicleBase::execShouldDrawRumbleDebugInfo },
			{ "ShouldHideDrivingUI", &ACitySampleVehicleBase::execShouldHideDrivingUI },
			{ "ShouldOverrideCameraToPivotOffset", &ACitySampleVehicleBase::execShouldOverrideCameraToPivotOffset },
			{ "ShouldOverrideLookAtPointOffset", &ACitySampleVehicleBase::execShouldOverrideLookAtPointOffset },
			{ "StartParkingReleaseTimer", &ACitySampleVehicleBase::execStartParkingReleaseTimer },
			{ "TriggerCollisionRumble", &ACitySampleVehicleBase::execTriggerCollisionRumble },
			{ "TriggerLeftBumpRumble", &ACitySampleVehicleBase::execTriggerLeftBumpRumble },
			{ "TriggerLeftSuspensionRumble", &ACitySampleVehicleBase::execTriggerLeftSuspensionRumble },
			{ "TriggerRightBumpRumble", &ACitySampleVehicleBase::execTriggerRightBumpRumble },
			{ "TriggerRightSuspensionRumble", &ACitySampleVehicleBase::execTriggerRightSuspensionRumble },
			{ "UpdateContinuousCollisionDetectionAtSpeed", &ACitySampleVehicleBase::execUpdateContinuousCollisionDetectionAtSpeed },
			{ "UpdateTransformsOverTime", &ACitySampleVehicleBase::execUpdateTransformsOverTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_ApplyWheelMotionBlurNative_Statics
	{
		struct CitySampleVehicleBase_eventApplyWheelMotionBlurNative_Parms
		{
			TArray<UMaterialInstanceDynamic*> MotionBlurMIDs;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionBlurMIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionBlurMIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MotionBlurMIDs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_ApplyWheelMotionBlurNative_Statics::NewProp_MotionBlurMIDs_Inner = { "MotionBlurMIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_ApplyWheelMotionBlurNative_Statics::NewProp_MotionBlurMIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_ApplyWheelMotionBlurNative_Statics::NewProp_MotionBlurMIDs = { "MotionBlurMIDs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventApplyWheelMotionBlurNative_Parms, MotionBlurMIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_ApplyWheelMotionBlurNative_Statics::NewProp_MotionBlurMIDs_MetaData), Z_Construct_UFunction_ACitySampleVehicleBase_ApplyWheelMotionBlurNative_Statics::NewProp_MotionBlurMIDs_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_ApplyWheelMotionBlurNative_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_ApplyWheelMotionBlurNative_Statics::NewProp_MotionBlurMIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_ApplyWheelMotionBlurNative_Statics::NewProp_MotionBlurMIDs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_ApplyWheelMotionBlurNative_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Calculates and applies proper parameter values for wheel motion blur */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculates and applies proper parameter values for wheel motion blur" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_ApplyWheelMotionBlurNative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "ApplyWheelMotionBlurNative", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_ApplyWheelMotionBlurNative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_ApplyWheelMotionBlurNative_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_ApplyWheelMotionBlurNative_Statics::CitySampleVehicleBase_eventApplyWheelMotionBlurNative_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_ApplyWheelMotionBlurNative_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_ApplyWheelMotionBlurNative_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_ApplyWheelMotionBlurNative_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_ApplyWheelMotionBlurNative_Statics::CitySampleVehicleBase_eventApplyWheelMotionBlurNative_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_ApplyWheelMotionBlurNative()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_ApplyWheelMotionBlurNative_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_FlipVehicle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_FlipVehicle_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Re-orients a vehicle with the local Z-axis pointing up. */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Re-orients a vehicle with the local Z-axis pointing up." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_FlipVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "FlipVehicle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_FlipVehicle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_FlipVehicle_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_FlipVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_FlipVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_GetBrakeInput_Statics
	{
		struct CitySampleVehicleBase_eventGetBrakeInput_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_GetBrakeInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventGetBrakeInput_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_GetBrakeInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_GetBrakeInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_GetBrakeInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driving" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_GetBrakeInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "GetBrakeInput", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_GetBrakeInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetBrakeInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetBrakeInput_Statics::CitySampleVehicleBase_eventGetBrakeInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetBrakeInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_GetBrakeInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetBrakeInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetBrakeInput_Statics::CitySampleVehicleBase_eventGetBrakeInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_GetBrakeInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_GetBrakeInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_GetCameraToPivotOffsetOverride_Statics
	{
		struct CitySampleVehicleBase_eventGetCameraToPivotOffsetOverride_Parms
		{
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_GetCameraToPivotOffsetOverride_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_GetCameraToPivotOffsetOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventGetCameraToPivotOffsetOverride_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetCameraToPivotOffsetOverride_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ACitySampleVehicleBase_GetCameraToPivotOffsetOverride_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_GetCameraToPivotOffsetOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_GetCameraToPivotOffsetOverride_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_GetCameraToPivotOffsetOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Overriddes" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_GetCameraToPivotOffsetOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "GetCameraToPivotOffsetOverride", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_GetCameraToPivotOffsetOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetCameraToPivotOffsetOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetCameraToPivotOffsetOverride_Statics::CitySampleVehicleBase_eventGetCameraToPivotOffsetOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetCameraToPivotOffsetOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_GetCameraToPivotOffsetOverride_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetCameraToPivotOffsetOverride_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetCameraToPivotOffsetOverride_Statics::CitySampleVehicleBase_eventGetCameraToPivotOffsetOverride_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_GetCameraToPivotOffsetOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_GetCameraToPivotOffsetOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_GetCOMPositionRatio_Statics
	{
		struct CitySampleVehicleBase_eventGetCOMPositionRatio_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_GetCOMPositionRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventGetCOMPositionRatio_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_GetCOMPositionRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_GetCOMPositionRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_GetCOMPositionRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the COM position in terms of the vehicle's bounding box. A COM in the middle of the vehicle will give you 0.5, 0.5 */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the COM position in terms of the vehicle's bounding box. A COM in the middle of the vehicle will give you 0.5, 0.5" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_GetCOMPositionRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "GetCOMPositionRatio", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_GetCOMPositionRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetCOMPositionRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetCOMPositionRatio_Statics::CitySampleVehicleBase_eventGetCOMPositionRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetCOMPositionRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_GetCOMPositionRatio_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetCOMPositionRatio_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetCOMPositionRatio_Statics::CitySampleVehicleBase_eventGetCOMPositionRatio_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_GetCOMPositionRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_GetCOMPositionRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_GetDrivingState_Statics
	{
		struct CitySampleVehicleBase_eventGetDrivingState_Parms
		{
			FCitySampleDrivingState ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_GetDrivingState_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_GetDrivingState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventGetDrivingState_Parms, ReturnValue), Z_Construct_UScriptStruct_FCitySampleDrivingState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetDrivingState_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ACitySampleVehicleBase_GetDrivingState_Statics::NewProp_ReturnValue_MetaData) }; // 464802188
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_GetDrivingState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_GetDrivingState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_GetDrivingState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driving" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End IMassTrafficVehicleControlInterface \n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_GetDrivingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "GetDrivingState", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_GetDrivingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetDrivingState_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetDrivingState_Statics::CitySampleVehicleBase_eventGetDrivingState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetDrivingState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_GetDrivingState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetDrivingState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetDrivingState_Statics::CitySampleVehicleBase_eventGetDrivingState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_GetDrivingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_GetDrivingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_GetForwardSpeed_Statics
	{
		struct CitySampleVehicleBase_eventGetForwardSpeed_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_GetForwardSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventGetForwardSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_GetForwardSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_GetForwardSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_GetForwardSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driving" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_GetForwardSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "GetForwardSpeed", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_GetForwardSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetForwardSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetForwardSpeed_Statics::CitySampleVehicleBase_eventGetForwardSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetForwardSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_GetForwardSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetForwardSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetForwardSpeed_Statics::CitySampleVehicleBase_eventGetForwardSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_GetForwardSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_GetForwardSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_GetGear_Statics
	{
		struct CitySampleVehicleBase_eventGetGear_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_GetGear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventGetGear_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_GetGear_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_GetGear_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_GetGear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driving" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_GetGear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "GetGear", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_GetGear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetGear_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetGear_Statics::CitySampleVehicleBase_eventGetGear_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetGear_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_GetGear_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetGear_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetGear_Statics::CitySampleVehicleBase_eventGetGear_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_GetGear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_GetGear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_GetLookAtPointOffsetOverride_Statics
	{
		struct CitySampleVehicleBase_eventGetLookAtPointOffsetOverride_Parms
		{
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_GetLookAtPointOffsetOverride_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_GetLookAtPointOffsetOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventGetLookAtPointOffsetOverride_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetLookAtPointOffsetOverride_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ACitySampleVehicleBase_GetLookAtPointOffsetOverride_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_GetLookAtPointOffsetOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_GetLookAtPointOffsetOverride_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_GetLookAtPointOffsetOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Overriddes" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_GetLookAtPointOffsetOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "GetLookAtPointOffsetOverride", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_GetLookAtPointOffsetOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetLookAtPointOffsetOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetLookAtPointOffsetOverride_Statics::CitySampleVehicleBase_eventGetLookAtPointOffsetOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetLookAtPointOffsetOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_GetLookAtPointOffsetOverride_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetLookAtPointOffsetOverride_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetLookAtPointOffsetOverride_Statics::CitySampleVehicleBase_eventGetLookAtPointOffsetOverride_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_GetLookAtPointOffsetOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_GetLookAtPointOffsetOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_GetMeasuredVelocity_Statics
	{
		struct CitySampleVehicleBase_eventGetMeasuredVelocity_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_GetMeasuredVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventGetMeasuredVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_GetMeasuredVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_GetMeasuredVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_GetMeasuredVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driving" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_GetMeasuredVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "GetMeasuredVelocity", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_GetMeasuredVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetMeasuredVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetMeasuredVelocity_Statics::CitySampleVehicleBase_eventGetMeasuredVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetMeasuredVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_GetMeasuredVelocity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetMeasuredVelocity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetMeasuredVelocity_Statics::CitySampleVehicleBase_eventGetMeasuredVelocity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_GetMeasuredVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_GetMeasuredVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_GetNormalizedSuspensionLength_Statics
	{
		struct CitySampleVehicleBase_eventGetNormalizedSuspensionLength_Parms
		{
			int32 WheelIndex;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_GetNormalizedSuspensionLength_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventGetNormalizedSuspensionLength_Parms, WheelIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_GetNormalizedSuspensionLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventGetNormalizedSuspensionLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_GetNormalizedSuspensionLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_GetNormalizedSuspensionLength_Statics::NewProp_WheelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_GetNormalizedSuspensionLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_GetNormalizedSuspensionLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Suspension" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the requested wheel's suspension length in a normalized format (0.f - 1.f) */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the requested wheel's suspension length in a normalized format (0.f - 1.f)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_GetNormalizedSuspensionLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "GetNormalizedSuspensionLength", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_GetNormalizedSuspensionLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetNormalizedSuspensionLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetNormalizedSuspensionLength_Statics::CitySampleVehicleBase_eventGetNormalizedSuspensionLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetNormalizedSuspensionLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_GetNormalizedSuspensionLength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetNormalizedSuspensionLength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetNormalizedSuspensionLength_Statics::CitySampleVehicleBase_eventGetNormalizedSuspensionLength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_GetNormalizedSuspensionLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_GetNormalizedSuspensionLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_GetOccupantInSeat_Statics
	{
		struct CitySampleVehicleBase_eventGetOccupantInSeat_Parms
		{
			ECitySampleVehicleSeat Seat;
			ACitySampleCharacter* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Seat_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Seat;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_GetOccupantInSeat_Statics::NewProp_Seat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_GetOccupantInSeat_Statics::NewProp_Seat = { "Seat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventGetOccupantInSeat_Parms, Seat), Z_Construct_UEnum_CitySample_ECitySampleVehicleSeat, METADATA_PARAMS(0, nullptr) }; // 637271019
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_GetOccupantInSeat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventGetOccupantInSeat_Parms, ReturnValue), Z_Construct_UClass_ACitySampleCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_GetOccupantInSeat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_GetOccupantInSeat_Statics::NewProp_Seat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_GetOccupantInSeat_Statics::NewProp_Seat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_GetOccupantInSeat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_GetOccupantInSeat_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns reference to character in vehicle seat if one exists */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns reference to character in vehicle seat if one exists" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_GetOccupantInSeat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "GetOccupantInSeat", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_GetOccupantInSeat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetOccupantInSeat_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetOccupantInSeat_Statics::CitySampleVehicleBase_eventGetOccupantInSeat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetOccupantInSeat_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_GetOccupantInSeat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetOccupantInSeat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetOccupantInSeat_Statics::CitySampleVehicleBase_eventGetOccupantInSeat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_GetOccupantInSeat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_GetOccupantInSeat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_GetPhysicalSurfaceUnderWheel_Statics
	{
		struct CitySampleVehicleBase_eventGetPhysicalSurfaceUnderWheel_Parms
		{
			int32 WheelIndex;
			TEnumAsByte<EPhysicalSurface> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_GetPhysicalSurfaceUnderWheel_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventGetPhysicalSurfaceUnderWheel_Parms, WheelIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_GetPhysicalSurfaceUnderWheel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventGetPhysicalSurfaceUnderWheel_Parms, ReturnValue), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(0, nullptr) }; // 2508321301
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_GetPhysicalSurfaceUnderWheel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_GetPhysicalSurfaceUnderWheel_Statics::NewProp_WheelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_GetPhysicalSurfaceUnderWheel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_GetPhysicalSurfaceUnderWheel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rumble|Surfaces" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns physical surface type currently detected underneath the requested wheel */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns physical surface type currently detected underneath the requested wheel" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_GetPhysicalSurfaceUnderWheel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "GetPhysicalSurfaceUnderWheel", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_GetPhysicalSurfaceUnderWheel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetPhysicalSurfaceUnderWheel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetPhysicalSurfaceUnderWheel_Statics::CitySampleVehicleBase_eventGetPhysicalSurfaceUnderWheel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetPhysicalSurfaceUnderWheel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_GetPhysicalSurfaceUnderWheel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetPhysicalSurfaceUnderWheel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetPhysicalSurfaceUnderWheel_Statics::CitySampleVehicleBase_eventGetPhysicalSurfaceUnderWheel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_GetPhysicalSurfaceUnderWheel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_GetPhysicalSurfaceUnderWheel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_GetRPM_Statics
	{
		struct CitySampleVehicleBase_eventGetRPM_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_GetRPM_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventGetRPM_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_GetRPM_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_GetRPM_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_GetRPM_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driving" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_GetRPM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "GetRPM", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_GetRPM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetRPM_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetRPM_Statics::CitySampleVehicleBase_eventGetRPM_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetRPM_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_GetRPM_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetRPM_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetRPM_Statics::CitySampleVehicleBase_eventGetRPM_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_GetRPM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_GetRPM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_GetSeatSocket_Statics
	{
		struct CitySampleVehicleBase_eventGetSeatSocket_Parms
		{
			ECitySampleVehicleSeat Seat;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Seat_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Seat;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_GetSeatSocket_Statics::NewProp_Seat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_GetSeatSocket_Statics::NewProp_Seat = { "Seat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventGetSeatSocket_Parms, Seat), Z_Construct_UEnum_CitySample_ECitySampleVehicleSeat, METADATA_PARAMS(0, nullptr) }; // 637271019
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_GetSeatSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventGetSeatSocket_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_GetSeatSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_GetSeatSocket_Statics::NewProp_Seat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_GetSeatSocket_Statics::NewProp_Seat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_GetSeatSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_GetSeatSocket_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns seat socket name that corresponds to the vehicle seat type passed in */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns seat socket name that corresponds to the vehicle seat type passed in" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_GetSeatSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "GetSeatSocket", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_GetSeatSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetSeatSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetSeatSocket_Statics::CitySampleVehicleBase_eventGetSeatSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetSeatSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_GetSeatSocket_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetSeatSocket_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetSeatSocket_Statics::CitySampleVehicleBase_eventGetSeatSocket_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_GetSeatSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_GetSeatSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_GetThrottleInput_Statics
	{
		struct CitySampleVehicleBase_eventGetThrottleInput_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_GetThrottleInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventGetThrottleInput_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_GetThrottleInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_GetThrottleInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_GetThrottleInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driving" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_GetThrottleInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "GetThrottleInput", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_GetThrottleInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetThrottleInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetThrottleInput_Statics::CitySampleVehicleBase_eventGetThrottleInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetThrottleInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_GetThrottleInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetThrottleInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetThrottleInput_Statics::CitySampleVehicleBase_eventGetThrottleInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_GetThrottleInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_GetThrottleInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_GetTimeSpentSharpSteering_Statics
	{
		struct CitySampleVehicleBase_eventGetTimeSpentSharpSteering_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_GetTimeSpentSharpSteering_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventGetTimeSpentSharpSteering_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_GetTimeSpentSharpSteering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_GetTimeSpentSharpSteering_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_GetTimeSpentSharpSteering_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_GetTimeSpentSharpSteering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "GetTimeSpentSharpSteering", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_GetTimeSpentSharpSteering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetTimeSpentSharpSteering_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetTimeSpentSharpSteering_Statics::CitySampleVehicleBase_eventGetTimeSpentSharpSteering_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetTimeSpentSharpSteering_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_GetTimeSpentSharpSteering_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetTimeSpentSharpSteering_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetTimeSpentSharpSteering_Statics::CitySampleVehicleBase_eventGetTimeSpentSharpSteering_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_GetTimeSpentSharpSteering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_GetTimeSpentSharpSteering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_GetWheelSlipAngleInDegrees_Statics
	{
		struct CitySampleVehicleBase_eventGetWheelSlipAngleInDegrees_Parms
		{
			int32 WheelIndex;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_WheelIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_GetWheelSlipAngleInDegrees_Statics::NewProp_WheelIndex = { "WheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventGetWheelSlipAngleInDegrees_Parms, WheelIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_GetWheelSlipAngleInDegrees_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventGetWheelSlipAngleInDegrees_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_GetWheelSlipAngleInDegrees_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_GetWheelSlipAngleInDegrees_Statics::NewProp_WheelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_GetWheelSlipAngleInDegrees_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_GetWheelSlipAngleInDegrees_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drifting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns requested wheel slip angle in degrees */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns requested wheel slip angle in degrees" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_GetWheelSlipAngleInDegrees_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "GetWheelSlipAngleInDegrees", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_GetWheelSlipAngleInDegrees_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetWheelSlipAngleInDegrees_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetWheelSlipAngleInDegrees_Statics::CitySampleVehicleBase_eventGetWheelSlipAngleInDegrees_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetWheelSlipAngleInDegrees_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_GetWheelSlipAngleInDegrees_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_GetWheelSlipAngleInDegrees_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_GetWheelSlipAngleInDegrees_Statics::CitySampleVehicleBase_eventGetWheelSlipAngleInDegrees_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_GetWheelSlipAngleInDegrees()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_GetWheelSlipAngleInDegrees_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_HasAllWheelsOnGround_Statics
	{
		struct CitySampleVehicleBase_eventHasAllWheelsOnGround_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACitySampleVehicleBase_HasAllWheelsOnGround_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleVehicleBase_eventHasAllWheelsOnGround_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_HasAllWheelsOnGround_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleVehicleBase_eventHasAllWheelsOnGround_Parms), &Z_Construct_UFunction_ACitySampleVehicleBase_HasAllWheelsOnGround_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_HasAllWheelsOnGround_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_HasAllWheelsOnGround_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_HasAllWheelsOnGround_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driving" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_HasAllWheelsOnGround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "HasAllWheelsOnGround", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_HasAllWheelsOnGround_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_HasAllWheelsOnGround_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_HasAllWheelsOnGround_Statics::CitySampleVehicleBase_eventHasAllWheelsOnGround_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_HasAllWheelsOnGround_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_HasAllWheelsOnGround_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_HasAllWheelsOnGround_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_HasAllWheelsOnGround_Statics::CitySampleVehicleBase_eventHasAllWheelsOnGround_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_HasAllWheelsOnGround()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_HasAllWheelsOnGround_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_IsHandbrakeOn_Statics
	{
		struct CitySampleVehicleBase_eventIsHandbrakeOn_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACitySampleVehicleBase_IsHandbrakeOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleVehicleBase_eventIsHandbrakeOn_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_IsHandbrakeOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleVehicleBase_eventIsHandbrakeOn_Parms), &Z_Construct_UFunction_ACitySampleVehicleBase_IsHandbrakeOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_IsHandbrakeOn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_IsHandbrakeOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_IsHandbrakeOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driving" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_IsHandbrakeOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "IsHandbrakeOn", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_IsHandbrakeOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_IsHandbrakeOn_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_IsHandbrakeOn_Statics::CitySampleVehicleBase_eventIsHandbrakeOn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_IsHandbrakeOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_IsHandbrakeOn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_IsHandbrakeOn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_IsHandbrakeOn_Statics::CitySampleVehicleBase_eventIsHandbrakeOn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_IsHandbrakeOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_IsHandbrakeOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessableByPlayer_Statics
	{
		struct CitySampleVehicleBase_eventIsPossessableByPlayer_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessableByPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleVehicleBase_eventIsPossessableByPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessableByPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleVehicleBase_eventIsPossessableByPlayer_Parms), &Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessableByPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessableByPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessableByPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessableByPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessableByPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "IsPossessableByPlayer", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessableByPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessableByPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessableByPlayer_Statics::CitySampleVehicleBase_eventIsPossessableByPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessableByPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessableByPlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessableByPlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessableByPlayer_Statics::CitySampleVehicleBase_eventIsPossessableByPlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessableByPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessableByPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessedByPlayer_Statics
	{
		struct CitySampleVehicleBase_eventIsPossessedByPlayer_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessedByPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleVehicleBase_eventIsPossessedByPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessedByPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleVehicleBase_eventIsPossessedByPlayer_Parms), &Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessedByPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessedByPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessedByPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessedByPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessedByPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "IsPossessedByPlayer", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessedByPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessedByPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessedByPlayer_Statics::CitySampleVehicleBase_eventIsPossessedByPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessedByPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessedByPlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessedByPlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessedByPlayer_Statics::CitySampleVehicleBase_eventIsPossessedByPlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessedByPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessedByPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_IsUsingAutoGears_Statics
	{
		struct CitySampleVehicleBase_eventIsUsingAutoGears_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACitySampleVehicleBase_IsUsingAutoGears_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleVehicleBase_eventIsUsingAutoGears_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_IsUsingAutoGears_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleVehicleBase_eventIsUsingAutoGears_Parms), &Z_Construct_UFunction_ACitySampleVehicleBase_IsUsingAutoGears_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_IsUsingAutoGears_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_IsUsingAutoGears_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_IsUsingAutoGears_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driving" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_IsUsingAutoGears_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "IsUsingAutoGears", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_IsUsingAutoGears_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_IsUsingAutoGears_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_IsUsingAutoGears_Statics::CitySampleVehicleBase_eventIsUsingAutoGears_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_IsUsingAutoGears_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_IsUsingAutoGears_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_IsUsingAutoGears_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_IsUsingAutoGears_Statics::CitySampleVehicleBase_eventIsUsingAutoGears_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_IsUsingAutoGears()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_IsUsingAutoGears_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleDrifting_Statics
	{
		struct CitySampleVehicleBase_eventIsVehicleDrifting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleDrifting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleVehicleBase_eventIsVehicleDrifting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleDrifting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleVehicleBase_eventIsVehicleDrifting_Parms), &Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleDrifting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleDrifting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleDrifting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleDrifting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drifting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns a flag as to whether or not the vehicle is drifting.Determined by rear wheel slip angles and a user - defined threshold */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a flag as to whether or not the vehicle is drifting.Determined by rear wheel slip angles and a user - defined threshold" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleDrifting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "IsVehicleDrifting", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleDrifting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleDrifting_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleDrifting_Statics::CitySampleVehicleBase_eventIsVehicleDrifting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleDrifting_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleDrifting_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleDrifting_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleDrifting_Statics::CitySampleVehicleBase_eventIsVehicleDrifting_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleDrifting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleDrifting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleFlippedOver_Statics
	{
		struct CitySampleVehicleBase_eventIsVehicleFlippedOver_Parms
		{
			float RollThreshold;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RollThreshold;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleFlippedOver_Statics::NewProp_RollThreshold_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleFlippedOver_Statics::NewProp_RollThreshold = { "RollThreshold", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventIsVehicleFlippedOver_Parms, RollThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleFlippedOver_Statics::NewProp_RollThreshold_MetaData), Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleFlippedOver_Statics::NewProp_RollThreshold_MetaData) };
	void Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleFlippedOver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleVehicleBase_eventIsVehicleFlippedOver_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleFlippedOver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleVehicleBase_eventIsVehicleFlippedOver_Parms), &Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleFlippedOver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleFlippedOver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleFlippedOver_Statics::NewProp_RollThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleFlippedOver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleFlippedOver_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Compares current actor rotation against threshold to determine if the vehicle is flipped */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Compares current actor rotation against threshold to determine if the vehicle is flipped" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleFlippedOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "IsVehicleFlippedOver", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleFlippedOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleFlippedOver_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleFlippedOver_Statics::CitySampleVehicleBase_eventIsVehicleFlippedOver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleFlippedOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleFlippedOver_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleFlippedOver_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleFlippedOver_Statics::CitySampleVehicleBase_eventIsVehicleFlippedOver_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleFlippedOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleFlippedOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_OnEnterPhotomode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_OnEnterPhotomode_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Binded to the enter photo mode delegate, this parks the vehicle */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Binded to the enter photo mode delegate, this parks the vehicle" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_OnEnterPhotomode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "OnEnterPhotomode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_OnEnterPhotomode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_OnEnterPhotomode_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_OnEnterPhotomode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_OnEnterPhotomode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_OnExitPhotomode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_OnExitPhotomode_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Binded to the enter photo mode delegate, this un-parks the vehicle */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Binded to the enter photo mode delegate, this un-parks the vehicle" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_OnExitPhotomode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "OnExitPhotomode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_OnExitPhotomode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_OnExitPhotomode_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_OnExitPhotomode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_OnExitPhotomode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_OnExitVehicle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_OnExitVehicle_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP Callable function for executing gameplay - related vehicle exit logic that isn't necessarily tied to pawn possession state */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP Callable function for executing gameplay - related vehicle exit logic that isn't necessarily tied to pawn possession state" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_OnExitVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "OnExitVehicle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_OnExitVehicle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_OnExitVehicle_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_OnExitVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_OnExitVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_OnOptionsMenuOpened_Statics
	{
		struct CitySampleVehicleBase_eventOnOptionsMenuOpened_Parms
		{
			const UCitySampleUIComponent* CitySampleUI;
			const UCitySampleMenu* OptionsMenu;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CitySampleUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CitySampleUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionsMenu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionsMenu;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_OnOptionsMenuOpened_Statics::NewProp_CitySampleUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_OnOptionsMenuOpened_Statics::NewProp_CitySampleUI = { "CitySampleUI", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventOnOptionsMenuOpened_Parms, CitySampleUI), Z_Construct_UClass_UCitySampleUIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_OnOptionsMenuOpened_Statics::NewProp_CitySampleUI_MetaData), Z_Construct_UFunction_ACitySampleVehicleBase_OnOptionsMenuOpened_Statics::NewProp_CitySampleUI_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_OnOptionsMenuOpened_Statics::NewProp_OptionsMenu_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_OnOptionsMenuOpened_Statics::NewProp_OptionsMenu = { "OptionsMenu", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventOnOptionsMenuOpened_Parms, OptionsMenu), Z_Construct_UClass_UCitySampleMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_OnOptionsMenuOpened_Statics::NewProp_OptionsMenu_MetaData), Z_Construct_UFunction_ACitySampleVehicleBase_OnOptionsMenuOpened_Statics::NewProp_OptionsMenu_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_OnOptionsMenuOpened_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_OnOptionsMenuOpened_Statics::NewProp_CitySampleUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_OnOptionsMenuOpened_Statics::NewProp_OptionsMenu,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_OnOptionsMenuOpened_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Callback that resets vehicle input values when opening the ingame pause menu */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Callback that resets vehicle input values when opening the ingame pause menu" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_OnOptionsMenuOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "OnOptionsMenuOpened", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_OnOptionsMenuOpened_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_OnOptionsMenuOpened_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_OnOptionsMenuOpened_Statics::CitySampleVehicleBase_eventOnOptionsMenuOpened_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_OnOptionsMenuOpened_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_OnOptionsMenuOpened_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_OnOptionsMenuOpened_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_OnOptionsMenuOpened_Statics::CitySampleVehicleBase_eventOnOptionsMenuOpened_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_OnOptionsMenuOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_OnOptionsMenuOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_RequestHideDrivingUI_Statics
	{
		struct CitySampleVehicleBase_eventRequestHideDrivingUI_Parms
		{
			bool bShouldHideDrivingUI;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldHideDrivingUI_MetaData[];
#endif
		static void NewProp_bShouldHideDrivingUI_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldHideDrivingUI;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_RequestHideDrivingUI_Statics::NewProp_bShouldHideDrivingUI_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ACitySampleVehicleBase_RequestHideDrivingUI_Statics::NewProp_bShouldHideDrivingUI_SetBit(void* Obj)
	{
		((CitySampleVehicleBase_eventRequestHideDrivingUI_Parms*)Obj)->bShouldHideDrivingUI = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_RequestHideDrivingUI_Statics::NewProp_bShouldHideDrivingUI = { "bShouldHideDrivingUI", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleVehicleBase_eventRequestHideDrivingUI_Parms), &Z_Construct_UFunction_ACitySampleVehicleBase_RequestHideDrivingUI_Statics::NewProp_bShouldHideDrivingUI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_RequestHideDrivingUI_Statics::NewProp_bShouldHideDrivingUI_MetaData), Z_Construct_UFunction_ACitySampleVehicleBase_RequestHideDrivingUI_Statics::NewProp_bShouldHideDrivingUI_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_RequestHideDrivingUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_RequestHideDrivingUI_Statics::NewProp_bShouldHideDrivingUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_RequestHideDrivingUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driving" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_RequestHideDrivingUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "RequestHideDrivingUI", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_RequestHideDrivingUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_RequestHideDrivingUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_RequestHideDrivingUI_Statics::CitySampleVehicleBase_eventRequestHideDrivingUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_RequestHideDrivingUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_RequestHideDrivingUI_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_RequestHideDrivingUI_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_RequestHideDrivingUI_Statics::CitySampleVehicleBase_eventRequestHideDrivingUI_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_RequestHideDrivingUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_RequestHideDrivingUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_ResetMotionBlurForAllComponentsThisFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_ResetMotionBlurForAllComponentsThisFrame_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Resets motion vector values for all components composing this actor */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets motion vector values for all components composing this actor" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_ResetMotionBlurForAllComponentsThisFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "ResetMotionBlurForAllComponentsThisFrame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_ResetMotionBlurForAllComponentsThisFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_ResetMotionBlurForAllComponentsThisFrame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_ResetMotionBlurForAllComponentsThisFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_ResetMotionBlurForAllComponentsThisFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_SetBrakeInput_Statics
	{
		struct CitySampleVehicleBase_eventSetBrakeInput_Parms
		{
			float Brake;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Brake;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_SetBrakeInput_Statics::NewProp_Brake = { "Brake", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventSetBrakeInput_Parms, Brake), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_SetBrakeInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_SetBrakeInput_Statics::NewProp_Brake,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_SetBrakeInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driving" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets vehicle brake value and applies it */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets vehicle brake value and applies it" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_SetBrakeInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "SetBrakeInput", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_SetBrakeInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_SetBrakeInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_SetBrakeInput_Statics::CitySampleVehicleBase_eventSetBrakeInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_SetBrakeInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_SetBrakeInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_SetBrakeInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_SetBrakeInput_Statics::CitySampleVehicleBase_eventSetBrakeInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_SetBrakeInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_SetBrakeInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_SetHandbrakeInput_Statics
	{
		struct CitySampleVehicleBase_eventSetHandbrakeInput_Parms
		{
			bool bHandbrakeActive;
		};
		static void NewProp_bHandbrakeActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandbrakeActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACitySampleVehicleBase_SetHandbrakeInput_Statics::NewProp_bHandbrakeActive_SetBit(void* Obj)
	{
		((CitySampleVehicleBase_eventSetHandbrakeInput_Parms*)Obj)->bHandbrakeActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_SetHandbrakeInput_Statics::NewProp_bHandbrakeActive = { "bHandbrakeActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleVehicleBase_eventSetHandbrakeInput_Parms), &Z_Construct_UFunction_ACitySampleVehicleBase_SetHandbrakeInput_Statics::NewProp_bHandbrakeActive_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_SetHandbrakeInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_SetHandbrakeInput_Statics::NewProp_bHandbrakeActive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_SetHandbrakeInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driving" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets vehicle handbrake value, applies it, and broadcasts any relevant events as a result */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets vehicle handbrake value, applies it, and broadcasts any relevant events as a result" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_SetHandbrakeInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "SetHandbrakeInput", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_SetHandbrakeInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_SetHandbrakeInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_SetHandbrakeInput_Statics::CitySampleVehicleBase_eventSetHandbrakeInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_SetHandbrakeInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_SetHandbrakeInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_SetHandbrakeInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_SetHandbrakeInput_Statics::CitySampleVehicleBase_eventSetHandbrakeInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_SetHandbrakeInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_SetHandbrakeInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_SetParked_Statics
	{
		struct CitySampleVehicleBase_eventSetParked_Parms
		{
			bool bIsParked;
		};
		static void NewProp_bIsParked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsParked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACitySampleVehicleBase_SetParked_Statics::NewProp_bIsParked_SetBit(void* Obj)
	{
		((CitySampleVehicleBase_eventSetParked_Parms*)Obj)->bIsParked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_SetParked_Statics::NewProp_bIsParked = { "bIsParked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleVehicleBase_eventSetParked_Parms), &Z_Construct_UFunction_ACitySampleVehicleBase_SetParked_Statics::NewProp_bIsParked_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_SetParked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_SetParked_Statics::NewProp_bIsParked,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_SetParked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driving" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets corresponding Vehicle Movement Component parked flag */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets corresponding Vehicle Movement Component parked flag" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_SetParked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "SetParked", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_SetParked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_SetParked_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_SetParked_Statics::CitySampleVehicleBase_eventSetParked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_SetParked_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_SetParked_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_SetParked_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_SetParked_Statics::CitySampleVehicleBase_eventSetParked_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_SetParked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_SetParked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringInput_Statics
	{
		struct CitySampleVehicleBase_eventSetSteeringInput_Parms
		{
			float Steering;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Steering;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringInput_Statics::NewProp_Steering = { "Steering", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventSetSteeringInput_Parms, Steering), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringInput_Statics::NewProp_Steering,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driving" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets vehicle steering value and applies it */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets vehicle steering value and applies it" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "SetSteeringInput", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringInput_Statics::CitySampleVehicleBase_eventSetSteeringInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringInput_Statics::CitySampleVehicleBase_eventSetSteeringInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringModifier_Statics
	{
		struct CitySampleVehicleBase_eventSetSteeringModifier_Parms
		{
			float NewModifier;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewModifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringModifier_Statics::NewProp_NewModifier = { "NewModifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventSetSteeringModifier_Parms, NewModifier), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringModifier_Statics::NewProp_NewModifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets steering input modifier. Used to force a vehicle in a certain direction, like when damaged */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets steering input modifier. Used to force a vehicle in a certain direction, like when damaged" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "SetSteeringModifier", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringModifier_Statics::CitySampleVehicleBase_eventSetSteeringModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringModifier_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringModifier_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringModifier_Statics::CitySampleVehicleBase_eventSetSteeringModifier_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleDisabled_Statics
	{
		struct CitySampleVehicleBase_eventSetThrottleDisabled_Parms
		{
			bool IsDisabled;
		};
		static void NewProp_IsDisabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDisabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleDisabled_Statics::NewProp_IsDisabled_SetBit(void* Obj)
	{
		((CitySampleVehicleBase_eventSetThrottleDisabled_Parms*)Obj)->IsDisabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleDisabled_Statics::NewProp_IsDisabled = { "IsDisabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleVehicleBase_eventSetThrottleDisabled_Parms), &Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleDisabled_Statics::NewProp_IsDisabled_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleDisabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleDisabled_Statics::NewProp_IsDisabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleDisabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "SetThrottleDisabled", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleDisabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleDisabled_Statics::CitySampleVehicleBase_eventSetThrottleDisabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleDisabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleDisabled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleDisabled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleDisabled_Statics::CitySampleVehicleBase_eventSetThrottleDisabled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleInput_Statics
	{
		struct CitySampleVehicleBase_eventSetThrottleInput_Parms
		{
			float Throttle;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Throttle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleInput_Statics::NewProp_Throttle = { "Throttle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventSetThrottleInput_Parms, Throttle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleInput_Statics::NewProp_Throttle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driving" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets vehicle throttle value, applies it, and broadcasts any relevant events as a result */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets vehicle throttle value, applies it, and broadcasts any relevant events as a result" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "SetThrottleInput", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleInput_Statics::CitySampleVehicleBase_eventSetThrottleInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleInput_Statics::CitySampleVehicleBase_eventSetThrottleInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_ShouldDrawRumbleDebugInfo_Statics
	{
		struct CitySampleVehicleBase_eventShouldDrawRumbleDebugInfo_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACitySampleVehicleBase_ShouldDrawRumbleDebugInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleVehicleBase_eventShouldDrawRumbleDebugInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_ShouldDrawRumbleDebugInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleVehicleBase_eventShouldDrawRumbleDebugInfo_Parms), &Z_Construct_UFunction_ACitySampleVehicleBase_ShouldDrawRumbleDebugInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_ShouldDrawRumbleDebugInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_ShouldDrawRumbleDebugInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_ShouldDrawRumbleDebugInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_ShouldDrawRumbleDebugInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "ShouldDrawRumbleDebugInfo", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_ShouldDrawRumbleDebugInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_ShouldDrawRumbleDebugInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_ShouldDrawRumbleDebugInfo_Statics::CitySampleVehicleBase_eventShouldDrawRumbleDebugInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_ShouldDrawRumbleDebugInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_ShouldDrawRumbleDebugInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_ShouldDrawRumbleDebugInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_ShouldDrawRumbleDebugInfo_Statics::CitySampleVehicleBase_eventShouldDrawRumbleDebugInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_ShouldDrawRumbleDebugInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_ShouldDrawRumbleDebugInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_ShouldHideDrivingUI_Statics
	{
		struct CitySampleVehicleBase_eventShouldHideDrivingUI_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACitySampleVehicleBase_ShouldHideDrivingUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleVehicleBase_eventShouldHideDrivingUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_ShouldHideDrivingUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleVehicleBase_eventShouldHideDrivingUI_Parms), &Z_Construct_UFunction_ACitySampleVehicleBase_ShouldHideDrivingUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_ShouldHideDrivingUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_ShouldHideDrivingUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_ShouldHideDrivingUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driving" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_ShouldHideDrivingUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "ShouldHideDrivingUI", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_ShouldHideDrivingUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_ShouldHideDrivingUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_ShouldHideDrivingUI_Statics::CitySampleVehicleBase_eventShouldHideDrivingUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_ShouldHideDrivingUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_ShouldHideDrivingUI_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_ShouldHideDrivingUI_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_ShouldHideDrivingUI_Statics::CitySampleVehicleBase_eventShouldHideDrivingUI_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_ShouldHideDrivingUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_ShouldHideDrivingUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideCameraToPivotOffset_Statics
	{
		struct CitySampleVehicleBase_eventShouldOverrideCameraToPivotOffset_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideCameraToPivotOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleVehicleBase_eventShouldOverrideCameraToPivotOffset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideCameraToPivotOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleVehicleBase_eventShouldOverrideCameraToPivotOffset_Parms), &Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideCameraToPivotOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideCameraToPivotOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideCameraToPivotOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideCameraToPivotOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Overriddes" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideCameraToPivotOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "ShouldOverrideCameraToPivotOffset", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideCameraToPivotOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideCameraToPivotOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideCameraToPivotOffset_Statics::CitySampleVehicleBase_eventShouldOverrideCameraToPivotOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideCameraToPivotOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideCameraToPivotOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideCameraToPivotOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideCameraToPivotOffset_Statics::CitySampleVehicleBase_eventShouldOverrideCameraToPivotOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideCameraToPivotOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideCameraToPivotOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideLookAtPointOffset_Statics
	{
		struct CitySampleVehicleBase_eventShouldOverrideLookAtPointOffset_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideLookAtPointOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleVehicleBase_eventShouldOverrideLookAtPointOffset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideLookAtPointOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleVehicleBase_eventShouldOverrideLookAtPointOffset_Parms), &Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideLookAtPointOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideLookAtPointOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideLookAtPointOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideLookAtPointOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Overriddes" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideLookAtPointOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "ShouldOverrideLookAtPointOffset", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideLookAtPointOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideLookAtPointOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideLookAtPointOffset_Statics::CitySampleVehicleBase_eventShouldOverrideLookAtPointOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideLookAtPointOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideLookAtPointOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideLookAtPointOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideLookAtPointOffset_Statics::CitySampleVehicleBase_eventShouldOverrideLookAtPointOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideLookAtPointOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideLookAtPointOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_StartParkingReleaseTimer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_StartParkingReleaseTimer_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When entering the vehicle, this function starts the timer the blocks the player from driving until done */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When entering the vehicle, this function starts the timer the blocks the player from driving until done" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_StartParkingReleaseTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "StartParkingReleaseTimer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_StartParkingReleaseTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_StartParkingReleaseTimer_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_StartParkingReleaseTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_StartParkingReleaseTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_TriggerCollisionRumble_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_TriggerCollisionRumble_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rumble|Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Plays Dynamic Force Feedback based on current CollisionRumbleInfo which is updated on collision events */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Plays Dynamic Force Feedback based on current CollisionRumbleInfo which is updated on collision events" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_TriggerCollisionRumble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "TriggerCollisionRumble", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_TriggerCollisionRumble_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_TriggerCollisionRumble_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_TriggerCollisionRumble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_TriggerCollisionRumble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_TriggerLeftBumpRumble_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_TriggerLeftBumpRumble_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rumble|Bumps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Plays Dynamic Force Feedback based on current LeftBumpRumbleInfo */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Plays Dynamic Force Feedback based on current LeftBumpRumbleInfo" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_TriggerLeftBumpRumble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "TriggerLeftBumpRumble", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_TriggerLeftBumpRumble_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_TriggerLeftBumpRumble_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_TriggerLeftBumpRumble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_TriggerLeftBumpRumble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_TriggerLeftSuspensionRumble_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_TriggerLeftSuspensionRumble_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rumble|Suspension" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Plays Dynamic Force Feedback based on current LeftSuspensionRumbleInfo */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Plays Dynamic Force Feedback based on current LeftSuspensionRumbleInfo" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_TriggerLeftSuspensionRumble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "TriggerLeftSuspensionRumble", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_TriggerLeftSuspensionRumble_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_TriggerLeftSuspensionRumble_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_TriggerLeftSuspensionRumble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_TriggerLeftSuspensionRumble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_TriggerRightBumpRumble_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_TriggerRightBumpRumble_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rumble|Bumps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Plays Dynamic Force Feedback based on current RightBumpRumbleInfo */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Plays Dynamic Force Feedback based on current RightBumpRumbleInfo" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_TriggerRightBumpRumble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "TriggerRightBumpRumble", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_TriggerRightBumpRumble_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_TriggerRightBumpRumble_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_TriggerRightBumpRumble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_TriggerRightBumpRumble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_TriggerRightSuspensionRumble_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_TriggerRightSuspensionRumble_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rumble|Suspension" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Plays Dynamic Force Feedback based on current RightSuspensionRumbleInfo */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Plays Dynamic Force Feedback based on current RightSuspensionRumbleInfo" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_TriggerRightSuspensionRumble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "TriggerRightSuspensionRumble", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_TriggerRightSuspensionRumble_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_TriggerRightSuspensionRumble_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_TriggerRightSuspensionRumble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_TriggerRightSuspensionRumble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_UpdateContinuousCollisionDetectionAtSpeed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_UpdateContinuousCollisionDetectionAtSpeed_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Checks vehicle speed against custom threshold to determine whether CCD should be used */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks vehicle speed against custom threshold to determine whether CCD should be used" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_UpdateContinuousCollisionDetectionAtSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "UpdateContinuousCollisionDetectionAtSpeed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_UpdateContinuousCollisionDetectionAtSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_UpdateContinuousCollisionDetectionAtSpeed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_UpdateContinuousCollisionDetectionAtSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_UpdateContinuousCollisionDetectionAtSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_UpdateLeftBumpRumbleInfo_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SuspensionDiff;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_UpdateLeftBumpRumbleInfo_Statics::NewProp_SuspensionDiff = { "SuspensionDiff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventUpdateLeftBumpRumbleInfo_Parms, SuspensionDiff), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_UpdateLeftBumpRumbleInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_UpdateLeftBumpRumbleInfo_Statics::NewProp_SuspensionDiff,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_UpdateLeftBumpRumbleInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rumble|Bumps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BIE for updating rumble info tied to sudden changes in wheel suspension in the driver side wheels */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BIE for updating rumble info tied to sudden changes in wheel suspension in the driver side wheels" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_UpdateLeftBumpRumbleInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "UpdateLeftBumpRumbleInfo", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_UpdateLeftBumpRumbleInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_UpdateLeftBumpRumbleInfo_Statics::PropPointers), sizeof(CitySampleVehicleBase_eventUpdateLeftBumpRumbleInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_UpdateLeftBumpRumbleInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_UpdateLeftBumpRumbleInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_UpdateLeftBumpRumbleInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySampleVehicleBase_eventUpdateLeftBumpRumbleInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_UpdateLeftBumpRumbleInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_UpdateLeftBumpRumbleInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_UpdateLeftSuspensionRumbleInfo_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSuspensionTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_UpdateLeftSuspensionRumbleInfo_Statics::NewProp_MaxSuspensionTime = { "MaxSuspensionTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventUpdateLeftSuspensionRumbleInfo_Parms, MaxSuspensionTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_UpdateLeftSuspensionRumbleInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_UpdateLeftSuspensionRumbleInfo_Statics::NewProp_MaxSuspensionTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_UpdateLeftSuspensionRumbleInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rumble|Suspension" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BIE for updating rumble info tied to time the suspension spent at full length in the driver side wheels */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BIE for updating rumble info tied to time the suspension spent at full length in the driver side wheels" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_UpdateLeftSuspensionRumbleInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "UpdateLeftSuspensionRumbleInfo", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_UpdateLeftSuspensionRumbleInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_UpdateLeftSuspensionRumbleInfo_Statics::PropPointers), sizeof(CitySampleVehicleBase_eventUpdateLeftSuspensionRumbleInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_UpdateLeftSuspensionRumbleInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_UpdateLeftSuspensionRumbleInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_UpdateLeftSuspensionRumbleInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySampleVehicleBase_eventUpdateLeftSuspensionRumbleInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_UpdateLeftSuspensionRumbleInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_UpdateLeftSuspensionRumbleInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_UpdateRightBumpRumbleInfo_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SuspensionDiff;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_UpdateRightBumpRumbleInfo_Statics::NewProp_SuspensionDiff = { "SuspensionDiff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventUpdateRightBumpRumbleInfo_Parms, SuspensionDiff), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_UpdateRightBumpRumbleInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_UpdateRightBumpRumbleInfo_Statics::NewProp_SuspensionDiff,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_UpdateRightBumpRumbleInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rumble|Bumps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BIE for updating rumble info tied to sudden changes in wheel suspension in the passenger side wheels */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BIE for updating rumble info tied to sudden changes in wheel suspension in the passenger side wheels" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_UpdateRightBumpRumbleInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "UpdateRightBumpRumbleInfo", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_UpdateRightBumpRumbleInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_UpdateRightBumpRumbleInfo_Statics::PropPointers), sizeof(CitySampleVehicleBase_eventUpdateRightBumpRumbleInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_UpdateRightBumpRumbleInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_UpdateRightBumpRumbleInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_UpdateRightBumpRumbleInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySampleVehicleBase_eventUpdateRightBumpRumbleInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_UpdateRightBumpRumbleInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_UpdateRightBumpRumbleInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_UpdateRightSuspensionRumbleInfo_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSuspensionTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_UpdateRightSuspensionRumbleInfo_Statics::NewProp_MaxSuspensionTime = { "MaxSuspensionTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventUpdateRightSuspensionRumbleInfo_Parms, MaxSuspensionTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_UpdateRightSuspensionRumbleInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_UpdateRightSuspensionRumbleInfo_Statics::NewProp_MaxSuspensionTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_UpdateRightSuspensionRumbleInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rumble|Suspension" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BIE for updating rumble info tied to time the suspension spent at full length in the passenger side wheels */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BIE for updating rumble info tied to time the suspension spent at full length in the passenger side wheels" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_UpdateRightSuspensionRumbleInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "UpdateRightSuspensionRumbleInfo", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_UpdateRightSuspensionRumbleInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_UpdateRightSuspensionRumbleInfo_Statics::PropPointers), sizeof(CitySampleVehicleBase_eventUpdateRightSuspensionRumbleInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_UpdateRightSuspensionRumbleInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_UpdateRightSuspensionRumbleInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_UpdateRightSuspensionRumbleInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySampleVehicleBase_eventUpdateRightSuspensionRumbleInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_UpdateRightSuspensionRumbleInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_UpdateRightSuspensionRumbleInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySampleVehicleBase_UpdateTransformsOverTime_Statics
	{
		struct CitySampleVehicleBase_eventUpdateTransformsOverTime_Parms
		{
			USkeletalMeshComponent* SKM_Proxy;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SKM_Proxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SKM_Proxy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_UpdateTransformsOverTime_Statics::NewProp_SKM_Proxy_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACitySampleVehicleBase_UpdateTransformsOverTime_Statics::NewProp_SKM_Proxy = { "SKM_Proxy", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleVehicleBase_eventUpdateTransformsOverTime_Parms, SKM_Proxy), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_UpdateTransformsOverTime_Statics::NewProp_SKM_Proxy_MetaData), Z_Construct_UFunction_ACitySampleVehicleBase_UpdateTransformsOverTime_Statics::NewProp_SKM_Proxy_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleVehicleBase_UpdateTransformsOverTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleVehicleBase_UpdateTransformsOverTime_Statics::NewProp_SKM_Proxy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleVehicleBase_UpdateTransformsOverTime_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Updates the TransformsOverTime member with relevant information */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates the TransformsOverTime member with relevant information" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleVehicleBase_UpdateTransformsOverTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleVehicleBase, nullptr, "UpdateTransformsOverTime", nullptr, nullptr, Z_Construct_UFunction_ACitySampleVehicleBase_UpdateTransformsOverTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_UpdateTransformsOverTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_UpdateTransformsOverTime_Statics::CitySampleVehicleBase_eventUpdateTransformsOverTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_UpdateTransformsOverTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleVehicleBase_UpdateTransformsOverTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleVehicleBase_UpdateTransformsOverTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleVehicleBase_UpdateTransformsOverTime_Statics::CitySampleVehicleBase_eventUpdateTransformsOverTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleVehicleBase_UpdateTransformsOverTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleVehicleBase_UpdateTransformsOverTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACitySampleVehicleBase);
	UClass* Z_Construct_UClass_ACitySampleVehicleBase_NoRegister()
	{
		return ACitySampleVehicleBase::StaticClass();
	}
	struct Z_Construct_UClass_ACitySampleVehicleBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformsOverTime_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformsOverTime_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransformsOverTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerEnterVehicle_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerEnterVehicle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerExitVehicle_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerExitVehicle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAccelerationStart_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAccelerationStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAccelerationStop_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAccelerationStop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReverseStart_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReverseStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReverseStop_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReverseStop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAirborneStart_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAirborneStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAirborneStop_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAirborneStop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDriftStart_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDriftStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDriftStop_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDriftStop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBrakeStart_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBrakeStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBrakeStop_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBrakeStop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHandbrakeStart_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHandbrakeStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHandbrakeStop_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHandbrakeStop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnWheelBump_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWheelBump;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDoorOpen_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDoorOpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDoorClose_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDoorClose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnIgnitionStart_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIgnitionStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnVehicleBackfire_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVehicleBackfire;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSleepStart_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSleepStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSleepStop_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSleepStop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharpSteeringThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SharpSteeringThreshold;
		static const UECodeGen_Private::FTextPropertyParams NewProp_InputActionDescriptions_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputActionDescriptions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputActionDescriptions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InputActionDescriptions;
		static const UECodeGen_Private::FTextPropertyParams NewProp_InputKeyDescriptionOverrides_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputKeyDescriptionOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputKeyDescriptionOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InputKeyDescriptionOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerDrivingDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerDrivingDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideDrivingUI_MetaData[];
#endif
		static void NewProp_bHideDrivingUI_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideDrivingUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportOffsetStep_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportOffsetStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlipVehicleMaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlipVehicleMaxDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CCDSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CCDSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeatSockets_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SeatSockets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Occupants_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Occupants;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlurAngleVelocityMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlurAngleVelocityMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlurAngleMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlurAngleMax;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedMotionBlurWheelMIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedMotionBlurWheelMIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedMotionBlurWheelMIDs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedSuspensionDiffThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedSuspensionDiffThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedRumbleInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpeedRumbleInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CorneringRumbleInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CorneringRumbleInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftSurfaceRumbleInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftSurfaceRumbleInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightSurfaceRumbleInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightSurfaceRumbleInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftSuspensionRumbleInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftSuspensionRumbleInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightSuspensionRumbleInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightSuspensionRumbleInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftBumpRumbleInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftBumpRumbleInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightBumpRumbleInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightBumpRumbleInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionRumbleInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionRumbleInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAdjustAngularDampingToSteering_MetaData[];
#endif
		static void NewProp_bAdjustAngularDampingToSteering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdjustAngularDampingToSteering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteeringToAngularDamping_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SteeringToAngularDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularDampingScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularDampingScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCenterOfMassAdjustments_MetaData[];
#endif
		static void NewProp_bUseCenterOfMassAdjustments_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCenterOfMassAdjustments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandbrakeForwardCOMOffset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HandbrakeForwardCOMOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandbrakeForwardCOMOffsetScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HandbrakeForwardCOMOffsetScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandbrakeForwardCOMInterpRiseAndFallSpeeds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HandbrakeForwardCOMInterpRiseAndFallSpeeds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteeringToForwardCOMOffset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SteeringToForwardCOMOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardCOMOffsetScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardCOMOffsetScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardCOMInterpRiseAndFallSpeeds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardCOMInterpRiseAndFallSpeeds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinVelocityToDisableForwardCOMOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinVelocityToDisableForwardCOMOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteeringToHorizontalCOMOffset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SteeringToHorizontalCOMOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalCOMOffsetScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalCOMOffsetScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalCOMInterpRiseAndFallSpeeds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalCOMInterpRiseAndFallSpeeds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandbrakeVerticalCOMOffset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HandbrakeVerticalCOMOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandbrakeVerticalCOMOffsetScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HandbrakeVerticalCOMOffsetScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandbrakeVerticalCOMInterpRiseAndFallSpeeds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HandbrakeVerticalCOMInterpRiseAndFallSpeeds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteeringToVerticalCOMOffset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SteeringToVerticalCOMOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalCOMOffsetScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalCOMOffsetScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalCOMInterpRiseAndFallSpeeds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalCOMInterpRiseAndFallSpeeds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseWheelFrictionMultiplierAdjustments_MetaData[];
#endif
		static void NewProp_bUseWheelFrictionMultiplierAdjustments_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWheelFrictionMultiplierAdjustments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteeringToFrontWheelFrictionMultiplierAdjustment_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SteeringToFrontWheelFrictionMultiplierAdjustment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrontWheelFrictionMultiplierAdjustmentScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrontWheelFrictionMultiplierAdjustmentScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseBurnoutAdjustments_MetaData[];
#endif
		static void NewProp_bUseBurnoutAdjustments_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBurnoutAdjustments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BurnoutFrictionMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BurnoutFrictionMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BurnoutLateralSlipMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BurnoutLateralSlipMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BurnoutMinSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BurnoutMinSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BurnoutMaxSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BurnoutMaxSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RearWheelSlipAngleDriftingMinThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RearWheelSlipAngleDriftingMinThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DriftingSpeedMinThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DriftingSpeedMinThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCameraToPivotOffset_MetaData[];
#endif
		static void NewProp_bOverrideCameraToPivotOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCameraToPivotOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraToPivotOffsetOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraToPivotOffsetOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideLookAtPointOffset_MetaData[];
#endif
		static void NewProp_bOverrideLookAtPointOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLookAtPointOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtPointOffsetOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookAtPointOffsetOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrivingState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DrivingState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrottleAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrottleAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrakeAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BrakeAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteeringAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SteeringAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandbrakeAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HandbrakeAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookControlsInputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookControlsInputMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookDeltaAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookDeltaAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputMappingPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACitySampleVehicleBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWheeledVehiclePawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACitySampleVehicleBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_ApplyWheelMotionBlurNative, "ApplyWheelMotionBlurNative" }, // 1290239164
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_FlipVehicle, "FlipVehicle" }, // 1158272958
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_GetBrakeInput, "GetBrakeInput" }, // 694459939
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_GetCameraToPivotOffsetOverride, "GetCameraToPivotOffsetOverride" }, // 2296121126
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_GetCOMPositionRatio, "GetCOMPositionRatio" }, // 2502320868
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_GetDrivingState, "GetDrivingState" }, // 1645076254
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_GetForwardSpeed, "GetForwardSpeed" }, // 3579129059
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_GetGear, "GetGear" }, // 3946676553
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_GetLookAtPointOffsetOverride, "GetLookAtPointOffsetOverride" }, // 1288956282
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_GetMeasuredVelocity, "GetMeasuredVelocity" }, // 3177565701
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_GetNormalizedSuspensionLength, "GetNormalizedSuspensionLength" }, // 4042527731
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_GetOccupantInSeat, "GetOccupantInSeat" }, // 1627728821
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_GetPhysicalSurfaceUnderWheel, "GetPhysicalSurfaceUnderWheel" }, // 3043825292
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_GetRPM, "GetRPM" }, // 2090996195
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_GetSeatSocket, "GetSeatSocket" }, // 2798493734
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_GetThrottleInput, "GetThrottleInput" }, // 2791453839
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_GetTimeSpentSharpSteering, "GetTimeSpentSharpSteering" }, // 1338784541
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_GetWheelSlipAngleInDegrees, "GetWheelSlipAngleInDegrees" }, // 3043252164
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_HasAllWheelsOnGround, "HasAllWheelsOnGround" }, // 4018711969
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_IsHandbrakeOn, "IsHandbrakeOn" }, // 1012510009
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessableByPlayer, "IsPossessableByPlayer" }, // 2448677308
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_IsPossessedByPlayer, "IsPossessedByPlayer" }, // 1306042659
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_IsUsingAutoGears, "IsUsingAutoGears" }, // 1225583305
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleDrifting, "IsVehicleDrifting" }, // 4085246113
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_IsVehicleFlippedOver, "IsVehicleFlippedOver" }, // 1020023407
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_OnEnterPhotomode, "OnEnterPhotomode" }, // 1698871854
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_OnExitPhotomode, "OnExitPhotomode" }, // 86252979
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_OnExitVehicle, "OnExitVehicle" }, // 155232494
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_OnOptionsMenuOpened, "OnOptionsMenuOpened" }, // 2167276725
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_RequestHideDrivingUI, "RequestHideDrivingUI" }, // 4143598033
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_ResetMotionBlurForAllComponentsThisFrame, "ResetMotionBlurForAllComponentsThisFrame" }, // 644301665
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_SetBrakeInput, "SetBrakeInput" }, // 1309220620
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_SetHandbrakeInput, "SetHandbrakeInput" }, // 780862317
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_SetParked, "SetParked" }, // 1809296708
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringInput, "SetSteeringInput" }, // 3020877
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_SetSteeringModifier, "SetSteeringModifier" }, // 4084089908
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleDisabled, "SetThrottleDisabled" }, // 1575296715
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_SetThrottleInput, "SetThrottleInput" }, // 2974305383
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_ShouldDrawRumbleDebugInfo, "ShouldDrawRumbleDebugInfo" }, // 1461673566
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_ShouldHideDrivingUI, "ShouldHideDrivingUI" }, // 2637784879
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideCameraToPivotOffset, "ShouldOverrideCameraToPivotOffset" }, // 3957280806
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_ShouldOverrideLookAtPointOffset, "ShouldOverrideLookAtPointOffset" }, // 1531947981
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_StartParkingReleaseTimer, "StartParkingReleaseTimer" }, // 2948987751
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_TriggerCollisionRumble, "TriggerCollisionRumble" }, // 636756458
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_TriggerLeftBumpRumble, "TriggerLeftBumpRumble" }, // 4125793280
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_TriggerLeftSuspensionRumble, "TriggerLeftSuspensionRumble" }, // 571926537
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_TriggerRightBumpRumble, "TriggerRightBumpRumble" }, // 2927817733
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_TriggerRightSuspensionRumble, "TriggerRightSuspensionRumble" }, // 687111514
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_UpdateContinuousCollisionDetectionAtSpeed, "UpdateContinuousCollisionDetectionAtSpeed" }, // 3147982274
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_UpdateLeftBumpRumbleInfo, "UpdateLeftBumpRumbleInfo" }, // 1184344880
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_UpdateLeftSuspensionRumbleInfo, "UpdateLeftSuspensionRumbleInfo" }, // 2521929857
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_UpdateRightBumpRumbleInfo, "UpdateRightBumpRumbleInfo" }, // 3781100497
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_UpdateRightSuspensionRumbleInfo, "UpdateRightSuspensionRumbleInfo" }, // 756576603
		{ &Z_Construct_UFunction_ACitySampleVehicleBase_UpdateTransformsOverTime, "UpdateTransformsOverTime" }, // 1807857550
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base class for driveable playable vehicles\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Vehicles/CitySampleVehicleBase.h" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for driveable playable vehicles" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_TransformsOverTime_Inner = { "TransformsOverTime", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTimestampedTransform, METADATA_PARAMS(0, nullptr) }; // 964479146
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_TransformsOverTime_MetaData[] = {
		{ "Category", "CitySampleVehicleBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of vehicle transforms stored with accompanying timestamps */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of vehicle transforms stored with accompanying timestamps" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_TransformsOverTime = { "TransformsOverTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, TransformsOverTime), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_TransformsOverTime_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_TransformsOverTime_MetaData) }; // 964479146
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnPlayerEnterVehicle_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vehicle event multicast delegates. Useful when other systems want to be keyed into changes in the vehicle */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vehicle event multicast delegates. Useful when other systems want to be keyed into changes in the vehicle" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnPlayerEnterVehicle = { "OnPlayerEnterVehicle", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, OnPlayerEnterVehicle), Z_Construct_UDelegateFunction_CitySample_OnPlayerEnterVehicle__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnPlayerEnterVehicle_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnPlayerEnterVehicle_MetaData) }; // 2450739436
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnPlayerExitVehicle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnPlayerExitVehicle = { "OnPlayerExitVehicle", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, OnPlayerExitVehicle), Z_Construct_UDelegateFunction_CitySample_OnPlayerExitVehicle__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnPlayerExitVehicle_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnPlayerExitVehicle_MetaData) }; // 2287076740
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnAccelerationStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnAccelerationStart = { "OnAccelerationStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, OnAccelerationStart), Z_Construct_UDelegateFunction_CitySample_OnAccelerationStart__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnAccelerationStart_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnAccelerationStart_MetaData) }; // 4105104587
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnAccelerationStop_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnAccelerationStop = { "OnAccelerationStop", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, OnAccelerationStop), Z_Construct_UDelegateFunction_CitySample_OnAccelerationStop__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnAccelerationStop_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnAccelerationStop_MetaData) }; // 152015325
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnReverseStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnReverseStart = { "OnReverseStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, OnReverseStart), Z_Construct_UDelegateFunction_CitySample_OnReverseStart__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnReverseStart_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnReverseStart_MetaData) }; // 3338925932
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnReverseStop_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnReverseStop = { "OnReverseStop", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, OnReverseStop), Z_Construct_UDelegateFunction_CitySample_OnReverseStop__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnReverseStop_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnReverseStop_MetaData) }; // 234798228
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnAirborneStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnAirborneStart = { "OnAirborneStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, OnAirborneStart), Z_Construct_UDelegateFunction_CitySample_OnAirborneStart__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnAirborneStart_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnAirborneStart_MetaData) }; // 1726897257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnAirborneStop_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnAirborneStop = { "OnAirborneStop", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, OnAirborneStop), Z_Construct_UDelegateFunction_CitySample_OnAirborneStop__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnAirborneStop_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnAirborneStop_MetaData) }; // 3820945031
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnDriftStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnDriftStart = { "OnDriftStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, OnDriftStart), Z_Construct_UDelegateFunction_CitySample_OnDriftStart__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnDriftStart_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnDriftStart_MetaData) }; // 828694863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnDriftStop_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnDriftStop = { "OnDriftStop", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, OnDriftStop), Z_Construct_UDelegateFunction_CitySample_OnDriftStop__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnDriftStop_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnDriftStop_MetaData) }; // 3988364385
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnBrakeStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnBrakeStart = { "OnBrakeStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, OnBrakeStart), Z_Construct_UDelegateFunction_CitySample_OnBrakeStart__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnBrakeStart_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnBrakeStart_MetaData) }; // 1498612018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnBrakeStop_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnBrakeStop = { "OnBrakeStop", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, OnBrakeStop), Z_Construct_UDelegateFunction_CitySample_OnBrakeStop__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnBrakeStop_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnBrakeStop_MetaData) }; // 4098255951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnHandbrakeStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnHandbrakeStart = { "OnHandbrakeStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, OnHandbrakeStart), Z_Construct_UDelegateFunction_CitySample_OnHandbrakeStart__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnHandbrakeStart_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnHandbrakeStart_MetaData) }; // 905432635
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnHandbrakeStop_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnHandbrakeStop = { "OnHandbrakeStop", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, OnHandbrakeStop), Z_Construct_UDelegateFunction_CitySample_OnHandbrakeStop__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnHandbrakeStop_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnHandbrakeStop_MetaData) }; // 4048759943
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnWheelBump_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnWheelBump = { "OnWheelBump", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, OnWheelBump), Z_Construct_UDelegateFunction_CitySample_OnWheelBump__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnWheelBump_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnWheelBump_MetaData) }; // 4048591002
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnDoorOpen_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnDoorOpen = { "OnDoorOpen", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, OnDoorOpen), Z_Construct_UDelegateFunction_CitySample_OnDoorOpen__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnDoorOpen_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnDoorOpen_MetaData) }; // 1801999582
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnDoorClose_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnDoorClose = { "OnDoorClose", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, OnDoorClose), Z_Construct_UDelegateFunction_CitySample_OnDoorClose__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnDoorClose_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnDoorClose_MetaData) }; // 3348533805
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnIgnitionStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnIgnitionStart = { "OnIgnitionStart", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, OnIgnitionStart), Z_Construct_UDelegateFunction_CitySample_OnIgnitionStart__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnIgnitionStart_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnIgnitionStart_MetaData) }; // 1470027087
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnVehicleBackfire_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnVehicleBackfire = { "OnVehicleBackfire", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, OnVehicleBackfire), Z_Construct_UDelegateFunction_CitySample_OnVehicleBackfire__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnVehicleBackfire_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnVehicleBackfire_MetaData) }; // 1162285321
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnSleepStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnSleepStart = { "OnSleepStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, OnSleepStart), Z_Construct_UDelegateFunction_CitySample_OnSleepStart__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnSleepStart_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnSleepStart_MetaData) }; // 915799327
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnSleepStop_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnSleepStop = { "OnSleepStop", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, OnSleepStop), Z_Construct_UDelegateFunction_CitySample_OnSleepStop__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnSleepStop_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnSleepStop_MetaData) }; // 1864238177
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Base camera turn rate, in deg/sec. Other scaling may affect final turn rate */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base camera turn rate, in deg/sec. Other scaling may affect final turn rate" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, BaseTurnRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BaseTurnRate_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BaseTurnRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Base camera look up/down rate, in deg/sec. Other scaling may affect final rate */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base camera look up/down rate, in deg/sec. Other scaling may affect final rate" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, BaseLookUpRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BaseLookUpRate_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BaseLookUpRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SharpSteeringThreshold_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Raw steering magnitude that needs to be passed for the vehicle to be considered to be \"Sharp Steering\". This is a value that helps the driving camera with turning behaviors */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Raw steering magnitude that needs to be passed for the vehicle to be considered to be \"Sharp Steering\". This is a value that helps the driving camera with turning behaviors" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SharpSteeringThreshold = { "SharpSteeringThreshold", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, SharpSteeringThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SharpSteeringThreshold_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SharpSteeringThreshold_MetaData) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_InputActionDescriptions_ValueProp = { "InputActionDescriptions", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_InputActionDescriptions_Key_KeyProp = { "InputActionDescriptions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_InputActionDescriptions_MetaData[] = {
		{ "Category", "Controls Overlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mapping of pawn relevant InputActions to their string description for the controls overlay UI */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mapping of pawn relevant InputActions to their string description for the controls overlay UI" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_InputActionDescriptions = { "InputActionDescriptions", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, InputActionDescriptions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_InputActionDescriptions_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_InputActionDescriptions_MetaData) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_InputKeyDescriptionOverrides_ValueProp = { "InputKeyDescriptionOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_InputKeyDescriptionOverrides_Key_KeyProp = { "InputKeyDescriptionOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_InputKeyDescriptionOverrides_MetaData[] = {
		{ "Category", "Controls Overlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mapping of pawn relevant input keys to their string description for the controls overlay UI */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mapping of pawn relevant input keys to their string description for the controls overlay UI" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_InputKeyDescriptionOverrides = { "InputKeyDescriptionOverrides", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, InputKeyDescriptionOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_InputKeyDescriptionOverrides_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_InputKeyDescriptionOverrides_MetaData) }; // 46000949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_PlayerDrivingDelay_MetaData[] = {
		{ "Category", "Driving" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delay before player can actually drive the vehicle upon receiving the \"OnIgnitionStart\" event*/" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delay before player can actually drive the vehicle upon receiving the \"OnIgnitionStart\" event" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_PlayerDrivingDelay = { "PlayerDrivingDelay", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, PlayerDrivingDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_PlayerDrivingDelay_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_PlayerDrivingDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bHideDrivingUI_MetaData[] = {
		{ "Category", "Driving" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Specifies that the driving UI, if it exists, should be hidden */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies that the driving UI, if it exists, should be hidden" },
#endif
	};
#endif
	void Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bHideDrivingUI_SetBit(void* Obj)
	{
		((ACitySampleVehicleBase*)Obj)->bHideDrivingUI = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bHideDrivingUI = { "bHideDrivingUI", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACitySampleVehicleBase), &Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bHideDrivingUI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bHideDrivingUI_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bHideDrivingUI_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_TeleportOffsetStep_MetaData[] = {
		{ "Category", "Driving" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Offset amount uses to increment the search radius after each failed attempt to find a teleport spot to flip */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset amount uses to increment the search radius after each failed attempt to find a teleport spot to flip" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_TeleportOffsetStep = { "TeleportOffsetStep", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, TeleportOffsetStep), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_TeleportOffsetStep_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_TeleportOffsetStep_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_FlipVehicleMaxDistance_MetaData[] = {
		{ "Category", "Driving" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Max search distance for a valid teleport spot when attempting to flip */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max search distance for a valid teleport spot when attempting to flip" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_FlipVehicleMaxDistance = { "FlipVehicleMaxDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, FlipVehicleMaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_FlipVehicleMaxDistance_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_FlipVehicleMaxDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_CCDSpeedThreshold_MetaData[] = {
		{ "Category", "CitySampleVehicleBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Speed threshold used when determining whether to use Continuous Collision Detection */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed threshold used when determining whether to use Continuous Collision Detection" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_CCDSpeedThreshold = { "CCDSpeedThreshold", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, CCDSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_CCDSpeedThreshold_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_CCDSpeedThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SeatSockets_MetaData[] = {
		{ "ArraySizeEnum", "/Script/CitySample.ECitySampleVehicleSeat" },
		{ "Category", "CitySampleVehicleBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of seat socket names, should be ordered by CitySampleVehicleSeat enum */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of seat socket names, should be ordered by CitySampleVehicleSeat enum" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SeatSockets = { "SeatSockets", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(SeatSockets, ACitySampleVehicleBase), STRUCT_OFFSET(ACitySampleVehicleBase, SeatSockets), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SeatSockets_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SeatSockets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_Occupants_MetaData[] = {
		{ "ArraySizeEnum", "/Script/CitySample.ECitySampleVehicleSeat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of vehicle occupants, should be ordered by CitySampleVehicleSeat enum */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of vehicle occupants, should be ordered by CitySampleVehicleSeat enum" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_Occupants = { "Occupants", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(Occupants, ACitySampleVehicleBase), STRUCT_OFFSET(ACitySampleVehicleBase, Occupants), Z_Construct_UClass_ACitySampleCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_Occupants_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_Occupants_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BlurAngleVelocityMax_MetaData[] = {
		{ "Category", "Wheel Motion Blur" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Max wheel angular velocity need to hit the max blur wheel angle */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max wheel angular velocity need to hit the max blur wheel angle" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BlurAngleVelocityMax = { "BlurAngleVelocityMax", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, BlurAngleVelocityMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BlurAngleVelocityMax_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BlurAngleVelocityMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BlurAngleMax_MetaData[] = {
		{ "Category", "Wheel Motion Blur" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Max wheel angle to pass into the Motion Blur MID */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max wheel angle to pass into the Motion Blur MID" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BlurAngleMax = { "BlurAngleMax", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, BlurAngleMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BlurAngleMax_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BlurAngleMax_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_CachedMotionBlurWheelMIDs_Inner = { "CachedMotionBlurWheelMIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_CachedMotionBlurWheelMIDs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of cached MIDs used when applying wheel motion blur updates */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of cached MIDs used when applying wheel motion blur updates" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_CachedMotionBlurWheelMIDs = { "CachedMotionBlurWheelMIDs", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, CachedMotionBlurWheelMIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_CachedMotionBlurWheelMIDs_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_CachedMotionBlurWheelMIDs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_NormalizedSuspensionDiffThreshold_MetaData[] = {
		{ "Category", "Rumble|Bumps" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Difference in Normalized Suspension in one frame required to trigger a rumble */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Difference in Normalized Suspension in one frame required to trigger a rumble" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_NormalizedSuspensionDiffThreshold = { "NormalizedSuspensionDiffThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, NormalizedSuspensionDiffThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_NormalizedSuspensionDiffThreshold_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_NormalizedSuspensionDiffThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SpeedRumbleInfo_MetaData[] = {
		{ "Category", "Rumble|Speed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rumble Info members used to store and set ForceFeedback parameters for the variety of contexts in which the vehicle can trigger ForceFeedbacks */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rumble Info members used to store and set ForceFeedback parameters for the variety of contexts in which the vehicle can trigger ForceFeedbacks" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SpeedRumbleInfo = { "SpeedRumbleInfo", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, SpeedRumbleInfo), Z_Construct_UScriptStruct_FCitySampleRumbleInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SpeedRumbleInfo_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SpeedRumbleInfo_MetaData) }; // 1559263547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_CorneringRumbleInfo_MetaData[] = {
		{ "Category", "Rumble|Cornering" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_CorneringRumbleInfo = { "CorneringRumbleInfo", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, CorneringRumbleInfo), Z_Construct_UScriptStruct_FCitySampleRumbleInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_CorneringRumbleInfo_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_CorneringRumbleInfo_MetaData) }; // 1559263547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LeftSurfaceRumbleInfo_MetaData[] = {
		{ "Category", "Rumble|Surfaces" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LeftSurfaceRumbleInfo = { "LeftSurfaceRumbleInfo", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, LeftSurfaceRumbleInfo), Z_Construct_UScriptStruct_FCitySampleRumbleInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LeftSurfaceRumbleInfo_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LeftSurfaceRumbleInfo_MetaData) }; // 1559263547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_RightSurfaceRumbleInfo_MetaData[] = {
		{ "Category", "Rumble|Surfaces" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_RightSurfaceRumbleInfo = { "RightSurfaceRumbleInfo", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, RightSurfaceRumbleInfo), Z_Construct_UScriptStruct_FCitySampleRumbleInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_RightSurfaceRumbleInfo_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_RightSurfaceRumbleInfo_MetaData) }; // 1559263547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LeftSuspensionRumbleInfo_MetaData[] = {
		{ "Category", "Rumble|Suspension" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LeftSuspensionRumbleInfo = { "LeftSuspensionRumbleInfo", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, LeftSuspensionRumbleInfo), Z_Construct_UScriptStruct_FCitySampleRumbleInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LeftSuspensionRumbleInfo_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LeftSuspensionRumbleInfo_MetaData) }; // 1559263547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_RightSuspensionRumbleInfo_MetaData[] = {
		{ "Category", "Rumble|Suspension" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_RightSuspensionRumbleInfo = { "RightSuspensionRumbleInfo", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, RightSuspensionRumbleInfo), Z_Construct_UScriptStruct_FCitySampleRumbleInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_RightSuspensionRumbleInfo_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_RightSuspensionRumbleInfo_MetaData) }; // 1559263547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LeftBumpRumbleInfo_MetaData[] = {
		{ "Category", "Rumble|Bumps" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LeftBumpRumbleInfo = { "LeftBumpRumbleInfo", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, LeftBumpRumbleInfo), Z_Construct_UScriptStruct_FCitySampleRumbleInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LeftBumpRumbleInfo_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LeftBumpRumbleInfo_MetaData) }; // 1559263547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_RightBumpRumbleInfo_MetaData[] = {
		{ "Category", "Rumble|Bumps" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_RightBumpRumbleInfo = { "RightBumpRumbleInfo", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, RightBumpRumbleInfo), Z_Construct_UScriptStruct_FCitySampleRumbleInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_RightBumpRumbleInfo_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_RightBumpRumbleInfo_MetaData) }; // 1559263547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_CollisionRumbleInfo_MetaData[] = {
		{ "Category", "Rumble|Collisions" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_CollisionRumbleInfo = { "CollisionRumbleInfo", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, CollisionRumbleInfo), Z_Construct_UScriptStruct_FCitySampleRumbleInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_CollisionRumbleInfo_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_CollisionRumbleInfo_MetaData) }; // 1559263547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bAdjustAngularDampingToSteering_MetaData[] = {
		{ "Category", "Angular Damping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ties Angular Damping Strength to current steering value. The less steering applied, the more angular damping is applied - which helps keep the car straight */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ties Angular Damping Strength to current steering value. The less steering applied, the more angular damping is applied - which helps keep the car straight" },
#endif
	};
#endif
	void Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bAdjustAngularDampingToSteering_SetBit(void* Obj)
	{
		((ACitySampleVehicleBase*)Obj)->bAdjustAngularDampingToSteering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bAdjustAngularDampingToSteering = { "bAdjustAngularDampingToSteering", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACitySampleVehicleBase), &Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bAdjustAngularDampingToSteering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bAdjustAngularDampingToSteering_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bAdjustAngularDampingToSteering_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringToAngularDamping_MetaData[] = {
		{ "Category", "Angular Damping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Curve that applies angular damping based on your current steering magnitude. X = Steering, Y = Damping to apply. Damping scales with the \"Angular Damping Scale\" property */" },
#endif
		{ "EditCondition", "bAdjustAngularDampingToSteering" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Curve that applies angular damping based on your current steering magnitude. X = Steering, Y = Damping to apply. Damping scales with the \"Angular Damping Scale\" property" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringToAngularDamping = { "SteeringToAngularDamping", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, SteeringToAngularDamping), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringToAngularDamping_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringToAngularDamping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_AngularDampingScale_MetaData[] = {
		{ "Category", "Angular Damping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Final scale value applied to the result when calculating angular damping in relation to steering */" },
#endif
		{ "EditCondition", "bAdjustAngularDampingToSteering" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Final scale value applied to the result when calculating angular damping in relation to steering" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_AngularDampingScale = { "AngularDampingScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, AngularDampingScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_AngularDampingScale_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_AngularDampingScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bUseCenterOfMassAdjustments_MetaData[] = {
		{ "Category", "Center of Mass Offset Adjustments" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable to use Center of Mass adjustments at run time. Center of mass settings can be adjusted to alter driving feel */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable to use Center of Mass adjustments at run time. Center of mass settings can be adjusted to alter driving feel" },
#endif
	};
#endif
	void Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bUseCenterOfMassAdjustments_SetBit(void* Obj)
	{
		((ACitySampleVehicleBase*)Obj)->bUseCenterOfMassAdjustments = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bUseCenterOfMassAdjustments = { "bUseCenterOfMassAdjustments", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACitySampleVehicleBase), &Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bUseCenterOfMassAdjustments_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bUseCenterOfMassAdjustments_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bUseCenterOfMassAdjustments_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeForwardCOMOffset_MetaData[] = {
		{ "Category", "Center of Mass Offset Adjustments|Forward Offsets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** What Forward offset to apply to the center of mass when using the handbrake.  This is additive with any center of mass adjustments calculated from the \"SteeringToForwardCOMOffset\" curve */" },
#endif
		{ "EditCondition", "bUseCenterOfMassAdjustments" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What Forward offset to apply to the center of mass when using the handbrake.  This is additive with any center of mass adjustments calculated from the \"SteeringToForwardCOMOffset\" curve" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeForwardCOMOffset = { "HandbrakeForwardCOMOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, HandbrakeForwardCOMOffset), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeForwardCOMOffset_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeForwardCOMOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeForwardCOMOffsetScale_MetaData[] = {
		{ "Category", "Center of Mass Offset Adjustments|Forward Offsets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Scale that multiplies the offset set in the \"HandbrakeForwardCOMOffset curve */" },
#endif
		{ "EditCondition", "bUseCenterOfMassAdjustments" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale that multiplies the offset set in the \"HandbrakeForwardCOMOffset curve" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeForwardCOMOffsetScale = { "HandbrakeForwardCOMOffsetScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, HandbrakeForwardCOMOffsetScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeForwardCOMOffsetScale_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeForwardCOMOffsetScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeForwardCOMInterpRiseAndFallSpeeds_MetaData[] = {
		{ "Category", "Center of Mass Offset Adjustments|Forward Offsets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Overrides Interpolation speeds for the \"HandbrakeForwardCOMOffsetInterpolator\". X = Rise Speed (Handbrake Held), Y = Fall Speed. (Handbrake Released) */" },
#endif
		{ "EditCondition", "bUseCenterOfMassAdjustments" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overrides Interpolation speeds for the \"HandbrakeForwardCOMOffsetInterpolator\". X = Rise Speed (Handbrake Held), Y = Fall Speed. (Handbrake Released)" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeForwardCOMInterpRiseAndFallSpeeds = { "HandbrakeForwardCOMInterpRiseAndFallSpeeds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, HandbrakeForwardCOMInterpRiseAndFallSpeeds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeForwardCOMInterpRiseAndFallSpeeds_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeForwardCOMInterpRiseAndFallSpeeds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringToForwardCOMOffset_MetaData[] = {
		{ "Category", "Center of Mass Offset Adjustments|Forward Offsets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Curve that applies a forward offset to the COM of the car based on how hard the car is currently steering (absolute value of whichever direction you are steering) */" },
#endif
		{ "EditCondition", "bUseCenterOfMassAdjustments" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Curve that applies a forward offset to the COM of the car based on how hard the car is currently steering (absolute value of whichever direction you are steering)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringToForwardCOMOffset = { "SteeringToForwardCOMOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, SteeringToForwardCOMOffset), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringToForwardCOMOffset_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringToForwardCOMOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_ForwardCOMOffsetScale_MetaData[] = {
		{ "Category", "Center of Mass Offset Adjustments|Forward Offsets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Scale that multiplies the offset set in the \"SteeringToFowardCOMOffset curve */" },
#endif
		{ "EditCondition", "bUseCenterOfMassAdjustments" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale that multiplies the offset set in the \"SteeringToFowardCOMOffset curve" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_ForwardCOMOffsetScale = { "ForwardCOMOffsetScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, ForwardCOMOffsetScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_ForwardCOMOffsetScale_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_ForwardCOMOffsetScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_ForwardCOMInterpRiseAndFallSpeeds_MetaData[] = {
		{ "Category", "Center of Mass Offset Adjustments|Forward Offsets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Overrides Interpolation speeds for the \"ForwardCOMOffsetInterpolator\". X = Rise Speed (change caused by stick input), Y = Fall Speed. (change caused by lack of stick input) */" },
#endif
		{ "EditCondition", "bUseCenterOfMassAdjustments" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overrides Interpolation speeds for the \"ForwardCOMOffsetInterpolator\". X = Rise Speed (change caused by stick input), Y = Fall Speed. (change caused by lack of stick input)" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_ForwardCOMInterpRiseAndFallSpeeds = { "ForwardCOMInterpRiseAndFallSpeeds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, ForwardCOMInterpRiseAndFallSpeeds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_ForwardCOMInterpRiseAndFallSpeeds_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_ForwardCOMInterpRiseAndFallSpeeds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_MinVelocityToDisableForwardCOMOffset_MetaData[] = {
		{ "Category", "Center of Mass Offset Adjustments|Forward Offsets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Any vehicle speeds less than this velocity will disable the Forward COM offsets. Used to disable ForwardCOM offsets when reversing, as it can cause control issues */" },
#endif
		{ "EditCondition", "bUseCenterOfMassAdjustments" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Any vehicle speeds less than this velocity will disable the Forward COM offsets. Used to disable ForwardCOM offsets when reversing, as it can cause control issues" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_MinVelocityToDisableForwardCOMOffset = { "MinVelocityToDisableForwardCOMOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, MinVelocityToDisableForwardCOMOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_MinVelocityToDisableForwardCOMOffset_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_MinVelocityToDisableForwardCOMOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringToHorizontalCOMOffset_MetaData[] = {
		{ "Category", "Center of Mass Offset Adjustments|Horizontal Offsets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Curve that applies a horizontal offset to the COM of the car based on how hard the car is currently steering. The output will automatically flip depending on which direction you are steering */" },
#endif
		{ "EditCondition", "bUseCenterOfMassAdjustments" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Curve that applies a horizontal offset to the COM of the car based on how hard the car is currently steering. The output will automatically flip depending on which direction you are steering" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringToHorizontalCOMOffset = { "SteeringToHorizontalCOMOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, SteeringToHorizontalCOMOffset), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringToHorizontalCOMOffset_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringToHorizontalCOMOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HorizontalCOMOffsetScale_MetaData[] = {
		{ "Category", "Center of Mass Offset Adjustments|Horizontal Offsets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Scale that multiplies the offset set in the \"SteeringToHorizontalCOMOffset\" curve */" },
#endif
		{ "EditCondition", "bUseCenterOfMassAdjustments" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale that multiplies the offset set in the \"SteeringToHorizontalCOMOffset\" curve" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HorizontalCOMOffsetScale = { "HorizontalCOMOffsetScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, HorizontalCOMOffsetScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HorizontalCOMOffsetScale_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HorizontalCOMOffsetScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HorizontalCOMInterpRiseAndFallSpeeds_MetaData[] = {
		{ "Category", "Center of Mass Offset Adjustments|Horizontal Offsets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Overrides Interpolation speeds for the \"HorizontalCOMOffsetInterpolator\". X = Rise Speed (change caused by stick input), Y = Fall Speed. (change caused by lack of stick input)*/" },
#endif
		{ "EditCondition", "bUseCenterOfMassAdjustments" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overrides Interpolation speeds for the \"HorizontalCOMOffsetInterpolator\". X = Rise Speed (change caused by stick input), Y = Fall Speed. (change caused by lack of stick input)" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HorizontalCOMInterpRiseAndFallSpeeds = { "HorizontalCOMInterpRiseAndFallSpeeds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, HorizontalCOMInterpRiseAndFallSpeeds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HorizontalCOMInterpRiseAndFallSpeeds_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HorizontalCOMInterpRiseAndFallSpeeds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeVerticalCOMOffset_MetaData[] = {
		{ "Category", "Center of Mass Offset Adjustments|Vertical Offsets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** What Vertical offset to apply to the center of mass when using the handbrake.  This is additive with any center of mass adjustments calculated from the \"SteeringToVerticalCOMOffset\" curve */" },
#endif
		{ "EditCondition", "bUseCenterOfMassAdjustments" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What Vertical offset to apply to the center of mass when using the handbrake.  This is additive with any center of mass adjustments calculated from the \"SteeringToVerticalCOMOffset\" curve" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeVerticalCOMOffset = { "HandbrakeVerticalCOMOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, HandbrakeVerticalCOMOffset), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeVerticalCOMOffset_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeVerticalCOMOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeVerticalCOMOffsetScale_MetaData[] = {
		{ "Category", "Center of Mass Offset Adjustments|Vertical Offsets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Scale that multiplies the offset set in the \"HandbrakeVerticalCOMOffset curve */" },
#endif
		{ "EditCondition", "bUseCenterOfMassAdjustments" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale that multiplies the offset set in the \"HandbrakeVerticalCOMOffset curve" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeVerticalCOMOffsetScale = { "HandbrakeVerticalCOMOffsetScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, HandbrakeVerticalCOMOffsetScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeVerticalCOMOffsetScale_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeVerticalCOMOffsetScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeVerticalCOMInterpRiseAndFallSpeeds_MetaData[] = {
		{ "Category", "Center of Mass Offset Adjustments|Vertical Offsets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Overrides Interpolation speeds for the \"HandbrakeVerticalCOMOffsetInterpolator\". X = Rise Speed (Handbrake Held), Y = Fall Speed. (Handbrake Released)*/" },
#endif
		{ "EditCondition", "bUseCenterOfMassAdjustments" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overrides Interpolation speeds for the \"HandbrakeVerticalCOMOffsetInterpolator\". X = Rise Speed (Handbrake Held), Y = Fall Speed. (Handbrake Released)" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeVerticalCOMInterpRiseAndFallSpeeds = { "HandbrakeVerticalCOMInterpRiseAndFallSpeeds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, HandbrakeVerticalCOMInterpRiseAndFallSpeeds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeVerticalCOMInterpRiseAndFallSpeeds_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeVerticalCOMInterpRiseAndFallSpeeds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringToVerticalCOMOffset_MetaData[] = {
		{ "Category", "Center of Mass Offset Adjustments|Vertical Offsets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Curve that applies a vertical offset to the COM of the car based on how hard the car is currently steering (absolute value of whichever direction you are steering) */" },
#endif
		{ "EditCondition", "bUseCenterOfMassAdjustments" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Curve that applies a vertical offset to the COM of the car based on how hard the car is currently steering (absolute value of whichever direction you are steering)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringToVerticalCOMOffset = { "SteeringToVerticalCOMOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, SteeringToVerticalCOMOffset), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringToVerticalCOMOffset_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringToVerticalCOMOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_VerticalCOMOffsetScale_MetaData[] = {
		{ "Category", "Center of Mass Offset Adjustments|Vertical Offsets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Scale that multiplies the offset set in the \"SteeringToVerticalCOMOffset curve */" },
#endif
		{ "EditCondition", "bUseCenterOfMassAdjustments" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale that multiplies the offset set in the \"SteeringToVerticalCOMOffset curve" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_VerticalCOMOffsetScale = { "VerticalCOMOffsetScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, VerticalCOMOffsetScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_VerticalCOMOffsetScale_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_VerticalCOMOffsetScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_VerticalCOMInterpRiseAndFallSpeeds_MetaData[] = {
		{ "Category", "Center of Mass Offset Adjustments|Vertical Offsets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Overrides Interpolation speeds for the \"ForwardCOMOffsetInterpolator\". X = Rise Speed (change caused by stick input), Y = Fall Speed. (change caused by lack of stick input)*/" },
#endif
		{ "EditCondition", "bUseCenterOfMassAdjustments" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overrides Interpolation speeds for the \"ForwardCOMOffsetInterpolator\". X = Rise Speed (change caused by stick input), Y = Fall Speed. (change caused by lack of stick input)" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_VerticalCOMInterpRiseAndFallSpeeds = { "VerticalCOMInterpRiseAndFallSpeeds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, VerticalCOMInterpRiseAndFallSpeeds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_VerticalCOMInterpRiseAndFallSpeeds_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_VerticalCOMInterpRiseAndFallSpeeds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bUseWheelFrictionMultiplierAdjustments_MetaData[] = {
		{ "Category", "Wheel Friction Adjustments" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable the use of Wheel Friction adjustments at run time*/" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable the use of Wheel Friction adjustments at run time" },
#endif
	};
#endif
	void Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bUseWheelFrictionMultiplierAdjustments_SetBit(void* Obj)
	{
		((ACitySampleVehicleBase*)Obj)->bUseWheelFrictionMultiplierAdjustments = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bUseWheelFrictionMultiplierAdjustments = { "bUseWheelFrictionMultiplierAdjustments", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACitySampleVehicleBase), &Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bUseWheelFrictionMultiplierAdjustments_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bUseWheelFrictionMultiplierAdjustments_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bUseWheelFrictionMultiplierAdjustments_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringToFrontWheelFrictionMultiplierAdjustment_MetaData[] = {
		{ "Category", "Wheel Friction Adjustments" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Curve that adjusts the current front wheel friction multiplier depending on the magnitude of the vehicle's current steering value. This is additive to whatever the wheel's default friction multiplier is.*/" },
#endif
		{ "EditCondition", "bUseWheelFrictionMultiplierAdjustments" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Curve that adjusts the current front wheel friction multiplier depending on the magnitude of the vehicle's current steering value. This is additive to whatever the wheel's default friction multiplier is." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringToFrontWheelFrictionMultiplierAdjustment = { "SteeringToFrontWheelFrictionMultiplierAdjustment", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, SteeringToFrontWheelFrictionMultiplierAdjustment), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringToFrontWheelFrictionMultiplierAdjustment_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringToFrontWheelFrictionMultiplierAdjustment_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_FrontWheelFrictionMultiplierAdjustmentScale_MetaData[] = {
		{ "Category", "Wheel Friction Adjustments" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Scale that multiplies the friction value set in the \"SteeringToFrontWheelFriction\" curve */" },
#endif
		{ "EditCondition", "bUseWheelFrictionMultiplierAdjustments" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale that multiplies the friction value set in the \"SteeringToFrontWheelFriction\" curve" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_FrontWheelFrictionMultiplierAdjustmentScale = { "FrontWheelFrictionMultiplierAdjustmentScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, FrontWheelFrictionMultiplierAdjustmentScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_FrontWheelFrictionMultiplierAdjustmentScale_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_FrontWheelFrictionMultiplierAdjustmentScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bUseBurnoutAdjustments_MetaData[] = {
		{ "Category", "Burnout Adjustments" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable to use Burnout adjustments at run time */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable to use Burnout adjustments at run time" },
#endif
	};
#endif
	void Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bUseBurnoutAdjustments_SetBit(void* Obj)
	{
		((ACitySampleVehicleBase*)Obj)->bUseBurnoutAdjustments = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bUseBurnoutAdjustments = { "bUseBurnoutAdjustments", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACitySampleVehicleBase), &Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bUseBurnoutAdjustments_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bUseBurnoutAdjustments_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bUseBurnoutAdjustments_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BurnoutFrictionMultiplier_MetaData[] = {
		{ "Category", "Burnout Adjustments" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Wheel-spin/burnout behavior - reduce friction during burnout */" },
#endif
		{ "EditCondition", "bUseBurnoutAdjustments" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wheel-spin/burnout behavior - reduce friction during burnout" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BurnoutFrictionMultiplier = { "BurnoutFrictionMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, BurnoutFrictionMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BurnoutFrictionMultiplier_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BurnoutFrictionMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BurnoutLateralSlipMultiplier_MetaData[] = {
		{ "Category", "Burnout Adjustments" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Wheel-spin/burnout behavior - reduce lateral forces during burnout */" },
#endif
		{ "EditCondition", "bUseBurnoutAdjustments" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wheel-spin/burnout behavior - reduce lateral forces during burnout" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BurnoutLateralSlipMultiplier = { "BurnoutLateralSlipMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, BurnoutLateralSlipMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BurnoutLateralSlipMultiplier_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BurnoutLateralSlipMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BurnoutMinSpeedThreshold_MetaData[] = {
		{ "Category", "Burnout Adjustments" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Wheel-spin/burnout behavior - Min MPH for burnout to enable */" },
#endif
		{ "EditCondition", "bUseBurnoutAdjustments" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wheel-spin/burnout behavior - Min MPH for burnout to enable" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BurnoutMinSpeedThreshold = { "BurnoutMinSpeedThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, BurnoutMinSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BurnoutMinSpeedThreshold_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BurnoutMinSpeedThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BurnoutMaxSpeedThreshold_MetaData[] = {
		{ "Category", "Burnout Adjustments" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Wheel-spin/burnout behavior - Max MPH for burnout effect */" },
#endif
		{ "EditCondition", "bUseBurnoutAdjustments" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wheel-spin/burnout behavior - Max MPH for burnout effect" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BurnoutMaxSpeedThreshold = { "BurnoutMaxSpeedThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, BurnoutMaxSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BurnoutMaxSpeedThreshold_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BurnoutMaxSpeedThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_RearWheelSlipAngleDriftingMinThreshold_MetaData[] = {
		{ "Category", "Drifting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimum Slip Angle (in degrees) that must be surpassed by the rear wheels before the vehicle is considered to be drifting */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum Slip Angle (in degrees) that must be surpassed by the rear wheels before the vehicle is considered to be drifting" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_RearWheelSlipAngleDriftingMinThreshold = { "RearWheelSlipAngleDriftingMinThreshold", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, RearWheelSlipAngleDriftingMinThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_RearWheelSlipAngleDriftingMinThreshold_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_RearWheelSlipAngleDriftingMinThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_DriftingSpeedMinThreshold_MetaData[] = {
		{ "Category", "Drifting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimum velocity that must be surpassed by the vehicle before it can be considered to be drifting */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum velocity that must be surpassed by the vehicle before it can be considered to be drifting" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_DriftingSpeedMinThreshold = { "DriftingSpeedMinThreshold", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, DriftingSpeedMinThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_DriftingSpeedMinThreshold_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_DriftingSpeedMinThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bOverrideCameraToPivotOffset_MetaData[] = {
		{ "Category", "Camera Mode Overrides" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Determines whether the CameraToPivot offset should be overridden when this vehicle is set as a camera's view target */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether the CameraToPivot offset should be overridden when this vehicle is set as a camera's view target" },
#endif
	};
#endif
	void Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bOverrideCameraToPivotOffset_SetBit(void* Obj)
	{
		((ACitySampleVehicleBase*)Obj)->bOverrideCameraToPivotOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bOverrideCameraToPivotOffset = { "bOverrideCameraToPivotOffset", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACitySampleVehicleBase), &Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bOverrideCameraToPivotOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bOverrideCameraToPivotOffset_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bOverrideCameraToPivotOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_CameraToPivotOffsetOverride_MetaData[] = {
		{ "Category", "Camera Mode Overrides" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera to Pivot Offset used in the camera mode when bOverrideCameraToPivotOffset is true, value is additive to what is set in the camera mode */" },
#endif
		{ "EditCondition", "bOverrideCameraToPivotOffset" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera to Pivot Offset used in the camera mode when bOverrideCameraToPivotOffset is true, value is additive to what is set in the camera mode" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_CameraToPivotOffsetOverride = { "CameraToPivotOffsetOverride", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, CameraToPivotOffsetOverride), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_CameraToPivotOffsetOverride_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_CameraToPivotOffsetOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bOverrideLookAtPointOffset_MetaData[] = {
		{ "Category", "Camera Mode Overrides" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Determines whether the Camera LookAtPoint offset should be overridden when this vehicle is set as a camera's view target */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether the Camera LookAtPoint offset should be overridden when this vehicle is set as a camera's view target" },
#endif
	};
#endif
	void Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bOverrideLookAtPointOffset_SetBit(void* Obj)
	{
		((ACitySampleVehicleBase*)Obj)->bOverrideLookAtPointOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bOverrideLookAtPointOffset = { "bOverrideLookAtPointOffset", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACitySampleVehicleBase), &Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bOverrideLookAtPointOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bOverrideLookAtPointOffset_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bOverrideLookAtPointOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LookAtPointOffsetOverride_MetaData[] = {
		{ "Category", "Camera Mode Overrides" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera LookAtPoint Offset used in the camera mode when bOverrideLookAtPointOffset is true, , value is additive to what is set in the camera mode */" },
#endif
		{ "EditCondition", "bOverrideLookAtPointOffset" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera LookAtPoint Offset used in the camera mode when bOverrideLookAtPointOffset is true, , value is additive to what is set in the camera mode" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LookAtPointOffsetOverride = { "LookAtPointOffsetOverride", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, LookAtPointOffsetOverride), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LookAtPointOffsetOverride_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LookAtPointOffsetOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_DrivingState_MetaData[] = {
		{ "Category", "Driving" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stores any relevant driving information about the current vehicle */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stores any relevant driving information about the current vehicle" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_DrivingState = { "DrivingState", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, DrivingState), Z_Construct_UScriptStruct_FCitySampleDrivingState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_DrivingState_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_DrivingState_MetaData) }; // 464802188
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping and Input Actions that driveable vehicles depend on */" },
#endif
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping and Input Actions that driveable vehicles depend on" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_InputMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_ThrottleAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_ThrottleAction = { "ThrottleAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, ThrottleAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_ThrottleAction_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_ThrottleAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BrakeAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BrakeAction = { "BrakeAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, BrakeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BrakeAction_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BrakeAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringAction = { "SteeringAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, SteeringAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringAction_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeAction = { "HandbrakeAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, HandbrakeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeAction_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LookControlsInputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LookControlsInputMappingContext = { "LookControlsInputMappingContext", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, LookControlsInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LookControlsInputMappingContext_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LookControlsInputMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LookDeltaAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LookDeltaAction = { "LookDeltaAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, LookDeltaAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LookDeltaAction_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LookDeltaAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_InputMappingPriority_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_InputMappingPriority = { "InputMappingPriority", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleVehicleBase, InputMappingPriority), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_InputMappingPriority_MetaData), Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_InputMappingPriority_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACitySampleVehicleBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_TransformsOverTime_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_TransformsOverTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnPlayerEnterVehicle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnPlayerExitVehicle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnAccelerationStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnAccelerationStop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnReverseStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnReverseStop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnAirborneStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnAirborneStop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnDriftStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnDriftStop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnBrakeStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnBrakeStop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnHandbrakeStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnHandbrakeStop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnWheelBump,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnDoorOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnDoorClose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnIgnitionStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnVehicleBackfire,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnSleepStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_OnSleepStop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BaseTurnRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BaseLookUpRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SharpSteeringThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_InputActionDescriptions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_InputActionDescriptions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_InputActionDescriptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_InputKeyDescriptionOverrides_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_InputKeyDescriptionOverrides_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_InputKeyDescriptionOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_PlayerDrivingDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bHideDrivingUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_TeleportOffsetStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_FlipVehicleMaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_CCDSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SeatSockets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_Occupants,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BlurAngleVelocityMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BlurAngleMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_CachedMotionBlurWheelMIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_CachedMotionBlurWheelMIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_NormalizedSuspensionDiffThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SpeedRumbleInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_CorneringRumbleInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LeftSurfaceRumbleInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_RightSurfaceRumbleInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LeftSuspensionRumbleInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_RightSuspensionRumbleInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LeftBumpRumbleInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_RightBumpRumbleInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_CollisionRumbleInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bAdjustAngularDampingToSteering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringToAngularDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_AngularDampingScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bUseCenterOfMassAdjustments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeForwardCOMOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeForwardCOMOffsetScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeForwardCOMInterpRiseAndFallSpeeds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringToForwardCOMOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_ForwardCOMOffsetScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_ForwardCOMInterpRiseAndFallSpeeds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_MinVelocityToDisableForwardCOMOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringToHorizontalCOMOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HorizontalCOMOffsetScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HorizontalCOMInterpRiseAndFallSpeeds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeVerticalCOMOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeVerticalCOMOffsetScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeVerticalCOMInterpRiseAndFallSpeeds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringToVerticalCOMOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_VerticalCOMOffsetScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_VerticalCOMInterpRiseAndFallSpeeds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bUseWheelFrictionMultiplierAdjustments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringToFrontWheelFrictionMultiplierAdjustment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_FrontWheelFrictionMultiplierAdjustmentScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bUseBurnoutAdjustments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BurnoutFrictionMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BurnoutLateralSlipMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BurnoutMinSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BurnoutMaxSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_RearWheelSlipAngleDriftingMinThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_DriftingSpeedMinThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bOverrideCameraToPivotOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_CameraToPivotOffsetOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_bOverrideLookAtPointOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LookAtPointOffsetOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_DrivingState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_InputMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_ThrottleAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_BrakeAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_SteeringAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_HandbrakeAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LookControlsInputMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_LookDeltaAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleVehicleBase_Statics::NewProp_InputMappingPriority,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCitySampleTraversalInterface_NoRegister, (int32)VTABLE_OFFSET(ACitySampleVehicleBase, ICitySampleTraversalInterface), false },  // 4006226774
			{ Z_Construct_UClass_UCitySampleUIComponentInterface_NoRegister, (int32)VTABLE_OFFSET(ACitySampleVehicleBase, ICitySampleUIComponentInterface), false },  // 3141035592
			{ Z_Construct_UClass_UCitySampleControlsOverlayInterface_NoRegister, (int32)VTABLE_OFFSET(ACitySampleVehicleBase, ICitySampleControlsOverlayInterface), false },  // 598373316
			{ Z_Construct_UClass_UCitySampleInputInterface_NoRegister, (int32)VTABLE_OFFSET(ACitySampleVehicleBase, ICitySampleInputInterface), false },  // 3904874896
			{ Z_Construct_UClass_UMassActorPoolableInterface_NoRegister, (int32)VTABLE_OFFSET(ACitySampleVehicleBase, IMassActorPoolableInterface), false },  // 3384984153
			{ Z_Construct_UClass_UMassTrafficVehicleControlInterface_NoRegister, (int32)VTABLE_OFFSET(ACitySampleVehicleBase, IMassTrafficVehicleControlInterface), false },  // 817040820
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACitySampleVehicleBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACitySampleVehicleBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACitySampleVehicleBase_Statics::ClassParams = {
		&ACitySampleVehicleBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACitySampleVehicleBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ACitySampleVehicleBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleVehicleBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACitySampleVehicleBase()
	{
		if (!Z_Registration_Info_UClass_ACitySampleVehicleBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACitySampleVehicleBase.OuterSingleton, Z_Construct_UClass_ACitySampleVehicleBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACitySampleVehicleBase.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<ACitySampleVehicleBase>()
	{
		return ACitySampleVehicleBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACitySampleVehicleBase);
	ACitySampleVehicleBase::~ACitySampleVehicleBase() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_Statics::EnumInfo[] = {
		{ ECitySampleVehicleSeat_StaticEnum, TEXT("ECitySampleVehicleSeat"), &Z_Registration_Info_UEnum_ECitySampleVehicleSeat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 637271019U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_Statics::ScriptStructInfo[] = {
		{ FTimestampedTransform::StaticStruct, Z_Construct_UScriptStruct_FTimestampedTransform_Statics::NewStructOps, TEXT("TimestampedTransform"), &Z_Registration_Info_UScriptStruct_TimestampedTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimestampedTransform), 964479146U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACitySampleVehicleBase, ACitySampleVehicleBase::StaticClass, TEXT("ACitySampleVehicleBase"), &Z_Registration_Info_UClass_ACitySampleVehicleBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACitySampleVehicleBase), 429083117U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_673050642(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleVehicleBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
