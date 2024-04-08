// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Rules/VertexExpressionRule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexExpressionRule() {}
// Cross Module References
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
	POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UVertexExpressionRule();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UVertexExpressionRule_NoRegister();
	POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVertexExpressionRuleData();
	UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FVertexExpressionRuleData>() == std::is_polymorphic<FPointCloudRuleData>(), "USTRUCT FVertexExpressionRuleData cannot be polymorphic unless super FPointCloudRuleData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexExpressionRuleData;
class UScriptStruct* FVertexExpressionRuleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexExpressionRuleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexExpressionRuleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexExpressionRuleData, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("VertexExpressionRuleData"));
	}
	return Z_Registration_Info_UScriptStruct_VertexExpressionRuleData.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FVertexExpressionRuleData>()
{
	return FVertexExpressionRuleData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Expression_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Expression;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Rules/VertexExpressionRule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexExpressionRuleData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics::NewProp_Expression_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/VertexExpressionRule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics::NewProp_Expression = { "Expression", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVertexExpressionRuleData, Expression), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics::NewProp_Expression_MetaData), Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics::NewProp_Expression_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics::NewProp_Expression,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
		Z_Construct_UScriptStruct_FPointCloudRuleData,
		&NewStructOps,
		"VertexExpressionRuleData",
		Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics::PropPointers),
		sizeof(FVertexExpressionRuleData),
		alignof(FVertexExpressionRuleData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVertexExpressionRuleData()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexExpressionRuleData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexExpressionRuleData.InnerSingleton, Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexExpressionRuleData.InnerSingleton;
	}
	void UVertexExpressionRule::StaticRegisterNativesUVertexExpressionRule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexExpressionRule);
	UClass* Z_Construct_UClass_UVertexExpressionRule_NoRegister()
	{
		return UVertexExpressionRule::StaticClass();
	}
	struct Z_Construct_UClass_UVertexExpressionRule_Statics
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
	UObject* (*const Z_Construct_UClass_UVertexExpressionRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPointCloudRule,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexExpressionRule_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexExpressionRule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Rules/VertexExpressionRule.h" },
		{ "ModuleRelativePath", "Private/Rules/VertexExpressionRule.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexExpressionRule_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/VertexExpressionRule.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexExpressionRule_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVertexExpressionRule, Data), Z_Construct_UScriptStruct_FVertexExpressionRuleData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexExpressionRule_Statics::NewProp_Data_MetaData), Z_Construct_UClass_UVertexExpressionRule_Statics::NewProp_Data_MetaData) }; // 3643145151
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVertexExpressionRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexExpressionRule_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexExpressionRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexExpressionRule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexExpressionRule_Statics::ClassParams = {
		&UVertexExpressionRule::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVertexExpressionRule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVertexExpressionRule_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexExpressionRule_Statics::Class_MetaDataParams), Z_Construct_UClass_UVertexExpressionRule_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVertexExpressionRule_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVertexExpressionRule()
	{
		if (!Z_Registration_Info_UClass_UVertexExpressionRule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexExpressionRule.OuterSingleton, Z_Construct_UClass_UVertexExpressionRule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexExpressionRule.OuterSingleton;
	}
	template<> POINTCLOUDEDITOR_API UClass* StaticClass<UVertexExpressionRule>()
	{
		return UVertexExpressionRule::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexExpressionRule);
	UVertexExpressionRule::~UVertexExpressionRule() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_VertexExpressionRule_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_VertexExpressionRule_h_Statics::ScriptStructInfo[] = {
		{ FVertexExpressionRuleData::StaticStruct, Z_Construct_UScriptStruct_FVertexExpressionRuleData_Statics::NewStructOps, TEXT("VertexExpressionRuleData"), &Z_Registration_Info_UScriptStruct_VertexExpressionRuleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexExpressionRuleData), 3643145151U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_VertexExpressionRule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVertexExpressionRule, UVertexExpressionRule::StaticClass, TEXT("UVertexExpressionRule"), &Z_Registration_Info_UClass_UVertexExpressionRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexExpressionRule), 3623018466U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_VertexExpressionRule_h_189475682(TEXT("/Script/PointCloudEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_VertexExpressionRule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_VertexExpressionRule_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_VertexExpressionRule_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_VertexExpressionRule_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
