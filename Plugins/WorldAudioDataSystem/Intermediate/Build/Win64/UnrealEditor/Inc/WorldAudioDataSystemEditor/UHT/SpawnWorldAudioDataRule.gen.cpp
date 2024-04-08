// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldAudioDataSystemEditor/Private/SpawnWorldAudioDataRule.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/DataLayer/ActorDataLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnWorldAudioDataRule() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorDataLayer();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
	POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
	UPackage* Z_Construct_UPackage__Script_WorldAudioDataSystemEditor();
	WORLDAUDIODATASYSTEMEDITOR_API UClass* Z_Construct_UClass_USpawnWorldAudioDataRule();
	WORLDAUDIODATASYSTEMEDITOR_API UClass* Z_Construct_UClass_USpawnWorldAudioDataRule_NoRegister();
	WORLDAUDIODATASYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData();
// End Cross Module References

static_assert(std::is_polymorphic<FSpawnWorldAudioDataRuleData>() == std::is_polymorphic<FPointCloudRuleData>(), "USTRUCT FSpawnWorldAudioDataRuleData cannot be polymorphic unless super FPointCloudRuleData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpawnWorldAudioDataRuleData;
class UScriptStruct* FSpawnWorldAudioDataRuleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnWorldAudioDataRuleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpawnWorldAudioDataRuleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData, (UObject*)Z_Construct_UPackage__Script_WorldAudioDataSystemEditor(), TEXT("SpawnWorldAudioDataRuleData"));
	}
	return Z_Registration_Info_UScriptStruct_SpawnWorldAudioDataRuleData.OuterSingleton;
}
template<> WORLDAUDIODATASYSTEMEDITOR_API UScriptStruct* StaticStruct<FSpawnWorldAudioDataRuleData>()
{
	return FSpawnWorldAudioDataRuleData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaDataKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetaDataKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverbKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReverbKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamePattern_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NamePattern;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FolderPath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FolderPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/SpawnWorldAudioDataRule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnWorldAudioDataRuleData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_MetaDataKey_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/SpawnWorldAudioDataRule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_MetaDataKey = { "MetaDataKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnWorldAudioDataRuleData, MetaDataKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_MetaDataKey_MetaData), Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_MetaDataKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_ReverbKey_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/SpawnWorldAudioDataRule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_ReverbKey = { "ReverbKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnWorldAudioDataRuleData, ReverbKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_ReverbKey_MetaData), Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_ReverbKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_NamePattern_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/SpawnWorldAudioDataRule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_NamePattern = { "NamePattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnWorldAudioDataRuleData, NamePattern), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_NamePattern_MetaData), Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_NamePattern_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_FolderPath_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/SpawnWorldAudioDataRule.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_FolderPath = { "FolderPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnWorldAudioDataRuleData, FolderPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_FolderPath_MetaData), Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_FolderPath_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(0, nullptr) }; // 3287794552
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_DataLayers_MetaData[] = {
		{ "Category", "DataLayers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** DataLayers the generated actors will belong to.*/" },
#endif
		{ "ModuleRelativePath", "Private/SpawnWorldAudioDataRule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DataLayers the generated actors will belong to." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnWorldAudioDataRuleData, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_DataLayers_MetaData), Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_DataLayers_MetaData) }; // 3287794552
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_MetaDataKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_ReverbKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_NamePattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_FolderPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_DataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewProp_DataLayers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldAudioDataSystemEditor,
		Z_Construct_UScriptStruct_FPointCloudRuleData,
		&NewStructOps,
		"SpawnWorldAudioDataRuleData",
		Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::PropPointers),
		sizeof(FSpawnWorldAudioDataRuleData),
		alignof(FSpawnWorldAudioDataRuleData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData()
	{
		if (!Z_Registration_Info_UScriptStruct_SpawnWorldAudioDataRuleData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpawnWorldAudioDataRuleData.InnerSingleton, Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SpawnWorldAudioDataRuleData.InnerSingleton;
	}
	void USpawnWorldAudioDataRule::StaticRegisterNativesUSpawnWorldAudioDataRule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpawnWorldAudioDataRule);
	UClass* Z_Construct_UClass_USpawnWorldAudioDataRule_NoRegister()
	{
		return USpawnWorldAudioDataRule::StaticClass();
	}
	struct Z_Construct_UClass_USpawnWorldAudioDataRule_Statics
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
	UObject* (*const Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPointCloudRule,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldAudioDataSystemEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "SpawnWorldAudioDataRule.h" },
		{ "ModuleRelativePath", "Private/SpawnWorldAudioDataRule.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/SpawnWorldAudioDataRule.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnWorldAudioDataRule, Data), Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::NewProp_Data_MetaData), Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::NewProp_Data_MetaData) }; // 2166084770
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpawnWorldAudioDataRule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::ClassParams = {
		&USpawnWorldAudioDataRule::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::Class_MetaDataParams), Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USpawnWorldAudioDataRule()
	{
		if (!Z_Registration_Info_UClass_USpawnWorldAudioDataRule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpawnWorldAudioDataRule.OuterSingleton, Z_Construct_UClass_USpawnWorldAudioDataRule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpawnWorldAudioDataRule.OuterSingleton;
	}
	template<> WORLDAUDIODATASYSTEMEDITOR_API UClass* StaticClass<USpawnWorldAudioDataRule>()
	{
		return USpawnWorldAudioDataRule::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpawnWorldAudioDataRule);
	USpawnWorldAudioDataRule::~USpawnWorldAudioDataRule() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystemEditor_Private_SpawnWorldAudioDataRule_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystemEditor_Private_SpawnWorldAudioDataRule_h_Statics::ScriptStructInfo[] = {
		{ FSpawnWorldAudioDataRuleData::StaticStruct, Z_Construct_UScriptStruct_FSpawnWorldAudioDataRuleData_Statics::NewStructOps, TEXT("SpawnWorldAudioDataRuleData"), &Z_Registration_Info_UScriptStruct_SpawnWorldAudioDataRuleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnWorldAudioDataRuleData), 2166084770U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystemEditor_Private_SpawnWorldAudioDataRule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpawnWorldAudioDataRule, USpawnWorldAudioDataRule::StaticClass, TEXT("USpawnWorldAudioDataRule"), &Z_Registration_Info_UClass_USpawnWorldAudioDataRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpawnWorldAudioDataRule), 483018714U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystemEditor_Private_SpawnWorldAudioDataRule_h_1901905441(TEXT("/Script/WorldAudioDataSystemEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystemEditor_Private_SpawnWorldAudioDataRule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystemEditor_Private_SpawnWorldAudioDataRule_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystemEditor_Private_SpawnWorldAudioDataRule_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystemEditor_Private_SpawnWorldAudioDataRule_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
