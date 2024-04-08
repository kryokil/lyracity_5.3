// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleMassCrowd/Public/Animation/MassCrowdAnimationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCrowdAnimationSettings() {}
// Cross Module References
	CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdAnimationSettings();
	CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdAnimationSettings_NoRegister();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassModuleSettings();
	UPackage* Z_Construct_UPackage__Script_CitySampleMassCrowd();
// End Cross Module References
	DEFINE_FUNCTION(UMassCrowdAnimationSettings::execGetContextualAnimOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UMassCrowdAnimationSettings::GetContextualAnimOptions();
		P_NATIVE_END;
	}
	void UMassCrowdAnimationSettings::StaticRegisterNativesUMassCrowdAnimationSettings()
	{
		UClass* Class = UMassCrowdAnimationSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetContextualAnimOptions", &UMassCrowdAnimationSettings::execGetContextualAnimOptions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMassCrowdAnimationSettings_GetContextualAnimOptions_Statics
	{
		struct MassCrowdAnimationSettings_eventGetContextualAnimOptions_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMassCrowdAnimationSettings_GetContextualAnimOptions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMassCrowdAnimationSettings_GetContextualAnimOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassCrowdAnimationSettings_eventGetContextualAnimOptions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassCrowdAnimationSettings_GetContextualAnimOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassCrowdAnimationSettings_GetContextualAnimOptions_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassCrowdAnimationSettings_GetContextualAnimOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassCrowdAnimationSettings_GetContextualAnimOptions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/MassCrowdAnimationSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassCrowdAnimationSettings_GetContextualAnimOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassCrowdAnimationSettings, nullptr, "GetContextualAnimOptions", nullptr, nullptr, Z_Construct_UFunction_UMassCrowdAnimationSettings_GetContextualAnimOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassCrowdAnimationSettings_GetContextualAnimOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMassCrowdAnimationSettings_GetContextualAnimOptions_Statics::MassCrowdAnimationSettings_eventGetContextualAnimOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassCrowdAnimationSettings_GetContextualAnimOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassCrowdAnimationSettings_GetContextualAnimOptions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassCrowdAnimationSettings_GetContextualAnimOptions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMassCrowdAnimationSettings_GetContextualAnimOptions_Statics::MassCrowdAnimationSettings_eventGetContextualAnimOptions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMassCrowdAnimationSettings_GetContextualAnimOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassCrowdAnimationSettings_GetContextualAnimOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCrowdAnimationSettings);
	UClass* Z_Construct_UClass_UMassCrowdAnimationSettings_NoRegister()
	{
		return UMassCrowdAnimationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMassCrowdAnimationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CrowdAnimFootLODTraceFrequencyPerLOD_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrowdAnimFootLODTraceFrequencyPerLOD_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CrowdAnimFootLODTraceFrequencyPerLOD;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CommonCrowdContextualAnimNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonCrowdContextualAnimNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CommonCrowdContextualAnimNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCrowdAnimationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassModuleSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySampleMassCrowd,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdAnimationSettings_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMassCrowdAnimationSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMassCrowdAnimationSettings_GetContextualAnimOptions, "GetContextualAnimOptions" }, // 185401634
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdAnimationSettings_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdAnimationSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "CitySample Mass Crowd Animation" },
		{ "IncludePath", "Animation/MassCrowdAnimationSettings.h" },
		{ "ModuleRelativePath", "Public/Animation/MassCrowdAnimationSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMassCrowdAnimationSettings_Statics::NewProp_CrowdAnimFootLODTraceFrequencyPerLOD_Inner = { "CrowdAnimFootLODTraceFrequencyPerLOD", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdAnimationSettings_Statics::NewProp_CrowdAnimFootLODTraceFrequencyPerLOD_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Public/Animation/MassCrowdAnimationSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassCrowdAnimationSettings_Statics::NewProp_CrowdAnimFootLODTraceFrequencyPerLOD = { "CrowdAnimFootLODTraceFrequencyPerLOD", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassCrowdAnimationSettings, CrowdAnimFootLODTraceFrequencyPerLOD), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdAnimationSettings_Statics::NewProp_CrowdAnimFootLODTraceFrequencyPerLOD_MetaData), Z_Construct_UClass_UMassCrowdAnimationSettings_Statics::NewProp_CrowdAnimFootLODTraceFrequencyPerLOD_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMassCrowdAnimationSettings_Statics::NewProp_CommonCrowdContextualAnimNames_Inner = { "CommonCrowdContextualAnimNames", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdAnimationSettings_Statics::NewProp_CommonCrowdContextualAnimNames_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/Animation/MassCrowdAnimationSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassCrowdAnimationSettings_Statics::NewProp_CommonCrowdContextualAnimNames = { "CommonCrowdContextualAnimNames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassCrowdAnimationSettings, CommonCrowdContextualAnimNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdAnimationSettings_Statics::NewProp_CommonCrowdContextualAnimNames_MetaData), Z_Construct_UClass_UMassCrowdAnimationSettings_Statics::NewProp_CommonCrowdContextualAnimNames_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassCrowdAnimationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdAnimationSettings_Statics::NewProp_CrowdAnimFootLODTraceFrequencyPerLOD_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdAnimationSettings_Statics::NewProp_CrowdAnimFootLODTraceFrequencyPerLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdAnimationSettings_Statics::NewProp_CommonCrowdContextualAnimNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdAnimationSettings_Statics::NewProp_CommonCrowdContextualAnimNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCrowdAnimationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCrowdAnimationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCrowdAnimationSettings_Statics::ClassParams = {
		&UMassCrowdAnimationSettings::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMassCrowdAnimationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdAnimationSettings_Statics::PropPointers),
		0,
		0x001020A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdAnimationSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassCrowdAnimationSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdAnimationSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMassCrowdAnimationSettings()
	{
		if (!Z_Registration_Info_UClass_UMassCrowdAnimationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCrowdAnimationSettings.OuterSingleton, Z_Construct_UClass_UMassCrowdAnimationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCrowdAnimationSettings.OuterSingleton;
	}
	template<> CITYSAMPLEMASSCROWD_API UClass* StaticClass<UMassCrowdAnimationSettings>()
	{
		return UMassCrowdAnimationSettings::StaticClass();
	}
	UMassCrowdAnimationSettings::UMassCrowdAnimationSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCrowdAnimationSettings);
	UMassCrowdAnimationSettings::~UMassCrowdAnimationSettings() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCrowdAnimationSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCrowdAnimationSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassCrowdAnimationSettings, UMassCrowdAnimationSettings::StaticClass, TEXT("UMassCrowdAnimationSettings"), &Z_Registration_Info_UClass_UMassCrowdAnimationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCrowdAnimationSettings), 551533891U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCrowdAnimationSettings_h_2705837868(TEXT("/Script/CitySampleMassCrowd"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCrowdAnimationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCrowdAnimationSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
