// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Rules/FilterOnBoundingBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFilterOnBoundingBox() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
	POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UBoundingBoxFilterRule();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UBoundingBoxFilterRule_NoRegister();
	POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData();
	UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FBoundingBoxFilterRuleData>() == std::is_polymorphic<FPointCloudRuleData>(), "USTRUCT FBoundingBoxFilterRuleData cannot be polymorphic unless super FPointCloudRuleData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoundingBoxFilterRuleData;
class UScriptStruct* FBoundingBoxFilterRuleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoundingBoxFilterRuleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoundingBoxFilterRuleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("BoundingBoxFilterRuleData"));
	}
	return Z_Registration_Info_UScriptStruct_BoundingBoxFilterRuleData.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FBoundingBoxFilterRuleData>()
{
	return FBoundingBoxFilterRuleData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamePattern_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NamePattern;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnBoundingBox.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoundingBoxFilterRuleData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::NewProp_Bounds_MetaData[] = {
		{ "Category", "BoundingBoxFilterRuleData" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnBoundingBox.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoundingBoxFilterRuleData, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::NewProp_Bounds_MetaData), Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::NewProp_Bounds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::NewProp_NamePattern_MetaData[] = {
		{ "Category", "BoundingBoxFilterRuleData" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnBoundingBox.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::NewProp_NamePattern = { "NamePattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoundingBoxFilterRuleData, NamePattern), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::NewProp_NamePattern_MetaData), Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::NewProp_NamePattern_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::NewProp_NamePattern,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
		Z_Construct_UScriptStruct_FPointCloudRuleData,
		&NewStructOps,
		"BoundingBoxFilterRuleData",
		Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::PropPointers),
		sizeof(FBoundingBoxFilterRuleData),
		alignof(FBoundingBoxFilterRuleData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData()
	{
		if (!Z_Registration_Info_UScriptStruct_BoundingBoxFilterRuleData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoundingBoxFilterRuleData.InnerSingleton, Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoundingBoxFilterRuleData.InnerSingleton;
	}
	void UBoundingBoxFilterRule::StaticRegisterNativesUBoundingBoxFilterRule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoundingBoxFilterRule);
	UClass* Z_Construct_UClass_UBoundingBoxFilterRule_NoRegister()
	{
		return UBoundingBoxFilterRule::StaticClass();
	}
	struct Z_Construct_UClass_UBoundingBoxFilterRule_Statics
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
	UObject* (*const Z_Construct_UClass_UBoundingBoxFilterRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPointCloudRule,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBoundingBoxFilterRule_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoundingBoxFilterRule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Rules/FilterOnBoundingBox.h" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnBoundingBox.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoundingBoxFilterRule_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnBoundingBox.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoundingBoxFilterRule_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBoundingBoxFilterRule, Data), Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBoundingBoxFilterRule_Statics::NewProp_Data_MetaData), Z_Construct_UClass_UBoundingBoxFilterRule_Statics::NewProp_Data_MetaData) }; // 585762253
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoundingBoxFilterRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoundingBoxFilterRule_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoundingBoxFilterRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoundingBoxFilterRule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoundingBoxFilterRule_Statics::ClassParams = {
		&UBoundingBoxFilterRule::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBoundingBoxFilterRule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBoundingBoxFilterRule_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBoundingBoxFilterRule_Statics::Class_MetaDataParams), Z_Construct_UClass_UBoundingBoxFilterRule_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBoundingBoxFilterRule_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBoundingBoxFilterRule()
	{
		if (!Z_Registration_Info_UClass_UBoundingBoxFilterRule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoundingBoxFilterRule.OuterSingleton, Z_Construct_UClass_UBoundingBoxFilterRule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBoundingBoxFilterRule.OuterSingleton;
	}
	template<> POINTCLOUDEDITOR_API UClass* StaticClass<UBoundingBoxFilterRule>()
	{
		return UBoundingBoxFilterRule::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoundingBoxFilterRule);
	UBoundingBoxFilterRule::~UBoundingBoxFilterRule() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnBoundingBox_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnBoundingBox_h_Statics::ScriptStructInfo[] = {
		{ FBoundingBoxFilterRuleData::StaticStruct, Z_Construct_UScriptStruct_FBoundingBoxFilterRuleData_Statics::NewStructOps, TEXT("BoundingBoxFilterRuleData"), &Z_Registration_Info_UScriptStruct_BoundingBoxFilterRuleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoundingBoxFilterRuleData), 585762253U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnBoundingBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBoundingBoxFilterRule, UBoundingBoxFilterRule::StaticClass, TEXT("UBoundingBoxFilterRule"), &Z_Registration_Info_UClass_UBoundingBoxFilterRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoundingBoxFilterRule), 3788906097U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnBoundingBox_h_2226012209(TEXT("/Script/PointCloudEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnBoundingBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnBoundingBox_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnBoundingBox_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnBoundingBox_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
