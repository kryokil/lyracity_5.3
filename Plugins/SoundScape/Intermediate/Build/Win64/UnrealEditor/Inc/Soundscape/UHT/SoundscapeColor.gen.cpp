// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundScape/Public/SoundscapeColor.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
#include "GameplayTagContainer.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundscapeColor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_UActiveSoundscapeColor();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_UActiveSoundscapeColor_NoRegister();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_UActiveSoundscapeColorVoice();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_UActiveSoundscapeColorVoice_NoRegister();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapeColor();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapeColor_NoRegister();
	SOUNDSCAPE_API UEnum* Z_Construct_UEnum_Soundscape_ESoundscapeColorAltitudeClampMode();
	SOUNDSCAPE_API UFunction* Z_Construct_UDelegateFunction_Soundscape_OnSoundscapeColorParameterChanges__DelegateSignature();
	SOUNDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings();
	SOUNDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings();
	SOUNDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings();
	SOUNDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundscapeColorVoiceParams();
	UPackage* Z_Construct_UPackage__Script_Soundscape();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Soundscape_OnSoundscapeColorParameterChanges__DelegateSignature_Statics
	{
		struct _Script_Soundscape_eventOnSoundscapeColorParameterChanges_Parms
		{
			const USoundscapeColor* SoundscapeColor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundscapeColor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundscapeColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Soundscape_OnSoundscapeColorParameterChanges__DelegateSignature_Statics::NewProp_SoundscapeColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Soundscape_OnSoundscapeColorParameterChanges__DelegateSignature_Statics::NewProp_SoundscapeColor = { "SoundscapeColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Soundscape_eventOnSoundscapeColorParameterChanges_Parms, SoundscapeColor), Z_Construct_UClass_USoundscapeColor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Soundscape_OnSoundscapeColorParameterChanges__DelegateSignature_Statics::NewProp_SoundscapeColor_MetaData), Z_Construct_UDelegateFunction_Soundscape_OnSoundscapeColorParameterChanges__DelegateSignature_Statics::NewProp_SoundscapeColor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Soundscape_OnSoundscapeColorParameterChanges__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Soundscape_OnSoundscapeColorParameterChanges__DelegateSignature_Statics::NewProp_SoundscapeColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Soundscape_OnSoundscapeColorParameterChanges__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** UObject delegate to broadcast parameter changes to ActiveSoundscapeColor instances. */" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UObject delegate to broadcast parameter changes to ActiveSoundscapeColor instances." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Soundscape_OnSoundscapeColorParameterChanges__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Soundscape, nullptr, "OnSoundscapeColorParameterChanges__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Soundscape_OnSoundscapeColorParameterChanges__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Soundscape_OnSoundscapeColorParameterChanges__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Soundscape_OnSoundscapeColorParameterChanges__DelegateSignature_Statics::_Script_Soundscape_eventOnSoundscapeColorParameterChanges_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Soundscape_OnSoundscapeColorParameterChanges__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Soundscape_OnSoundscapeColorParameterChanges__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Soundscape_OnSoundscapeColorParameterChanges__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Soundscape_OnSoundscapeColorParameterChanges__DelegateSignature_Statics::_Script_Soundscape_eventOnSoundscapeColorParameterChanges_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Soundscape_OnSoundscapeColorParameterChanges__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Soundscape_OnSoundscapeColorParameterChanges__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSoundscapeColorParameterChanges_DelegateWrapper(const FMulticastScriptDelegate& OnSoundscapeColorParameterChanges, const USoundscapeColor* SoundscapeColor)
{
	struct _Script_Soundscape_eventOnSoundscapeColorParameterChanges_Parms
	{
		const USoundscapeColor* SoundscapeColor;
	};
	_Script_Soundscape_eventOnSoundscapeColorParameterChanges_Parms Parms;
	Parms.SoundscapeColor=SoundscapeColor;
	OnSoundscapeColorParameterChanges.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESoundscapeColorAltitudeClampMode;
	static UEnum* ESoundscapeColorAltitudeClampMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESoundscapeColorAltitudeClampMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESoundscapeColorAltitudeClampMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Soundscape_ESoundscapeColorAltitudeClampMode, (UObject*)Z_Construct_UPackage__Script_Soundscape(), TEXT("ESoundscapeColorAltitudeClampMode"));
		}
		return Z_Registration_Info_UEnum_ESoundscapeColorAltitudeClampMode.OuterSingleton;
	}
	template<> SOUNDSCAPE_API UEnum* StaticEnum<ESoundscapeColorAltitudeClampMode>()
	{
		return ESoundscapeColorAltitudeClampMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Soundscape_ESoundscapeColorAltitudeClampMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Soundscape_ESoundscapeColorAltitudeClampMode_Statics::Enumerators[] = {
		{ "ESoundscapeColorAltitudeClampMode::Relative", (int64)ESoundscapeColorAltitudeClampMode::Relative },
		{ "ESoundscapeColorAltitudeClampMode::Absolute", (int64)ESoundscapeColorAltitudeClampMode::Absolute },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Soundscape_ESoundscapeColorAltitudeClampMode_Statics::Enum_MetaDataParams[] = {
		{ "Absolute.Comment", "// Altitude relative to the listener location\n" },
		{ "Absolute.DisplayName", "Absolute Altitude" },
		{ "Absolute.Name", "ESoundscapeColorAltitudeClampMode::Absolute" },
		{ "Absolute.ToolTip", "Altitude relative to the listener location" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
		{ "Relative.DisplayName", "Relative Altitude" },
		{ "Relative.Name", "ESoundscapeColorAltitudeClampMode::Relative" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Soundscape_ESoundscapeColorAltitudeClampMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Soundscape,
		nullptr,
		"ESoundscapeColorAltitudeClampMode",
		"ESoundscapeColorAltitudeClampMode",
		Z_Construct_UEnum_Soundscape_ESoundscapeColorAltitudeClampMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Soundscape_ESoundscapeColorAltitudeClampMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Soundscape_ESoundscapeColorAltitudeClampMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Soundscape_ESoundscapeColorAltitudeClampMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Soundscape_ESoundscapeColorAltitudeClampMode()
	{
		if (!Z_Registration_Info_UEnum_ESoundscapeColorAltitudeClampMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESoundscapeColorAltitudeClampMode.InnerSingleton, Z_Construct_UEnum_Soundscape_ESoundscapeColorAltitudeClampMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESoundscapeColorAltitudeClampMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundscapeColorSpawnSettings;
class UScriptStruct* FSoundscapeColorSpawnSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundscapeColorSpawnSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundscapeColorSpawnSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings, (UObject*)Z_Construct_UPackage__Script_Soundscape(), TEXT("SoundscapeColorSpawnSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SoundscapeColorSpawnSettings.OuterSingleton;
}
template<> SOUNDSCAPE_API UScriptStruct* StaticStruct<FSoundscapeColorSpawnSettings>()
{
	return FSoundscapeColorSpawnSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDelayFirstSpawn_MetaData[];
#endif
		static void NewProp_bDelayFirstSpawn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelayFirstSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinFirstSpawnDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinFirstSpawnDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxFirstSpawnDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFirstSpawnDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bContinuouslyRespawn_MetaData[];
#endif
		static void NewProp_bContinuouslyRespawn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bContinuouslyRespawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpawnDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpawnDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpawnDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpawnDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfSpawnedElements_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfSpawnedElements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpawnDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpawnDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpawnDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpawnDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCullByMaxSpawnDistance_MetaData[];
#endif
		static void NewProp_bCullByMaxSpawnDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCullByMaxSpawnDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpawnAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpawnAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpawnAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpawnAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClampHeight_MetaData[];
#endif
		static void NewProp_bClampHeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampHeight;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClampMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ClampMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpawnHeightClamp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpawnHeightClamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpawnHeightClamp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpawnHeightClamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotateSoundSource_MetaData[];
#endif
		static void NewProp_bRotateSoundSource_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateSoundSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinAzimuthalRotationAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAzimuthalRotationAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAzimuthalRotationAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAzimuthalRotationAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinAltitudinalRotationAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAltitudinalRotationAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAltitudinalRotationAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAltitudinalRotationAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPositionByTrace_MetaData[];
#endif
		static void NewProp_bPositionByTrace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPositionByTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFilterByColorPointDensity_MetaData[];
#endif
		static void NewProp_bFilterByColorPointDensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterByColorPointDensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinColorPointNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinColorPointNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreZAxisWhenCullingByMaxDistance_MetaData[];
#endif
		static void NewProp_bIgnoreZAxisWhenCullingByMaxDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreZAxisWhenCullingByMaxDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Struct \n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundscapeColorSpawnSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bDelayFirstSpawn_MetaData[] = {
		{ "Category", "SpawnBehavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Automatically Element Spawn when Element Returns Finished\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically Element Spawn when Element Returns Finished" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bDelayFirstSpawn_SetBit(void* Obj)
	{
		((FSoundscapeColorSpawnSettings*)Obj)->bDelayFirstSpawn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bDelayFirstSpawn = { "bDelayFirstSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSoundscapeColorSpawnSettings), &Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bDelayFirstSpawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bDelayFirstSpawn_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bDelayFirstSpawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinFirstSpawnDelay_MetaData[] = {
		{ "Category", "SpawnBehavior" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets Minimum Time between Spawning Elements, checking if Elements are Finished, etc.\n" },
#endif
		{ "EditCondition", "bDelayFirstSpawn" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets Minimum Time between Spawning Elements, checking if Elements are Finished, etc." },
#endif
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinFirstSpawnDelay = { "MinFirstSpawnDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorSpawnSettings, MinFirstSpawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinFirstSpawnDelay_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinFirstSpawnDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxFirstSpawnDelay_MetaData[] = {
		{ "Category", "SpawnBehavior" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the Maximum Time between Spawning Elements, checking if Elements are Finished, etc.\n" },
#endif
		{ "EditCondition", "bDelayFirstSpawn" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the Maximum Time between Spawning Elements, checking if Elements are Finished, etc." },
#endif
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxFirstSpawnDelay = { "MaxFirstSpawnDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorSpawnSettings, MaxFirstSpawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxFirstSpawnDelay_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxFirstSpawnDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bContinuouslyRespawn_MetaData[] = {
		{ "Category", "SpawnBehavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When false, there will only be one Element spawned\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When false, there will only be one Element spawned" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bContinuouslyRespawn_SetBit(void* Obj)
	{
		((FSoundscapeColorSpawnSettings*)Obj)->bContinuouslyRespawn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bContinuouslyRespawn = { "bContinuouslyRespawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSoundscapeColorSpawnSettings), &Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bContinuouslyRespawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bContinuouslyRespawn_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bContinuouslyRespawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinSpawnDelay_MetaData[] = {
		{ "Category", "SpawnBehavior" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets Minimum Time between Spawning Elements, checking if Elements are Finished, etc.\n" },
#endif
		{ "EditCondition", "bContinuouslyRespawn" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets Minimum Time between Spawning Elements, checking if Elements are Finished, etc." },
#endif
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinSpawnDelay = { "MinSpawnDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorSpawnSettings, MinSpawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinSpawnDelay_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinSpawnDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxSpawnDelay_MetaData[] = {
		{ "Category", "SpawnBehavior" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the Maximum Time between Spawning Elements, checking if Elements are Finished, etc.\n" },
#endif
		{ "EditCondition", "bContinuouslyRespawn" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the Maximum Time between Spawning Elements, checking if Elements are Finished, etc." },
#endif
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxSpawnDelay = { "MaxSpawnDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorSpawnSettings, MaxSpawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxSpawnDelay_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxSpawnDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxNumberOfSpawnedElements_MetaData[] = {
		{ "Category", "SpawnBehavior" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max number of concurrent Elements of this type playing back at once, will not Spawn New ones until current ones are Finished Playing\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max number of concurrent Elements of this type playing back at once, will not Spawn New ones until current ones are Finished Playing" },
#endif
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxNumberOfSpawnedElements = { "MaxNumberOfSpawnedElements", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorSpawnSettings, MaxNumberOfSpawnedElements), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxNumberOfSpawnedElements_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxNumberOfSpawnedElements_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinSpawnDistance_MetaData[] = {
		{ "Category", "SpawnBehavior" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets Minimum Distance from Base for Playback of the Element\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets Minimum Distance from Base for Playback of the Element" },
#endif
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinSpawnDistance = { "MinSpawnDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorSpawnSettings, MinSpawnDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinSpawnDistance_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinSpawnDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxSpawnDistance_MetaData[] = {
		{ "Category", "SpawnBehavior" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the Maximum Distance from Base for Playback of the Element\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the Maximum Distance from Base for Playback of the Element" },
#endif
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxSpawnDistance = { "MaxSpawnDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorSpawnSettings, MaxSpawnDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxSpawnDistance_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxSpawnDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bCullByMaxSpawnDistance_MetaData[] = {
		{ "Category", "SpawnBehavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Culls the voices by the Max Spawn Distance\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Culls the voices by the Max Spawn Distance" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bCullByMaxSpawnDistance_SetBit(void* Obj)
	{
		((FSoundscapeColorSpawnSettings*)Obj)->bCullByMaxSpawnDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bCullByMaxSpawnDistance = { "bCullByMaxSpawnDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSoundscapeColorSpawnSettings), &Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bCullByMaxSpawnDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bCullByMaxSpawnDistance_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bCullByMaxSpawnDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinSpawnAngle_MetaData[] = {
		{ "Category", "SpawnBehavior" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Minimum Azimuth based on the Base's Forward Vector in which to position Element Playback\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Minimum Azimuth based on the Base's Forward Vector in which to position Element Playback" },
#endif
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinSpawnAngle = { "MinSpawnAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorSpawnSettings, MinSpawnAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinSpawnAngle_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinSpawnAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxSpawnAngle_MetaData[] = {
		{ "Category", "SpawnBehavior" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Maximum Azimuth based on the Base's Forward Vector in which to position Element Playback\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Maximum Azimuth based on the Base's Forward Vector in which to position Element Playback" },
#endif
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxSpawnAngle = { "MaxSpawnAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorSpawnSettings, MaxSpawnAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxSpawnAngle_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxSpawnAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bClampHeight_MetaData[] = {
		{ "Category", "SpawnBehavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When false, there will only be one Element spawned\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When false, there will only be one Element spawned" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bClampHeight_SetBit(void* Obj)
	{
		((FSoundscapeColorSpawnSettings*)Obj)->bClampHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bClampHeight = { "bClampHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSoundscapeColorSpawnSettings), &Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bClampHeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bClampHeight_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bClampHeight_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_ClampMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_ClampMode_MetaData[] = {
		{ "Category", "SpawnBehavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// What mode of altitude clamping to use, Relative clamps the z-axis about the location of the Listener, Absolute clamps the z-axis of the world coordinates\n" },
#endif
		{ "EditCondition", "bClampHeight" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What mode of altitude clamping to use, Relative clamps the z-axis about the location of the Listener, Absolute clamps the z-axis of the world coordinates" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_ClampMode = { "ClampMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorSpawnSettings, ClampMode), Z_Construct_UEnum_Soundscape_ESoundscapeColorAltitudeClampMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_ClampMode_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_ClampMode_MetaData) }; // 1637459828
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinSpawnHeightClamp_MetaData[] = {
		{ "Category", "SpawnBehavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// After Element Playback position is determined, will clamp the Z-Axis to these ranges\n" },
#endif
		{ "EditCondition", "bClampHeight" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "After Element Playback position is determined, will clamp the Z-Axis to these ranges" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinSpawnHeightClamp = { "MinSpawnHeightClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorSpawnSettings, MinSpawnHeightClamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinSpawnHeightClamp_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinSpawnHeightClamp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxSpawnHeightClamp_MetaData[] = {
		{ "Category", "SpawnBehavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// After Element Playback position is determined, will clamp the Z-Axis to these ranges\n" },
#endif
		{ "EditCondition", "bClampHeight" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "After Element Playback position is determined, will clamp the Z-Axis to these ranges" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxSpawnHeightClamp = { "MaxSpawnHeightClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorSpawnSettings, MaxSpawnHeightClamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxSpawnHeightClamp_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxSpawnHeightClamp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bRotateSoundSource_MetaData[] = {
		{ "Category", "SpawnBehavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When false, the sound rotation will be unmodified\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When false, the sound rotation will be unmodified" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bRotateSoundSource_SetBit(void* Obj)
	{
		((FSoundscapeColorSpawnSettings*)Obj)->bRotateSoundSource = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bRotateSoundSource = { "bRotateSoundSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSoundscapeColorSpawnSettings), &Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bRotateSoundSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bRotateSoundSource_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bRotateSoundSource_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinAzimuthalRotationAngle_MetaData[] = {
		{ "Category", "SpawnBehavior" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Minimum azimuthal rotation in the world orientation for Element Playback\n" },
#endif
		{ "EditCondition", "bRotateSoundSource" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Minimum azimuthal rotation in the world orientation for Element Playback" },
#endif
		{ "UIMax", "360.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinAzimuthalRotationAngle = { "MinAzimuthalRotationAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorSpawnSettings, MinAzimuthalRotationAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinAzimuthalRotationAngle_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinAzimuthalRotationAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxAzimuthalRotationAngle_MetaData[] = {
		{ "Category", "SpawnBehavior" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Maximum azimuthal rotation in the world orientation for Element Playback\n" },
#endif
		{ "EditCondition", "bRotateSoundSource" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Maximum azimuthal rotation in the world orientation for Element Playback" },
#endif
		{ "UIMax", "360.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxAzimuthalRotationAngle = { "MaxAzimuthalRotationAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorSpawnSettings, MaxAzimuthalRotationAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxAzimuthalRotationAngle_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxAzimuthalRotationAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinAltitudinalRotationAngle_MetaData[] = {
		{ "Category", "SpawnBehavior" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Minimum Altitudinal rotation in the world orientation for Element Playback\n" },
#endif
		{ "EditCondition", "bRotateSoundSource" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Minimum Altitudinal rotation in the world orientation for Element Playback" },
#endif
		{ "UIMax", "360.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinAltitudinalRotationAngle = { "MinAltitudinalRotationAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorSpawnSettings, MinAltitudinalRotationAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinAltitudinalRotationAngle_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinAltitudinalRotationAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxAltitudinalRotationAngle_MetaData[] = {
		{ "Category", "SpawnBehavior" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Maximum Altitudinal rotation in the world orientation for Element Playback\n" },
#endif
		{ "EditCondition", "bRotateSoundSource" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Maximum Altitudinal rotation in the world orientation for Element Playback" },
#endif
		{ "UIMax", "360.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxAltitudinalRotationAngle = { "MaxAltitudinalRotationAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorSpawnSettings, MaxAltitudinalRotationAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxAltitudinalRotationAngle_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxAltitudinalRotationAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bPositionByTrace_MetaData[] = {
		{ "Category", "SpawnBehavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Position By Trace allows sounds to be repositioned from their spawn point to a new point in space based on the success of an async trace call,\n// unsuccessful hits will result in the sound not spawning\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Position By Trace allows sounds to be repositioned from their spawn point to a new point in space based on the success of an async trace call,\nunsuccessful hits will result in the sound not spawning" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bPositionByTrace_SetBit(void* Obj)
	{
		((FSoundscapeColorSpawnSettings*)Obj)->bPositionByTrace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bPositionByTrace = { "bPositionByTrace", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSoundscapeColorSpawnSettings), &Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bPositionByTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bPositionByTrace_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bPositionByTrace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_TraceVector_MetaData[] = {
		{ "Category", "SpawnBehavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Minimum nomralized directional vector in world orientation for the Trace to fire (default to down, z = -1.0f)\n" },
#endif
		{ "EditCondition", "bPositionByTrace" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Minimum nomralized directional vector in world orientation for the Trace to fire (default to down, z = -1.0f)" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_TraceVector = { "TraceVector", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorSpawnSettings, TraceVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_TraceVector_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_TraceVector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_TraceDistance_MetaData[] = {
		{ "Category", "SpawnBehavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Trace distance\n" },
#endif
		{ "EditCondition", "bPositionByTrace" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trace distance" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorSpawnSettings, TraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_TraceDistance_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_TraceDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "SpawnBehavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The physics trace channel to use\n" },
#endif
		{ "EditCondition", "bPositionByTrace" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The physics trace channel to use" },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorSpawnSettings, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_TraceChannel_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_TraceChannel_MetaData) }; // 1822723181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bFilterByColorPointDensity_MetaData[] = {
		{ "Category", "SpawnBehavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Filter by Color Point Density allows designers to only allow this Color to spawn in spaces with a specified range of Color Points\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Filter by Color Point Density allows designers to only allow this Color to spawn in spaces with a specified range of Color Points" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bFilterByColorPointDensity_SetBit(void* Obj)
	{
		((FSoundscapeColorSpawnSettings*)Obj)->bFilterByColorPointDensity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bFilterByColorPointDensity = { "bFilterByColorPointDensity", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSoundscapeColorSpawnSettings), &Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bFilterByColorPointDensity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bFilterByColorPointDensity_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bFilterByColorPointDensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_ColorPoint_MetaData[] = {
		{ "Category", "SpawnBehavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Color Point\n" },
#endif
		{ "EditCondition", "bFilterByColorPointDensity" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color Point" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_ColorPoint = { "ColorPoint", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorSpawnSettings, ColorPoint), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_ColorPoint_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_ColorPoint_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinColorPointNumber_MetaData[] = {
		{ "Category", "SpawnBehavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Minimum number of Color Point density required before spawn is successful\n" },
#endif
		{ "EditCondition", "bFilterByColorPointDensity" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum number of Color Point density required before spawn is successful" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinColorPointNumber = { "MinColorPointNumber", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorSpawnSettings, MinColorPointNumber), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinColorPointNumber_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinColorPointNumber_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bIgnoreZAxisWhenCullingByMaxDistance_MetaData[] = {
		{ "Category", "SpawnBehavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Culls the voices by the Max Spawn Distance\n" },
#endif
		{ "EditCondition", "bCullByMaxSpawnDistance" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Culls the voices by the Max Spawn Distance" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bIgnoreZAxisWhenCullingByMaxDistance_SetBit(void* Obj)
	{
		((FSoundscapeColorSpawnSettings*)Obj)->bIgnoreZAxisWhenCullingByMaxDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bIgnoreZAxisWhenCullingByMaxDistance = { "bIgnoreZAxisWhenCullingByMaxDistance", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSoundscapeColorSpawnSettings), &Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bIgnoreZAxisWhenCullingByMaxDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bIgnoreZAxisWhenCullingByMaxDistance_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bIgnoreZAxisWhenCullingByMaxDistance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bDelayFirstSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinFirstSpawnDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxFirstSpawnDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bContinuouslyRespawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinSpawnDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxSpawnDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxNumberOfSpawnedElements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinSpawnDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxSpawnDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bCullByMaxSpawnDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinSpawnAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxSpawnAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bClampHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_ClampMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_ClampMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinSpawnHeightClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxSpawnHeightClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bRotateSoundSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinAzimuthalRotationAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxAzimuthalRotationAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinAltitudinalRotationAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MaxAltitudinalRotationAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bPositionByTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_TraceVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_TraceDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_TraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bFilterByColorPointDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_ColorPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_MinColorPointNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewProp_bIgnoreZAxisWhenCullingByMaxDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Soundscape,
		nullptr,
		&NewStructOps,
		"SoundscapeColorSpawnSettings",
		Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::PropPointers),
		sizeof(FSoundscapeColorSpawnSettings),
		alignof(FSoundscapeColorSpawnSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundscapeColorSpawnSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundscapeColorSpawnSettings.InnerSingleton, Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundscapeColorSpawnSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundscapeColorModulationSettings;
class UScriptStruct* FSoundscapeColorModulationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundscapeColorModulationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundscapeColorModulationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings, (UObject*)Z_Construct_UPackage__Script_Soundscape(), TEXT("SoundscapeColorModulationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SoundscapeColorModulationSettings.OuterSingleton;
}
template<> SOUNDSCAPE_API UScriptStruct* StaticStruct<FSoundscapeColorModulationSettings>()
{
	return FSoundscapeColorModulationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomizeVolume_MetaData[];
#endif
		static void NewProp_bRandomizeVolume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomizeVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomizePitch_MetaData[];
#endif
		static void NewProp_bRandomizePitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomizePitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFadeVolume_MetaData[];
#endif
		static void NewProp_bFadeVolume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFadeVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinFadeInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinFadeInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxFadeInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFadeInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinFadeOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinFadeOutTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxFadeOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFadeOutTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyFadeInOnRetrigger_MetaData[];
#endif
		static void NewProp_bOnlyFadeInOnRetrigger_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyFadeInOnRetrigger;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Struct \n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundscapeColorModulationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_bRandomizeVolume_MetaData[] = {
		{ "Category", "ModulationBehavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add Volume Fades to the Re-trigger Sound playback\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add Volume Fades to the Re-trigger Sound playback" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_bRandomizeVolume_SetBit(void* Obj)
	{
		((FSoundscapeColorModulationSettings*)Obj)->bRandomizeVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_bRandomizeVolume = { "bRandomizeVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSoundscapeColorModulationSettings), &Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_bRandomizeVolume_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_bRandomizeVolume_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_bRandomizeVolume_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_VolumeMin_MetaData[] = {
		{ "Category", "ModulationBehavior" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Minimum Volume Range for Step\n" },
#endif
		{ "EditCondition", "bRandomizeVolume" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
		{ "SliderExponent", "6.0" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum Volume Range for Step" },
#endif
		{ "UIMax", "4.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_VolumeMin = { "VolumeMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorModulationSettings, VolumeMin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_VolumeMin_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_VolumeMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_VolumeMax_MetaData[] = {
		{ "Category", "ModulationBehavior" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum Volume Range for Step\n" },
#endif
		{ "EditCondition", "bRandomizeVolume" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
		{ "SliderExponent", "6.0" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum Volume Range for Step" },
#endif
		{ "UIMax", "4.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_VolumeMax = { "VolumeMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorModulationSettings, VolumeMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_VolumeMax_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_VolumeMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_bRandomizePitch_MetaData[] = {
		{ "Category", "ModulationBehavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add Volume Fades to the Re-trigger Sound playback\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add Volume Fades to the Re-trigger Sound playback" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_bRandomizePitch_SetBit(void* Obj)
	{
		((FSoundscapeColorModulationSettings*)Obj)->bRandomizePitch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_bRandomizePitch = { "bRandomizePitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSoundscapeColorModulationSettings), &Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_bRandomizePitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_bRandomizePitch_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_bRandomizePitch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_PitchMin_MetaData[] = {
		{ "Category", "ModulationBehavior" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.2" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Minimum Pitch Range for Step\n" },
#endif
		{ "EditCondition", "bRandomizePitch" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
		{ "SliderExponent", "3.0" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum Pitch Range for Step" },
#endif
		{ "UIMax", "4.0" },
		{ "UIMin", "0.2" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_PitchMin = { "PitchMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorModulationSettings, PitchMin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_PitchMin_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_PitchMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_PitchMax_MetaData[] = {
		{ "Category", "ModulationBehavior" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.2" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum Pitch Range for Step\n" },
#endif
		{ "EditCondition", "bRandomizePitch" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
		{ "SliderExponent", "3.0" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum Pitch Range for Step" },
#endif
		{ "UIMax", "4.0" },
		{ "UIMin", "0.2" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_PitchMax = { "PitchMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorModulationSettings, PitchMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_PitchMax_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_PitchMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_bFadeVolume_MetaData[] = {
		{ "Category", "ModulationBehavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add Volume Fades to the Re-trigger Sound playback\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add Volume Fades to the Re-trigger Sound playback" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_bFadeVolume_SetBit(void* Obj)
	{
		((FSoundscapeColorModulationSettings*)Obj)->bFadeVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_bFadeVolume = { "bFadeVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSoundscapeColorModulationSettings), &Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_bFadeVolume_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_bFadeVolume_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_bFadeVolume_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_MinFadeInTime_MetaData[] = {
		{ "Category", "ModulationBehavior" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is the minimum Fade-In duration for re-triggered sounds\n" },
#endif
		{ "EditCondition", "bFadeVolume" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the minimum Fade-In duration for re-triggered sounds" },
#endif
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_MinFadeInTime = { "MinFadeInTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorModulationSettings, MinFadeInTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_MinFadeInTime_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_MinFadeInTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_MaxFadeInTime_MetaData[] = {
		{ "Category", "ModulationBehavior" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is the maximum Fade-In duration for re-triggered sounds\n" },
#endif
		{ "EditCondition", "bFadeVolume" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the maximum Fade-In duration for re-triggered sounds" },
#endif
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_MaxFadeInTime = { "MaxFadeInTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorModulationSettings, MaxFadeInTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_MaxFadeInTime_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_MaxFadeInTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_MinFadeOutTime_MetaData[] = {
		{ "Category", "ModulationBehavior" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is the minimum Fade-Out duration for re-triggered sounds\n" },
#endif
		{ "EditCondition", "bFadeVolume" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the minimum Fade-Out duration for re-triggered sounds" },
#endif
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_MinFadeOutTime = { "MinFadeOutTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorModulationSettings, MinFadeOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_MinFadeOutTime_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_MinFadeOutTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_MaxFadeOutTime_MetaData[] = {
		{ "Category", "ModulationBehavior" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is the maximum Fade-Out duration for re-triggered sounds\n" },
#endif
		{ "EditCondition", "bFadeVolume" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the maximum Fade-Out duration for re-triggered sounds" },
#endif
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_MaxFadeOutTime = { "MaxFadeOutTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorModulationSettings, MaxFadeOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_MaxFadeOutTime_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_MaxFadeOutTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_bOnlyFadeInOnRetrigger_MetaData[] = {
		{ "Category", "ModulationBehavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Only Fade-In on retriggers\n" },
#endif
		{ "EditCondition", "bFadeVolume" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only Fade-In on retriggers" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_bOnlyFadeInOnRetrigger_SetBit(void* Obj)
	{
		((FSoundscapeColorModulationSettings*)Obj)->bOnlyFadeInOnRetrigger = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_bOnlyFadeInOnRetrigger = { "bOnlyFadeInOnRetrigger", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSoundscapeColorModulationSettings), &Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_bOnlyFadeInOnRetrigger_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_bOnlyFadeInOnRetrigger_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_bOnlyFadeInOnRetrigger_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_bRandomizeVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_VolumeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_VolumeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_bRandomizePitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_PitchMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_PitchMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_bFadeVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_MinFadeInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_MaxFadeInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_MinFadeOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_MaxFadeOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewProp_bOnlyFadeInOnRetrigger,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Soundscape,
		nullptr,
		&NewStructOps,
		"SoundscapeColorModulationSettings",
		Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::PropPointers),
		sizeof(FSoundscapeColorModulationSettings),
		alignof(FSoundscapeColorModulationSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundscapeColorModulationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundscapeColorModulationSettings.InnerSingleton, Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundscapeColorModulationSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundscapeColorPlaybackSettings;
class UScriptStruct* FSoundscapeColorPlaybackSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundscapeColorPlaybackSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundscapeColorPlaybackSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings, (UObject*)Z_Construct_UPackage__Script_Soundscape(), TEXT("SoundscapeColorPlaybackSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SoundscapeColorPlaybackSettings.OuterSingleton;
}
template<> SOUNDSCAPE_API UScriptStruct* StaticStruct<FSoundscapeColorPlaybackSettings>()
{
	return FSoundscapeColorPlaybackSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomizeStartingSeekTime_MetaData[];
#endif
		static void NewProp_bRandomizeStartingSeekTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomizeStartingSeekTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLimitPlaybackDuration_MetaData[];
#endif
		static void NewProp_bLimitPlaybackDuration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitPlaybackDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinPlaybackDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPlaybackDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlaybackDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPlaybackDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Struct containing Sound Scape Element Control Data\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct containing Sound Scape Element Control Data" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundscapeColorPlaybackSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::NewProp_bRandomizeStartingSeekTime_MetaData[] = {
		{ "Category", "PlaybackBehavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Upon starting playback, will randomly seek into the Sound if true\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Upon starting playback, will randomly seek into the Sound if true" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::NewProp_bRandomizeStartingSeekTime_SetBit(void* Obj)
	{
		((FSoundscapeColorPlaybackSettings*)Obj)->bRandomizeStartingSeekTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::NewProp_bRandomizeStartingSeekTime = { "bRandomizeStartingSeekTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSoundscapeColorPlaybackSettings), &Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::NewProp_bRandomizeStartingSeekTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::NewProp_bRandomizeStartingSeekTime_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::NewProp_bRandomizeStartingSeekTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::NewProp_bLimitPlaybackDuration_MetaData[] = {
		{ "Category", "PlaybackBehavior" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Limit Ambient Bed's playback duration\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Limit Ambient Bed's playback duration" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::NewProp_bLimitPlaybackDuration_SetBit(void* Obj)
	{
		((FSoundscapeColorPlaybackSettings*)Obj)->bLimitPlaybackDuration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::NewProp_bLimitPlaybackDuration = { "bLimitPlaybackDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSoundscapeColorPlaybackSettings), &Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::NewProp_bLimitPlaybackDuration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::NewProp_bLimitPlaybackDuration_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::NewProp_bLimitPlaybackDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::NewProp_MinPlaybackDuration_MetaData[] = {
		{ "Category", "PlaybackBehavior" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is the minimum playback duration for this ambient bed (assuming a looping sound), ignored if bLimitPlaybackDuration is false\n" },
#endif
		{ "EditCondition", "bLimitPlaybackDuration" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the minimum playback duration for this ambient bed (assuming a looping sound), ignored if bLimitPlaybackDuration is false" },
#endif
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::NewProp_MinPlaybackDuration = { "MinPlaybackDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorPlaybackSettings, MinPlaybackDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::NewProp_MinPlaybackDuration_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::NewProp_MinPlaybackDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::NewProp_MaxPlaybackDuration_MetaData[] = {
		{ "Category", "PlaybackBehavior" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is the maximum playback duration for this ambient bed (assuming a looping sound), ignored if bLimitPlaybackDuration is false\n" },
#endif
		{ "EditCondition", "bLimitPlaybackDuration" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the maximum playback duration for this ambient bed (assuming a looping sound), ignored if bLimitPlaybackDuration is false" },
#endif
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::NewProp_MaxPlaybackDuration = { "MaxPlaybackDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundscapeColorPlaybackSettings, MaxPlaybackDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::NewProp_MaxPlaybackDuration_MetaData), Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::NewProp_MaxPlaybackDuration_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::NewProp_bRandomizeStartingSeekTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::NewProp_bLimitPlaybackDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::NewProp_MinPlaybackDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::NewProp_MaxPlaybackDuration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Soundscape,
		nullptr,
		&NewStructOps,
		"SoundscapeColorPlaybackSettings",
		Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::PropPointers),
		sizeof(FSoundscapeColorPlaybackSettings),
		alignof(FSoundscapeColorPlaybackSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundscapeColorPlaybackSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundscapeColorPlaybackSettings.InnerSingleton, Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundscapeColorPlaybackSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundscapeColorVoiceParams;
class UScriptStruct* FSoundscapeColorVoiceParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundscapeColorVoiceParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundscapeColorVoiceParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundscapeColorVoiceParams, (UObject*)Z_Construct_UPackage__Script_Soundscape(), TEXT("SoundscapeColorVoiceParams"));
	}
	return Z_Registration_Info_UScriptStruct_SoundscapeColorVoiceParams.OuterSingleton;
}
template<> SOUNDSCAPE_API UScriptStruct* StaticStruct<FSoundscapeColorVoiceParams>()
{
	return FSoundscapeColorVoiceParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundscapeColorVoiceParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorVoiceParams_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// New SoundColorVoice Spawning Parameters\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "New SoundColorVoice Spawning Parameters" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundscapeColorVoiceParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundscapeColorVoiceParams>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundscapeColorVoiceParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Soundscape,
		nullptr,
		&NewStructOps,
		"SoundscapeColorVoiceParams",
		nullptr,
		0,
		sizeof(FSoundscapeColorVoiceParams),
		alignof(FSoundscapeColorVoiceParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorVoiceParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundscapeColorVoiceParams_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundscapeColorVoiceParams()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundscapeColorVoiceParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundscapeColorVoiceParams.InnerSingleton, Z_Construct_UScriptStruct_FSoundscapeColorVoiceParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundscapeColorVoiceParams.InnerSingleton;
	}
	void USoundscapeColor::StaticRegisterNativesUSoundscapeColor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundscapeColor);
	UClass* Z_Construct_UClass_USoundscapeColor_NoRegister()
	{
		return USoundscapeColor::StaticClass();
	}
	struct Z_Construct_UClass_USoundscapeColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeBase_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchBase_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModulationBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModulationBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaybackBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnBehavior;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSoundscapeColorParameterChanges_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSoundscapeColorParameterChanges;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundscapeColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Soundscape,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Soundscape" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SoundscapeColor.h" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColor_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "SoundscapeColor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sound to Play\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound to Play" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundscapeColor_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeColor, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColor_Statics::NewProp_Sound_MetaData), Z_Construct_UClass_USoundscapeColor_Statics::NewProp_Sound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColor_Statics::NewProp_VolumeBase_MetaData[] = {
		{ "Category", "SoundscapeColor" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Base Volume Scalar\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
		{ "SliderExponent", "6.0" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base Volume Scalar" },
#endif
		{ "UIMax", "4.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundscapeColor_Statics::NewProp_VolumeBase = { "VolumeBase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeColor, VolumeBase), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColor_Statics::NewProp_VolumeBase_MetaData), Z_Construct_UClass_USoundscapeColor_Statics::NewProp_VolumeBase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColor_Statics::NewProp_PitchBase_MetaData[] = {
		{ "Category", "SoundscapeColor" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.2" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Base Pitch Scalar\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
		{ "SliderExponent", "3.0" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base Pitch Scalar" },
#endif
		{ "UIMax", "4.0" },
		{ "UIMin", "0.2" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundscapeColor_Statics::NewProp_PitchBase = { "PitchBase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeColor, PitchBase), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColor_Statics::NewProp_PitchBase_MetaData), Z_Construct_UClass_USoundscapeColor_Statics::NewProp_PitchBase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColor_Statics::NewProp_ModulationBehavior_MetaData[] = {
		{ "Category", "SoundscapeColor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Modulation behavior\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Modulation behavior" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundscapeColor_Statics::NewProp_ModulationBehavior = { "ModulationBehavior", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeColor, ModulationBehavior), Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColor_Statics::NewProp_ModulationBehavior_MetaData), Z_Construct_UClass_USoundscapeColor_Statics::NewProp_ModulationBehavior_MetaData) }; // 3953643410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColor_Statics::NewProp_PlaybackBehavior_MetaData[] = {
		{ "Category", "SoundscapeColor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Playback behavior\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Playback behavior" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundscapeColor_Statics::NewProp_PlaybackBehavior = { "PlaybackBehavior", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeColor, PlaybackBehavior), Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColor_Statics::NewProp_PlaybackBehavior_MetaData), Z_Construct_UClass_USoundscapeColor_Statics::NewProp_PlaybackBehavior_MetaData) }; // 1970407209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColor_Statics::NewProp_SpawnBehavior_MetaData[] = {
		{ "Category", "SoundscapeColor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Playback behavior\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Playback behavior" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundscapeColor_Statics::NewProp_SpawnBehavior = { "SpawnBehavior", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeColor, SpawnBehavior), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColor_Statics::NewProp_SpawnBehavior_MetaData), Z_Construct_UClass_USoundscapeColor_Statics::NewProp_SpawnBehavior_MetaData) }; // 2836364937
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColor_Statics::NewProp_OnSoundscapeColorParameterChanges_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate call for property changes\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate call for property changes" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USoundscapeColor_Statics::NewProp_OnSoundscapeColorParameterChanges = { "OnSoundscapeColorParameterChanges", nullptr, (EPropertyFlags)0x0010000800080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USoundscapeColor, OnSoundscapeColorParameterChanges), Z_Construct_UDelegateFunction_Soundscape_OnSoundscapeColorParameterChanges__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColor_Statics::NewProp_OnSoundscapeColorParameterChanges_MetaData), Z_Construct_UClass_USoundscapeColor_Statics::NewProp_OnSoundscapeColorParameterChanges_MetaData) }; // 1124256099
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundscapeColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeColor_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeColor_Statics::NewProp_VolumeBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeColor_Statics::NewProp_PitchBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeColor_Statics::NewProp_ModulationBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeColor_Statics::NewProp_PlaybackBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeColor_Statics::NewProp_SpawnBehavior,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeColor_Statics::NewProp_OnSoundscapeColorParameterChanges,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundscapeColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundscapeColor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundscapeColor_Statics::ClassParams = {
		&USoundscapeColor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundscapeColor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColor_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundscapeColor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USoundscapeColor()
	{
		if (!Z_Registration_Info_UClass_USoundscapeColor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundscapeColor.OuterSingleton, Z_Construct_UClass_USoundscapeColor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundscapeColor.OuterSingleton;
	}
	template<> SOUNDSCAPE_API UClass* StaticClass<USoundscapeColor>()
	{
		return USoundscapeColor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundscapeColor);
	USoundscapeColor::~USoundscapeColor() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundscapeColor)
	DEFINE_FUNCTION(UActiveSoundscapeColorVoice::execStopLimitedDurationVoice)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOutTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopLimitedDurationVoice(Z_Param_FadeOutTime);
		P_NATIVE_END;
	}
	void UActiveSoundscapeColorVoice::StaticRegisterNativesUActiveSoundscapeColorVoice()
	{
		UClass* Class = UActiveSoundscapeColorVoice::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StopLimitedDurationVoice", &UActiveSoundscapeColorVoice::execStopLimitedDurationVoice },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActiveSoundscapeColorVoice_StopLimitedDurationVoice_Statics
	{
		struct ActiveSoundscapeColorVoice_eventStopLimitedDurationVoice_Parms
		{
			float FadeOutTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UActiveSoundscapeColorVoice_StopLimitedDurationVoice_Statics::NewProp_FadeOutTime = { "FadeOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActiveSoundscapeColorVoice_eventStopLimitedDurationVoice_Parms, FadeOutTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActiveSoundscapeColorVoice_StopLimitedDurationVoice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActiveSoundscapeColorVoice_StopLimitedDurationVoice_Statics::NewProp_FadeOutTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActiveSoundscapeColorVoice_StopLimitedDurationVoice_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Limited duration timer\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Limited duration timer" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActiveSoundscapeColorVoice_StopLimitedDurationVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActiveSoundscapeColorVoice, nullptr, "StopLimitedDurationVoice", nullptr, nullptr, Z_Construct_UFunction_UActiveSoundscapeColorVoice_StopLimitedDurationVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActiveSoundscapeColorVoice_StopLimitedDurationVoice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActiveSoundscapeColorVoice_StopLimitedDurationVoice_Statics::ActiveSoundscapeColorVoice_eventStopLimitedDurationVoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActiveSoundscapeColorVoice_StopLimitedDurationVoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActiveSoundscapeColorVoice_StopLimitedDurationVoice_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActiveSoundscapeColorVoice_StopLimitedDurationVoice_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UActiveSoundscapeColorVoice_StopLimitedDurationVoice_Statics::ActiveSoundscapeColorVoice_eventStopLimitedDurationVoice_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UActiveSoundscapeColorVoice_StopLimitedDurationVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActiveSoundscapeColorVoice_StopLimitedDurationVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActiveSoundscapeColorVoice);
	UClass* Z_Construct_UClass_UActiveSoundscapeColorVoice_NoRegister()
	{
		return UActiveSoundscapeColorVoice::StaticClass();
	}
	struct Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimerHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFree_MetaData[];
#endif
		static void NewProp_bFree_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFree;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Soundscape,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActiveSoundscapeColorVoice_StopLimitedDurationVoice, "StopLimitedDurationVoice" }, // 1429128021
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoundscapeColor.h" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "Category", "ActiveSoundscapeColorVoice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~UObject Interface End\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActiveSoundscapeColorVoice, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::NewProp_AudioComponent_MetaData), Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::NewProp_AudioComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::NewProp_TimerHandle_MetaData[] = {
		{ "Category", "ActiveSoundscapeColorVoice" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::NewProp_TimerHandle = { "TimerHandle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActiveSoundscapeColorVoice, TimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::NewProp_TimerHandle_MetaData), Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::NewProp_TimerHandle_MetaData) }; // 3999327403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::NewProp_bFree_MetaData[] = {
		{ "Category", "ActiveSoundscapeColorVoice" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
	};
#endif
	void Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::NewProp_bFree_SetBit(void* Obj)
	{
		((UActiveSoundscapeColorVoice*)Obj)->bFree = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::NewProp_bFree = { "bFree", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UActiveSoundscapeColorVoice), &Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::NewProp_bFree_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::NewProp_bFree_MetaData), Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::NewProp_bFree_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::NewProp_AudioComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::NewProp_TimerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::NewProp_bFree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActiveSoundscapeColorVoice>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::ClassParams = {
		&UActiveSoundscapeColorVoice::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::Class_MetaDataParams), Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UActiveSoundscapeColorVoice()
	{
		if (!Z_Registration_Info_UClass_UActiveSoundscapeColorVoice.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActiveSoundscapeColorVoice.OuterSingleton, Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActiveSoundscapeColorVoice.OuterSingleton;
	}
	template<> SOUNDSCAPE_API UClass* StaticClass<UActiveSoundscapeColorVoice>()
	{
		return UActiveSoundscapeColorVoice::StaticClass();
	}
	UActiveSoundscapeColorVoice::UActiveSoundscapeColorVoice(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActiveSoundscapeColorVoice);
	UActiveSoundscapeColorVoice::~UActiveSoundscapeColorVoice() {}
	DEFINE_FUNCTION(UActiveSoundscapeColor::execUpdateSoundscapeColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSoundscapeColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActiveSoundscapeColor::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActiveSoundscapeColor::execStop)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ColorFadeOutTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop(Z_Param_ColorFadeOutTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActiveSoundscapeColor::execPlay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ColorVolume);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ColorPitch);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ColorFadeInTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play(Z_Param_ColorVolume,Z_Param_ColorPitch,Z_Param_ColorFadeInTime);
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UActiveSoundscapeColor::execOnSoundscapeColorParameterChange)
	{
		P_GET_OBJECT(USoundscapeColor,Z_Param_SoundscapeColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSoundscapeColorParameterChange(Z_Param_SoundscapeColor);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UActiveSoundscapeColor::StaticRegisterNativesUActiveSoundscapeColor()
	{
		UClass* Class = UActiveSoundscapeColor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsPlaying", &UActiveSoundscapeColor::execIsPlaying },
#if WITH_EDITOR
			{ "OnSoundscapeColorParameterChange", &UActiveSoundscapeColor::execOnSoundscapeColorParameterChange },
#endif // WITH_EDITOR
			{ "Play", &UActiveSoundscapeColor::execPlay },
			{ "Stop", &UActiveSoundscapeColor::execStop },
			{ "UpdateSoundscapeColor", &UActiveSoundscapeColor::execUpdateSoundscapeColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActiveSoundscapeColor_IsPlaying_Statics
	{
		struct ActiveSoundscapeColor_eventIsPlaying_Parms
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
	void Z_Construct_UFunction_UActiveSoundscapeColor_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActiveSoundscapeColor_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActiveSoundscapeColor_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActiveSoundscapeColor_eventIsPlaying_Parms), &Z_Construct_UFunction_UActiveSoundscapeColor_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActiveSoundscapeColor_IsPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActiveSoundscapeColor_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActiveSoundscapeColor_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Soundscape" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is playing\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is playing" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActiveSoundscapeColor_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActiveSoundscapeColor, nullptr, "IsPlaying", nullptr, nullptr, Z_Construct_UFunction_UActiveSoundscapeColor_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActiveSoundscapeColor_IsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActiveSoundscapeColor_IsPlaying_Statics::ActiveSoundscapeColor_eventIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActiveSoundscapeColor_IsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActiveSoundscapeColor_IsPlaying_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActiveSoundscapeColor_IsPlaying_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UActiveSoundscapeColor_IsPlaying_Statics::ActiveSoundscapeColor_eventIsPlaying_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UActiveSoundscapeColor_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActiveSoundscapeColor_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UActiveSoundscapeColor_OnSoundscapeColorParameterChange_Statics
	{
		struct ActiveSoundscapeColor_eventOnSoundscapeColorParameterChange_Parms
		{
			const USoundscapeColor* SoundscapeColor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundscapeColor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundscapeColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActiveSoundscapeColor_OnSoundscapeColorParameterChange_Statics::NewProp_SoundscapeColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActiveSoundscapeColor_OnSoundscapeColorParameterChange_Statics::NewProp_SoundscapeColor = { "SoundscapeColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActiveSoundscapeColor_eventOnSoundscapeColorParameterChange_Parms, SoundscapeColor), Z_Construct_UClass_USoundscapeColor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActiveSoundscapeColor_OnSoundscapeColorParameterChange_Statics::NewProp_SoundscapeColor_MetaData), Z_Construct_UFunction_UActiveSoundscapeColor_OnSoundscapeColorParameterChange_Statics::NewProp_SoundscapeColor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActiveSoundscapeColor_OnSoundscapeColorParameterChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActiveSoundscapeColor_OnSoundscapeColorParameterChange_Statics::NewProp_SoundscapeColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActiveSoundscapeColor_OnSoundscapeColorParameterChange_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function bound to the Parameter change delegate \n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function bound to the Parameter change delegate" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActiveSoundscapeColor_OnSoundscapeColorParameterChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActiveSoundscapeColor, nullptr, "OnSoundscapeColorParameterChange", nullptr, nullptr, Z_Construct_UFunction_UActiveSoundscapeColor_OnSoundscapeColorParameterChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActiveSoundscapeColor_OnSoundscapeColorParameterChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActiveSoundscapeColor_OnSoundscapeColorParameterChange_Statics::ActiveSoundscapeColor_eventOnSoundscapeColorParameterChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActiveSoundscapeColor_OnSoundscapeColorParameterChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActiveSoundscapeColor_OnSoundscapeColorParameterChange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActiveSoundscapeColor_OnSoundscapeColorParameterChange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UActiveSoundscapeColor_OnSoundscapeColorParameterChange_Statics::ActiveSoundscapeColor_eventOnSoundscapeColorParameterChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UActiveSoundscapeColor_OnSoundscapeColorParameterChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActiveSoundscapeColor_OnSoundscapeColorParameterChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UActiveSoundscapeColor_Play_Statics
	{
		struct ActiveSoundscapeColor_eventPlay_Parms
		{
			float ColorVolume;
			float ColorPitch;
			float ColorFadeInTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ColorVolume;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ColorPitch;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ColorFadeInTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UActiveSoundscapeColor_Play_Statics::NewProp_ColorVolume = { "ColorVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActiveSoundscapeColor_eventPlay_Parms, ColorVolume), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UActiveSoundscapeColor_Play_Statics::NewProp_ColorPitch = { "ColorPitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActiveSoundscapeColor_eventPlay_Parms, ColorPitch), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UActiveSoundscapeColor_Play_Statics::NewProp_ColorFadeInTime = { "ColorFadeInTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActiveSoundscapeColor_eventPlay_Parms, ColorFadeInTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActiveSoundscapeColor_Play_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActiveSoundscapeColor_Play_Statics::NewProp_ColorVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActiveSoundscapeColor_Play_Statics::NewProp_ColorPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActiveSoundscapeColor_Play_Statics::NewProp_ColorFadeInTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActiveSoundscapeColor_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Soundscape" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Play Active Soundscape Color\n" },
#endif
		{ "CPP_Default_ColorFadeInTime", "1.000000" },
		{ "CPP_Default_ColorPitch", "1.000000" },
		{ "CPP_Default_ColorVolume", "1.000000" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Play Active Soundscape Color" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActiveSoundscapeColor_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActiveSoundscapeColor, nullptr, "Play", nullptr, nullptr, Z_Construct_UFunction_UActiveSoundscapeColor_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActiveSoundscapeColor_Play_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActiveSoundscapeColor_Play_Statics::ActiveSoundscapeColor_eventPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActiveSoundscapeColor_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActiveSoundscapeColor_Play_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActiveSoundscapeColor_Play_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UActiveSoundscapeColor_Play_Statics::ActiveSoundscapeColor_eventPlay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UActiveSoundscapeColor_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActiveSoundscapeColor_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActiveSoundscapeColor_Stop_Statics
	{
		struct ActiveSoundscapeColor_eventStop_Parms
		{
			float ColorFadeOutTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ColorFadeOutTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UActiveSoundscapeColor_Stop_Statics::NewProp_ColorFadeOutTime = { "ColorFadeOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActiveSoundscapeColor_eventStop_Parms, ColorFadeOutTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActiveSoundscapeColor_Stop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActiveSoundscapeColor_Stop_Statics::NewProp_ColorFadeOutTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActiveSoundscapeColor_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Soundscape" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stop Active Soundscape Color\n" },
#endif
		{ "CPP_Default_ColorFadeOutTime", "1.000000" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop Active Soundscape Color" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActiveSoundscapeColor_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActiveSoundscapeColor, nullptr, "Stop", nullptr, nullptr, Z_Construct_UFunction_UActiveSoundscapeColor_Stop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActiveSoundscapeColor_Stop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActiveSoundscapeColor_Stop_Statics::ActiveSoundscapeColor_eventStop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActiveSoundscapeColor_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActiveSoundscapeColor_Stop_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActiveSoundscapeColor_Stop_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UActiveSoundscapeColor_Stop_Statics::ActiveSoundscapeColor_eventStop_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UActiveSoundscapeColor_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActiveSoundscapeColor_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActiveSoundscapeColor_UpdateSoundscapeColor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActiveSoundscapeColor_UpdateSoundscapeColor_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Timer Update Call\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Timer Update Call" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActiveSoundscapeColor_UpdateSoundscapeColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActiveSoundscapeColor, nullptr, "UpdateSoundscapeColor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActiveSoundscapeColor_UpdateSoundscapeColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActiveSoundscapeColor_UpdateSoundscapeColor_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UActiveSoundscapeColor_UpdateSoundscapeColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActiveSoundscapeColor_UpdateSoundscapeColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActiveSoundscapeColor);
	UClass* Z_Construct_UClass_UActiveSoundscapeColor_NoRegister()
	{
		return UActiveSoundscapeColor::StaticClass();
	}
	struct Z_Construct_UClass_UActiveSoundscapeColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModulationBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModulationBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaybackBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnBehavior;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundscapeColorVoicePool_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundscapeColorVoicePool_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundscapeColorVoicePool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActiveSoundscapeColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Soundscape,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSoundscapeColor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UActiveSoundscapeColor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActiveSoundscapeColor_IsPlaying, "IsPlaying" }, // 204041459
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UActiveSoundscapeColor_OnSoundscapeColorParameterChange, "OnSoundscapeColorParameterChange" }, // 1039256853
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UActiveSoundscapeColor_Play, "Play" }, // 2594273706
		{ &Z_Construct_UFunction_UActiveSoundscapeColor_Stop, "Stop" }, // 4090005294
		{ &Z_Construct_UFunction_UActiveSoundscapeColor_UpdateSoundscapeColor, "UpdateSoundscapeColor" }, // 4070284267
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSoundscapeColor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActiveSoundscapeColor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Soundscape" },
		{ "IncludePath", "SoundscapeColor.h" },
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActiveSoundscapeColor_Statics::NewProp_Sound_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sound to Play\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound to Play" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActiveSoundscapeColor_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActiveSoundscapeColor, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSoundscapeColor_Statics::NewProp_Sound_MetaData), Z_Construct_UClass_UActiveSoundscapeColor_Statics::NewProp_Sound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActiveSoundscapeColor_Statics::NewProp_ModulationBehavior_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Modulation behavior\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Modulation behavior" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActiveSoundscapeColor_Statics::NewProp_ModulationBehavior = { "ModulationBehavior", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActiveSoundscapeColor, ModulationBehavior), Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSoundscapeColor_Statics::NewProp_ModulationBehavior_MetaData), Z_Construct_UClass_UActiveSoundscapeColor_Statics::NewProp_ModulationBehavior_MetaData) }; // 3953643410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActiveSoundscapeColor_Statics::NewProp_PlaybackBehavior_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Playback behavior\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Playback behavior" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActiveSoundscapeColor_Statics::NewProp_PlaybackBehavior = { "PlaybackBehavior", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActiveSoundscapeColor, PlaybackBehavior), Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSoundscapeColor_Statics::NewProp_PlaybackBehavior_MetaData), Z_Construct_UClass_UActiveSoundscapeColor_Statics::NewProp_PlaybackBehavior_MetaData) }; // 1970407209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActiveSoundscapeColor_Statics::NewProp_SpawnBehavior_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Playback behavior\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Playback behavior" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActiveSoundscapeColor_Statics::NewProp_SpawnBehavior = { "SpawnBehavior", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActiveSoundscapeColor, SpawnBehavior), Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSoundscapeColor_Statics::NewProp_SpawnBehavior_MetaData), Z_Construct_UClass_UActiveSoundscapeColor_Statics::NewProp_SpawnBehavior_MetaData) }; // 2836364937
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActiveSoundscapeColor_Statics::NewProp_SoundscapeColorVoicePool_Inner = { "SoundscapeColorVoicePool", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActiveSoundscapeColorVoice_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActiveSoundscapeColor_Statics::NewProp_SoundscapeColorVoicePool_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Audio Component Pool\n" },
#endif
		{ "ModuleRelativePath", "Public/SoundscapeColor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Audio Component Pool" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActiveSoundscapeColor_Statics::NewProp_SoundscapeColorVoicePool = { "SoundscapeColorVoicePool", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActiveSoundscapeColor, SoundscapeColorVoicePool), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSoundscapeColor_Statics::NewProp_SoundscapeColorVoicePool_MetaData), Z_Construct_UClass_UActiveSoundscapeColor_Statics::NewProp_SoundscapeColorVoicePool_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActiveSoundscapeColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActiveSoundscapeColor_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActiveSoundscapeColor_Statics::NewProp_ModulationBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActiveSoundscapeColor_Statics::NewProp_PlaybackBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActiveSoundscapeColor_Statics::NewProp_SpawnBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActiveSoundscapeColor_Statics::NewProp_SoundscapeColorVoicePool_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActiveSoundscapeColor_Statics::NewProp_SoundscapeColorVoicePool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActiveSoundscapeColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActiveSoundscapeColor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActiveSoundscapeColor_Statics::ClassParams = {
		&UActiveSoundscapeColor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActiveSoundscapeColor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSoundscapeColor_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSoundscapeColor_Statics::Class_MetaDataParams), Z_Construct_UClass_UActiveSoundscapeColor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActiveSoundscapeColor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UActiveSoundscapeColor()
	{
		if (!Z_Registration_Info_UClass_UActiveSoundscapeColor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActiveSoundscapeColor.OuterSingleton, Z_Construct_UClass_UActiveSoundscapeColor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActiveSoundscapeColor.OuterSingleton;
	}
	template<> SOUNDSCAPE_API UClass* StaticClass<UActiveSoundscapeColor>()
	{
		return UActiveSoundscapeColor::StaticClass();
	}
	UActiveSoundscapeColor::UActiveSoundscapeColor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActiveSoundscapeColor);
	UActiveSoundscapeColor::~UActiveSoundscapeColor() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_SoundScape_Source_SoundScape_Public_SoundscapeColor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_SoundScape_Source_SoundScape_Public_SoundscapeColor_h_Statics::EnumInfo[] = {
		{ ESoundscapeColorAltitudeClampMode_StaticEnum, TEXT("ESoundscapeColorAltitudeClampMode"), &Z_Registration_Info_UEnum_ESoundscapeColorAltitudeClampMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1637459828U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_SoundScape_Source_SoundScape_Public_SoundscapeColor_h_Statics::ScriptStructInfo[] = {
		{ FSoundscapeColorSpawnSettings::StaticStruct, Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics::NewStructOps, TEXT("SoundscapeColorSpawnSettings"), &Z_Registration_Info_UScriptStruct_SoundscapeColorSpawnSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundscapeColorSpawnSettings), 2836364937U) },
		{ FSoundscapeColorModulationSettings::StaticStruct, Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics::NewStructOps, TEXT("SoundscapeColorModulationSettings"), &Z_Registration_Info_UScriptStruct_SoundscapeColorModulationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundscapeColorModulationSettings), 3953643410U) },
		{ FSoundscapeColorPlaybackSettings::StaticStruct, Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics::NewStructOps, TEXT("SoundscapeColorPlaybackSettings"), &Z_Registration_Info_UScriptStruct_SoundscapeColorPlaybackSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundscapeColorPlaybackSettings), 1970407209U) },
		{ FSoundscapeColorVoiceParams::StaticStruct, Z_Construct_UScriptStruct_FSoundscapeColorVoiceParams_Statics::NewStructOps, TEXT("SoundscapeColorVoiceParams"), &Z_Registration_Info_UScriptStruct_SoundscapeColorVoiceParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundscapeColorVoiceParams), 3515022380U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_SoundScape_Source_SoundScape_Public_SoundscapeColor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundscapeColor, USoundscapeColor::StaticClass, TEXT("USoundscapeColor"), &Z_Registration_Info_UClass_USoundscapeColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundscapeColor), 2368593320U) },
		{ Z_Construct_UClass_UActiveSoundscapeColorVoice, UActiveSoundscapeColorVoice::StaticClass, TEXT("UActiveSoundscapeColorVoice"), &Z_Registration_Info_UClass_UActiveSoundscapeColorVoice, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActiveSoundscapeColorVoice), 3520041934U) },
		{ Z_Construct_UClass_UActiveSoundscapeColor, UActiveSoundscapeColor::StaticClass, TEXT("UActiveSoundscapeColor"), &Z_Registration_Info_UClass_UActiveSoundscapeColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActiveSoundscapeColor), 3044033504U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_SoundScape_Source_SoundScape_Public_SoundscapeColor_h_2920550824(TEXT("/Script/Soundscape"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_SoundScape_Source_SoundScape_Public_SoundscapeColor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_SoundScape_Source_SoundScape_Public_SoundscapeColor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_SoundScape_Source_SoundScape_Public_SoundscapeColor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_SoundScape_Source_SoundScape_Public_SoundscapeColor_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_SoundScape_Source_SoundScape_Public_SoundscapeColor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_SoundScape_Source_SoundScape_Public_SoundscapeColor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
