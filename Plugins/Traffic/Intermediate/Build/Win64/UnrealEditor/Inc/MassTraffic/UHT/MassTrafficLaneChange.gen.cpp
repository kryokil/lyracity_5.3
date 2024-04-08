// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficLaneChange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficLaneChange() {}
// Cross Module References
	MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLaneChangeFitReport();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficLaneChangeFitReport;
class UScriptStruct* FMassTrafficLaneChangeFitReport::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficLaneChangeFitReport.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficLaneChangeFitReport.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficLaneChangeFitReport, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficLaneChangeFitReport"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficLaneChangeFitReport.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficLaneChangeFitReport>()
{
	return FMassTrafficLaneChangeFitReport::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassTrafficLaneChangeFitReport_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficLaneChangeFitReport_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficLaneChange.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassTrafficLaneChangeFitReport_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficLaneChangeFitReport>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficLaneChangeFitReport_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
		nullptr,
		&NewStructOps,
		"MassTrafficLaneChangeFitReport",
		nullptr,
		0,
		sizeof(FMassTrafficLaneChangeFitReport),
		alignof(FMassTrafficLaneChangeFitReport),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLaneChangeFitReport_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficLaneChangeFitReport_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLaneChangeFitReport()
	{
		if (!Z_Registration_Info_UScriptStruct_MassTrafficLaneChangeFitReport.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficLaneChangeFitReport.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficLaneChangeFitReport_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassTrafficLaneChangeFitReport.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLaneChange_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLaneChange_h_Statics::ScriptStructInfo[] = {
		{ FMassTrafficLaneChangeFitReport::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficLaneChangeFitReport_Statics::NewStructOps, TEXT("MassTrafficLaneChangeFitReport"), &Z_Registration_Info_UScriptStruct_MassTrafficLaneChangeFitReport, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficLaneChangeFitReport), 680045944U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLaneChange_h_2460275455(TEXT("/Script/MassTraffic"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLaneChange_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLaneChange_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
