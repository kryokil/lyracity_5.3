// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleMassCrowd/Public/Animation/MassCharacterStopPrediction_AnimInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCharacterStopPrediction_AnimInput() {}
// Cross Module References
	CITYSAMPLEMASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput();
	MASSNAVIGATION_API UEnum* Z_Construct_UEnum_MassNavigation_EMassMovementAction();
	UPackage* Z_Construct_UPackage__Script_CitySampleMassCrowd();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassCharacterStopPrediction_AnimInput;
class UScriptStruct* FMassCharacterStopPrediction_AnimInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassCharacterStopPrediction_AnimInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassCharacterStopPrediction_AnimInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput, (UObject*)Z_Construct_UPackage__Script_CitySampleMassCrowd(), TEXT("MassCharacterStopPrediction_AnimInput"));
	}
	return Z_Registration_Info_UScriptStruct_MassCharacterStopPrediction_AnimInput.OuterSingleton;
}
template<> CITYSAMPLEMASSCROWD_API UScriptStruct* StaticStruct<FMassCharacterStopPrediction_AnimInput>()
{
	return FMassCharacterStopPrediction_AnimInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToEndOfPath_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToEndOfPath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActionAtEndOfPath_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionAtEndOfPath_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionAtEndOfPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/MassCharacterStopPrediction_AnimInput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassCharacterStopPrediction_AnimInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput_Statics::NewProp_DistanceToEndOfPath_MetaData[] = {
		{ "Category", "MassCrowd" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Approximate distance to end of path. This distance is the same the AI uses to handle end of path.\n" },
#endif
		{ "ModuleRelativePath", "Public/Animation/MassCharacterStopPrediction_AnimInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Approximate distance to end of path. This distance is the same the AI uses to handle end of path." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput_Statics::NewProp_DistanceToEndOfPath = { "DistanceToEndOfPath", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassCharacterStopPrediction_AnimInput, DistanceToEndOfPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput_Statics::NewProp_DistanceToEndOfPath_MetaData), Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput_Statics::NewProp_DistanceToEndOfPath_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput_Statics::NewProp_ActionAtEndOfPath_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput_Statics::NewProp_ActionAtEndOfPath_MetaData[] = {
		{ "Category", "MassCrowd" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// What the AI expects to do at the end of the path (i.e. keep on moving, stand).\n" },
#endif
		{ "ModuleRelativePath", "Public/Animation/MassCharacterStopPrediction_AnimInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What the AI expects to do at the end of the path (i.e. keep on moving, stand)." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput_Statics::NewProp_ActionAtEndOfPath = { "ActionAtEndOfPath", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassCharacterStopPrediction_AnimInput, ActionAtEndOfPath), Z_Construct_UEnum_MassNavigation_EMassMovementAction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput_Statics::NewProp_ActionAtEndOfPath_MetaData), Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput_Statics::NewProp_ActionAtEndOfPath_MetaData) }; // 971211434
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput_Statics::NewProp_DistanceToEndOfPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput_Statics::NewProp_ActionAtEndOfPath_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput_Statics::NewProp_ActionAtEndOfPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySampleMassCrowd,
		nullptr,
		&NewStructOps,
		"MassCharacterStopPrediction_AnimInput",
		Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput_Statics::PropPointers),
		sizeof(FMassCharacterStopPrediction_AnimInput),
		alignof(FMassCharacterStopPrediction_AnimInput),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput()
	{
		if (!Z_Registration_Info_UScriptStruct_MassCharacterStopPrediction_AnimInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassCharacterStopPrediction_AnimInput.InnerSingleton, Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassCharacterStopPrediction_AnimInput.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCharacterStopPrediction_AnimInput_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCharacterStopPrediction_AnimInput_h_Statics::ScriptStructInfo[] = {
		{ FMassCharacterStopPrediction_AnimInput::StaticStruct, Z_Construct_UScriptStruct_FMassCharacterStopPrediction_AnimInput_Statics::NewStructOps, TEXT("MassCharacterStopPrediction_AnimInput"), &Z_Registration_Info_UScriptStruct_MassCharacterStopPrediction_AnimInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassCharacterStopPrediction_AnimInput), 2325085377U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCharacterStopPrediction_AnimInput_h_1453513189(TEXT("/Script/CitySampleMassCrowd"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCharacterStopPrediction_AnimInput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCharacterStopPrediction_AnimInput_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
