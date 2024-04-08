// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Rules/ConsolidateBlueprintISMsToActorBuildRule.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/DataLayer/ActorDataLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsolidateBlueprintISMsToActorBuildRule() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorDataLayer();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
	POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UConsolidateBlueprintISMsToActorBuildRule();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UConsolidateBlueprintISMsToActorBuildRule_NoRegister();
	POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData();
	UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FConsolidateBlueprintISMsToActorBuildRuleData>() == std::is_polymorphic<FPointCloudRuleData>(), "USTRUCT FConsolidateBlueprintISMsToActorBuildRuleData cannot be polymorphic unless super FPointCloudRuleData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConsolidateBlueprintISMsToActorBuildRuleData;
class UScriptStruct* FConsolidateBlueprintISMsToActorBuildRuleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConsolidateBlueprintISMsToActorBuildRuleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConsolidateBlueprintISMsToActorBuildRuleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("ConsolidateBlueprintISMsToActorBuildRuleData"));
	}
	return Z_Registration_Info_UScriptStruct_ConsolidateBlueprintISMsToActorBuildRuleData.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FConsolidateBlueprintISMsToActorBuildRuleData>()
{
	return FConsolidateBlueprintISMsToActorBuildRuleData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FClassPropertyParams NewProp_OverrideActorsMap_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_OverrideActorsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideActorsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OverrideActorsMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamePattern_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NamePattern;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintMetadataKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintMetadataKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorMetadataKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActorMetadataKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Rules/ConsolidateBlueprintISMsToActorBuildRule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConsolidateBlueprintISMsToActorBuildRuleData>();
	}
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_OverrideActorsMap_ValueProp = { "OverrideActorsMap", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_OverrideActorsMap_Key_KeyProp = { "OverrideActorsMap_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_OverrideActorsMap_MetaData[] = {
		{ "Category", "Overrides" },
		{ "ModuleRelativePath", "Private/Rules/ConsolidateBlueprintISMsToActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_OverrideActorsMap = { "OverrideActorsMap", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConsolidateBlueprintISMsToActorBuildRuleData, OverrideActorsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_OverrideActorsMap_MetaData), Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_OverrideActorsMap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_NamePattern_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/ConsolidateBlueprintISMsToActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_NamePattern = { "NamePattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConsolidateBlueprintISMsToActorBuildRuleData, NamePattern), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_NamePattern_MetaData), Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_NamePattern_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_BlueprintMetadataKey_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/ConsolidateBlueprintISMsToActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_BlueprintMetadataKey = { "BlueprintMetadataKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConsolidateBlueprintISMsToActorBuildRuleData, BlueprintMetadataKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_BlueprintMetadataKey_MetaData), Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_BlueprintMetadataKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_ActorMetadataKey_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/ConsolidateBlueprintISMsToActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_ActorMetadataKey = { "ActorMetadataKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConsolidateBlueprintISMsToActorBuildRuleData, ActorMetadataKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_ActorMetadataKey_MetaData), Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_ActorMetadataKey_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(0, nullptr) }; // 3287794552
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_DataLayers_MetaData[] = {
		{ "Category", "DataLayers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** DataLayers the generated actors will belong to.*/" },
#endif
		{ "ModuleRelativePath", "Private/Rules/ConsolidateBlueprintISMsToActorBuildRule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DataLayers the generated actors will belong to." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConsolidateBlueprintISMsToActorBuildRuleData, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_DataLayers_MetaData), Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_DataLayers_MetaData) }; // 3287794552
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_OverrideActorsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_OverrideActorsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_OverrideActorsMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_NamePattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_BlueprintMetadataKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_ActorMetadataKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_DataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewProp_DataLayers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
		Z_Construct_UScriptStruct_FPointCloudRuleData,
		&NewStructOps,
		"ConsolidateBlueprintISMsToActorBuildRuleData",
		Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::PropPointers),
		sizeof(FConsolidateBlueprintISMsToActorBuildRuleData),
		alignof(FConsolidateBlueprintISMsToActorBuildRuleData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData()
	{
		if (!Z_Registration_Info_UScriptStruct_ConsolidateBlueprintISMsToActorBuildRuleData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConsolidateBlueprintISMsToActorBuildRuleData.InnerSingleton, Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConsolidateBlueprintISMsToActorBuildRuleData.InnerSingleton;
	}
	void UConsolidateBlueprintISMsToActorBuildRule::StaticRegisterNativesUConsolidateBlueprintISMsToActorBuildRule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConsolidateBlueprintISMsToActorBuildRule);
	UClass* Z_Construct_UClass_UConsolidateBlueprintISMsToActorBuildRule_NoRegister()
	{
		return UConsolidateBlueprintISMsToActorBuildRule::StaticClass();
	}
	struct Z_Construct_UClass_UConsolidateBlueprintISMsToActorBuildRule_Statics
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
	UObject* (*const Z_Construct_UClass_UConsolidateBlueprintISMsToActorBuildRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPointCloudRule,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConsolidateBlueprintISMsToActorBuildRule_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsolidateBlueprintISMsToActorBuildRule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Rules/ConsolidateBlueprintISMsToActorBuildRule.h" },
		{ "ModuleRelativePath", "Private/Rules/ConsolidateBlueprintISMsToActorBuildRule.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsolidateBlueprintISMsToActorBuildRule_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/ConsolidateBlueprintISMsToActorBuildRule.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConsolidateBlueprintISMsToActorBuildRule_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConsolidateBlueprintISMsToActorBuildRule, Data), Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConsolidateBlueprintISMsToActorBuildRule_Statics::NewProp_Data_MetaData), Z_Construct_UClass_UConsolidateBlueprintISMsToActorBuildRule_Statics::NewProp_Data_MetaData) }; // 2312078612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConsolidateBlueprintISMsToActorBuildRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsolidateBlueprintISMsToActorBuildRule_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConsolidateBlueprintISMsToActorBuildRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConsolidateBlueprintISMsToActorBuildRule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConsolidateBlueprintISMsToActorBuildRule_Statics::ClassParams = {
		&UConsolidateBlueprintISMsToActorBuildRule::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConsolidateBlueprintISMsToActorBuildRule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConsolidateBlueprintISMsToActorBuildRule_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConsolidateBlueprintISMsToActorBuildRule_Statics::Class_MetaDataParams), Z_Construct_UClass_UConsolidateBlueprintISMsToActorBuildRule_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConsolidateBlueprintISMsToActorBuildRule_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UConsolidateBlueprintISMsToActorBuildRule()
	{
		if (!Z_Registration_Info_UClass_UConsolidateBlueprintISMsToActorBuildRule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConsolidateBlueprintISMsToActorBuildRule.OuterSingleton, Z_Construct_UClass_UConsolidateBlueprintISMsToActorBuildRule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConsolidateBlueprintISMsToActorBuildRule.OuterSingleton;
	}
	template<> POINTCLOUDEDITOR_API UClass* StaticClass<UConsolidateBlueprintISMsToActorBuildRule>()
	{
		return UConsolidateBlueprintISMsToActorBuildRule::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConsolidateBlueprintISMsToActorBuildRule);
	UConsolidateBlueprintISMsToActorBuildRule::~UConsolidateBlueprintISMsToActorBuildRule() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ConsolidateBlueprintISMsToActorBuildRule_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ConsolidateBlueprintISMsToActorBuildRule_h_Statics::ScriptStructInfo[] = {
		{ FConsolidateBlueprintISMsToActorBuildRuleData::StaticStruct, Z_Construct_UScriptStruct_FConsolidateBlueprintISMsToActorBuildRuleData_Statics::NewStructOps, TEXT("ConsolidateBlueprintISMsToActorBuildRuleData"), &Z_Registration_Info_UScriptStruct_ConsolidateBlueprintISMsToActorBuildRuleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConsolidateBlueprintISMsToActorBuildRuleData), 2312078612U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ConsolidateBlueprintISMsToActorBuildRule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConsolidateBlueprintISMsToActorBuildRule, UConsolidateBlueprintISMsToActorBuildRule::StaticClass, TEXT("UConsolidateBlueprintISMsToActorBuildRule"), &Z_Registration_Info_UClass_UConsolidateBlueprintISMsToActorBuildRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConsolidateBlueprintISMsToActorBuildRule), 757969627U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ConsolidateBlueprintISMsToActorBuildRule_h_2366995334(TEXT("/Script/PointCloudEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ConsolidateBlueprintISMsToActorBuildRule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ConsolidateBlueprintISMsToActorBuildRule_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ConsolidateBlueprintISMsToActorBuildRule_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_ConsolidateBlueprintISMsToActorBuildRule_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
