// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Rules/FilterOnTile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFilterOnTile() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
	POINTCLOUD_API UEnum* Z_Construct_UEnum_PointCloud_EPointCloudBoundsOption();
	POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UTileFilterRule();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UTileFilterRule_NoRegister();
	POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTileFilterRuleData();
	UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FTileFilterRuleData>() == std::is_polymorphic<FPointCloudRuleData>(), "USTRUCT FTileFilterRuleData cannot be polymorphic unless super FPointCloudRuleData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TileFilterRuleData;
class UScriptStruct* FTileFilterRuleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TileFilterRuleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TileFilterRuleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTileFilterRuleData, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("TileFilterRuleData"));
	}
	return Z_Registration_Info_UScriptStruct_TileFilterRuleData.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FTileFilterRuleData>()
{
	return FTileFilterRuleData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTileFilterRuleData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumTilesX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumTilesX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumTilesY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumTilesY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumTilesZ_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumTilesZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TileX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TileY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileZ_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TileZ;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoundsOption_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundsOption_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundsOption;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnTile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTileFilterRuleData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_NumTilesX_MetaData[] = {
		{ "Category", "TileFilterRuleData" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnTile.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_NumTilesX = { "NumTilesX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileFilterRuleData, NumTilesX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_NumTilesX_MetaData), Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_NumTilesX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_NumTilesY_MetaData[] = {
		{ "Category", "TileFilterRuleData" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnTile.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_NumTilesY = { "NumTilesY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileFilterRuleData, NumTilesY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_NumTilesY_MetaData), Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_NumTilesY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_NumTilesZ_MetaData[] = {
		{ "Category", "TileFilterRuleData" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnTile.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_NumTilesZ = { "NumTilesZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileFilterRuleData, NumTilesZ), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_NumTilesZ_MetaData), Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_NumTilesZ_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_TileX_MetaData[] = {
		{ "Category", "TileFilterRuleData" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnTile.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_TileX = { "TileX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileFilterRuleData, TileX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_TileX_MetaData), Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_TileX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_TileY_MetaData[] = {
		{ "Category", "TileFilterRuleData" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnTile.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_TileY = { "TileY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileFilterRuleData, TileY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_TileY_MetaData), Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_TileY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_TileZ_MetaData[] = {
		{ "Category", "TileFilterRuleData" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnTile.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_TileZ = { "TileZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileFilterRuleData, TileZ), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_TileZ_MetaData), Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_TileZ_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_BoundsOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_BoundsOption_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnTile.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_BoundsOption = { "BoundsOption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileFilterRuleData, BoundsOption), Z_Construct_UEnum_PointCloud_EPointCloudBoundsOption, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_BoundsOption_MetaData), Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_BoundsOption_MetaData) }; // 1609294395
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_Bounds_MetaData[] = {
		{ "Category", "TileFilterRuleData" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnTile.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileFilterRuleData, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_Bounds_MetaData), Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_Bounds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_NamePattern_MetaData[] = {
		{ "Category", "TileFilterRuleData" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnTile.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_NamePattern = { "NamePattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileFilterRuleData, NamePattern), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_NamePattern_MetaData), Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_NamePattern_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_NumTilesX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_NumTilesY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_NumTilesZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_TileX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_TileY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_TileZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_BoundsOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_BoundsOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewProp_NamePattern,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
		Z_Construct_UScriptStruct_FPointCloudRuleData,
		&NewStructOps,
		"TileFilterRuleData",
		Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::PropPointers),
		sizeof(FTileFilterRuleData),
		alignof(FTileFilterRuleData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTileFilterRuleData()
	{
		if (!Z_Registration_Info_UScriptStruct_TileFilterRuleData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TileFilterRuleData.InnerSingleton, Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TileFilterRuleData.InnerSingleton;
	}
	void UTileFilterRule::StaticRegisterNativesUTileFilterRule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTileFilterRule);
	UClass* Z_Construct_UClass_UTileFilterRule_NoRegister()
	{
		return UTileFilterRule::StaticClass();
	}
	struct Z_Construct_UClass_UTileFilterRule_Statics
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
	UObject* (*const Z_Construct_UClass_UTileFilterRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPointCloudRule,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTileFilterRule_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileFilterRule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Rules/FilterOnTile.h" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnTile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileFilterRule_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/FilterOnTile.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTileFilterRule_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTileFilterRule, Data), Z_Construct_UScriptStruct_FTileFilterRuleData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTileFilterRule_Statics::NewProp_Data_MetaData), Z_Construct_UClass_UTileFilterRule_Statics::NewProp_Data_MetaData) }; // 2148248508
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTileFilterRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileFilterRule_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTileFilterRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileFilterRule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTileFilterRule_Statics::ClassParams = {
		&UTileFilterRule::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTileFilterRule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTileFilterRule_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTileFilterRule_Statics::Class_MetaDataParams), Z_Construct_UClass_UTileFilterRule_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTileFilterRule_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTileFilterRule()
	{
		if (!Z_Registration_Info_UClass_UTileFilterRule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTileFilterRule.OuterSingleton, Z_Construct_UClass_UTileFilterRule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTileFilterRule.OuterSingleton;
	}
	template<> POINTCLOUDEDITOR_API UClass* StaticClass<UTileFilterRule>()
	{
		return UTileFilterRule::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileFilterRule);
	UTileFilterRule::~UTileFilterRule() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnTile_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnTile_h_Statics::ScriptStructInfo[] = {
		{ FTileFilterRuleData::StaticStruct, Z_Construct_UScriptStruct_FTileFilterRuleData_Statics::NewStructOps, TEXT("TileFilterRuleData"), &Z_Registration_Info_UScriptStruct_TileFilterRuleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTileFilterRuleData), 2148248508U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnTile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTileFilterRule, UTileFilterRule::StaticClass, TEXT("UTileFilterRule"), &Z_Registration_Info_UClass_UTileFilterRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTileFilterRule), 1074773415U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnTile_h_3178906706(TEXT("/Script/PointCloudEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnTile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnTile_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnTile_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_FilterOnTile_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
