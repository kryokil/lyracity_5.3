// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Rules/SpawnBlueprintsBuildRule.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/DataLayer/ActorDataLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnBlueprintsBuildRule() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorDataLayer();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
	POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_USpawnBlueprintsBuildRule();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_USpawnBlueprintsBuildRule_NoRegister();
	POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData();
	UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FSpawnBlueprintsBuildRuleData>() == std::is_polymorphic<FPointCloudRuleData>(), "USTRUCT FSpawnBlueprintsBuildRuleData cannot be polymorphic unless super FPointCloudRuleData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpawnBlueprintsBuildRuleData;
class UScriptStruct* FSpawnBlueprintsBuildRuleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnBlueprintsBuildRuleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpawnBlueprintsBuildRuleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("SpawnBlueprintsBuildRuleData"));
	}
	return Z_Registration_Info_UScriptStruct_SpawnBlueprintsBuildRuleData.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FSpawnBlueprintsBuildRuleData>()
{
	return FSpawnBlueprintsBuildRuleData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OverrideObjectsMap_ValueProp;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OverrideObjectsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideObjectsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OverrideObjectsMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamePattern_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NamePattern;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetadataKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetadataKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TemplateActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FolderPath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FolderPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLightweightInstancing_MetaData[];
#endif
		static void NewProp_bUseLightweightInstancing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLightweightInstancing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Rules/SpawnBlueprintsBuildRule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnBlueprintsBuildRuleData>();
	}
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_OverrideObjectsMap_ValueProp = { "OverrideObjectsMap", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_OverrideObjectsMap_Key_KeyProp = { "OverrideObjectsMap_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_OverrideObjectsMap_MetaData[] = {
		{ "Category", "Overrides" },
		{ "ModuleRelativePath", "Private/Rules/SpawnBlueprintsBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_OverrideObjectsMap = { "OverrideObjectsMap", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnBlueprintsBuildRuleData, OverrideObjectsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_OverrideObjectsMap_MetaData), Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_OverrideObjectsMap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_NamePattern_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/SpawnBlueprintsBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_NamePattern = { "NamePattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnBlueprintsBuildRuleData, NamePattern), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_NamePattern_MetaData), Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_NamePattern_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_MetadataKey_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/SpawnBlueprintsBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_MetadataKey = { "MetadataKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnBlueprintsBuildRuleData, MetadataKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_MetadataKey_MetaData), Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_MetadataKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_TemplateActor_MetaData[] = {
		{ "Category", "Templates" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Rules/SpawnBlueprintsBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_TemplateActor = { "TemplateActor", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnBlueprintsBuildRuleData, TemplateActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_TemplateActor_MetaData), Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_TemplateActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_FolderPath_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/SpawnBlueprintsBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_FolderPath = { "FolderPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnBlueprintsBuildRuleData, FolderPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_FolderPath_MetaData), Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_FolderPath_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(0, nullptr) }; // 3287794552
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_DataLayers_MetaData[] = {
		{ "Category", "DataLayers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** DataLayers the generated actors will belong to.*/" },
#endif
		{ "ModuleRelativePath", "Private/Rules/SpawnBlueprintsBuildRule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DataLayers the generated actors will belong to." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnBlueprintsBuildRuleData, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_DataLayers_MetaData), Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_DataLayers_MetaData) }; // 3287794552
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_bUseLightweightInstancing_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/SpawnBlueprintsBuildRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_bUseLightweightInstancing_SetBit(void* Obj)
	{
		((FSpawnBlueprintsBuildRuleData*)Obj)->bUseLightweightInstancing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_bUseLightweightInstancing = { "bUseLightweightInstancing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpawnBlueprintsBuildRuleData), &Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_bUseLightweightInstancing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_bUseLightweightInstancing_MetaData), Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_bUseLightweightInstancing_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_OverrideObjectsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_OverrideObjectsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_OverrideObjectsMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_NamePattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_MetadataKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_TemplateActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_FolderPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_DataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_DataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewProp_bUseLightweightInstancing,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
		Z_Construct_UScriptStruct_FPointCloudRuleData,
		&NewStructOps,
		"SpawnBlueprintsBuildRuleData",
		Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::PropPointers),
		sizeof(FSpawnBlueprintsBuildRuleData),
		alignof(FSpawnBlueprintsBuildRuleData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData()
	{
		if (!Z_Registration_Info_UScriptStruct_SpawnBlueprintsBuildRuleData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpawnBlueprintsBuildRuleData.InnerSingleton, Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SpawnBlueprintsBuildRuleData.InnerSingleton;
	}
	void USpawnBlueprintsBuildRule::StaticRegisterNativesUSpawnBlueprintsBuildRule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpawnBlueprintsBuildRule);
	UClass* Z_Construct_UClass_USpawnBlueprintsBuildRule_NoRegister()
	{
		return USpawnBlueprintsBuildRule::StaticClass();
	}
	struct Z_Construct_UClass_USpawnBlueprintsBuildRule_Statics
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
	UObject* (*const Z_Construct_UClass_USpawnBlueprintsBuildRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPointCloudRule,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnBlueprintsBuildRule_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnBlueprintsBuildRule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Rules/SpawnBlueprintsBuildRule.h" },
		{ "ModuleRelativePath", "Private/Rules/SpawnBlueprintsBuildRule.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnBlueprintsBuildRule_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/SpawnBlueprintsBuildRule.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpawnBlueprintsBuildRule_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnBlueprintsBuildRule, Data), Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnBlueprintsBuildRule_Statics::NewProp_Data_MetaData), Z_Construct_UClass_USpawnBlueprintsBuildRule_Statics::NewProp_Data_MetaData) }; // 3250897618
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpawnBlueprintsBuildRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnBlueprintsBuildRule_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpawnBlueprintsBuildRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpawnBlueprintsBuildRule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpawnBlueprintsBuildRule_Statics::ClassParams = {
		&USpawnBlueprintsBuildRule::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpawnBlueprintsBuildRule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpawnBlueprintsBuildRule_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnBlueprintsBuildRule_Statics::Class_MetaDataParams), Z_Construct_UClass_USpawnBlueprintsBuildRule_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnBlueprintsBuildRule_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USpawnBlueprintsBuildRule()
	{
		if (!Z_Registration_Info_UClass_USpawnBlueprintsBuildRule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpawnBlueprintsBuildRule.OuterSingleton, Z_Construct_UClass_USpawnBlueprintsBuildRule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpawnBlueprintsBuildRule.OuterSingleton;
	}
	template<> POINTCLOUDEDITOR_API UClass* StaticClass<USpawnBlueprintsBuildRule>()
	{
		return USpawnBlueprintsBuildRule::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpawnBlueprintsBuildRule);
	USpawnBlueprintsBuildRule::~USpawnBlueprintsBuildRule() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnBlueprintsBuildRule_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnBlueprintsBuildRule_h_Statics::ScriptStructInfo[] = {
		{ FSpawnBlueprintsBuildRuleData::StaticStruct, Z_Construct_UScriptStruct_FSpawnBlueprintsBuildRuleData_Statics::NewStructOps, TEXT("SpawnBlueprintsBuildRuleData"), &Z_Registration_Info_UScriptStruct_SpawnBlueprintsBuildRuleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnBlueprintsBuildRuleData), 3250897618U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnBlueprintsBuildRule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpawnBlueprintsBuildRule, USpawnBlueprintsBuildRule::StaticClass, TEXT("USpawnBlueprintsBuildRule"), &Z_Registration_Info_UClass_USpawnBlueprintsBuildRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpawnBlueprintsBuildRule), 4195722012U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnBlueprintsBuildRule_h_2002014794(TEXT("/Script/PointCloudEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnBlueprintsBuildRule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnBlueprintsBuildRule_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnBlueprintsBuildRule_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnBlueprintsBuildRule_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
