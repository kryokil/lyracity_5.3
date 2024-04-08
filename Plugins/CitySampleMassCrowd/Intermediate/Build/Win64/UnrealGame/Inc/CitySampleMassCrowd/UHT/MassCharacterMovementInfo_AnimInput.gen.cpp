// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleMassCrowd/Public/Animation/MassCharacterMovementInfo_AnimInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCharacterMovementInfo_AnimInput() {}
// Cross Module References
	CITYSAMPLEMASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MASSNAVIGATION_API UEnum* Z_Construct_UEnum_MassNavigation_EMassMovementAction();
	UPackage* Z_Construct_UPackage__Script_CitySampleMassCrowd();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassCharacterMovementInfo_AnimInput;
class UScriptStruct* FMassCharacterMovementInfo_AnimInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassCharacterMovementInfo_AnimInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassCharacterMovementInfo_AnimInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput, (UObject*)Z_Construct_UPackage__Script_CitySampleMassCrowd(), TEXT("MassCharacterMovementInfo_AnimInput"));
	}
	return Z_Registration_Info_UScriptStruct_MassCharacterMovementInfo_AnimInput.OuterSingleton;
}
template<> CITYSAMPLEMASSCROWD_API UScriptStruct* StaticStruct<FMassCharacterMovementInfo_AnimInput>()
{
	return FMassCharacterMovementInfo_AnimInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActionStartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentActionStartTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreviousMovementAction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousMovementAction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviousMovementAction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentMovementAction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMovementAction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentMovementAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/MassCharacterMovementInfo_AnimInput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassCharacterMovementInfo_AnimInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::NewProp_DesiredVelocity_MetaData[] = {
		{ "Category", "MassCrowd" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current raw desired velocity from steering.\n" },
#endif
		{ "ModuleRelativePath", "Public/Animation/MassCharacterMovementInfo_AnimInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current raw desired velocity from steering." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::NewProp_DesiredVelocity = { "DesiredVelocity", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassCharacterMovementInfo_AnimInput, DesiredVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::NewProp_DesiredVelocity_MetaData), Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::NewProp_DesiredVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::NewProp_CurrentActionStartTime_MetaData[] = {
		{ "Category", "MassCrowd" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Global time in seconds when the current action started.\n" },
#endif
		{ "ModuleRelativePath", "Public/Animation/MassCharacterMovementInfo_AnimInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Global time in seconds when the current action started." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::NewProp_CurrentActionStartTime = { "CurrentActionStartTime", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassCharacterMovementInfo_AnimInput, CurrentActionStartTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::NewProp_CurrentActionStartTime_MetaData), Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::NewProp_CurrentActionStartTime_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::NewProp_PreviousMovementAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::NewProp_PreviousMovementAction_MetaData[] = {
		{ "Category", "MassCrowd" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Previous movement action.\n" },
#endif
		{ "ModuleRelativePath", "Public/Animation/MassCharacterMovementInfo_AnimInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Previous movement action." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::NewProp_PreviousMovementAction = { "PreviousMovementAction", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassCharacterMovementInfo_AnimInput, PreviousMovementAction), Z_Construct_UEnum_MassNavigation_EMassMovementAction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::NewProp_PreviousMovementAction_MetaData), Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::NewProp_PreviousMovementAction_MetaData) }; // 971211434
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::NewProp_CurrentMovementAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::NewProp_CurrentMovementAction_MetaData[] = {
		{ "Category", "MassCrowd" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current movement action.\n" },
#endif
		{ "ModuleRelativePath", "Public/Animation/MassCharacterMovementInfo_AnimInput.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current movement action." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::NewProp_CurrentMovementAction = { "CurrentMovementAction", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassCharacterMovementInfo_AnimInput, CurrentMovementAction), Z_Construct_UEnum_MassNavigation_EMassMovementAction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::NewProp_CurrentMovementAction_MetaData), Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::NewProp_CurrentMovementAction_MetaData) }; // 971211434
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::NewProp_DesiredVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::NewProp_CurrentActionStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::NewProp_PreviousMovementAction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::NewProp_PreviousMovementAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::NewProp_CurrentMovementAction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::NewProp_CurrentMovementAction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySampleMassCrowd,
		nullptr,
		&NewStructOps,
		"MassCharacterMovementInfo_AnimInput",
		Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::PropPointers),
		sizeof(FMassCharacterMovementInfo_AnimInput),
		alignof(FMassCharacterMovementInfo_AnimInput),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput()
	{
		if (!Z_Registration_Info_UScriptStruct_MassCharacterMovementInfo_AnimInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassCharacterMovementInfo_AnimInput.InnerSingleton, Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassCharacterMovementInfo_AnimInput.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCharacterMovementInfo_AnimInput_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCharacterMovementInfo_AnimInput_h_Statics::ScriptStructInfo[] = {
		{ FMassCharacterMovementInfo_AnimInput::StaticStruct, Z_Construct_UScriptStruct_FMassCharacterMovementInfo_AnimInput_Statics::NewStructOps, TEXT("MassCharacterMovementInfo_AnimInput"), &Z_Registration_Info_UScriptStruct_MassCharacterMovementInfo_AnimInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassCharacterMovementInfo_AnimInput), 929262749U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCharacterMovementInfo_AnimInput_h_1276484304(TEXT("/Script/CitySampleMassCrowd"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCharacterMovementInfo_AnimInput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_Animation_MassCharacterMovementInfo_AnimInput_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
