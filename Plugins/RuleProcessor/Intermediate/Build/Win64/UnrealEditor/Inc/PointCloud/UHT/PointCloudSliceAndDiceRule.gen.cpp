// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloud/Public/PointCloudSliceAndDiceRule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudSliceAndDiceRule() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule_NoRegister();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRuleSlot_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PointCloud();
// End Cross Module References
	void UPointCloudRule::StaticRegisterNativesUPointCloudRule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPointCloudRule);
	UClass* Z_Construct_UClass_UPointCloudRule_NoRegister()
	{
		return UPointCloudRule::StaticClass();
	}
	struct Z_Construct_UClass_UPointCloudRule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysReRun_MetaData[];
#endif
		static void NewProp_bAlwaysReRun_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysReRun;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Slots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Slots;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SlotInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SlotInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RevisionNumber_MetaData[];
#endif
		static const UECodeGen_Private::FUInt64PropertyParams NewProp_RevisionNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointCloudRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloud,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudRule_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudRule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PointCloudSliceAndDiceRule.h" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRule.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudRule_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "Attributes" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPointCloudRule_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPointCloudRule, Label), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudRule_Statics::NewProp_Label_MetaData), Z_Construct_UClass_UPointCloudRule_Statics::NewProp_Label_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudRule_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Attributes" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRule.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPointCloudRule_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPointCloudRule, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudRule_Statics::NewProp_Color_MetaData), Z_Construct_UClass_UPointCloudRule_Statics::NewProp_Color_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudRule_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Attributes" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRule.h" },
	};
#endif
	void Z_Construct_UClass_UPointCloudRule_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UPointCloudRule*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPointCloudRule_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPointCloudRule), &Z_Construct_UClass_UPointCloudRule_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudRule_Statics::NewProp_bEnabled_MetaData), Z_Construct_UClass_UPointCloudRule_Statics::NewProp_bEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudRule_Statics::NewProp_bAlwaysReRun_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Controls whether this rule can be skipped (by hash & revision check) or not */" },
#endif
		{ "DisplayPriority", "4" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls whether this rule can be skipped (by hash & revision check) or not" },
#endif
	};
#endif
	void Z_Construct_UClass_UPointCloudRule_Statics::NewProp_bAlwaysReRun_SetBit(void* Obj)
	{
		((UPointCloudRule*)Obj)->bAlwaysReRun = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPointCloudRule_Statics::NewProp_bAlwaysReRun = { "bAlwaysReRun", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPointCloudRule), &Z_Construct_UClass_UPointCloudRule_Statics::NewProp_bAlwaysReRun_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudRule_Statics::NewProp_bAlwaysReRun_MetaData), Z_Construct_UClass_UPointCloudRule_Statics::NewProp_bAlwaysReRun_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPointCloudRule_Statics::NewProp_Slots_Inner = { "Slots", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPointCloudRule_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudRule_Statics::NewProp_Slots_MetaData[] = {
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRule.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPointCloudRule_Statics::NewProp_Slots = { "Slots", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPointCloudRule, Slots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudRule_Statics::NewProp_Slots_MetaData), Z_Construct_UClass_UPointCloudRule_Statics::NewProp_Slots_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPointCloudRule_Statics::NewProp_SlotInfo_Inner = { "SlotInfo", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPointCloudRuleSlot_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudRule_Statics::NewProp_SlotInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRule.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPointCloudRule_Statics::NewProp_SlotInfo = { "SlotInfo", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPointCloudRule, SlotInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudRule_Statics::NewProp_SlotInfo_MetaData), Z_Construct_UClass_UPointCloudRule_Statics::NewProp_SlotInfo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudRule_Statics::NewProp_RevisionNumber_MetaData[] = {
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRule.h" },
	};
#endif
	const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_UPointCloudRule_Statics::NewProp_RevisionNumber = { "RevisionNumber", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPointCloudRule, RevisionNumber), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudRule_Statics::NewProp_RevisionNumber_MetaData), Z_Construct_UClass_UPointCloudRule_Statics::NewProp_RevisionNumber_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPointCloudRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudRule_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudRule_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudRule_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudRule_Statics::NewProp_bAlwaysReRun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudRule_Statics::NewProp_Slots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudRule_Statics::NewProp_Slots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudRule_Statics::NewProp_SlotInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudRule_Statics::NewProp_SlotInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudRule_Statics::NewProp_RevisionNumber,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointCloudRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloudRule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPointCloudRule_Statics::ClassParams = {
		&UPointCloudRule::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPointCloudRule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudRule_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudRule_Statics::Class_MetaDataParams), Z_Construct_UClass_UPointCloudRule_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudRule_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPointCloudRule()
	{
		if (!Z_Registration_Info_UClass_UPointCloudRule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPointCloudRule.OuterSingleton, Z_Construct_UClass_UPointCloudRule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPointCloudRule.OuterSingleton;
	}
	template<> POINTCLOUD_API UClass* StaticClass<UPointCloudRule>()
	{
		return UPointCloudRule::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloudRule);
	UPointCloudRule::~UPointCloudRule() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceRule_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceRule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPointCloudRule, UPointCloudRule::StaticClass, TEXT("UPointCloudRule"), &Z_Registration_Info_UClass_UPointCloudRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPointCloudRule), 1254241424U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceRule_h_3868046412(TEXT("/Script/PointCloud"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceRule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceRule_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
