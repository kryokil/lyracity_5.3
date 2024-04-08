// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Rules/DebugBuildRule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugBuildRule() {}
// Cross Module References
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
	POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UDebugBuildRule();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UDebugBuildRule_NoRegister();
	POINTCLOUDEDITOR_API UEnum* Z_Construct_UEnum_PointCloudEditor_EDebugBuildRuleMesh();
	POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDebugBuildRuleData();
	UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDebugBuildRuleMesh;
	static UEnum* EDebugBuildRuleMesh_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDebugBuildRuleMesh.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDebugBuildRuleMesh.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PointCloudEditor_EDebugBuildRuleMesh, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("EDebugBuildRuleMesh"));
		}
		return Z_Registration_Info_UEnum_EDebugBuildRuleMesh.OuterSingleton;
	}
	template<> POINTCLOUDEDITOR_API UEnum* StaticEnum<EDebugBuildRuleMesh>()
	{
		return EDebugBuildRuleMesh_StaticEnum();
	}
	struct Z_Construct_UEnum_PointCloudEditor_EDebugBuildRuleMesh_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PointCloudEditor_EDebugBuildRuleMesh_Statics::Enumerators[] = {
		{ "EDebugBuildRuleMesh::DebugBuildRuleMesh_Sphere", (int64)EDebugBuildRuleMesh::DebugBuildRuleMesh_Sphere },
		{ "EDebugBuildRuleMesh::DebugBuildRuleMesh_Cube", (int64)EDebugBuildRuleMesh::DebugBuildRuleMesh_Cube },
		{ "EDebugBuildRuleMesh::DebugBuildRuleMesh_Axis", (int64)EDebugBuildRuleMesh::DebugBuildRuleMesh_Axis },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PointCloudEditor_EDebugBuildRuleMesh_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DebugBuildRuleMesh_Axis.DisplayName", "Axis" },
		{ "DebugBuildRuleMesh_Axis.Name", "EDebugBuildRuleMesh::DebugBuildRuleMesh_Axis" },
		{ "DebugBuildRuleMesh_Cube.DisplayName", "Cube" },
		{ "DebugBuildRuleMesh_Cube.Name", "EDebugBuildRuleMesh::DebugBuildRuleMesh_Cube" },
		{ "DebugBuildRuleMesh_Sphere.DisplayName", "Sphere" },
		{ "DebugBuildRuleMesh_Sphere.Name", "EDebugBuildRuleMesh::DebugBuildRuleMesh_Sphere" },
		{ "ModuleRelativePath", "Private/Rules/DebugBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PointCloudEditor_EDebugBuildRuleMesh_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PointCloudEditor,
		nullptr,
		"EDebugBuildRuleMesh",
		"EDebugBuildRuleMesh",
		Z_Construct_UEnum_PointCloudEditor_EDebugBuildRuleMesh_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PointCloudEditor_EDebugBuildRuleMesh_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PointCloudEditor_EDebugBuildRuleMesh_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PointCloudEditor_EDebugBuildRuleMesh_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PointCloudEditor_EDebugBuildRuleMesh()
	{
		if (!Z_Registration_Info_UEnum_EDebugBuildRuleMesh.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDebugBuildRuleMesh.InnerSingleton, Z_Construct_UEnum_PointCloudEditor_EDebugBuildRuleMesh_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDebugBuildRuleMesh.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDebugBuildRuleData>() == std::is_polymorphic<FPointCloudRuleData>(), "USTRUCT FDebugBuildRuleData cannot be polymorphic unless super FPointCloudRuleData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DebugBuildRuleData;
class UScriptStruct* FDebugBuildRuleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DebugBuildRuleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DebugBuildRuleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugBuildRuleData, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("DebugBuildRuleData"));
	}
	return Z_Registration_Info_UScriptStruct_DebugBuildRuleData.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FDebugBuildRuleData>()
{
	return FDebugBuildRuleData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamePattern_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NamePattern;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DebugMesh_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugMesh_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DebugMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleFactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Rules/DebugBuildRule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugBuildRuleData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::NewProp_NamePattern_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/DebugBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::NewProp_NamePattern = { "NamePattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDebugBuildRuleData, NamePattern), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::NewProp_NamePattern_MetaData), Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::NewProp_NamePattern_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::NewProp_DebugMesh_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::NewProp_DebugMesh_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/DebugBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::NewProp_DebugMesh = { "DebugMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDebugBuildRuleData, DebugMesh), Z_Construct_UEnum_PointCloudEditor_EDebugBuildRuleMesh, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::NewProp_DebugMesh_MetaData), Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::NewProp_DebugMesh_MetaData) }; // 1559680731
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::NewProp_ScaleFactor_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/DebugBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::NewProp_ScaleFactor = { "ScaleFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDebugBuildRuleData, ScaleFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::NewProp_ScaleFactor_MetaData), Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::NewProp_ScaleFactor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::NewProp_NamePattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::NewProp_DebugMesh_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::NewProp_DebugMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::NewProp_ScaleFactor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
		Z_Construct_UScriptStruct_FPointCloudRuleData,
		&NewStructOps,
		"DebugBuildRuleData",
		Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::PropPointers),
		sizeof(FDebugBuildRuleData),
		alignof(FDebugBuildRuleData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDebugBuildRuleData()
	{
		if (!Z_Registration_Info_UScriptStruct_DebugBuildRuleData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DebugBuildRuleData.InnerSingleton, Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DebugBuildRuleData.InnerSingleton;
	}
	void UDebugBuildRule::StaticRegisterNativesUDebugBuildRule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDebugBuildRule);
	UClass* Z_Construct_UClass_UDebugBuildRule_NoRegister()
	{
		return UDebugBuildRule::StaticClass();
	}
	struct Z_Construct_UClass_UDebugBuildRule_Statics
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
	UObject* (*const Z_Construct_UClass_UDebugBuildRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPointCloudRule,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDebugBuildRule_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugBuildRule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Rules/DebugBuildRule.h" },
		{ "ModuleRelativePath", "Private/Rules/DebugBuildRule.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugBuildRule_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/DebugBuildRule.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDebugBuildRule_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDebugBuildRule, Data), Z_Construct_UScriptStruct_FDebugBuildRuleData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDebugBuildRule_Statics::NewProp_Data_MetaData), Z_Construct_UClass_UDebugBuildRule_Statics::NewProp_Data_MetaData) }; // 1983645399
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDebugBuildRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugBuildRule_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDebugBuildRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDebugBuildRule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDebugBuildRule_Statics::ClassParams = {
		&UDebugBuildRule::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDebugBuildRule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDebugBuildRule_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDebugBuildRule_Statics::Class_MetaDataParams), Z_Construct_UClass_UDebugBuildRule_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDebugBuildRule_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDebugBuildRule()
	{
		if (!Z_Registration_Info_UClass_UDebugBuildRule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDebugBuildRule.OuterSingleton, Z_Construct_UClass_UDebugBuildRule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDebugBuildRule.OuterSingleton;
	}
	template<> POINTCLOUDEDITOR_API UClass* StaticClass<UDebugBuildRule>()
	{
		return UDebugBuildRule::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDebugBuildRule);
	UDebugBuildRule::~UDebugBuildRule() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_Statics::EnumInfo[] = {
		{ EDebugBuildRuleMesh_StaticEnum, TEXT("EDebugBuildRuleMesh"), &Z_Registration_Info_UEnum_EDebugBuildRuleMesh, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1559680731U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_Statics::ScriptStructInfo[] = {
		{ FDebugBuildRuleData::StaticStruct, Z_Construct_UScriptStruct_FDebugBuildRuleData_Statics::NewStructOps, TEXT("DebugBuildRuleData"), &Z_Registration_Info_UScriptStruct_DebugBuildRuleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDebugBuildRuleData), 1983645399U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDebugBuildRule, UDebugBuildRule::StaticClass, TEXT("UDebugBuildRule"), &Z_Registration_Info_UClass_UDebugBuildRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDebugBuildRule), 3067536487U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_1826256496(TEXT("/Script/PointCloudEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_DebugBuildRule_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
