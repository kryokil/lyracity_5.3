// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Util/CitySampleTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleTypes() {}
// Cross Module References
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_EDeviceProfileOverrideMode();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_EPlayerTraversalState();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDeviceProfileOverrideMode;
	static UEnum* EDeviceProfileOverrideMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDeviceProfileOverrideMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDeviceProfileOverrideMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_EDeviceProfileOverrideMode, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("EDeviceProfileOverrideMode"));
		}
		return Z_Registration_Info_UEnum_EDeviceProfileOverrideMode.OuterSingleton;
	}
	template<> CITYSAMPLE_API UEnum* StaticEnum<EDeviceProfileOverrideMode>()
	{
		return EDeviceProfileOverrideMode_StaticEnum();
	}
	struct Z_Construct_UEnum_CitySample_EDeviceProfileOverrideMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CitySample_EDeviceProfileOverrideMode_Statics::Enumerators[] = {
		{ "EDeviceProfileOverrideMode::DroneMode", (int64)EDeviceProfileOverrideMode::DroneMode },
		{ "EDeviceProfileOverrideMode::DrivingMode", (int64)EDeviceProfileOverrideMode::DrivingMode },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CitySample_EDeviceProfileOverrideMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** For runtime switching of sub device profiles to handle large swaths of cvar changes */" },
#endif
		{ "DrivingMode.Name", "EDeviceProfileOverrideMode::DrivingMode" },
		{ "DroneMode.Name", "EDeviceProfileOverrideMode::DroneMode" },
		{ "ModuleRelativePath", "Public/Util/CitySampleTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For runtime switching of sub device profiles to handle large swaths of cvar changes" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_EDeviceProfileOverrideMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		"EDeviceProfileOverrideMode",
		"EDeviceProfileOverrideMode",
		Z_Construct_UEnum_CitySample_EDeviceProfileOverrideMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_EDeviceProfileOverrideMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_EDeviceProfileOverrideMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_EDeviceProfileOverrideMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CitySample_EDeviceProfileOverrideMode()
	{
		if (!Z_Registration_Info_UEnum_EDeviceProfileOverrideMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDeviceProfileOverrideMode.InnerSingleton, Z_Construct_UEnum_CitySample_EDeviceProfileOverrideMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDeviceProfileOverrideMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerTraversalState;
	static UEnum* EPlayerTraversalState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayerTraversalState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayerTraversalState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_EPlayerTraversalState, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("EPlayerTraversalState"));
		}
		return Z_Registration_Info_UEnum_EPlayerTraversalState.OuterSingleton;
	}
	template<> CITYSAMPLE_API UEnum* StaticEnum<EPlayerTraversalState>()
	{
		return EPlayerTraversalState_StaticEnum();
	}
	struct Z_Construct_UEnum_CitySample_EPlayerTraversalState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CitySample_EPlayerTraversalState_Statics::Enumerators[] = {
		{ "EPlayerTraversalState::OnFoot", (int64)EPlayerTraversalState::OnFoot },
		{ "EPlayerTraversalState::InVehicle", (int64)EPlayerTraversalState::InVehicle },
		{ "EPlayerTraversalState::Drone", (int64)EPlayerTraversalState::Drone },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CitySample_EPlayerTraversalState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Drone.Name", "EPlayerTraversalState::Drone" },
		{ "InVehicle.Name", "EPlayerTraversalState::InVehicle" },
		{ "ModuleRelativePath", "Public/Util/CitySampleTypes.h" },
		{ "OnFoot.Name", "EPlayerTraversalState::OnFoot" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_EPlayerTraversalState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		"EPlayerTraversalState",
		"EPlayerTraversalState",
		Z_Construct_UEnum_CitySample_EPlayerTraversalState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_EPlayerTraversalState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_EPlayerTraversalState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_EPlayerTraversalState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CitySample_EPlayerTraversalState()
	{
		if (!Z_Registration_Info_UEnum_EPlayerTraversalState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerTraversalState.InnerSingleton, Z_Construct_UEnum_CitySample_EPlayerTraversalState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayerTraversalState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleTypes_h_Statics::EnumInfo[] = {
		{ EDeviceProfileOverrideMode_StaticEnum, TEXT("EDeviceProfileOverrideMode"), &Z_Registration_Info_UEnum_EDeviceProfileOverrideMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1294590407U) },
		{ EPlayerTraversalState_StaticEnum, TEXT("EPlayerTraversalState"), &Z_Registration_Info_UEnum_EPlayerTraversalState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 556888820U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleTypes_h_279437836(TEXT("/Script/CitySample"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
