// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Vehicles/CitySampleDrivingState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleDrivingState() {}
// Cross Module References
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleDrivingState();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySampleDrivingState;
class UScriptStruct* FCitySampleDrivingState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleDrivingState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySampleDrivingState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySampleDrivingState, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CitySampleDrivingState"));
	}
	return Z_Registration_Info_UScriptStruct_CitySampleDrivingState.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySampleDrivingState>()
{
	return FCitySampleDrivingState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Throttle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Throttle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Brake_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Brake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Steering_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Steering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHandbrakeOn_MetaData[];
#endif
		static void NewProp_bHandbrakeOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandbrakeOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RPM_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RPM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gear_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Gear;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutomatic_MetaData[];
#endif
		static void NewProp_bAutomatic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomatic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllWheelsOnGround_MetaData[];
#endif
		static void NewProp_bAllWheelsOnGround_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllWheelsOnGround;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNoWheelsOnGround_MetaData[];
#endif
		static void NewProp_bNoWheelsOnGround_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoWheelsOnGround;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleDrivingState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySampleDrivingState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_Throttle_MetaData[] = {
		{ "Category", "CitySampleDrivingState" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleDrivingState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_Throttle = { "Throttle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleDrivingState, Throttle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_Throttle_MetaData), Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_Throttle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_Brake_MetaData[] = {
		{ "Category", "CitySampleDrivingState" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleDrivingState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_Brake = { "Brake", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleDrivingState, Brake), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_Brake_MetaData), Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_Brake_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_Steering_MetaData[] = {
		{ "Category", "CitySampleDrivingState" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleDrivingState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_Steering = { "Steering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleDrivingState, Steering), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_Steering_MetaData), Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_Steering_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bHandbrakeOn_MetaData[] = {
		{ "Category", "CitySampleDrivingState" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleDrivingState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bHandbrakeOn_SetBit(void* Obj)
	{
		((FCitySampleDrivingState*)Obj)->bHandbrakeOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bHandbrakeOn = { "bHandbrakeOn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySampleDrivingState), &Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bHandbrakeOn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bHandbrakeOn_MetaData), Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bHandbrakeOn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_ForwardSpeed_MetaData[] = {
		{ "Category", "CitySampleDrivingState" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleDrivingState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_ForwardSpeed = { "ForwardSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleDrivingState, ForwardSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_ForwardSpeed_MetaData), Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_ForwardSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_RPM_MetaData[] = {
		{ "Category", "CitySampleDrivingState" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleDrivingState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_RPM = { "RPM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleDrivingState, RPM), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_RPM_MetaData), Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_RPM_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_Gear_MetaData[] = {
		{ "Category", "CitySampleDrivingState" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleDrivingState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_Gear = { "Gear", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleDrivingState, Gear), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_Gear_MetaData), Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_Gear_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bAutomatic_MetaData[] = {
		{ "Category", "CitySampleDrivingState" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleDrivingState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bAutomatic_SetBit(void* Obj)
	{
		((FCitySampleDrivingState*)Obj)->bAutomatic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bAutomatic = { "bAutomatic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySampleDrivingState), &Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bAutomatic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bAutomatic_MetaData), Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bAutomatic_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bAllWheelsOnGround_MetaData[] = {
		{ "Category", "CitySampleDrivingState" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleDrivingState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bAllWheelsOnGround_SetBit(void* Obj)
	{
		((FCitySampleDrivingState*)Obj)->bAllWheelsOnGround = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bAllWheelsOnGround = { "bAllWheelsOnGround", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySampleDrivingState), &Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bAllWheelsOnGround_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bAllWheelsOnGround_MetaData), Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bAllWheelsOnGround_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bNoWheelsOnGround_MetaData[] = {
		{ "Category", "CitySampleDrivingState" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleDrivingState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bNoWheelsOnGround_SetBit(void* Obj)
	{
		((FCitySampleDrivingState*)Obj)->bNoWheelsOnGround = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bNoWheelsOnGround = { "bNoWheelsOnGround", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySampleDrivingState), &Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bNoWheelsOnGround_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bNoWheelsOnGround_MetaData), Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bNoWheelsOnGround_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_Throttle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_Brake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_Steering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bHandbrakeOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_ForwardSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_RPM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_Gear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bAutomatic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bAllWheelsOnGround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewProp_bNoWheelsOnGround,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"CitySampleDrivingState",
		Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::PropPointers),
		sizeof(FCitySampleDrivingState),
		alignof(FCitySampleDrivingState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCitySampleDrivingState()
	{
		if (!Z_Registration_Info_UScriptStruct_CitySampleDrivingState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySampleDrivingState.InnerSingleton, Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CitySampleDrivingState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleDrivingState_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleDrivingState_h_Statics::ScriptStructInfo[] = {
		{ FCitySampleDrivingState::StaticStruct, Z_Construct_UScriptStruct_FCitySampleDrivingState_Statics::NewStructOps, TEXT("CitySampleDrivingState"), &Z_Registration_Info_UScriptStruct_CitySampleDrivingState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySampleDrivingState), 464802188U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleDrivingState_h_598543892(TEXT("/Script/CitySample"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleDrivingState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleDrivingState_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
