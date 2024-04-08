// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Util/CitySampleSurfaceRumbleSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleSurfaceRumbleSettings() {}
// Cross Module References
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySampleSurfaceRumbleSettings;
class UScriptStruct* FCitySampleSurfaceRumbleSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleSurfaceRumbleSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySampleSurfaceRumbleSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CitySampleSurfaceRumbleSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CitySampleSurfaceRumbleSettings.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySampleSurfaceRumbleSettings>()
{
	return FCitySampleSurfaceRumbleSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedToIntensityCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeedToIntensityCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLargeMotors_MetaData[];
#endif
		static void NewProp_bUseLargeMotors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLargeMotors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSmallMotors_MetaData[];
#endif
		static void NewProp_bUseSmallMotors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSmallMotors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostitiveIntensityDeviation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PostitiveIntensityDeviation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NegativeIntensityDeviation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NegativeIntensityDeviation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Util/CitySampleSurfaceRumbleSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySampleSurfaceRumbleSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_SpeedToIntensityCurve_MetaData[] = {
		{ "Category", "CitySampleSurfaceRumbleSettings" },
		{ "ModuleRelativePath", "Public/Util/CitySampleSurfaceRumbleSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_SpeedToIntensityCurve = { "SpeedToIntensityCurve", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleSurfaceRumbleSettings, SpeedToIntensityCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_SpeedToIntensityCurve_MetaData), Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_SpeedToIntensityCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_bUseLargeMotors_MetaData[] = {
		{ "Category", "CitySampleSurfaceRumbleSettings" },
		{ "ModuleRelativePath", "Public/Util/CitySampleSurfaceRumbleSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_bUseLargeMotors_SetBit(void* Obj)
	{
		((FCitySampleSurfaceRumbleSettings*)Obj)->bUseLargeMotors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_bUseLargeMotors = { "bUseLargeMotors", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySampleSurfaceRumbleSettings), &Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_bUseLargeMotors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_bUseLargeMotors_MetaData), Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_bUseLargeMotors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_bUseSmallMotors_MetaData[] = {
		{ "Category", "CitySampleSurfaceRumbleSettings" },
		{ "ModuleRelativePath", "Public/Util/CitySampleSurfaceRumbleSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_bUseSmallMotors_SetBit(void* Obj)
	{
		((FCitySampleSurfaceRumbleSettings*)Obj)->bUseSmallMotors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_bUseSmallMotors = { "bUseSmallMotors", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySampleSurfaceRumbleSettings), &Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_bUseSmallMotors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_bUseSmallMotors_MetaData), Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_bUseSmallMotors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_PostitiveIntensityDeviation_MetaData[] = {
		{ "Category", "CitySampleSurfaceRumbleSettings" },
		{ "ModuleRelativePath", "Public/Util/CitySampleSurfaceRumbleSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_PostitiveIntensityDeviation = { "PostitiveIntensityDeviation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleSurfaceRumbleSettings, PostitiveIntensityDeviation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_PostitiveIntensityDeviation_MetaData), Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_PostitiveIntensityDeviation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_NegativeIntensityDeviation_MetaData[] = {
		{ "Category", "CitySampleSurfaceRumbleSettings" },
		{ "ModuleRelativePath", "Public/Util/CitySampleSurfaceRumbleSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_NegativeIntensityDeviation = { "NegativeIntensityDeviation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleSurfaceRumbleSettings, NegativeIntensityDeviation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_NegativeIntensityDeviation_MetaData), Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_NegativeIntensityDeviation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_SpeedToIntensityCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_bUseLargeMotors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_bUseSmallMotors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_PostitiveIntensityDeviation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewProp_NegativeIntensityDeviation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"CitySampleSurfaceRumbleSettings",
		Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::PropPointers),
		sizeof(FCitySampleSurfaceRumbleSettings),
		alignof(FCitySampleSurfaceRumbleSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_CitySampleSurfaceRumbleSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySampleSurfaceRumbleSettings.InnerSingleton, Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CitySampleSurfaceRumbleSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleSurfaceRumbleSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleSurfaceRumbleSettings_h_Statics::ScriptStructInfo[] = {
		{ FCitySampleSurfaceRumbleSettings::StaticStruct, Z_Construct_UScriptStruct_FCitySampleSurfaceRumbleSettings_Statics::NewStructOps, TEXT("CitySampleSurfaceRumbleSettings"), &Z_Registration_Info_UScriptStruct_CitySampleSurfaceRumbleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySampleSurfaceRumbleSettings), 527781508U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleSurfaceRumbleSettings_h_3988776147(TEXT("/Script/CitySample"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleSurfaceRumbleSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleSurfaceRumbleSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
