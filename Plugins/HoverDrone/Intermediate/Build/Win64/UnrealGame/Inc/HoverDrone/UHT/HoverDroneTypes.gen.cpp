// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoverDrone/Public/HoverDroneTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoverDroneTypes() {}
// Cross Module References
	HOVERDRONE_API UScriptStruct* Z_Construct_UScriptStruct_FDroneSpeedParameters();
	UPackage* Z_Construct_UPackage__Script_HoverDrone();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DroneSpeedParameters;
class UScriptStruct* FDroneSpeedParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DroneSpeedParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DroneSpeedParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDroneSpeedParameters, (UObject*)Z_Construct_UPackage__Script_HoverDrone(), TEXT("DroneSpeedParameters"));
	}
	return Z_Registration_Info_UScriptStruct_DroneSpeedParameters.OuterSingleton;
}
template<> HOVERDRONE_API UScriptStruct* StaticStruct<FDroneSpeedParameters>()
{
	return FDroneSpeedParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearAccelScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearAccelScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearDecelScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearDecelScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotAccelScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotAccelScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotDecelScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotDecelScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRotSpeedScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRotSpeedScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoverThrustScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HoverThrustScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoverDroneTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDroneSpeedParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_LinearAccelScale_MetaData[] = {
		{ "Category", "DroneSpeedParameters" },
		{ "ModuleRelativePath", "Public/HoverDroneTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_LinearAccelScale = { "LinearAccelScale", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDroneSpeedParameters, LinearAccelScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_LinearAccelScale_MetaData), Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_LinearAccelScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_LinearDecelScale_MetaData[] = {
		{ "Category", "DroneSpeedParameters" },
		{ "ModuleRelativePath", "Public/HoverDroneTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_LinearDecelScale = { "LinearDecelScale", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDroneSpeedParameters, LinearDecelScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_LinearDecelScale_MetaData), Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_LinearDecelScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_RotAccelScale_MetaData[] = {
		{ "Category", "DroneSpeedParameters" },
		{ "ModuleRelativePath", "Public/HoverDroneTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_RotAccelScale = { "RotAccelScale", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDroneSpeedParameters, RotAccelScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_RotAccelScale_MetaData), Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_RotAccelScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_RotDecelScale_MetaData[] = {
		{ "Category", "DroneSpeedParameters" },
		{ "ModuleRelativePath", "Public/HoverDroneTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_RotDecelScale = { "RotDecelScale", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDroneSpeedParameters, RotDecelScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_RotDecelScale_MetaData), Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_RotDecelScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_MaxRotSpeedScale_MetaData[] = {
		{ "Category", "DroneSpeedParameters" },
		{ "ModuleRelativePath", "Public/HoverDroneTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_MaxRotSpeedScale = { "MaxRotSpeedScale", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDroneSpeedParameters, MaxRotSpeedScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_MaxRotSpeedScale_MetaData), Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_MaxRotSpeedScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_HoverThrustScale_MetaData[] = {
		{ "Category", "DroneSpeedParameters" },
		{ "ModuleRelativePath", "Public/HoverDroneTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_HoverThrustScale = { "HoverThrustScale", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDroneSpeedParameters, HoverThrustScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_HoverThrustScale_MetaData), Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_HoverThrustScale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_LinearAccelScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_LinearDecelScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_RotAccelScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_RotDecelScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_MaxRotSpeedScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewProp_HoverThrustScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoverDrone,
		nullptr,
		&NewStructOps,
		"DroneSpeedParameters",
		Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::PropPointers),
		sizeof(FDroneSpeedParameters),
		alignof(FDroneSpeedParameters),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDroneSpeedParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_DroneSpeedParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DroneSpeedParameters.InnerSingleton, Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DroneSpeedParameters.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneTypes_h_Statics::ScriptStructInfo[] = {
		{ FDroneSpeedParameters::StaticStruct, Z_Construct_UScriptStruct_FDroneSpeedParameters_Statics::NewStructOps, TEXT("DroneSpeedParameters"), &Z_Registration_Info_UScriptStruct_DroneSpeedParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDroneSpeedParameters), 1361305052U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneTypes_h_3823736790(TEXT("/Script/HoverDrone"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_lyracity_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
