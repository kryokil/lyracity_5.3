// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Rules/ExecuteBlueprintRule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExecuteBlueprintRule() {}
// Cross Module References
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
	POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UExecuteBlueprintRule();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UExecuteBlueprintRule_NoRegister();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UPointCloudBlueprint_NoRegister();
	POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FExecuteBlueprintRuleData();
	UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FExecuteBlueprintRuleData>() == std::is_polymorphic<FPointCloudRuleData>(), "USTRUCT FExecuteBlueprintRuleData cannot be polymorphic unless super FPointCloudRuleData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExecuteBlueprintRuleData;
class UScriptStruct* FExecuteBlueprintRuleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExecuteBlueprintRuleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExecuteBlueprintRuleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExecuteBlueprintRuleData, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("ExecuteBlueprintRuleData"));
	}
	return Z_Registration_Info_UScriptStruct_ExecuteBlueprintRuleData.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FExecuteBlueprintRuleData>()
{
	return FExecuteBlueprintRuleData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExecuteBlueprintRuleData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExecuteBlueprint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExecuteBlueprintRuleData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Rules/ExecuteBlueprintRule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExecuteBlueprintRuleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExecuteBlueprintRuleData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExecuteBlueprintRuleData_Statics::NewProp_ExecuteBlueprint_MetaData[] = {
		{ "Category", "ExecuteBlueprintRuleData" },
		{ "ModuleRelativePath", "Private/Rules/ExecuteBlueprintRule.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FExecuteBlueprintRuleData_Statics::NewProp_ExecuteBlueprint = { "ExecuteBlueprint", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExecuteBlueprintRuleData, ExecuteBlueprint), Z_Construct_UClass_UPointCloudBlueprint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExecuteBlueprintRuleData_Statics::NewProp_ExecuteBlueprint_MetaData), Z_Construct_UScriptStruct_FExecuteBlueprintRuleData_Statics::NewProp_ExecuteBlueprint_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExecuteBlueprintRuleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExecuteBlueprintRuleData_Statics::NewProp_ExecuteBlueprint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExecuteBlueprintRuleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
		Z_Construct_UScriptStruct_FPointCloudRuleData,
		&NewStructOps,
		"ExecuteBlueprintRuleData",
		Z_Construct_UScriptStruct_FExecuteBlueprintRuleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExecuteBlueprintRuleData_Statics::PropPointers),
		sizeof(FExecuteBlueprintRuleData),
		alignof(FExecuteBlueprintRuleData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExecuteBlueprintRuleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FExecuteBlueprintRuleData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExecuteBlueprintRuleData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FExecuteBlueprintRuleData()
	{
		if (!Z_Registration_Info_UScriptStruct_ExecuteBlueprintRuleData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExecuteBlueprintRuleData.InnerSingleton, Z_Construct_UScriptStruct_FExecuteBlueprintRuleData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExecuteBlueprintRuleData.InnerSingleton;
	}
	void UExecuteBlueprintRule::StaticRegisterNativesUExecuteBlueprintRule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExecuteBlueprintRule);
	UClass* Z_Construct_UClass_UExecuteBlueprintRule_NoRegister()
	{
		return UExecuteBlueprintRule::StaticClass();
	}
	struct Z_Construct_UClass_UExecuteBlueprintRule_Statics
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
	UObject* (*const Z_Construct_UClass_UExecuteBlueprintRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPointCloudRule,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExecuteBlueprintRule_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExecuteBlueprintRule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Rules/ExecuteBlueprintRule.h" },
		{ "ModuleRelativePath", "Private/Rules/ExecuteBlueprintRule.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExecuteBlueprintRule_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/ExecuteBlueprintRule.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExecuteBlueprintRule_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExecuteBlueprintRule, Data), Z_Construct_UScriptStruct_FExecuteBlueprintRuleData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExecuteBlueprintRule_Statics::NewProp_Data_MetaData), Z_Construct_UClass_UExecuteBlueprintRule_Statics::NewProp_Data_MetaData) }; // 2872665301
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExecuteBlueprintRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExecuteBlueprintRule_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExecuteBlueprintRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExecuteBlueprintRule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExecuteBlueprintRule_Statics::ClassParams = {
		&UExecuteBlueprintRule::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UExecuteBlueprintRule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UExecuteBlueprintRule_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExecuteBlueprintRule_Statics::Class_MetaDataParams), Z_Construct_UClass_UExecuteBlueprintRule_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExecuteBlueprintRule_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UExecuteBlueprintRule()
	{
		if (!Z_Registration_Info_UClass_UExecuteBlueprintRule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExecuteBlueprintRule.OuterSingleton, Z_Construct_UClass_UExecuteBlueprintRule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExecuteBlueprintRule.OuterSingleton;
	}
	template<> POINTCLOUDEDITOR_API UClass* StaticClass<UExecuteBlueprintRule>()
	{
		return UExecuteBlueprintRule::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExecuteBlueprintRule);
	UExecuteBlueprintRule::~UExecuteBlueprintRule() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ExecuteBlueprintRule_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ExecuteBlueprintRule_h_Statics::ScriptStructInfo[] = {
		{ FExecuteBlueprintRuleData::StaticStruct, Z_Construct_UScriptStruct_FExecuteBlueprintRuleData_Statics::NewStructOps, TEXT("ExecuteBlueprintRuleData"), &Z_Registration_Info_UScriptStruct_ExecuteBlueprintRuleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExecuteBlueprintRuleData), 2872665301U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ExecuteBlueprintRule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExecuteBlueprintRule, UExecuteBlueprintRule::StaticClass, TEXT("UExecuteBlueprintRule"), &Z_Registration_Info_UClass_UExecuteBlueprintRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExecuteBlueprintRule), 183473512U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ExecuteBlueprintRule_h_123071953(TEXT("/Script/PointCloudEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ExecuteBlueprintRule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ExecuteBlueprintRule_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ExecuteBlueprintRule_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ExecuteBlueprintRule_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
