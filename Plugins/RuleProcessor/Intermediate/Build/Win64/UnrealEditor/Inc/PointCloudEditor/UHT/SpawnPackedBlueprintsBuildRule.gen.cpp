// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Rules/SpawnPackedBlueprintsBuildRule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnPackedBlueprintsBuildRule() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELevelInstancePivotType();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
	POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_USpawnPackedBlueprintsBuildRule();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_NoRegister();
	POINTCLOUDEDITOR_API UEnum* Z_Construct_UEnum_PointCloudEditor_EPointCloudLevelInstanceType();
	POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData();
	UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPointCloudLevelInstanceType;
	static UEnum* EPointCloudLevelInstanceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPointCloudLevelInstanceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPointCloudLevelInstanceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PointCloudEditor_EPointCloudLevelInstanceType, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("EPointCloudLevelInstanceType"));
		}
		return Z_Registration_Info_UEnum_EPointCloudLevelInstanceType.OuterSingleton;
	}
	template<> POINTCLOUDEDITOR_API UEnum* StaticEnum<EPointCloudLevelInstanceType>()
	{
		return EPointCloudLevelInstanceType_StaticEnum();
	}
	struct Z_Construct_UEnum_PointCloudEditor_EPointCloudLevelInstanceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PointCloudEditor_EPointCloudLevelInstanceType_Statics::Enumerators[] = {
		{ "EPointCloudLevelInstanceType::LevelInstance", (int64)EPointCloudLevelInstanceType::LevelInstance },
		{ "EPointCloudLevelInstanceType::PackedLevelInstance", (int64)EPointCloudLevelInstanceType::PackedLevelInstance },
		{ "EPointCloudLevelInstanceType::PackedLevelInstanceBlueprint", (int64)EPointCloudLevelInstanceType::PackedLevelInstanceBlueprint },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PointCloudEditor_EPointCloudLevelInstanceType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LevelInstance.DisplayName", "Level Instance" },
		{ "LevelInstance.Name", "EPointCloudLevelInstanceType::LevelInstance" },
		{ "ModuleRelativePath", "Private/Rules/SpawnPackedBlueprintsBuildRule.h" },
		{ "PackedLevelInstance.DisplayName", "Packed Level Instance" },
		{ "PackedLevelInstance.Name", "EPointCloudLevelInstanceType::PackedLevelInstance" },
		{ "PackedLevelInstanceBlueprint.DisplayName", "Packed Level Instance Blueprint" },
		{ "PackedLevelInstanceBlueprint.Name", "EPointCloudLevelInstanceType::PackedLevelInstanceBlueprint" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PointCloudEditor_EPointCloudLevelInstanceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PointCloudEditor,
		nullptr,
		"EPointCloudLevelInstanceType",
		"EPointCloudLevelInstanceType",
		Z_Construct_UEnum_PointCloudEditor_EPointCloudLevelInstanceType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PointCloudEditor_EPointCloudLevelInstanceType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PointCloudEditor_EPointCloudLevelInstanceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PointCloudEditor_EPointCloudLevelInstanceType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PointCloudEditor_EPointCloudLevelInstanceType()
	{
		if (!Z_Registration_Info_UEnum_EPointCloudLevelInstanceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPointCloudLevelInstanceType.InnerSingleton, Z_Construct_UEnum_PointCloudEditor_EPointCloudLevelInstanceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPointCloudLevelInstanceType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSpawnPackedBlueprintsBuildRuleData>() == std::is_polymorphic<FPointCloudRuleData>(), "USTRUCT FSpawnPackedBlueprintsBuildRuleData cannot be polymorphic unless super FPointCloudRuleData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpawnPackedBlueprintsBuildRuleData;
class UScriptStruct* FSpawnPackedBlueprintsBuildRuleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnPackedBlueprintsBuildRuleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpawnPackedBlueprintsBuildRuleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("SpawnPackedBlueprintsBuildRuleData"));
	}
	return Z_Registration_Info_UScriptStruct_SpawnPackedBlueprintsBuildRuleData.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FSpawnPackedBlueprintsBuildRuleData>()
{
	return FSpawnPackedBlueprintsBuildRuleData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_LevelInstanceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelInstanceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LevelInstanceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExternalActors_MetaData[];
#endif
		static void NewProp_bExternalActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExternalActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContentFolder;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PivotType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PivotType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Rules/SpawnPackedBlueprintsBuildRule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnPackedBlueprintsBuildRuleData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_LevelInstanceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_LevelInstanceType_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/SpawnPackedBlueprintsBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_LevelInstanceType = { "LevelInstanceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnPackedBlueprintsBuildRuleData, LevelInstanceType), Z_Construct_UEnum_PointCloudEditor_EPointCloudLevelInstanceType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_LevelInstanceType_MetaData), Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_LevelInstanceType_MetaData) }; // 2801123077
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_bExternalActors_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/SpawnPackedBlueprintsBuildRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_bExternalActors_SetBit(void* Obj)
	{
		((FSpawnPackedBlueprintsBuildRuleData*)Obj)->bExternalActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_bExternalActors = { "bExternalActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpawnPackedBlueprintsBuildRuleData), &Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_bExternalActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_bExternalActors_MetaData), Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_bExternalActors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_ContentFolder_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ContentDir", "" },
		{ "ModuleRelativePath", "Private/Rules/SpawnPackedBlueprintsBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_ContentFolder = { "ContentFolder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnPackedBlueprintsBuildRuleData, ContentFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_ContentFolder_MetaData), Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_ContentFolder_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_PivotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_PivotType_MetaData[] = {
		{ "Category", "Pivot" },
		{ "ModuleRelativePath", "Private/Rules/SpawnPackedBlueprintsBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_PivotType = { "PivotType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnPackedBlueprintsBuildRuleData, PivotType), Z_Construct_UEnum_Engine_ELevelInstancePivotType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_PivotType_MetaData), Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_PivotType_MetaData) }; // 2161427355
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_LevelInstanceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_LevelInstanceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_bExternalActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_ContentFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_PivotType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewProp_PivotType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
		Z_Construct_UScriptStruct_FPointCloudRuleData,
		&NewStructOps,
		"SpawnPackedBlueprintsBuildRuleData",
		Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::PropPointers),
		sizeof(FSpawnPackedBlueprintsBuildRuleData),
		alignof(FSpawnPackedBlueprintsBuildRuleData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData()
	{
		if (!Z_Registration_Info_UScriptStruct_SpawnPackedBlueprintsBuildRuleData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpawnPackedBlueprintsBuildRuleData.InnerSingleton, Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SpawnPackedBlueprintsBuildRuleData.InnerSingleton;
	}
	void USpawnPackedBlueprintsBuildRule::StaticRegisterNativesUSpawnPackedBlueprintsBuildRule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpawnPackedBlueprintsBuildRule);
	UClass* Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_NoRegister()
	{
		return USpawnPackedBlueprintsBuildRule::StaticClass();
	}
	struct Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics
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
	UObject* (*const Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPointCloudRule,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Rules/SpawnPackedBlueprintsBuildRule.h" },
		{ "ModuleRelativePath", "Private/Rules/SpawnPackedBlueprintsBuildRule.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/SpawnPackedBlueprintsBuildRule.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnPackedBlueprintsBuildRule, Data), Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::NewProp_Data_MetaData), Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::NewProp_Data_MetaData) }; // 2224423752
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpawnPackedBlueprintsBuildRule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::ClassParams = {
		&USpawnPackedBlueprintsBuildRule::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::Class_MetaDataParams), Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USpawnPackedBlueprintsBuildRule()
	{
		if (!Z_Registration_Info_UClass_USpawnPackedBlueprintsBuildRule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpawnPackedBlueprintsBuildRule.OuterSingleton, Z_Construct_UClass_USpawnPackedBlueprintsBuildRule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpawnPackedBlueprintsBuildRule.OuterSingleton;
	}
	template<> POINTCLOUDEDITOR_API UClass* StaticClass<USpawnPackedBlueprintsBuildRule>()
	{
		return USpawnPackedBlueprintsBuildRule::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpawnPackedBlueprintsBuildRule);
	USpawnPackedBlueprintsBuildRule::~USpawnPackedBlueprintsBuildRule() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_Statics::EnumInfo[] = {
		{ EPointCloudLevelInstanceType_StaticEnum, TEXT("EPointCloudLevelInstanceType"), &Z_Registration_Info_UEnum_EPointCloudLevelInstanceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2801123077U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_Statics::ScriptStructInfo[] = {
		{ FSpawnPackedBlueprintsBuildRuleData::StaticStruct, Z_Construct_UScriptStruct_FSpawnPackedBlueprintsBuildRuleData_Statics::NewStructOps, TEXT("SpawnPackedBlueprintsBuildRuleData"), &Z_Registration_Info_UScriptStruct_SpawnPackedBlueprintsBuildRuleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnPackedBlueprintsBuildRuleData), 2224423752U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpawnPackedBlueprintsBuildRule, USpawnPackedBlueprintsBuildRule::StaticClass, TEXT("USpawnPackedBlueprintsBuildRule"), &Z_Registration_Info_UClass_USpawnPackedBlueprintsBuildRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpawnPackedBlueprintsBuildRule), 3696385882U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_3399212445(TEXT("/Script/PointCloudEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnPackedBlueprintsBuildRule_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
