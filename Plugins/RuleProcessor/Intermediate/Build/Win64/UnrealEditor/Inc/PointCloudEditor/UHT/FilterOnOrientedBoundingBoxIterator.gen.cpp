// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Rules/FilterOnOrientedBoundingBoxIterator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFilterOnOrientedBoundingBoxIterator() {}
// Cross Module References
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
	POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_NoRegister();
	POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData();
	UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FFilterOnOrientedBoundingBoxIteratorData>() == std::is_polymorphic<FPointCloudRuleData>(), "USTRUCT FFilterOnOrientedBoundingBoxIteratorData cannot be polymorphic unless super FPointCloudRuleData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FilterOnOrientedBoundingBoxIteratorData;
class UScriptStruct* FFilterOnOrientedBoundingBoxIteratorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FilterOnOrientedBoundingBoxIteratorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FilterOnOrientedBoundingBoxIteratorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("FilterOnOrientedBoundingBoxIteratorData"));
	}
	return Z_Registration_Info_UScriptStruct_FilterOnOrientedBoundingBoxIteratorData.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FFilterOnOrientedBoundingBoxIteratorData>()
{
	return FFilterOnOrientedBoundingBoxIteratorData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamePattern_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NamePattern;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnOrientedBoundingBoxIterator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFilterOnOrientedBoundingBoxIteratorData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics::NewProp_NamePattern_MetaData[] = {
		{ "Category", "FilterOnOrientedBoundingBoxIteratorData" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnOrientedBoundingBoxIterator.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics::NewProp_NamePattern = { "NamePattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFilterOnOrientedBoundingBoxIteratorData, NamePattern), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics::NewProp_NamePattern_MetaData), Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics::NewProp_NamePattern_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics::NewProp_NamePattern,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
		Z_Construct_UScriptStruct_FPointCloudRuleData,
		&NewStructOps,
		"FilterOnOrientedBoundingBoxIteratorData",
		Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics::PropPointers),
		sizeof(FFilterOnOrientedBoundingBoxIteratorData),
		alignof(FFilterOnOrientedBoundingBoxIteratorData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData()
	{
		if (!Z_Registration_Info_UScriptStruct_FilterOnOrientedBoundingBoxIteratorData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FilterOnOrientedBoundingBoxIteratorData.InnerSingleton, Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FilterOnOrientedBoundingBoxIteratorData.InnerSingleton;
	}
	void UFilterOnOrientedBoundingBoxIterator::StaticRegisterNativesUFilterOnOrientedBoundingBoxIterator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFilterOnOrientedBoundingBoxIterator);
	UClass* Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_NoRegister()
	{
		return UFilterOnOrientedBoundingBoxIterator::StaticClass();
	}
	struct Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OBBNameRegex_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OBBNameRegex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPointCloudRule,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Rules/FilterOnOrientedBoundingBoxIterator.h" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnOrientedBoundingBoxIterator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::NewProp_OBBNameRegex_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnOrientedBoundingBoxIterator.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::NewProp_OBBNameRegex = { "OBBNameRegex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFilterOnOrientedBoundingBoxIterator, OBBNameRegex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::NewProp_OBBNameRegex_MetaData), Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::NewProp_OBBNameRegex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnOrientedBoundingBoxIterator.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFilterOnOrientedBoundingBoxIterator, Data), Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::NewProp_Data_MetaData), Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::NewProp_Data_MetaData) }; // 336011146
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::NewProp_OBBNameRegex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFilterOnOrientedBoundingBoxIterator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::ClassParams = {
		&UFilterOnOrientedBoundingBoxIterator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::Class_MetaDataParams), Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator()
	{
		if (!Z_Registration_Info_UClass_UFilterOnOrientedBoundingBoxIterator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFilterOnOrientedBoundingBoxIterator.OuterSingleton, Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFilterOnOrientedBoundingBoxIterator.OuterSingleton;
	}
	template<> POINTCLOUDEDITOR_API UClass* StaticClass<UFilterOnOrientedBoundingBoxIterator>()
	{
		return UFilterOnOrientedBoundingBoxIterator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFilterOnOrientedBoundingBoxIterator);
	UFilterOnOrientedBoundingBoxIterator::~UFilterOnOrientedBoundingBoxIterator() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnOrientedBoundingBoxIterator_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnOrientedBoundingBoxIterator_h_Statics::ScriptStructInfo[] = {
		{ FFilterOnOrientedBoundingBoxIteratorData::StaticStruct, Z_Construct_UScriptStruct_FFilterOnOrientedBoundingBoxIteratorData_Statics::NewStructOps, TEXT("FilterOnOrientedBoundingBoxIteratorData"), &Z_Registration_Info_UScriptStruct_FilterOnOrientedBoundingBoxIteratorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFilterOnOrientedBoundingBoxIteratorData), 336011146U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnOrientedBoundingBoxIterator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFilterOnOrientedBoundingBoxIterator, UFilterOnOrientedBoundingBoxIterator::StaticClass, TEXT("UFilterOnOrientedBoundingBoxIterator"), &Z_Registration_Info_UClass_UFilterOnOrientedBoundingBoxIterator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFilterOnOrientedBoundingBoxIterator), 422870341U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnOrientedBoundingBoxIterator_h_3627807646(TEXT("/Script/PointCloudEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnOrientedBoundingBoxIterator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnOrientedBoundingBoxIterator_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnOrientedBoundingBoxIterator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnOrientedBoundingBoxIterator_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
