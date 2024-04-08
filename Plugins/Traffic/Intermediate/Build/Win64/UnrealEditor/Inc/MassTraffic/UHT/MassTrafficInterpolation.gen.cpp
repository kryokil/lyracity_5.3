// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficInterpolation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficInterpolation() {}
// Cross Module References
	MASSTRAFFIC_API UEnum* Z_Construct_UEnum_MassTraffic_ETrafficVehicleMovementInterpolationMethod();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETrafficVehicleMovementInterpolationMethod;
	static UEnum* ETrafficVehicleMovementInterpolationMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETrafficVehicleMovementInterpolationMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETrafficVehicleMovementInterpolationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassTraffic_ETrafficVehicleMovementInterpolationMethod, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("ETrafficVehicleMovementInterpolationMethod"));
		}
		return Z_Registration_Info_UEnum_ETrafficVehicleMovementInterpolationMethod.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UEnum* StaticEnum<ETrafficVehicleMovementInterpolationMethod>()
	{
		return ETrafficVehicleMovementInterpolationMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_MassTraffic_ETrafficVehicleMovementInterpolationMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MassTraffic_ETrafficVehicleMovementInterpolationMethod_Statics::Enumerators[] = {
		{ "ETrafficVehicleMovementInterpolationMethod::Linear", (int64)ETrafficVehicleMovementInterpolationMethod::Linear },
		{ "ETrafficVehicleMovementInterpolationMethod::CubicBezier", (int64)ETrafficVehicleMovementInterpolationMethod::CubicBezier },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MassTraffic_ETrafficVehicleMovementInterpolationMethod_Statics::Enum_MetaDataParams[] = {
		{ "CubicBezier.Name", "ETrafficVehicleMovementInterpolationMethod::CubicBezier" },
		{ "Linear.Name", "ETrafficVehicleMovementInterpolationMethod::Linear" },
		{ "ModuleRelativePath", "Public/MassTrafficInterpolation.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassTraffic_ETrafficVehicleMovementInterpolationMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MassTraffic,
		nullptr,
		"ETrafficVehicleMovementInterpolationMethod",
		"ETrafficVehicleMovementInterpolationMethod",
		Z_Construct_UEnum_MassTraffic_ETrafficVehicleMovementInterpolationMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_ETrafficVehicleMovementInterpolationMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_ETrafficVehicleMovementInterpolationMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassTraffic_ETrafficVehicleMovementInterpolationMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MassTraffic_ETrafficVehicleMovementInterpolationMethod()
	{
		if (!Z_Registration_Info_UEnum_ETrafficVehicleMovementInterpolationMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETrafficVehicleMovementInterpolationMethod.InnerSingleton, Z_Construct_UEnum_MassTraffic_ETrafficVehicleMovementInterpolationMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETrafficVehicleMovementInterpolationMethod.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInterpolation_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInterpolation_h_Statics::EnumInfo[] = {
		{ ETrafficVehicleMovementInterpolationMethod_StaticEnum, TEXT("ETrafficVehicleMovementInterpolationMethod"), &Z_Registration_Info_UEnum_ETrafficVehicleMovementInterpolationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3522622265U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInterpolation_h_1842679045(TEXT("/Script/MassTraffic"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInterpolation_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInterpolation_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
