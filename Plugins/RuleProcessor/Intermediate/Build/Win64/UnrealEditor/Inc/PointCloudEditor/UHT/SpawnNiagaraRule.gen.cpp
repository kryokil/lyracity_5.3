// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Rules/SpawnNiagaraRule.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/DataLayer/ActorDataLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnNiagaraRule() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorDataLayer();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
	POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_USpawnNiagaraRule();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_USpawnNiagaraRule_NoRegister();
	POINTCLOUDEDITOR_API UEnum* Z_Construct_UEnum_PointCloudEditor_ENiagaraSpawnMode();
	POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnNiagaraRuleData();
	UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraSpawnMode;
	static UEnum* ENiagaraSpawnMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraSpawnMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraSpawnMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PointCloudEditor_ENiagaraSpawnMode, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("ENiagaraSpawnMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraSpawnMode.OuterSingleton;
	}
	template<> POINTCLOUDEDITOR_API UEnum* StaticEnum<ENiagaraSpawnMode>()
	{
		return ENiagaraSpawnMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PointCloudEditor_ENiagaraSpawnMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PointCloudEditor_ENiagaraSpawnMode_Statics::Enumerators[] = {
		{ "ENiagaraSpawnMode::Random", (int64)ENiagaraSpawnMode::Random },
		{ "ENiagaraSpawnMode::Data", (int64)ENiagaraSpawnMode::Data },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PointCloudEditor_ENiagaraSpawnMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Data.DisplayName", "Data Driven Selection" },
		{ "Data.Name", "ENiagaraSpawnMode::Data" },
		{ "ModuleRelativePath", "Private/Rules/SpawnNiagaraRule.h" },
		{ "Random.DisplayName", "Randomized Selection" },
		{ "Random.Name", "ENiagaraSpawnMode::Random" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PointCloudEditor_ENiagaraSpawnMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PointCloudEditor,
		nullptr,
		"ENiagaraSpawnMode",
		"ENiagaraSpawnMode",
		Z_Construct_UEnum_PointCloudEditor_ENiagaraSpawnMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PointCloudEditor_ENiagaraSpawnMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PointCloudEditor_ENiagaraSpawnMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PointCloudEditor_ENiagaraSpawnMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PointCloudEditor_ENiagaraSpawnMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraSpawnMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraSpawnMode.InnerSingleton, Z_Construct_UEnum_PointCloudEditor_ENiagaraSpawnMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraSpawnMode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSpawnNiagaraRuleData>() == std::is_polymorphic<FPointCloudRuleData>(), "USTRUCT FSpawnNiagaraRuleData cannot be polymorphic unless super FPointCloudRuleData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpawnNiagaraRuleData;
class UScriptStruct* FSpawnNiagaraRuleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnNiagaraRuleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpawnNiagaraRuleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnNiagaraRuleData, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("SpawnNiagaraRuleData"));
	}
	return Z_Registration_Info_UScriptStruct_SpawnNiagaraRuleData.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FSpawnNiagaraRuleData>()
{
	return FSpawnNiagaraRuleData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamePattern_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NamePattern;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NiagaraSystems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NiagaraSystems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TemplateActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FolderPath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FolderPath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpawnMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetadataKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetadataKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Rules/SpawnNiagaraRule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnNiagaraRuleData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_NamePattern_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/SpawnNiagaraRule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_NamePattern = { "NamePattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnNiagaraRuleData, NamePattern), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_NamePattern_MetaData), Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_NamePattern_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_NiagaraSystems_Inner = { "NiagaraSystems", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_NiagaraSystems_MetaData[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Private/Rules/SpawnNiagaraRule.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_NiagaraSystems = { "NiagaraSystems", nullptr, (EPropertyFlags)0x0014040000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnNiagaraRuleData, NiagaraSystems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_NiagaraSystems_MetaData), Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_NiagaraSystems_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_TemplateActor_MetaData[] = {
		{ "Category", "Templates" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Rules/SpawnNiagaraRule.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_TemplateActor = { "TemplateActor", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnNiagaraRuleData, TemplateActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_TemplateActor_MetaData), Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_TemplateActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_FolderPath_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/SpawnNiagaraRule.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_FolderPath = { "FolderPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnNiagaraRuleData, FolderPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_FolderPath_MetaData), Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_FolderPath_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_SpawnMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_SpawnMode_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/SpawnNiagaraRule.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_SpawnMode = { "SpawnMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnNiagaraRuleData, SpawnMode), Z_Construct_UEnum_PointCloudEditor_ENiagaraSpawnMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_SpawnMode_MetaData), Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_SpawnMode_MetaData) }; // 2761249791
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_MetadataKey_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/SpawnNiagaraRule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_MetadataKey = { "MetadataKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnNiagaraRuleData, MetadataKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_MetadataKey_MetaData), Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_MetadataKey_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(0, nullptr) }; // 3287794552
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_DataLayers_MetaData[] = {
		{ "Category", "DataLayers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** DataLayers the generated actors will belong to.*/" },
#endif
		{ "ModuleRelativePath", "Private/Rules/SpawnNiagaraRule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DataLayers the generated actors will belong to." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnNiagaraRuleData, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_DataLayers_MetaData), Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_DataLayers_MetaData) }; // 3287794552
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_NamePattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_NiagaraSystems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_NiagaraSystems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_TemplateActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_FolderPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_SpawnMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_SpawnMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_MetadataKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_DataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewProp_DataLayers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
		Z_Construct_UScriptStruct_FPointCloudRuleData,
		&NewStructOps,
		"SpawnNiagaraRuleData",
		Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::PropPointers),
		sizeof(FSpawnNiagaraRuleData),
		alignof(FSpawnNiagaraRuleData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSpawnNiagaraRuleData()
	{
		if (!Z_Registration_Info_UScriptStruct_SpawnNiagaraRuleData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpawnNiagaraRuleData.InnerSingleton, Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SpawnNiagaraRuleData.InnerSingleton;
	}
	void USpawnNiagaraRule::StaticRegisterNativesUSpawnNiagaraRule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpawnNiagaraRule);
	UClass* Z_Construct_UClass_USpawnNiagaraRule_NoRegister()
	{
		return USpawnNiagaraRule::StaticClass();
	}
	struct Z_Construct_UClass_USpawnNiagaraRule_Statics
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
	UObject* (*const Z_Construct_UClass_USpawnNiagaraRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPointCloudRule,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnNiagaraRule_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnNiagaraRule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Rules/SpawnNiagaraRule.h" },
		{ "ModuleRelativePath", "Private/Rules/SpawnNiagaraRule.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnNiagaraRule_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/SpawnNiagaraRule.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpawnNiagaraRule_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpawnNiagaraRule, Data), Z_Construct_UScriptStruct_FSpawnNiagaraRuleData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnNiagaraRule_Statics::NewProp_Data_MetaData), Z_Construct_UClass_USpawnNiagaraRule_Statics::NewProp_Data_MetaData) }; // 680953282
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpawnNiagaraRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnNiagaraRule_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpawnNiagaraRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpawnNiagaraRule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpawnNiagaraRule_Statics::ClassParams = {
		&USpawnNiagaraRule::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpawnNiagaraRule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpawnNiagaraRule_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnNiagaraRule_Statics::Class_MetaDataParams), Z_Construct_UClass_USpawnNiagaraRule_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnNiagaraRule_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USpawnNiagaraRule()
	{
		if (!Z_Registration_Info_UClass_USpawnNiagaraRule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpawnNiagaraRule.OuterSingleton, Z_Construct_UClass_USpawnNiagaraRule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpawnNiagaraRule.OuterSingleton;
	}
	template<> POINTCLOUDEDITOR_API UClass* StaticClass<USpawnNiagaraRule>()
	{
		return USpawnNiagaraRule::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpawnNiagaraRule);
	USpawnNiagaraRule::~USpawnNiagaraRule() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h_Statics::EnumInfo[] = {
		{ ENiagaraSpawnMode_StaticEnum, TEXT("ENiagaraSpawnMode"), &Z_Registration_Info_UEnum_ENiagaraSpawnMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2761249791U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h_Statics::ScriptStructInfo[] = {
		{ FSpawnNiagaraRuleData::StaticStruct, Z_Construct_UScriptStruct_FSpawnNiagaraRuleData_Statics::NewStructOps, TEXT("SpawnNiagaraRuleData"), &Z_Registration_Info_UScriptStruct_SpawnNiagaraRuleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnNiagaraRuleData), 680953282U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpawnNiagaraRule, USpawnNiagaraRule::StaticClass, TEXT("USpawnNiagaraRule"), &Z_Registration_Info_UClass_USpawnNiagaraRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpawnNiagaraRule), 4016887548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h_2657663099(TEXT("/Script/PointCloudEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_SpawnNiagaraRule_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
