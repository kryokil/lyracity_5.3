// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficDamage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficDamage() {}
// Cross Module References
	MASSTRAFFIC_API UEnum* Z_Construct_UEnum_MassTraffic_EMassTrafficVehicleDamageState();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassTrafficVehicleDamageState;
	static UEnum* EMassTrafficVehicleDamageState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMassTrafficVehicleDamageState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMassTrafficVehicleDamageState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassTraffic_EMassTrafficVehicleDamageState, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("EMassTrafficVehicleDamageState"));
		}
		return Z_Registration_Info_UEnum_EMassTrafficVehicleDamageState.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UEnum* StaticEnum<EMassTrafficVehicleDamageState>()
	{
		return EMassTrafficVehicleDamageState_StaticEnum();
	}
	struct Z_Construct_UEnum_MassTraffic_EMassTrafficVehicleDamageState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MassTraffic_EMassTrafficVehicleDamageState_Statics::Enumerators[] = {
		{ "EMassTrafficVehicleDamageState::None", (int64)EMassTrafficVehicleDamageState::None },
		{ "EMassTrafficVehicleDamageState::Damaged", (int64)EMassTrafficVehicleDamageState::Damaged },
		{ "EMassTrafficVehicleDamageState::Totaled", (int64)EMassTrafficVehicleDamageState::Totaled },
		{ "EMassTrafficVehicleDamageState::Repairing", (int64)EMassTrafficVehicleDamageState::Repairing },
		{ "EMassTrafficVehicleDamageState::Irreparable", (int64)EMassTrafficVehicleDamageState::Irreparable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MassTraffic_EMassTrafficVehicleDamageState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Damaged.Comment", "// Minor cosmetic damage. Still permitted to LOD switch (losing damage)  \n" },
		{ "Damaged.Name", "EMassTrafficVehicleDamageState::Damaged" },
		{ "Damaged.ToolTip", "Minor cosmetic damage. Still permitted to LOD switch (losing damage)" },
		{ "Irreparable.Comment", "// The vehicle couldn't be repaired and should be released and the agent recycled  \n" },
		{ "Irreparable.Name", "EMassTrafficVehicleDamageState::Irreparable" },
		{ "Irreparable.ToolTip", "The vehicle couldn't be repaired and should be released and the agent recycled" },
		{ "ModuleRelativePath", "Public/MassTrafficDamage.h" },
		{ "None.Name", "EMassTrafficVehicleDamageState::None" },
		{ "Repairing.Comment", "// Totaled car tried to switch to lower LOD, so we're trying to repair it \n" },
		{ "Repairing.Name", "EMassTrafficVehicleDamageState::Repairing" },
		{ "Repairing.ToolTip", "Totaled car tried to switch to lower LOD, so we're trying to repair it" },
		{ "Totaled.Comment", "// Undriveable. No vehicle control will be applied \n" },
		{ "Totaled.Name", "EMassTrafficVehicleDamageState::Totaled" },
		{ "Totaled.ToolTip", "Undriveable. No vehicle control will be applied" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassTraffic_EMassTrafficVehicleDamageState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MassTraffic,
		nullptr,
		"EMassTrafficVehicleDamageState",
		"EMassTrafficVehicleDamageState",
		Z_Construct_UEnum_MassTraffic_EMassTrafficVehicleDamageState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_EMassTrafficVehicleDamageState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_EMassTrafficVehicleDamageState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassTraffic_EMassTrafficVehicleDamageState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MassTraffic_EMassTrafficVehicleDamageState()
	{
		if (!Z_Registration_Info_UEnum_EMassTrafficVehicleDamageState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassTrafficVehicleDamageState.InnerSingleton, Z_Construct_UEnum_MassTraffic_EMassTrafficVehicleDamageState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMassTrafficVehicleDamageState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDamage_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDamage_h_Statics::EnumInfo[] = {
		{ EMassTrafficVehicleDamageState_StaticEnum, TEXT("EMassTrafficVehicleDamageState"), &Z_Registration_Info_UEnum_EMassTrafficVehicleDamageState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3930928651U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDamage_h_2920554020(TEXT("/Script/MassTraffic"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDamage_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDamage_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
