// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldAudioDataSystem/Public/WorldAudioDataClusterActor.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldAudioDataClusterActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapeColorPointHashMapCollection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WorldAudioDataSystem();
	WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_AWorldAudioDataClusterActor();
	WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_AWorldAudioDataClusterActor_NoRegister();
	WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_UContinuousSoundSystemVectorCollection_NoRegister();
	WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_UWorldAudioReverbDataCollection();
	WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_UWorldAudioReverbDataCollection_NoRegister();
	WORLDAUDIODATASYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary();
	WORLDAUDIODATASYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FWorldAudioReverbData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldAudioReverbData;
class UScriptStruct* FWorldAudioReverbData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldAudioReverbData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldAudioReverbData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldAudioReverbData, (UObject*)Z_Construct_UPackage__Script_WorldAudioDataSystem(), TEXT("WorldAudioReverbData"));
	}
	return Z_Registration_Info_UScriptStruct_WorldAudioReverbData.OuterSingleton;
}
template<> WORLDAUDIODATASYSTEM_API UScriptStruct* StaticStruct<FWorldAudioReverbData>()
{
	return FWorldAudioReverbData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataCellAverage_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataCellAverage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataCellWeighting_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataCellWeighting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * Uses UPROPERTY for serialization purposes\n */" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Uses UPROPERTY for serialization purposes" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldAudioReverbData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::NewProp_DataCellAverage_MetaData[] = {
		{ "Category", "WorldAudioReverbData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Average value of the cell\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Average value of the cell" },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::NewProp_DataCellAverage = { "DataCellAverage", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldAudioReverbData, DataCellAverage), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::NewProp_DataCellAverage_MetaData), Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::NewProp_DataCellAverage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::NewProp_DataCellWeighting_MetaData[] = {
		{ "Category", "WorldAudioReverbData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of data points in cell\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of data points in cell" },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::NewProp_DataCellWeighting = { "DataCellWeighting", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldAudioReverbData, DataCellWeighting), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::NewProp_DataCellWeighting_MetaData), Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::NewProp_DataCellWeighting_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::NewProp_DataCellAverage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::NewProp_DataCellWeighting,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldAudioDataSystem,
		nullptr,
		&NewStructOps,
		"WorldAudioReverbData",
		Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::PropPointers),
		sizeof(FWorldAudioReverbData),
		alignof(FWorldAudioReverbData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FWorldAudioReverbData()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldAudioReverbData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldAudioReverbData.InnerSingleton, Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldAudioReverbData.InnerSingleton;
	}
	void UWorldAudioReverbDataCollection::StaticRegisterNativesUWorldAudioReverbDataCollection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldAudioReverbDataCollection);
	UClass* Z_Construct_UClass_UWorldAudioReverbDataCollection_NoRegister()
	{
		return UWorldAudioReverbDataCollection::StaticClass();
	}
	struct Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataCollection_ValueProp;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DataCollection_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataCollection_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DataCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldAudioDataSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldAudioDataClusterActor.h" },
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::NewProp_DataCollection_ValueProp = { "DataCollection", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FWorldAudioReverbData, METADATA_PARAMS(0, nullptr) }; // 2863542481
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::NewProp_DataCollection_Key_KeyProp = { "DataCollection_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::NewProp_DataCollection_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::NewProp_DataCollection = { "DataCollection", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldAudioReverbDataCollection, DataCollection), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::NewProp_DataCollection_MetaData), Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::NewProp_DataCollection_MetaData) }; // 2863542481
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::NewProp_DataCollection_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::NewProp_DataCollection_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::NewProp_DataCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldAudioReverbDataCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::ClassParams = {
		&UWorldAudioReverbDataCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UWorldAudioReverbDataCollection()
	{
		if (!Z_Registration_Info_UClass_UWorldAudioReverbDataCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldAudioReverbDataCollection.OuterSingleton, Z_Construct_UClass_UWorldAudioReverbDataCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldAudioReverbDataCollection.OuterSingleton;
	}
	template<> WORLDAUDIODATASYSTEM_API UClass* StaticClass<UWorldAudioReverbDataCollection>()
	{
		return UWorldAudioReverbDataCollection::StaticClass();
	}
	UWorldAudioReverbDataCollection::UWorldAudioReverbDataCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldAudioReverbDataCollection);
	UWorldAudioReverbDataCollection::~UWorldAudioReverbDataCollection() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldAudioDataClusterActorDataSummary;
class UScriptStruct* FWorldAudioDataClusterActorDataSummary::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldAudioDataClusterActorDataSummary.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldAudioDataClusterActorDataSummary.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary, (UObject*)Z_Construct_UPackage__Script_WorldAudioDataSystem(), TEXT("WorldAudioDataClusterActorDataSummary"));
	}
	return Z_Registration_Info_UScriptStruct_WorldAudioDataClusterActorDataSummary.OuterSingleton;
}
template<> WORLDAUDIODATASYSTEM_API UScriptStruct* StaticStruct<FWorldAudioDataClusterActorDataSummary>()
{
	return FWorldAudioDataClusterActorDataSummary::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD1ColorPointHashWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LOD1ColorPointHashWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD1ColorPointHashDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LOD1ColorPointHashDistance;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LOD1DensityTotals_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LOD1DensityTotals_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD1DensityTotals_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LOD1DensityTotals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD2ColorPointHashWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LOD2ColorPointHashWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD2ColorPointHashDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LOD2ColorPointHashDistance;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LOD2DensityTotals_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LOD2DensityTotals_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD2DensityTotals_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LOD2DensityTotals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD3ColorPointHashWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LOD3ColorPointHashWidth;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LOD3DensityTotals_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LOD3DensityTotals_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD3DensityTotals_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LOD3DensityTotals;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Type only needed in Editor\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type only needed in Editor" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldAudioDataClusterActorDataSummary>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1ColorPointHashWidth_MetaData[] = {
		{ "Category", "WorldAudioDataClusterActorDataSummary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hash Cell Width for LOD1\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hash Cell Width for LOD1" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1ColorPointHashWidth = { "LOD1ColorPointHashWidth", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldAudioDataClusterActorDataSummary, LOD1ColorPointHashWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1ColorPointHashWidth_MetaData), Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1ColorPointHashWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1ColorPointHashDistance_MetaData[] = {
		{ "Category", "WorldAudioDataClusterActorDataSummary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hash Cell LOD1 Max Distance\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hash Cell LOD1 Max Distance" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1ColorPointHashDistance = { "LOD1ColorPointHashDistance", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldAudioDataClusterActorDataSummary, LOD1ColorPointHashDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1ColorPointHashDistance_MetaData), Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1ColorPointHashDistance_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1DensityTotals_ValueProp = { "LOD1DensityTotals", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1DensityTotals_Key_KeyProp = { "LOD1DensityTotals_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1DensityTotals_MetaData[] = {
		{ "Category", "WorldAudioDataClusterActorDataSummary" },
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1DensityTotals = { "LOD1DensityTotals", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldAudioDataClusterActorDataSummary, LOD1DensityTotals), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1DensityTotals_MetaData), Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1DensityTotals_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2ColorPointHashWidth_MetaData[] = {
		{ "Category", "WorldAudioDataClusterActorDataSummary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hash Cell Width for LOD2\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hash Cell Width for LOD2" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2ColorPointHashWidth = { "LOD2ColorPointHashWidth", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldAudioDataClusterActorDataSummary, LOD2ColorPointHashWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2ColorPointHashWidth_MetaData), Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2ColorPointHashWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2ColorPointHashDistance_MetaData[] = {
		{ "Category", "WorldAudioDataClusterActorDataSummary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hash Cell LOD2 Max Distance\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hash Cell LOD2 Max Distance" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2ColorPointHashDistance = { "LOD2ColorPointHashDistance", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldAudioDataClusterActorDataSummary, LOD2ColorPointHashDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2ColorPointHashDistance_MetaData), Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2ColorPointHashDistance_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2DensityTotals_ValueProp = { "LOD2DensityTotals", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2DensityTotals_Key_KeyProp = { "LOD2DensityTotals_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2DensityTotals_MetaData[] = {
		{ "Category", "WorldAudioDataClusterActorDataSummary" },
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2DensityTotals = { "LOD2DensityTotals", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldAudioDataClusterActorDataSummary, LOD2DensityTotals), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2DensityTotals_MetaData), Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2DensityTotals_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD3ColorPointHashWidth_MetaData[] = {
		{ "Category", "WorldAudioDataClusterActorDataSummary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hash Cell Width for LOD3\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hash Cell Width for LOD3" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD3ColorPointHashWidth = { "LOD3ColorPointHashWidth", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldAudioDataClusterActorDataSummary, LOD3ColorPointHashWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD3ColorPointHashWidth_MetaData), Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD3ColorPointHashWidth_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD3DensityTotals_ValueProp = { "LOD3DensityTotals", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD3DensityTotals_Key_KeyProp = { "LOD3DensityTotals_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD3DensityTotals_MetaData[] = {
		{ "Category", "WorldAudioDataClusterActorDataSummary" },
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD3DensityTotals = { "LOD3DensityTotals", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldAudioDataClusterActorDataSummary, LOD3DensityTotals), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD3DensityTotals_MetaData), Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD3DensityTotals_MetaData) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1ColorPointHashWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1ColorPointHashDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1DensityTotals_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1DensityTotals_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD1DensityTotals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2ColorPointHashWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2ColorPointHashDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2DensityTotals_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2DensityTotals_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD2DensityTotals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD3ColorPointHashWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD3DensityTotals_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD3DensityTotals_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewProp_LOD3DensityTotals,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldAudioDataSystem,
		nullptr,
		&NewStructOps,
		"WorldAudioDataClusterActorDataSummary",
		Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::PropPointers),
		sizeof(FWorldAudioDataClusterActorDataSummary),
		alignof(FWorldAudioDataClusterActorDataSummary),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldAudioDataClusterActorDataSummary.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldAudioDataClusterActorDataSummary.InnerSingleton, Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldAudioDataClusterActorDataSummary.InnerSingleton;
	}
	void AWorldAudioDataClusterActor::StaticRegisterNativesAWorldAudioDataClusterActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldAudioDataClusterActor);
	UClass* Z_Construct_UClass_AWorldAudioDataClusterActor_NoRegister()
	{
		return AWorldAudioDataClusterActor::StaticClass();
	}
	struct Z_Construct_UClass_AWorldAudioDataClusterActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundscapeColorPointHashMapCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundscapeColorPointHashMapCollection;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContinuousSoundSystemVectorCollections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContinuousSoundSystemVectorCollections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ContinuousSoundSystemVectorCollections;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterActorDataSummary_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClusterActorDataSummary;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverbCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReverbCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldAudioDataSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldAudioDataClusterActor.h" },
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_SoundscapeColorPointHashMapCollection_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached Hash Map data \n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached Hash Map data" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_SoundscapeColorPointHashMapCollection = { "SoundscapeColorPointHashMapCollection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldAudioDataClusterActor, SoundscapeColorPointHashMapCollection), Z_Construct_UClass_USoundscapeColorPointHashMapCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_SoundscapeColorPointHashMapCollection_MetaData), Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_SoundscapeColorPointHashMapCollection_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_ContinuousSoundSystemVectorCollections_Inner = { "ContinuousSoundSystemVectorCollections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UContinuousSoundSystemVectorCollection_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_ContinuousSoundSystemVectorCollections_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached continuous sound data collection\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached continuous sound data collection" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_ContinuousSoundSystemVectorCollections = { "ContinuousSoundSystemVectorCollections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldAudioDataClusterActor, ContinuousSoundSystemVectorCollections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_ContinuousSoundSystemVectorCollections_MetaData), Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_ContinuousSoundSystemVectorCollections_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_ClusterActorDataSummary_MetaData[] = {
		{ "Category", "WorldAudioDataClusterActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Data only needed in Editor for debug\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data only needed in Editor for debug" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_ClusterActorDataSummary = { "ClusterActorDataSummary", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldAudioDataClusterActor, ClusterActorDataSummary), Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_ClusterActorDataSummary_MetaData), Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_ClusterActorDataSummary_MetaData) }; // 3792151237
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_ReverbCollection_MetaData[] = {
		{ "Category", "WorldAudioDataClusterActor" },
		{ "ModuleRelativePath", "Public/WorldAudioDataClusterActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_ReverbCollection = { "ReverbCollection", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldAudioDataClusterActor, ReverbCollection), Z_Construct_UClass_UWorldAudioReverbDataCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_ReverbCollection_MetaData), Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_ReverbCollection_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_SoundscapeColorPointHashMapCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_ContinuousSoundSystemVectorCollections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_ContinuousSoundSystemVectorCollections,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_ClusterActorDataSummary,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::NewProp_ReverbCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldAudioDataClusterActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::ClassParams = {
		&AWorldAudioDataClusterActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AWorldAudioDataClusterActor()
	{
		if (!Z_Registration_Info_UClass_AWorldAudioDataClusterActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldAudioDataClusterActor.OuterSingleton, Z_Construct_UClass_AWorldAudioDataClusterActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWorldAudioDataClusterActor.OuterSingleton;
	}
	template<> WORLDAUDIODATASYSTEM_API UClass* StaticClass<AWorldAudioDataClusterActor>()
	{
		return AWorldAudioDataClusterActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldAudioDataClusterActor);
	AWorldAudioDataClusterActor::~AWorldAudioDataClusterActor() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataClusterActor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataClusterActor_h_Statics::ScriptStructInfo[] = {
		{ FWorldAudioReverbData::StaticStruct, Z_Construct_UScriptStruct_FWorldAudioReverbData_Statics::NewStructOps, TEXT("WorldAudioReverbData"), &Z_Registration_Info_UScriptStruct_WorldAudioReverbData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldAudioReverbData), 2863542481U) },
		{ FWorldAudioDataClusterActorDataSummary::StaticStruct, Z_Construct_UScriptStruct_FWorldAudioDataClusterActorDataSummary_Statics::NewStructOps, TEXT("WorldAudioDataClusterActorDataSummary"), &Z_Registration_Info_UScriptStruct_WorldAudioDataClusterActorDataSummary, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldAudioDataClusterActorDataSummary), 3792151237U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataClusterActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldAudioReverbDataCollection, UWorldAudioReverbDataCollection::StaticClass, TEXT("UWorldAudioReverbDataCollection"), &Z_Registration_Info_UClass_UWorldAudioReverbDataCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldAudioReverbDataCollection), 959783069U) },
		{ Z_Construct_UClass_AWorldAudioDataClusterActor, AWorldAudioDataClusterActor::StaticClass, TEXT("AWorldAudioDataClusterActor"), &Z_Registration_Info_UClass_AWorldAudioDataClusterActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldAudioDataClusterActor), 2593131305U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataClusterActor_h_3176871586(TEXT("/Script/WorldAudioDataSystem"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataClusterActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataClusterActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataClusterActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataClusterActor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
