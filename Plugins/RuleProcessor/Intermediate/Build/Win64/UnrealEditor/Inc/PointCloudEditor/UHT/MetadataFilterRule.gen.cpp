// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Rules/MetadataFilterRule.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetadataFilterRule() {}
// Cross Module References
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
	POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UMetadataFilterRule();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UMetadataFilterRule_NoRegister();
	POINTCLOUDEDITOR_API UEnum* Z_Construct_UEnum_PointCloudEditor_EPointCloudMetadataFilterType();
	POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMetadataFilterRuleData();
	UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPointCloudMetadataFilterType;
	static UEnum* EPointCloudMetadataFilterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPointCloudMetadataFilterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPointCloudMetadataFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PointCloudEditor_EPointCloudMetadataFilterType, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("EPointCloudMetadataFilterType"));
		}
		return Z_Registration_Info_UEnum_EPointCloudMetadataFilterType.OuterSingleton;
	}
	template<> POINTCLOUDEDITOR_API UEnum* StaticEnum<EPointCloudMetadataFilterType>()
	{
		return EPointCloudMetadataFilterType_StaticEnum();
	}
	struct Z_Construct_UEnum_PointCloudEditor_EPointCloudMetadataFilterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PointCloudEditor_EPointCloudMetadataFilterType_Statics::Enumerators[] = {
		{ "EPointCloudMetadataFilterType::Value", (int64)EPointCloudMetadataFilterType::Value },
		{ "EPointCloudMetadataFilterType::Pattern", (int64)EPointCloudMetadataFilterType::Pattern },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PointCloudEditor_EPointCloudMetadataFilterType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Rules/MetadataFilterRule.h" },
		{ "Pattern.DisplayName", "Matches against Pattern" },
		{ "Pattern.Name", "EPointCloudMetadataFilterType::Pattern" },
		{ "Value.DisplayName", "Matches the given value exactly" },
		{ "Value.Name", "EPointCloudMetadataFilterType::Value" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PointCloudEditor_EPointCloudMetadataFilterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PointCloudEditor,
		nullptr,
		"EPointCloudMetadataFilterType",
		"EPointCloudMetadataFilterType",
		Z_Construct_UEnum_PointCloudEditor_EPointCloudMetadataFilterType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PointCloudEditor_EPointCloudMetadataFilterType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PointCloudEditor_EPointCloudMetadataFilterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PointCloudEditor_EPointCloudMetadataFilterType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PointCloudEditor_EPointCloudMetadataFilterType()
	{
		if (!Z_Registration_Info_UEnum_EPointCloudMetadataFilterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPointCloudMetadataFilterType.InnerSingleton, Z_Construct_UEnum_PointCloudEditor_EPointCloudMetadataFilterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPointCloudMetadataFilterType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMetadataFilterRuleData>() == std::is_polymorphic<FPointCloudRuleData>(), "USTRUCT FMetadataFilterRuleData cannot be polymorphic unless super FPointCloudRuleData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetadataFilterRuleData;
class UScriptStruct* FMetadataFilterRuleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetadataFilterRuleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetadataFilterRuleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetadataFilterRuleData, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("MetadataFilterRuleData"));
	}
	return Z_Registration_Info_UScriptStruct_MetadataFilterRuleData.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FMetadataFilterRuleData>()
{
	return FMetadataFilterRuleData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamePattern_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NamePattern;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ValueAndRowKeyMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ValueAndRowKeyMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueAndRowKeyMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ValueAndRowKeyMap;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FilterType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Rules/MetadataFilterRule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetadataFilterRuleData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_NamePattern_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/MetadataFilterRule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_NamePattern = { "NamePattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetadataFilterRuleData, NamePattern), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_NamePattern_MetaData), Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_NamePattern_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "MetadataFilterRuleData" },
		{ "ModuleRelativePath", "Private/Rules/MetadataFilterRule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetadataFilterRuleData, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_Key_MetaData), Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_Key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_Value_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Making this invisible as it is deprecated\n" },
#endif
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Value And Row Key Map Instead" },
		{ "ModuleRelativePath", "Private/Rules/MetadataFilterRule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Making this invisible as it is deprecated" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetadataFilterRuleData, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_Value_MetaData), Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_ValueAndRowKeyMap_ValueProp = { "ValueAndRowKeyMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_ValueAndRowKeyMap_Key_KeyProp = { "ValueAndRowKeyMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_ValueAndRowKeyMap_MetaData[] = {
		{ "Category", "MetadataFilterRuleData" },
		{ "ModuleRelativePath", "Private/Rules/MetadataFilterRule.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_ValueAndRowKeyMap = { "ValueAndRowKeyMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetadataFilterRuleData, ValueAndRowKeyMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_ValueAndRowKeyMap_MetaData), Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_ValueAndRowKeyMap_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_FilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_FilterType_MetaData[] = {
		{ "Category", "MetadataFilterRuleData" },
		{ "ModuleRelativePath", "Private/Rules/MetadataFilterRule.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetadataFilterRuleData, FilterType), Z_Construct_UEnum_PointCloudEditor_EPointCloudMetadataFilterType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_FilterType_MetaData), Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_FilterType_MetaData) }; // 4126425214
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_NamePattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_ValueAndRowKeyMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_ValueAndRowKeyMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_ValueAndRowKeyMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_FilterType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewProp_FilterType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
		Z_Construct_UScriptStruct_FPointCloudRuleData,
		&NewStructOps,
		"MetadataFilterRuleData",
		Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::PropPointers),
		sizeof(FMetadataFilterRuleData),
		alignof(FMetadataFilterRuleData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMetadataFilterRuleData()
	{
		if (!Z_Registration_Info_UScriptStruct_MetadataFilterRuleData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetadataFilterRuleData.InnerSingleton, Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetadataFilterRuleData.InnerSingleton;
	}
	void UMetadataFilterRule::StaticRegisterNativesUMetadataFilterRule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetadataFilterRule);
	UClass* Z_Construct_UClass_UMetadataFilterRule_NoRegister()
	{
		return UMetadataFilterRule::StaticClass();
	}
	struct Z_Construct_UClass_UMetadataFilterRule_Statics
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
	UObject* (*const Z_Construct_UClass_UMetadataFilterRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPointCloudRule,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetadataFilterRule_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetadataFilterRule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Rules/MetadataFilterRule.h" },
		{ "ModuleRelativePath", "Private/Rules/MetadataFilterRule.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetadataFilterRule_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/MetadataFilterRule.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetadataFilterRule_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMetadataFilterRule, Data), Z_Construct_UScriptStruct_FMetadataFilterRuleData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetadataFilterRule_Statics::NewProp_Data_MetaData), Z_Construct_UClass_UMetadataFilterRule_Statics::NewProp_Data_MetaData) }; // 3788737746
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetadataFilterRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetadataFilterRule_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetadataFilterRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetadataFilterRule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetadataFilterRule_Statics::ClassParams = {
		&UMetadataFilterRule::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMetadataFilterRule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMetadataFilterRule_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMetadataFilterRule_Statics::Class_MetaDataParams), Z_Construct_UClass_UMetadataFilterRule_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMetadataFilterRule_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMetadataFilterRule()
	{
		if (!Z_Registration_Info_UClass_UMetadataFilterRule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetadataFilterRule.OuterSingleton, Z_Construct_UClass_UMetadataFilterRule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetadataFilterRule.OuterSingleton;
	}
	template<> POINTCLOUDEDITOR_API UClass* StaticClass<UMetadataFilterRule>()
	{
		return UMetadataFilterRule::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetadataFilterRule);
	UMetadataFilterRule::~UMetadataFilterRule() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMetadataFilterRule)
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_Statics::EnumInfo[] = {
		{ EPointCloudMetadataFilterType_StaticEnum, TEXT("EPointCloudMetadataFilterType"), &Z_Registration_Info_UEnum_EPointCloudMetadataFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4126425214U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_Statics::ScriptStructInfo[] = {
		{ FMetadataFilterRuleData::StaticStruct, Z_Construct_UScriptStruct_FMetadataFilterRuleData_Statics::NewStructOps, TEXT("MetadataFilterRuleData"), &Z_Registration_Info_UScriptStruct_MetadataFilterRuleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetadataFilterRuleData), 3788737746U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMetadataFilterRule, UMetadataFilterRule::StaticClass, TEXT("UMetadataFilterRule"), &Z_Registration_Info_UClass_UMetadataFilterRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetadataFilterRule), 2651865222U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_2099119621(TEXT("/Script/PointCloudEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MetadataFilterRule_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
