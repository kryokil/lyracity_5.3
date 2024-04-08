// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/UI/CitySampleOptionsPanel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleOptionsPanel() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleOptionsPanel();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleOptionsPanel_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySamplePanel();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	DEFINE_FUNCTION(UCitySampleOptionsPanel::execClearCurrentOption)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCurrentOption();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleOptionsPanel::execDecrementCurrentOption)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCitySampleButtonPrompt**)Z_Param__Result=P_THIS->DecrementCurrentOption();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleOptionsPanel::execIncrementCurrentOption)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCitySampleButtonPrompt**)Z_Param__Result=P_THIS->IncrementCurrentOption();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleOptionsPanel::execSetCurrentOption)
	{
		P_GET_OBJECT(UCitySampleButtonPrompt,Z_Param_Option);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCitySampleButtonPrompt**)Z_Param__Result=P_THIS->SetCurrentOption(Z_Param_Option);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleOptionsPanel::execSetCurrentOptionByIndexClamped)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCitySampleButtonPrompt**)Z_Param__Result=P_THIS->SetCurrentOptionByIndexClamped(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleOptionsPanel::execSetCurrentOptionByIndexChecked)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCitySampleButtonPrompt**)Z_Param__Result=P_THIS->SetCurrentOptionByIndexChecked(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleOptionsPanel::execGetCurrentOption)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCitySampleButtonPrompt**)Z_Param__Result=P_THIS->GetCurrentOption();
		P_NATIVE_END;
	}
	struct CitySampleOptionsPanel_eventOnSetCurrentOption_Parms
	{
		UCitySampleButtonPrompt* PreviousOption;
		UCitySampleButtonPrompt* NewOption;
	};
	static FName NAME_UCitySampleOptionsPanel_OnSetCurrentOption = FName(TEXT("OnSetCurrentOption"));
	void UCitySampleOptionsPanel::OnSetCurrentOption(UCitySampleButtonPrompt* PreviousOption, UCitySampleButtonPrompt* NewOption)
	{
		CitySampleOptionsPanel_eventOnSetCurrentOption_Parms Parms;
		Parms.PreviousOption=PreviousOption;
		Parms.NewOption=NewOption;
		ProcessEvent(FindFunctionChecked(NAME_UCitySampleOptionsPanel_OnSetCurrentOption),&Parms);
	}
	void UCitySampleOptionsPanel::StaticRegisterNativesUCitySampleOptionsPanel()
	{
		UClass* Class = UCitySampleOptionsPanel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearCurrentOption", &UCitySampleOptionsPanel::execClearCurrentOption },
			{ "DecrementCurrentOption", &UCitySampleOptionsPanel::execDecrementCurrentOption },
			{ "GetCurrentOption", &UCitySampleOptionsPanel::execGetCurrentOption },
			{ "IncrementCurrentOption", &UCitySampleOptionsPanel::execIncrementCurrentOption },
			{ "SetCurrentOption", &UCitySampleOptionsPanel::execSetCurrentOption },
			{ "SetCurrentOptionByIndexChecked", &UCitySampleOptionsPanel::execSetCurrentOptionByIndexChecked },
			{ "SetCurrentOptionByIndexClamped", &UCitySampleOptionsPanel::execSetCurrentOptionByIndexClamped },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCitySampleOptionsPanel_ClearCurrentOption_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_ClearCurrentOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Options Panel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clears the current option, such that no option is currently selected. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleOptionsPanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears the current option, such that no option is currently selected." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionsPanel_ClearCurrentOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionsPanel, nullptr, "ClearCurrentOption", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_ClearCurrentOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleOptionsPanel_ClearCurrentOption_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCitySampleOptionsPanel_ClearCurrentOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionsPanel_ClearCurrentOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics
	{
		struct CitySampleOptionsPanel_eventDecrementCurrentOption_Parms
		{
			UCitySampleButtonPrompt* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleOptionsPanel_eventDecrementCurrentOption_Parms, ReturnValue), Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Options Panel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Decrements the current option index and calls SetCurrentOptionByIndexClamped.\n\x09 *\n\x09 * @note\x09If bWrapAround is set, this wraps around to the option at the last valid index when decrementing past index 0.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleOptionsPanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decrements the current option index and calls SetCurrentOptionByIndexClamped.\n\n@note        If bWrapAround is set, this wraps around to the option at the last valid index when decrementing past index 0." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionsPanel, nullptr, "DecrementCurrentOption", nullptr, nullptr, Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::CitySampleOptionsPanel_eventDecrementCurrentOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::CitySampleOptionsPanel_eventDecrementCurrentOption_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics
	{
		struct CitySampleOptionsPanel_eventGetCurrentOption_Parms
		{
			UCitySampleButtonPrompt* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleOptionsPanel_eventGetCurrentOption_Parms, ReturnValue), Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Options Panel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the currently selected option. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleOptionsPanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the currently selected option." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionsPanel, nullptr, "GetCurrentOption", nullptr, nullptr, Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::CitySampleOptionsPanel_eventGetCurrentOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::CitySampleOptionsPanel_eventGetCurrentOption_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics
	{
		struct CitySampleOptionsPanel_eventIncrementCurrentOption_Parms
		{
			UCitySampleButtonPrompt* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleOptionsPanel_eventIncrementCurrentOption_Parms, ReturnValue), Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Options Panel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Increments the current option index and calls SetCurrentOptionByIndexClamped.\n\x09 *\n\x09 * @note\x09If bWrapAround is set, this wraps around to the option at index 0 when incrementing past the last valid index.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleOptionsPanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Increments the current option index and calls SetCurrentOptionByIndexClamped.\n\n@note        If bWrapAround is set, this wraps around to the option at index 0 when incrementing past the last valid index." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionsPanel, nullptr, "IncrementCurrentOption", nullptr, nullptr, Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::CitySampleOptionsPanel_eventIncrementCurrentOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::CitySampleOptionsPanel_eventIncrementCurrentOption_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousOption_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewOption_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewOption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::NewProp_PreviousOption_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::NewProp_PreviousOption = { "PreviousOption", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleOptionsPanel_eventOnSetCurrentOption_Parms, PreviousOption), Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::NewProp_PreviousOption_MetaData), Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::NewProp_PreviousOption_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::NewProp_NewOption_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::NewProp_NewOption = { "NewOption", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleOptionsPanel_eventOnSetCurrentOption_Parms, NewOption), Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::NewProp_NewOption_MetaData), Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::NewProp_NewOption_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::NewProp_PreviousOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::NewProp_NewOption,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Options Panel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP hook for updating the UI when the current option selection changes. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleOptionsPanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP hook for updating the UI when the current option selection changes." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionsPanel, nullptr, "OnSetCurrentOption", nullptr, nullptr, Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::PropPointers), sizeof(CitySampleOptionsPanel_eventOnSetCurrentOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySampleOptionsPanel_eventOnSetCurrentOption_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics
	{
		struct CitySampleOptionsPanel_eventSetCurrentOption_Parms
		{
			const UCitySampleButtonPrompt* Option;
			UCitySampleButtonPrompt* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Option;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::NewProp_Option_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleOptionsPanel_eventSetCurrentOption_Parms, Option), Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::NewProp_Option_MetaData), Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::NewProp_Option_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleOptionsPanel_eventSetCurrentOption_Parms, ReturnValue), Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::NewProp_Option,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Options Panel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Sets the currently selected option. If null, clears the selected option. \n\x09 * \n\x09 * @note\x09If not found in the list of options, does nothing. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleOptionsPanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the currently selected option. If null, clears the selected option.\n\n@note        If not found in the list of options, does nothing." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionsPanel, nullptr, "SetCurrentOption", nullptr, nullptr, Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::CitySampleOptionsPanel_eventSetCurrentOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::CitySampleOptionsPanel_eventSetCurrentOption_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics
	{
		struct CitySampleOptionsPanel_eventSetCurrentOptionByIndexChecked_Parms
		{
			int32 Index;
			UCitySampleButtonPrompt* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleOptionsPanel_eventSetCurrentOptionByIndexChecked_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::NewProp_Index_MetaData), Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::NewProp_Index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleOptionsPanel_eventSetCurrentOptionByIndexChecked_Parms, ReturnValue), Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Options Panel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the currently selected option by index. Ensures a valid index and logs attempts with invalid indices. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleOptionsPanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the currently selected option by index. Ensures a valid index and logs attempts with invalid indices." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionsPanel, nullptr, "SetCurrentOptionByIndexChecked", nullptr, nullptr, Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::CitySampleOptionsPanel_eventSetCurrentOptionByIndexChecked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::CitySampleOptionsPanel_eventSetCurrentOptionByIndexChecked_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics
	{
		struct CitySampleOptionsPanel_eventSetCurrentOptionByIndexClamped_Parms
		{
			int32 Index;
			UCitySampleButtonPrompt* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleOptionsPanel_eventSetCurrentOptionByIndexClamped_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::NewProp_Index_MetaData), Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::NewProp_Index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleOptionsPanel_eventSetCurrentOptionByIndexClamped_Parms, ReturnValue), Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Options Panel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the currently selected option by index. Clamps the given index to the nearest valid index. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleOptionsPanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the currently selected option by index. Clamps the given index to the nearest valid index." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleOptionsPanel, nullptr, "SetCurrentOptionByIndexClamped", nullptr, nullptr, Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::CitySampleOptionsPanel_eventSetCurrentOptionByIndexClamped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::CitySampleOptionsPanel_eventSetCurrentOptionByIndexClamped_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleOptionsPanel);
	UClass* Z_Construct_UClass_UCitySampleOptionsPanel_NoRegister()
	{
		return UCitySampleOptionsPanel::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleOptionsPanel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionsScroll_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionsScroll;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Options_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialOptionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InitialOptionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWrapAround_MetaData[];
#endif
		static void NewProp_bWrapAround_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWrapAround;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentOptionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentOptionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleOptionsPanel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCitySamplePanel,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionsPanel_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCitySampleOptionsPanel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleOptionsPanel_ClearCurrentOption, "ClearCurrentOption" }, // 3411779169
		{ &Z_Construct_UFunction_UCitySampleOptionsPanel_DecrementCurrentOption, "DecrementCurrentOption" }, // 3634700213
		{ &Z_Construct_UFunction_UCitySampleOptionsPanel_GetCurrentOption, "GetCurrentOption" }, // 1674967616
		{ &Z_Construct_UFunction_UCitySampleOptionsPanel_IncrementCurrentOption, "IncrementCurrentOption" }, // 3104894184
		{ &Z_Construct_UFunction_UCitySampleOptionsPanel_OnSetCurrentOption, "OnSetCurrentOption" }, // 3703813660
		{ &Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOption, "SetCurrentOption" }, // 4253988687
		{ &Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexChecked, "SetCurrentOptionByIndexChecked" }, // 4145514086
		{ &Z_Construct_UFunction_UCitySampleOptionsPanel_SetCurrentOptionByIndexClamped, "SetCurrentOptionByIndexClamped" }, // 3574301322
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionsPanel_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionsPanel_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A CitySample Panel that represents a list of options that can be navigated through and set.\n */" },
#endif
		{ "IncludePath", "UI/CitySampleOptionsPanel.h" },
		{ "ModuleRelativePath", "Public/UI/CitySampleOptionsPanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A CitySample Panel that represents a list of options that can be navigated through and set." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_OptionsScroll_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Options Panel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional scroll box widget binding used to generate the options array on initialization. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleOptionsPanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional scroll box widget binding used to generate the options array on initialization." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_OptionsScroll = { "OptionsScroll", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleOptionsPanel, OptionsScroll), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_OptionsScroll_MetaData), Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_OptionsScroll_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCitySampleButtonPrompt_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "Options Panel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Array of widgets that represent the different options that can be navigated through and set. *///UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = \"Options Panel\")\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleOptionsPanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of widgets that represent the different options that can be navigated through and set. //UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = \"Options Panel\")" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x002008800002000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleOptionsPanel, Options), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_Options_MetaData), Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_Options_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_InitialOptionIndex_MetaData[] = {
		{ "Category", "Options Panel" },
		{ "ClampMin", "-1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Index of the option to initialize the options panel */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleOptionsPanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index of the option to initialize the options panel" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_InitialOptionIndex = { "InitialOptionIndex", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleOptionsPanel, InitialOptionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_InitialOptionIndex_MetaData), Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_InitialOptionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_bWrapAround_MetaData[] = {
		{ "Category", "Options Panel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether IncrementCurrentOption/DecrementCurrentOption wraps around to the first/last value when exceeding valid indices. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleOptionsPanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether IncrementCurrentOption/DecrementCurrentOption wraps around to the first/last value when exceeding valid indices." },
#endif
	};
#endif
	void Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_bWrapAround_SetBit(void* Obj)
	{
		((UCitySampleOptionsPanel*)Obj)->bWrapAround = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_bWrapAround = { "bWrapAround", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleOptionsPanel), &Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_bWrapAround_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_bWrapAround_MetaData), Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_bWrapAround_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_CurrentOptionIndex_MetaData[] = {
		{ "Category", "Options Panel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Index of the currently selected option. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleOptionsPanel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index of the currently selected option." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_CurrentOptionIndex = { "CurrentOptionIndex", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleOptionsPanel, CurrentOptionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_CurrentOptionIndex_MetaData), Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_CurrentOptionIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleOptionsPanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_OptionsScroll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_Options_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_InitialOptionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_bWrapAround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleOptionsPanel_Statics::NewProp_CurrentOptionIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleOptionsPanel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleOptionsPanel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleOptionsPanel_Statics::ClassParams = {
		&UCitySampleOptionsPanel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCitySampleOptionsPanel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionsPanel_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionsPanel_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleOptionsPanel_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleOptionsPanel_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCitySampleOptionsPanel()
	{
		if (!Z_Registration_Info_UClass_UCitySampleOptionsPanel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleOptionsPanel.OuterSingleton, Z_Construct_UClass_UCitySampleOptionsPanel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleOptionsPanel.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleOptionsPanel>()
	{
		return UCitySampleOptionsPanel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleOptionsPanel);
	UCitySampleOptionsPanel::~UCitySampleOptionsPanel() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleOptionsPanel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleOptionsPanel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleOptionsPanel, UCitySampleOptionsPanel::StaticClass, TEXT("UCitySampleOptionsPanel"), &Z_Registration_Info_UClass_UCitySampleOptionsPanel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleOptionsPanel), 3436207186U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleOptionsPanel_h_1714918016(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleOptionsPanel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleOptionsPanel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
