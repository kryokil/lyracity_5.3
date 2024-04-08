// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloud/Public/PointCloudSliceAndDiceRuleSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudSliceAndDiceRuleSet() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule_NoRegister();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PointCloud();
// End Cross Module References
	DEFINE_FUNCTION(UPointCloudSliceAndDiceRuleSet::execGetRules)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UPointCloudRule*>*)Z_Param__Result=P_THIS->GetRules();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudSliceAndDiceRuleSet::execCopyRule)
	{
		P_GET_OBJECT(UPointCloudRule,Z_Param_InRule);
		P_GET_OBJECT(UPointCloudRule,Z_Param_InTargetParent);
		P_GET_PROPERTY(FIntProperty,Z_Param_InTargetSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CopyRule(Z_Param_InRule,Z_Param_InTargetParent,Z_Param_InTargetSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudSliceAndDiceRuleSet::execSwapRules)
	{
		P_GET_OBJECT(UPointCloudRule,Z_Param_InRuleParent);
		P_GET_PROPERTY(FIntProperty,Z_Param_InRuleSlotIndex);
		P_GET_OBJECT(UPointCloudRule,Z_Param_InTargetParent);
		P_GET_PROPERTY(FIntProperty,Z_Param_InTargetSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SwapRules(Z_Param_InRuleParent,Z_Param_InRuleSlotIndex,Z_Param_InTargetParent,Z_Param_InTargetSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudSliceAndDiceRuleSet::execMoveRule)
	{
		P_GET_OBJECT(UPointCloudRule,Z_Param_InRuleParent);
		P_GET_PROPERTY(FIntProperty,Z_Param_InRuleSlotIndex);
		P_GET_OBJECT(UPointCloudRule,Z_Param_InTargetParent);
		P_GET_PROPERTY(FIntProperty,Z_Param_InTargetSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MoveRule(Z_Param_InRuleParent,Z_Param_InRuleSlotIndex,Z_Param_InTargetParent,Z_Param_InTargetSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudSliceAndDiceRuleSet::execRemoveRule)
	{
		P_GET_OBJECT(UPointCloudRule,Z_Param_InParent);
		P_GET_PROPERTY(FIntProperty,Z_Param_InSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPointCloudRule**)Z_Param__Result=P_THIS->RemoveRule(Z_Param_InParent,Z_Param_InSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudSliceAndDiceRuleSet::execAddRule)
	{
		P_GET_OBJECT(UPointCloudRule,Z_Param_InRule);
		P_GET_OBJECT(UPointCloudRule,Z_Param_InParent);
		P_GET_PROPERTY(FIntProperty,Z_Param_InSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddRule(Z_Param_InRule,Z_Param_InParent,Z_Param_InSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudSliceAndDiceRuleSet::execCreateRule)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RuleName);
		P_GET_OBJECT(UPointCloudRule,Z_Param_ParentRule);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPointCloudRule**)Z_Param__Result=P_THIS->CreateRule(Z_Param_RuleName,Z_Param_ParentRule,Z_Param_SlotIndex);
		P_NATIVE_END;
	}
	void UPointCloudSliceAndDiceRuleSet::StaticRegisterNativesUPointCloudSliceAndDiceRuleSet()
	{
		UClass* Class = UPointCloudSliceAndDiceRuleSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRule", &UPointCloudSliceAndDiceRuleSet::execAddRule },
			{ "CopyRule", &UPointCloudSliceAndDiceRuleSet::execCopyRule },
			{ "CreateRule", &UPointCloudSliceAndDiceRuleSet::execCreateRule },
			{ "GetRules", &UPointCloudSliceAndDiceRuleSet::execGetRules },
			{ "MoveRule", &UPointCloudSliceAndDiceRuleSet::execMoveRule },
			{ "RemoveRule", &UPointCloudSliceAndDiceRuleSet::execRemoveRule },
			{ "SwapRules", &UPointCloudSliceAndDiceRuleSet::execSwapRules },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_AddRule_Statics
	{
		struct PointCloudSliceAndDiceRuleSet_eventAddRule_Parms
		{
			UPointCloudRule* InRule;
			UPointCloudRule* InParent;
			int32 InSlotIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRule;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InParent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InSlotIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_AddRule_Statics::NewProp_InRule = { "InRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudSliceAndDiceRuleSet_eventAddRule_Parms, InRule), Z_Construct_UClass_UPointCloudRule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_AddRule_Statics::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudSliceAndDiceRuleSet_eventAddRule_Parms, InParent), Z_Construct_UClass_UPointCloudRule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_AddRule_Statics::NewProp_InSlotIndex = { "InSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudSliceAndDiceRuleSet_eventAddRule_Parms, InSlotIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_AddRule_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointCloudSliceAndDiceRuleSet_eventAddRule_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_AddRule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PointCloudSliceAndDiceRuleSet_eventAddRule_Parms), &Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_AddRule_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_AddRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_AddRule_Statics::NewProp_InRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_AddRule_Statics::NewProp_InParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_AddRule_Statics::NewProp_InSlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_AddRule_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_AddRule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets a rule in the specified slot (if specified)\n\x09* @param InRule - The rule to add\n\x09* @param InParent - The rule that this new rule should be placed into.\n\x09* @param InSlotIndex - The target slot index. If unspecified, will use the first free slot\n\x09* @return True if insertion was successful\n\x09*/" },
#endif
		{ "CPP_Default_InParent", "None" },
		{ "CPP_Default_InSlotIndex", "-1" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRuleSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets a rule in the specified slot (if specified)\n@param InRule - The rule to add\n@param InParent - The rule that this new rule should be placed into.\n@param InSlotIndex - The target slot index. If unspecified, will use the first free slot\n@return True if insertion was successful" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_AddRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet, nullptr, "AddRule", nullptr, nullptr, Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_AddRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_AddRule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_AddRule_Statics::PointCloudSliceAndDiceRuleSet_eventAddRule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_AddRule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_AddRule_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_AddRule_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_AddRule_Statics::PointCloudSliceAndDiceRuleSet_eventAddRule_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_AddRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_AddRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CopyRule_Statics
	{
		struct PointCloudSliceAndDiceRuleSet_eventCopyRule_Parms
		{
			UPointCloudRule* InRule;
			UPointCloudRule* InTargetParent;
			int32 InTargetSlotIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRule;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTargetParent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InTargetSlotIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CopyRule_Statics::NewProp_InRule = { "InRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudSliceAndDiceRuleSet_eventCopyRule_Parms, InRule), Z_Construct_UClass_UPointCloudRule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CopyRule_Statics::NewProp_InTargetParent = { "InTargetParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudSliceAndDiceRuleSet_eventCopyRule_Parms, InTargetParent), Z_Construct_UClass_UPointCloudRule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CopyRule_Statics::NewProp_InTargetSlotIndex = { "InTargetSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudSliceAndDiceRuleSet_eventCopyRule_Parms, InTargetSlotIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CopyRule_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointCloudSliceAndDiceRuleSet_eventCopyRule_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CopyRule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PointCloudSliceAndDiceRuleSet_eventCopyRule_Parms), &Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CopyRule_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CopyRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CopyRule_Statics::NewProp_InRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CopyRule_Statics::NewProp_InTargetParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CopyRule_Statics::NewProp_InTargetSlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CopyRule_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CopyRule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Copies a rule to a given slot\n\x09* @param InRule - The rule to copy\n\x09* @param InTargetParent - The target rule holding the target slot to copy to\n\x09* @param InTargetSlotIndex - The target slot index\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRuleSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Copies a rule to a given slot\n@param InRule - The rule to copy\n@param InTargetParent - The target rule holding the target slot to copy to\n@param InTargetSlotIndex - The target slot index" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CopyRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet, nullptr, "CopyRule", nullptr, nullptr, Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CopyRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CopyRule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CopyRule_Statics::PointCloudSliceAndDiceRuleSet_eventCopyRule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CopyRule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CopyRule_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CopyRule_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CopyRule_Statics::PointCloudSliceAndDiceRuleSet_eventCopyRule_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CopyRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CopyRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CreateRule_Statics
	{
		struct PointCloudSliceAndDiceRuleSet_eventCreateRule_Parms
		{
			FString RuleName;
			UPointCloudRule* ParentRule;
			int32 SlotIndex;
			UPointCloudRule* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuleName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RuleName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentRule;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CreateRule_Statics::NewProp_RuleName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CreateRule_Statics::NewProp_RuleName = { "RuleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudSliceAndDiceRuleSet_eventCreateRule_Parms, RuleName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CreateRule_Statics::NewProp_RuleName_MetaData), Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CreateRule_Statics::NewProp_RuleName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CreateRule_Statics::NewProp_ParentRule = { "ParentRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudSliceAndDiceRuleSet_eventCreateRule_Parms, ParentRule), Z_Construct_UClass_UPointCloudRule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CreateRule_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudSliceAndDiceRuleSet_eventCreateRule_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CreateRule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudSliceAndDiceRuleSet_eventCreateRule_Parms, ReturnValue), Z_Construct_UClass_UPointCloudRule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CreateRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CreateRule_Statics::NewProp_RuleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CreateRule_Statics::NewProp_ParentRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CreateRule_Statics::NewProp_SlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CreateRule_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CreateRule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Creates a rule in the specified slot (if specified)\n\x09* @param RuleName - The name of the rule to create. The name should appear in the list returned by GetAvailableRules()\n\x09* @param ParentRule - The rule that this new rule should be placed into.\n\x09* @param SlotIndex - The target slot index. If unspecified, will use the first free slot\n\x09* @return Pointer to the newly created rule of nullptr on failure\n\x09*/" },
#endif
		{ "CPP_Default_ParentRule", "None" },
		{ "CPP_Default_SlotIndex", "-1" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRuleSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a rule in the specified slot (if specified)\n@param RuleName - The name of the rule to create. The name should appear in the list returned by GetAvailableRules()\n@param ParentRule - The rule that this new rule should be placed into.\n@param SlotIndex - The target slot index. If unspecified, will use the first free slot\n@return Pointer to the newly created rule of nullptr on failure" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CreateRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet, nullptr, "CreateRule", nullptr, nullptr, Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CreateRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CreateRule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CreateRule_Statics::PointCloudSliceAndDiceRuleSet_eventCreateRule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CreateRule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CreateRule_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CreateRule_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CreateRule_Statics::PointCloudSliceAndDiceRuleSet_eventCreateRule_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CreateRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CreateRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_GetRules_Statics
	{
		struct PointCloudSliceAndDiceRuleSet_eventGetRules_Parms
		{
			TArray<UPointCloudRule*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_GetRules_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPointCloudRule_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_GetRules_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_GetRules_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudSliceAndDiceRuleSet_eventGetRules_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_GetRules_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_GetRules_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_GetRules_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_GetRules_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_GetRules_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_GetRules_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Return a pointer to the top level rules for this RuleSet\n\x09*\n\x09* @return A array containing the top level rules\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRuleSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return a pointer to the top level rules for this RuleSet\n\n@return A array containing the top level rules" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_GetRules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet, nullptr, "GetRules", nullptr, nullptr, Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_GetRules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_GetRules_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_GetRules_Statics::PointCloudSliceAndDiceRuleSet_eventGetRules_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_GetRules_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_GetRules_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_GetRules_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_GetRules_Statics::PointCloudSliceAndDiceRuleSet_eventGetRules_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_GetRules()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_GetRules_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_MoveRule_Statics
	{
		struct PointCloudSliceAndDiceRuleSet_eventMoveRule_Parms
		{
			UPointCloudRule* InRuleParent;
			int32 InRuleSlotIndex;
			UPointCloudRule* InTargetParent;
			int32 InTargetSlotIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRuleParent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InRuleSlotIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTargetParent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InTargetSlotIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_MoveRule_Statics::NewProp_InRuleParent = { "InRuleParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudSliceAndDiceRuleSet_eventMoveRule_Parms, InRuleParent), Z_Construct_UClass_UPointCloudRule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_MoveRule_Statics::NewProp_InRuleSlotIndex = { "InRuleSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudSliceAndDiceRuleSet_eventMoveRule_Parms, InRuleSlotIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_MoveRule_Statics::NewProp_InTargetParent = { "InTargetParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudSliceAndDiceRuleSet_eventMoveRule_Parms, InTargetParent), Z_Construct_UClass_UPointCloudRule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_MoveRule_Statics::NewProp_InTargetSlotIndex = { "InTargetSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudSliceAndDiceRuleSet_eventMoveRule_Parms, InTargetSlotIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_MoveRule_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointCloudSliceAndDiceRuleSet_eventMoveRule_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_MoveRule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PointCloudSliceAndDiceRuleSet_eventMoveRule_Parms), &Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_MoveRule_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_MoveRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_MoveRule_Statics::NewProp_InRuleParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_MoveRule_Statics::NewProp_InRuleSlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_MoveRule_Statics::NewProp_InTargetParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_MoveRule_Statics::NewProp_InTargetSlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_MoveRule_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_MoveRule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Move a rule to a slot on a given rule\n\x09* @param InRuleParent - The parent of the rule to move\n\x09* @param InRuleSlotIndex - The slot index the rule moves from \n\x09* @param InTargetParent - The rule in which to move to\n\x09* @param InTargetSlotIndex - The slot to move to\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRuleSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move a rule to a slot on a given rule\n@param InRuleParent - The parent of the rule to move\n@param InRuleSlotIndex - The slot index the rule moves from\n@param InTargetParent - The rule in which to move to\n@param InTargetSlotIndex - The slot to move to" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_MoveRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet, nullptr, "MoveRule", nullptr, nullptr, Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_MoveRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_MoveRule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_MoveRule_Statics::PointCloudSliceAndDiceRuleSet_eventMoveRule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_MoveRule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_MoveRule_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_MoveRule_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_MoveRule_Statics::PointCloudSliceAndDiceRuleSet_eventMoveRule_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_MoveRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_MoveRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_RemoveRule_Statics
	{
		struct PointCloudSliceAndDiceRuleSet_eventRemoveRule_Parms
		{
			UPointCloudRule* InParent;
			int32 InSlotIndex;
			UPointCloudRule* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InParent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InSlotIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_RemoveRule_Statics::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudSliceAndDiceRuleSet_eventRemoveRule_Parms, InParent), Z_Construct_UClass_UPointCloudRule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_RemoveRule_Statics::NewProp_InSlotIndex = { "InSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudSliceAndDiceRuleSet_eventRemoveRule_Parms, InSlotIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_RemoveRule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudSliceAndDiceRuleSet_eventRemoveRule_Parms, ReturnValue), Z_Construct_UClass_UPointCloudRule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_RemoveRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_RemoveRule_Statics::NewProp_InParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_RemoveRule_Statics::NewProp_InSlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_RemoveRule_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_RemoveRule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Removes a rule from a parent's slot.\n\x09* @param InParent - The parent holding the rule\n\x09* @param InSlotIndex - The slot index\n\x09* @return Rule removed if any\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRuleSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes a rule from a parent's slot.\n@param InParent - The parent holding the rule\n@param InSlotIndex - The slot index\n@return Rule removed if any" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_RemoveRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet, nullptr, "RemoveRule", nullptr, nullptr, Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_RemoveRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_RemoveRule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_RemoveRule_Statics::PointCloudSliceAndDiceRuleSet_eventRemoveRule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_RemoveRule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_RemoveRule_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_RemoveRule_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_RemoveRule_Statics::PointCloudSliceAndDiceRuleSet_eventRemoveRule_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_RemoveRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_RemoveRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_SwapRules_Statics
	{
		struct PointCloudSliceAndDiceRuleSet_eventSwapRules_Parms
		{
			UPointCloudRule* InRuleParent;
			int32 InRuleSlotIndex;
			UPointCloudRule* InTargetParent;
			int32 InTargetSlotIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRuleParent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InRuleSlotIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTargetParent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InTargetSlotIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_SwapRules_Statics::NewProp_InRuleParent = { "InRuleParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudSliceAndDiceRuleSet_eventSwapRules_Parms, InRuleParent), Z_Construct_UClass_UPointCloudRule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_SwapRules_Statics::NewProp_InRuleSlotIndex = { "InRuleSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudSliceAndDiceRuleSet_eventSwapRules_Parms, InRuleSlotIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_SwapRules_Statics::NewProp_InTargetParent = { "InTargetParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudSliceAndDiceRuleSet_eventSwapRules_Parms, InTargetParent), Z_Construct_UClass_UPointCloudRule_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_SwapRules_Statics::NewProp_InTargetSlotIndex = { "InTargetSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudSliceAndDiceRuleSet_eventSwapRules_Parms, InTargetSlotIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_SwapRules_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointCloudSliceAndDiceRuleSet_eventSwapRules_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_SwapRules_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PointCloudSliceAndDiceRuleSet_eventSwapRules_Parms), &Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_SwapRules_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_SwapRules_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_SwapRules_Statics::NewProp_InRuleParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_SwapRules_Statics::NewProp_InRuleSlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_SwapRules_Statics::NewProp_InTargetParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_SwapRules_Statics::NewProp_InTargetSlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_SwapRules_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_SwapRules_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Swaps rules between slots\n\x09* @param InRuleParent - The rule holding the slot to move\n\x09* @param InRuleSlotIndex - The slot index to move\n\x09* @param InTargetParent - The target rule holding the target slot to swap with\n\x09* @param InTargetSlotIndex - The target slot index\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRuleSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Swaps rules between slots\n@param InRuleParent - The rule holding the slot to move\n@param InRuleSlotIndex - The slot index to move\n@param InTargetParent - The target rule holding the target slot to swap with\n@param InTargetSlotIndex - The target slot index" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_SwapRules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet, nullptr, "SwapRules", nullptr, nullptr, Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_SwapRules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_SwapRules_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_SwapRules_Statics::PointCloudSliceAndDiceRuleSet_eventSwapRules_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_SwapRules_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_SwapRules_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_SwapRules_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_SwapRules_Statics::PointCloudSliceAndDiceRuleSet_eventSwapRules_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_SwapRules()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_SwapRules_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPointCloudSliceAndDiceRuleSet);
	UClass* Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_NoRegister()
	{
		return UPointCloudSliceAndDiceRuleSet::StaticClass();
	}
	struct Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Rules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rules;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloud,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_AddRule, "AddRule" }, // 2262634611
		{ &Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CopyRule, "CopyRule" }, // 1292512855
		{ &Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_CreateRule, "CreateRule" }, // 2202425851
		{ &Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_GetRules, "GetRules" }, // 2805889929
		{ &Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_MoveRule, "MoveRule" }, // 632485468
		{ &Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_RemoveRule, "RemoveRule" }, // 1537855535
		{ &Z_Construct_UFunction_UPointCloudSliceAndDiceRuleSet_SwapRules, "SwapRules" }, // 2099849551
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Container class for stacks of Slice and Dice Rules\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "PointCloudSliceAndDiceRuleSet.h" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRuleSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Container class for stacks of Slice and Dice Rules" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_Statics::NewProp_Rules_Inner = { "Rules", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPointCloudRule_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_Statics::NewProp_Rules_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Sets of Rules managed by this ruleset\n" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRuleSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Sets of Rules managed by this ruleset" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPointCloudSliceAndDiceRuleSet, Rules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_Statics::NewProp_Rules_MetaData), Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_Statics::NewProp_Rules_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_Statics::NewProp_Rules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_Statics::NewProp_Rules,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloudSliceAndDiceRuleSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_Statics::ClassParams = {
		&UPointCloudSliceAndDiceRuleSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet()
	{
		if (!Z_Registration_Info_UClass_UPointCloudSliceAndDiceRuleSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPointCloudSliceAndDiceRuleSet.OuterSingleton, Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPointCloudSliceAndDiceRuleSet.OuterSingleton;
	}
	template<> POINTCLOUD_API UClass* StaticClass<UPointCloudSliceAndDiceRuleSet>()
	{
		return UPointCloudSliceAndDiceRuleSet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloudSliceAndDiceRuleSet);
	UPointCloudSliceAndDiceRuleSet::~UPointCloudSliceAndDiceRuleSet() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceRuleSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceRuleSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet, UPointCloudSliceAndDiceRuleSet::StaticClass, TEXT("UPointCloudSliceAndDiceRuleSet"), &Z_Registration_Info_UClass_UPointCloudSliceAndDiceRuleSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPointCloudSliceAndDiceRuleSet), 3472063865U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceRuleSet_h_2443587942(TEXT("/Script/PointCloud"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceRuleSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceRuleSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
