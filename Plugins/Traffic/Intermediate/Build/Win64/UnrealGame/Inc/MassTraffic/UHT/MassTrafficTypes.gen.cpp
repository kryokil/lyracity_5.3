// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficTypes() {}
// Cross Module References
	MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficFloatAndID();
	MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTrafficLaneData();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficFloatAndID;
class UScriptStruct* FMassTrafficFloatAndID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficFloatAndID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficFloatAndID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficFloatAndID, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficFloatAndID"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficFloatAndID.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficFloatAndID>()
{
	return FMassTrafficFloatAndID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct to store a float value with an ID.\n * Can work as a TMap key.\n */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct to store a float value with an ID.\nCan work as a TMap key." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficFloatAndID>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficFloatAndID, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::NewProp_Value_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::NewProp_ID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficFloatAndID, ID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::NewProp_ID_MetaData), Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::NewProp_ID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::NewProp_ID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
		nullptr,
		&NewStructOps,
		"MassTrafficFloatAndID",
		Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::PropPointers),
		sizeof(FMassTrafficFloatAndID),
		alignof(FMassTrafficFloatAndID),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficFloatAndID()
	{
		if (!Z_Registration_Info_UScriptStruct_MassTrafficFloatAndID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficFloatAndID.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassTrafficFloatAndID.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphTrafficLaneData;
class UScriptStruct* FZoneGraphTrafficLaneData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphTrafficLaneData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphTrafficLaneData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphTrafficLaneData, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("ZoneGraphTrafficLaneData"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphTrafficLaneData.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FZoneGraphTrafficLaneData>()
{
	return FZoneGraphTrafficLaneData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphTrafficLaneData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTrafficLaneData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphTrafficLaneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphTrafficLaneData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphTrafficLaneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
		nullptr,
		&NewStructOps,
		"ZoneGraphTrafficLaneData",
		nullptr,
		0,
		sizeof(FZoneGraphTrafficLaneData),
		alignof(FZoneGraphTrafficLaneData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTrafficLaneData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FZoneGraphTrafficLaneData_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTrafficLaneData()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphTrafficLaneData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphTrafficLaneData.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphTrafficLaneData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphTrafficLaneData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTypes_h_Statics::ScriptStructInfo[] = {
		{ FMassTrafficFloatAndID::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::NewStructOps, TEXT("MassTrafficFloatAndID"), &Z_Registration_Info_UScriptStruct_MassTrafficFloatAndID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficFloatAndID), 2408865453U) },
		{ FZoneGraphTrafficLaneData::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphTrafficLaneData_Statics::NewStructOps, TEXT("ZoneGraphTrafficLaneData"), &Z_Registration_Info_UScriptStruct_ZoneGraphTrafficLaneData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphTrafficLaneData), 3575660461U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTypes_h_3763593101(TEXT("/Script/MassTraffic"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
