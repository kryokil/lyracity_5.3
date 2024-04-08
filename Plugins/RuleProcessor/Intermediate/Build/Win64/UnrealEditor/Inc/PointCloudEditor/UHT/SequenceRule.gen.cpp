// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Rules/SequenceRule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequenceRule() {}
// Cross Module References
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
	POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_USequenceRule();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_USequenceRule_NoRegister();
	POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSequenceRuleData();
	UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FSequenceRuleData>() == std::is_polymorphic<FPointCloudRuleData>(), "USTRUCT FSequenceRuleData cannot be polymorphic unless super FPointCloudRuleData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SequenceRuleData;
class UScriptStruct* FSequenceRuleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SequenceRuleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SequenceRuleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSequenceRuleData, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("SequenceRuleData"));
	}
	return Z_Registration_Info_UScriptStruct_SequenceRuleData.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FSequenceRuleData>()
{
	return FSequenceRuleData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSequenceRuleData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSlots_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSlots;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceRuleData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Rules/SequenceRule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSequenceRuleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSequenceRuleData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceRuleData_Statics::NewProp_NumSlots_MetaData[] = {
		{ "ModuleRelativePath", "Private/Rules/SequenceRule.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSequenceRuleData_Statics::NewProp_NumSlots = { "NumSlots", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSequenceRuleData, NumSlots), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceRuleData_Statics::NewProp_NumSlots_MetaData), Z_Construct_UScriptStruct_FSequenceRuleData_Statics::NewProp_NumSlots_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSequenceRuleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceRuleData_Statics::NewProp_NumSlots,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSequenceRuleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
		Z_Construct_UScriptStruct_FPointCloudRuleData,
		&NewStructOps,
		"SequenceRuleData",
		Z_Construct_UScriptStruct_FSequenceRuleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceRuleData_Statics::PropPointers),
		sizeof(FSequenceRuleData),
		alignof(FSequenceRuleData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceRuleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSequenceRuleData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceRuleData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSequenceRuleData()
	{
		if (!Z_Registration_Info_UScriptStruct_SequenceRuleData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SequenceRuleData.InnerSingleton, Z_Construct_UScriptStruct_FSequenceRuleData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SequenceRuleData.InnerSingleton;
	}
	void USequenceRule::StaticRegisterNativesUSequenceRule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequenceRule);
	UClass* Z_Construct_UClass_USequenceRule_NoRegister()
	{
		return USequenceRule::StaticClass();
	}
	struct Z_Construct_UClass_USequenceRule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequenceRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPointCloudRule,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRule_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Rules/SequenceRule.h" },
		{ "ModuleRelativePath", "Private/Rules/SequenceRule.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRule_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/SequenceRule.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USequenceRule_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USequenceRule, Data), Z_Construct_UScriptStruct_FSequenceRuleData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRule_Statics::NewProp_Data_MetaData), Z_Construct_UClass_USequenceRule_Statics::NewProp_Data_MetaData) }; // 1970496496
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USequenceRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRule_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequenceRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequenceRule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequenceRule_Statics::ClassParams = {
		&USequenceRule::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USequenceRule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRule_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRule_Statics::Class_MetaDataParams), Z_Construct_UClass_USequenceRule_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRule_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USequenceRule()
	{
		if (!Z_Registration_Info_UClass_USequenceRule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequenceRule.OuterSingleton, Z_Construct_UClass_USequenceRule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequenceRule.OuterSingleton;
	}
	template<> POINTCLOUDEDITOR_API UClass* StaticClass<USequenceRule>()
	{
		return USequenceRule::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequenceRule);
	USequenceRule::~USequenceRule() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SequenceRule_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SequenceRule_h_Statics::ScriptStructInfo[] = {
		{ FSequenceRuleData::StaticStruct, Z_Construct_UScriptStruct_FSequenceRuleData_Statics::NewStructOps, TEXT("SequenceRuleData"), &Z_Registration_Info_UScriptStruct_SequenceRuleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSequenceRuleData), 1970496496U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SequenceRule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USequenceRule, USequenceRule::StaticClass, TEXT("USequenceRule"), &Z_Registration_Info_UClass_USequenceRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequenceRule), 8935179U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SequenceRule_h_3685523140(TEXT("/Script/PointCloudEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SequenceRule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SequenceRule_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SequenceRule_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SequenceRule_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
