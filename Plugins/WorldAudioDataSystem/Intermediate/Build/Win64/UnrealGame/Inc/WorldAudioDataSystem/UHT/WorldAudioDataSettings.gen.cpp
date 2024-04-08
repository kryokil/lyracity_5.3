// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldAudioDataSystem/Public/WorldAudioDataSettings.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldAudioDataSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_WorldAudioDataSystem();
	WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_AWorldAudioDataGameplayScript_NoRegister();
	WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_UWorldAudioDataSettings();
	WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_UWorldAudioDataSettings_NoRegister();
	WORLDAUDIODATASYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMantleDataIntensityToEffectPresetChain();
	WORLDAUDIODATASYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMantleDataSubmixToEffectMapping();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MantleDataIntensityToEffectPresetChain;
class UScriptStruct* FMantleDataIntensityToEffectPresetChain::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MantleDataIntensityToEffectPresetChain.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MantleDataIntensityToEffectPresetChain.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMantleDataIntensityToEffectPresetChain, (UObject*)Z_Construct_UPackage__Script_WorldAudioDataSystem(), TEXT("MantleDataIntensityToEffectPresetChain"));
	}
	return Z_Registration_Info_UScriptStruct_MantleDataIntensityToEffectPresetChain.OuterSingleton;
}
template<> WORLDAUDIODATASYSTEM_API UScriptStruct* StaticStruct<FMantleDataIntensityToEffectPresetChain>()
{
	return FMantleDataIntensityToEffectPresetChain::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMantleDataIntensityToEffectPresetChain_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumEffectRange_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MinimumEffectRange;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubmixEffectPresetChain_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubmixEffectPresetChain_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubmixEffectPresetChain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMantleDataIntensityToEffectPresetChain_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldAudioDataSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMantleDataIntensityToEffectPresetChain_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMantleDataIntensityToEffectPresetChain>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMantleDataIntensityToEffectPresetChain_Statics::NewProp_MinimumEffectRange_MetaData[] = {
		{ "Category", "MantleDataIntensityToEffectPresetChain" },
		{ "ModuleRelativePath", "Public/WorldAudioDataSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMantleDataIntensityToEffectPresetChain_Statics::NewProp_MinimumEffectRange = { "MinimumEffectRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMantleDataIntensityToEffectPresetChain, MinimumEffectRange), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMantleDataIntensityToEffectPresetChain_Statics::NewProp_MinimumEffectRange_MetaData), Z_Construct_UScriptStruct_FMantleDataIntensityToEffectPresetChain_Statics::NewProp_MinimumEffectRange_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMantleDataIntensityToEffectPresetChain_Statics::NewProp_SubmixEffectPresetChain_Inner = { "SubmixEffectPresetChain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMantleDataIntensityToEffectPresetChain_Statics::NewProp_SubmixEffectPresetChain_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundEffectSubmixPreset" },
		{ "Category", "MantleDataIntensityToEffectPresetChain" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Soundscape Palette Collection\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Soundscape Palette Collection" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMantleDataIntensityToEffectPresetChain_Statics::NewProp_SubmixEffectPresetChain = { "SubmixEffectPresetChain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMantleDataIntensityToEffectPresetChain, SubmixEffectPresetChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMantleDataIntensityToEffectPresetChain_Statics::NewProp_SubmixEffectPresetChain_MetaData), Z_Construct_UScriptStruct_FMantleDataIntensityToEffectPresetChain_Statics::NewProp_SubmixEffectPresetChain_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMantleDataIntensityToEffectPresetChain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMantleDataIntensityToEffectPresetChain_Statics::NewProp_MinimumEffectRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMantleDataIntensityToEffectPresetChain_Statics::NewProp_SubmixEffectPresetChain_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMantleDataIntensityToEffectPresetChain_Statics::NewProp_SubmixEffectPresetChain,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMantleDataIntensityToEffectPresetChain_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldAudioDataSystem,
		nullptr,
		&NewStructOps,
		"MantleDataIntensityToEffectPresetChain",
		Z_Construct_UScriptStruct_FMantleDataIntensityToEffectPresetChain_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMantleDataIntensityToEffectPresetChain_Statics::PropPointers),
		sizeof(FMantleDataIntensityToEffectPresetChain),
		alignof(FMantleDataIntensityToEffectPresetChain),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMantleDataIntensityToEffectPresetChain_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMantleDataIntensityToEffectPresetChain_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMantleDataIntensityToEffectPresetChain_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMantleDataIntensityToEffectPresetChain()
	{
		if (!Z_Registration_Info_UScriptStruct_MantleDataIntensityToEffectPresetChain.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MantleDataIntensityToEffectPresetChain.InnerSingleton, Z_Construct_UScriptStruct_FMantleDataIntensityToEffectPresetChain_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MantleDataIntensityToEffectPresetChain.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MantleDataSubmixToEffectMapping;
class UScriptStruct* FMantleDataSubmixToEffectMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MantleDataSubmixToEffectMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MantleDataSubmixToEffectMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMantleDataSubmixToEffectMapping, (UObject*)Z_Construct_UPackage__Script_WorldAudioDataSystem(), TEXT("MantleDataSubmixToEffectMapping"));
	}
	return Z_Registration_Info_UScriptStruct_MantleDataSubmixToEffectMapping.OuterSingleton;
}
template<> WORLDAUDIODATASYSTEM_API UScriptStruct* StaticStruct<FMantleDataSubmixToEffectMapping>()
{
	return FMantleDataSubmixToEffectMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMantleDataSubmixToEffectMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundSubmix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoundSubmix;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IntensityToEffectMap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntensityToEffectMap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IntensityToEffectMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMantleDataSubmixToEffectMapping_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldAudioDataSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMantleDataSubmixToEffectMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMantleDataSubmixToEffectMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMantleDataSubmixToEffectMapping_Statics::NewProp_SoundSubmix_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundSubmix" },
		{ "Category", "MantleDataSubmixToEffectMapping" },
		{ "ModuleRelativePath", "Public/WorldAudioDataSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMantleDataSubmixToEffectMapping_Statics::NewProp_SoundSubmix = { "SoundSubmix", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMantleDataSubmixToEffectMapping, SoundSubmix), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMantleDataSubmixToEffectMapping_Statics::NewProp_SoundSubmix_MetaData), Z_Construct_UScriptStruct_FMantleDataSubmixToEffectMapping_Statics::NewProp_SoundSubmix_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMantleDataSubmixToEffectMapping_Statics::NewProp_IntensityToEffectMap_Inner = { "IntensityToEffectMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMantleDataIntensityToEffectPresetChain, METADATA_PARAMS(0, nullptr) }; // 3661006267
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMantleDataSubmixToEffectMapping_Statics::NewProp_IntensityToEffectMap_MetaData[] = {
		{ "Category", "MantleDataSubmixToEffectMapping" },
		{ "ModuleRelativePath", "Public/WorldAudioDataSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMantleDataSubmixToEffectMapping_Statics::NewProp_IntensityToEffectMap = { "IntensityToEffectMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMantleDataSubmixToEffectMapping, IntensityToEffectMap), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMantleDataSubmixToEffectMapping_Statics::NewProp_IntensityToEffectMap_MetaData), Z_Construct_UScriptStruct_FMantleDataSubmixToEffectMapping_Statics::NewProp_IntensityToEffectMap_MetaData) }; // 3661006267
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMantleDataSubmixToEffectMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMantleDataSubmixToEffectMapping_Statics::NewProp_SoundSubmix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMantleDataSubmixToEffectMapping_Statics::NewProp_IntensityToEffectMap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMantleDataSubmixToEffectMapping_Statics::NewProp_IntensityToEffectMap,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMantleDataSubmixToEffectMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldAudioDataSystem,
		nullptr,
		&NewStructOps,
		"MantleDataSubmixToEffectMapping",
		Z_Construct_UScriptStruct_FMantleDataSubmixToEffectMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMantleDataSubmixToEffectMapping_Statics::PropPointers),
		sizeof(FMantleDataSubmixToEffectMapping),
		alignof(FMantleDataSubmixToEffectMapping),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMantleDataSubmixToEffectMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMantleDataSubmixToEffectMapping_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMantleDataSubmixToEffectMapping_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMantleDataSubmixToEffectMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_MantleDataSubmixToEffectMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MantleDataSubmixToEffectMapping.InnerSingleton, Z_Construct_UScriptStruct_FMantleDataSubmixToEffectMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MantleDataSubmixToEffectMapping.InnerSingleton;
	}
	void UWorldAudioDataSettings::StaticRegisterNativesUWorldAudioDataSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldAudioDataSettings);
	UClass* Z_Construct_UClass_UWorldAudioDataSettings_NoRegister()
	{
		return UWorldAudioDataSettings::StaticClass();
	}
	struct Z_Construct_UClass_UWorldAudioDataSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MantleTypeToSoundscapeColorPointMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MantleTypeToSoundscapeColorPointMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MantleTypeToSoundscapeColorPointMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MantleTypeToSoundscapeColorPointMap;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContinuousPawnTags_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContinuousPawnTags_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ContinuousPawnTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContinuousSoundMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContinuousSoundMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContinuousSoundMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ContinuousSoundMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MantleEffectsMetaDataKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MantleEffectsMetaDataKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxEffectAltitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxEffectAltitude;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectMap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectMap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EffectMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldAudioDataGameplayScript_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WorldAudioDataGameplayScript;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MASSTrafficCarConfigurationPresetMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MASSTrafficCarConfigurationPresetMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MASSTrafficCarConfigurationPresetMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MASSTrafficCarConfigurationPresetMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldAudioDataSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldAudioDataSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioDataSettings_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "World Audio Data" },
		{ "IncludePath", "WorldAudioDataSettings.h" },
		{ "ModuleRelativePath", "Public/WorldAudioDataSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_MantleTypeToSoundscapeColorPointMap_ValueProp = { "MantleTypeToSoundscapeColorPointMap", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_MantleTypeToSoundscapeColorPointMap_Key_KeyProp = { "MantleTypeToSoundscapeColorPointMap_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_MantleTypeToSoundscapeColorPointMap_MetaData[] = {
		{ "Category", "SoundscapeColorPointMapping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mantle Data Value to Soundscape ColorPoint Mapping\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mantle Data Value to Soundscape ColorPoint Mapping" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_MantleTypeToSoundscapeColorPointMap = { "MantleTypeToSoundscapeColorPointMap", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioDataSettings, MantleTypeToSoundscapeColorPointMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_MantleTypeToSoundscapeColorPointMap_MetaData), Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_MantleTypeToSoundscapeColorPointMap_MetaData) }; // 2083603574
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_ContinuousPawnTags_ElementProp = { "ContinuousPawnTags", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_ContinuousPawnTags_MetaData[] = {
		{ "Category", "WorldAudioDataContinuousSound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tags to assign continuous sounds to the pawn location\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags to assign continuous sounds to the pawn location" },
#endif
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_ContinuousPawnTags = { "ContinuousPawnTags", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioDataSettings, ContinuousPawnTags), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_ContinuousPawnTags_MetaData), Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_ContinuousPawnTags_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_ContinuousSoundMap_ValueProp = { "ContinuousSoundMap", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_ContinuousSoundMap_Key_KeyProp = { "ContinuousSoundMap_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_ContinuousSoundMap_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundBase" },
		{ "Category", "WorldAudioDataContinuousSound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Continuous Sound for World Audio Data\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Continuous Sound for World Audio Data" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_ContinuousSoundMap = { "ContinuousSoundMap", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioDataSettings, ContinuousSoundMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_ContinuousSoundMap_MetaData), Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_ContinuousSoundMap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_MantleEffectsMetaDataKey_MetaData[] = {
		{ "Category", "EffectsMapping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MetaData Key Value to query point cloud data\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MetaData Key Value to query point cloud data" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_MantleEffectsMetaDataKey = { "MantleEffectsMetaDataKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioDataSettings, MantleEffectsMetaDataKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_MantleEffectsMetaDataKey_MetaData), Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_MantleEffectsMetaDataKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_MaxEffectAltitude_MetaData[] = {
		{ "Category", "EffectsMapping" },
		{ "ModuleRelativePath", "Public/WorldAudioDataSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_MaxEffectAltitude = { "MaxEffectAltitude", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioDataSettings, MaxEffectAltitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_MaxEffectAltitude_MetaData), Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_MaxEffectAltitude_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_EffectMap_Inner = { "EffectMap", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMantleDataSubmixToEffectMapping, METADATA_PARAMS(0, nullptr) }; // 159367957
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_EffectMap_MetaData[] = {
		{ "Category", "EffectsMapping" },
		{ "ModuleRelativePath", "Public/WorldAudioDataSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_EffectMap = { "EffectMap", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioDataSettings, EffectMap), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_EffectMap_MetaData), Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_EffectMap_MetaData) }; // 159367957
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_WorldAudioDataGameplayScript_MetaData[] = {
		{ "Category", "WorldAudioDataGameplay" },
		{ "ModuleRelativePath", "Public/WorldAudioDataSettings.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_WorldAudioDataGameplayScript = { "WorldAudioDataGameplayScript", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioDataSettings, WorldAudioDataGameplayScript), Z_Construct_UClass_UClass, Z_Construct_UClass_AWorldAudioDataGameplayScript_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_WorldAudioDataGameplayScript_MetaData), Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_WorldAudioDataGameplayScript_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_MASSTrafficCarConfigurationPresetMap_ValueProp = { "MASSTrafficCarConfigurationPresetMap", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_MASSTrafficCarConfigurationPresetMap_Key_KeyProp = { "MASSTrafficCarConfigurationPresetMap_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_MASSTrafficCarConfigurationPresetMap_MetaData[] = {
		{ "AllowedClasses", "/Script/WorldAudioDataSystem.WADVehAudioPreset" },
		{ "Category", "WorldAudioDataGameplay" },
		{ "ModuleRelativePath", "Public/WorldAudioDataSettings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_MASSTrafficCarConfigurationPresetMap = { "MASSTrafficCarConfigurationPresetMap", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioDataSettings, MASSTrafficCarConfigurationPresetMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_MASSTrafficCarConfigurationPresetMap_MetaData), Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_MASSTrafficCarConfigurationPresetMap_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldAudioDataSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_MantleTypeToSoundscapeColorPointMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_MantleTypeToSoundscapeColorPointMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_MantleTypeToSoundscapeColorPointMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_ContinuousPawnTags_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_ContinuousPawnTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_ContinuousSoundMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_ContinuousSoundMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_ContinuousSoundMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_MantleEffectsMetaDataKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_MaxEffectAltitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_EffectMap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_EffectMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_WorldAudioDataGameplayScript,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_MASSTrafficCarConfigurationPresetMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_MASSTrafficCarConfigurationPresetMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioDataSettings_Statics::NewProp_MASSTrafficCarConfigurationPresetMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldAudioDataSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldAudioDataSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldAudioDataSettings_Statics::ClassParams = {
		&UWorldAudioDataSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldAudioDataSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldAudioDataSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioDataSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UWorldAudioDataSettings()
	{
		if (!Z_Registration_Info_UClass_UWorldAudioDataSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldAudioDataSettings.OuterSingleton, Z_Construct_UClass_UWorldAudioDataSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldAudioDataSettings.OuterSingleton;
	}
	template<> WORLDAUDIODATASYSTEM_API UClass* StaticClass<UWorldAudioDataSettings>()
	{
		return UWorldAudioDataSettings::StaticClass();
	}
	UWorldAudioDataSettings::UWorldAudioDataSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldAudioDataSettings);
	UWorldAudioDataSettings::~UWorldAudioDataSettings() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataSettings_h_Statics::ScriptStructInfo[] = {
		{ FMantleDataIntensityToEffectPresetChain::StaticStruct, Z_Construct_UScriptStruct_FMantleDataIntensityToEffectPresetChain_Statics::NewStructOps, TEXT("MantleDataIntensityToEffectPresetChain"), &Z_Registration_Info_UScriptStruct_MantleDataIntensityToEffectPresetChain, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMantleDataIntensityToEffectPresetChain), 3661006267U) },
		{ FMantleDataSubmixToEffectMapping::StaticStruct, Z_Construct_UScriptStruct_FMantleDataSubmixToEffectMapping_Statics::NewStructOps, TEXT("MantleDataSubmixToEffectMapping"), &Z_Registration_Info_UScriptStruct_MantleDataSubmixToEffectMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMantleDataSubmixToEffectMapping), 159367957U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldAudioDataSettings, UWorldAudioDataSettings::StaticClass, TEXT("UWorldAudioDataSettings"), &Z_Registration_Info_UClass_UWorldAudioDataSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldAudioDataSettings), 747328496U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataSettings_h_2704589562(TEXT("/Script/WorldAudioDataSystem"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
