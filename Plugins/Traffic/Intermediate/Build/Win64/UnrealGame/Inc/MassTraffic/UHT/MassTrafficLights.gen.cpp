// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficLights.h"
#include "MassRepresentationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficLights() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassSharedFragment();
	MASSREPRESENTATION_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLightInstancesDataAsset();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_NoRegister();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLightTypesDataAsset();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLightTypesDataAsset_NoRegister();
	MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc();
	MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLightsParameters();
	MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLightTypeData();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloud_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficLightTypeData;
class UScriptStruct* FMassTrafficLightTypeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficLightTypeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficLightTypeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficLightTypeData, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficLightTypeData"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficLightTypeData.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficLightTypeData>()
{
	return FMassTrafficLightTypeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshInstanceDesc_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshInstanceDesc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumLanes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumLanes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficLightTypeData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "MassTrafficLightTypeData" },
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLightTypeData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewProp_StaticMeshInstanceDesc_MetaData[] = {
		{ "Category", "MassTrafficLightTypeData" },
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewProp_StaticMeshInstanceDesc = { "StaticMeshInstanceDesc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLightTypeData, StaticMeshInstanceDesc), Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewProp_StaticMeshInstanceDesc_MetaData), Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewProp_StaticMeshInstanceDesc_MetaData) }; // 1368893848
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewProp_NumLanes_MetaData[] = {
		{ "Category", "MassTrafficLightTypeData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This light is suitable for roads with this many lanes. 0 = Any */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This light is suitable for roads with this many lanes. 0 = Any" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewProp_NumLanes = { "NumLanes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLightTypeData, NumLanes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewProp_NumLanes_MetaData), Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewProp_NumLanes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewProp_StaticMeshInstanceDesc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewProp_NumLanes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
		nullptr,
		&NewStructOps,
		"MassTrafficLightTypeData",
		Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::PropPointers),
		sizeof(FMassTrafficLightTypeData),
		alignof(FMassTrafficLightTypeData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLightTypeData()
	{
		if (!Z_Registration_Info_UScriptStruct_MassTrafficLightTypeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficLightTypeData.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassTrafficLightTypeData.InnerSingleton;
	}
	void UMassTrafficLightTypesDataAsset::StaticRegisterNativesUMassTrafficLightTypesDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficLightTypesDataAsset);
	UClass* Z_Construct_UClass_UMassTrafficLightTypesDataAsset_NoRegister()
	{
		return UMassTrafficLightTypesDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrafficLightTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrafficLightTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MassTrafficLights.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::NewProp_TrafficLightTypes_Inner = { "TrafficLightTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMassTrafficLightTypeData, METADATA_PARAMS(0, nullptr) }; // 3833555916
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::NewProp_TrafficLightTypes_MetaData[] = {
		{ "Category", "MassTrafficLightTypesDataAsset" },
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
		{ "TitleProperty", "Name" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::NewProp_TrafficLightTypes = { "TrafficLightTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficLightTypesDataAsset, TrafficLightTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::NewProp_TrafficLightTypes_MetaData), Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::NewProp_TrafficLightTypes_MetaData) }; // 3833555916
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::NewProp_TrafficLightTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::NewProp_TrafficLightTypes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficLightTypesDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::ClassParams = {
		&UMassTrafficLightTypesDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMassTrafficLightTypesDataAsset()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficLightTypesDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficLightTypesDataAsset.OuterSingleton, Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficLightTypesDataAsset.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficLightTypesDataAsset>()
	{
		return UMassTrafficLightTypesDataAsset::StaticClass();
	}
	UMassTrafficLightTypesDataAsset::UMassTrafficLightTypesDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficLightTypesDataAsset);
	UMassTrafficLightTypesDataAsset::~UMassTrafficLightTypesDataAsset() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficLightInstanceDesc;
class UScriptStruct* FMassTrafficLightInstanceDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficLightInstanceDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficLightInstanceDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficLightInstanceDesc"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficLightInstanceDesc.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficLightInstanceDesc>()
{
	return FMassTrafficLightInstanceDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZRotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlledIntersectionSideMidpoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlledIntersectionSideMidpoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightTypeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_TrafficLightTypeIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficLightInstanceDesc>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLightInstanceDesc, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_Position_MetaData), Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_Position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_ZRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_ZRotation = { "ZRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLightInstanceDesc, ZRotation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_ZRotation_MetaData), Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_ZRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_ControlledIntersectionSideMidpoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_ControlledIntersectionSideMidpoint = { "ControlledIntersectionSideMidpoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLightInstanceDesc, ControlledIntersectionSideMidpoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_ControlledIntersectionSideMidpoint_MetaData), Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_ControlledIntersectionSideMidpoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_TrafficLightTypeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_TrafficLightTypeIndex = { "TrafficLightTypeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLightInstanceDesc, TrafficLightTypeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_TrafficLightTypeIndex_MetaData), Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_TrafficLightTypeIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_ZRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_ControlledIntersectionSideMidpoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_TrafficLightTypeIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
		nullptr,
		&NewStructOps,
		"MassTrafficLightInstanceDesc",
		Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::PropPointers),
		sizeof(FMassTrafficLightInstanceDesc),
		alignof(FMassTrafficLightInstanceDesc),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_MassTrafficLightInstanceDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficLightInstanceDesc.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassTrafficLightInstanceDesc.InnerSingleton;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UMassTrafficLightInstancesDataAsset::execClearTrafficLights)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearTrafficLights();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMassTrafficLightInstancesDataAsset::execPopulateTrafficLightsFromPointCloud)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PopulateTrafficLightsFromPointCloud();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UMassTrafficLightInstancesDataAsset::StaticRegisterNativesUMassTrafficLightInstancesDataAsset()
	{
#if WITH_EDITOR
		UClass* Class = UMassTrafficLightInstancesDataAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearTrafficLights", &UMassTrafficLightInstancesDataAsset::execClearTrafficLights },
			{ "PopulateTrafficLightsFromPointCloud", &UMassTrafficLightInstancesDataAsset::execPopulateTrafficLightsFromPointCloud },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_ClearTrafficLights_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_ClearTrafficLights_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Point Cloud" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clear / reset the TrafficLightDetails list */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear / reset the TrafficLightDetails list" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_ClearTrafficLights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassTrafficLightInstancesDataAsset, nullptr, "ClearTrafficLights", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_ClearTrafficLights_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_ClearTrafficLights_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_ClearTrafficLights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_ClearTrafficLights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_PopulateTrafficLightsFromPointCloud_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_PopulateTrafficLightsFromPointCloud_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Point Cloud" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Populate TrafficLightDetails with point transforms from TrafficLightsPointCloud  \n\x09 * IMPORTANT - The point cloud should be the same point cloud that is used to generate the city lanes, and has a particular format!\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Populate TrafficLightDetails with point transforms from TrafficLightsPointCloud\nIMPORTANT - The point cloud should be the same point cloud that is used to generate the city lanes, and has a particular format!" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_PopulateTrafficLightsFromPointCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassTrafficLightInstancesDataAsset, nullptr, "PopulateTrafficLightsFromPointCloud", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_PopulateTrafficLightsFromPointCloud_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_PopulateTrafficLightsFromPointCloud_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_PopulateTrafficLightsFromPointCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_PopulateTrafficLightsFromPointCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficLightInstancesDataAsset);
	UClass* Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_NoRegister()
	{
		return UMassTrafficLightInstancesDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightTypesData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TrafficLightTypesData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrafficLights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrafficLights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumTrafficLights_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumTrafficLights;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightsPointCloud_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TrafficLightsPointCloud;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyHoudiniToUETransformToTrafficLights_MetaData[];
#endif
		static void NewProp_bApplyHoudiniToUETransformToTrafficLights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyHoudiniToUETransformToTrafficLights;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::DependentSingletons) < 16);
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_ClearTrafficLights, "ClearTrafficLights" }, // 626001723
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_PopulateTrafficLightsFromPointCloud, "PopulateTrafficLightsFromPointCloud" }, // 3774598104
#endif //WITH_EDITOR
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::FuncInfo) < 2048);
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MassTrafficLights.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLightTypesData_MetaData[] = {
		{ "Category", "Traffic Lights" },
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLightTypesData = { "TrafficLightTypesData", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficLightInstancesDataAsset, TrafficLightTypesData), Z_Construct_UClass_UMassTrafficLightTypesDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLightTypesData_MetaData), Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLightTypesData_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLights_Inner = { "TrafficLights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc, METADATA_PARAMS(0, nullptr) }; // 3501924402
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLights_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Traffic lights to spawn\n\x09 * @see PopulateTrafficLightsFromPointCloud\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Traffic lights to spawn\n@see PopulateTrafficLightsFromPointCloud" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLights = { "TrafficLights", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficLightInstancesDataAsset, TrafficLights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLights_MetaData), Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLights_MetaData) }; // 3501924402
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_NumTrafficLights_MetaData[] = {
		{ "ArrayClamp", "" },
		{ "Category", "Traffic Lights" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of stored traffic light instances */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of stored traffic light instances" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_NumTrafficLights = { "NumTrafficLights", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficLightInstancesDataAsset, NumTrafficLights), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_NumTrafficLights_MetaData), Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_NumTrafficLights_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLightsPointCloud_MetaData[] = {
		{ "Category", "Point Cloud" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * RuleProcessor point cloud that contains traffic lights.\n\x09 * IMPORTANT - This should be the same point cloud that is used to generate the city lanes, and has a particular format!\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RuleProcessor point cloud that contains traffic lights.\nIMPORTANT - This should be the same point cloud that is used to generate the city lanes, and has a particular format!" },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLightsPointCloud = { "TrafficLightsPointCloud", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficLightInstancesDataAsset, TrafficLightsPointCloud), Z_Construct_UClass_UPointCloud_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLightsPointCloud_MetaData), Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLightsPointCloud_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_bApplyHoudiniToUETransformToTrafficLights_MetaData[] = {
		{ "Category", "Point Cloud" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Whether Houdini->UE transform should be applied to traffic light locations in point cloud.\n\x09 * This is necessary since the traffic light positions in the point cloud are not automatically converted, since they're not stored in the Px Py Pz fields.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether Houdini->UE transform should be applied to traffic light locations in point cloud.\nThis is necessary since the traffic light positions in the point cloud are not automatically converted, since they're not stored in the Px Py Pz fields." },
#endif
	};
#endif
	void Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_bApplyHoudiniToUETransformToTrafficLights_SetBit(void* Obj)
	{
		((UMassTrafficLightInstancesDataAsset*)Obj)->bApplyHoudiniToUETransformToTrafficLights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_bApplyHoudiniToUETransformToTrafficLights = { "bApplyHoudiniToUETransformToTrafficLights", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMassTrafficLightInstancesDataAsset), &Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_bApplyHoudiniToUETransformToTrafficLights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_bApplyHoudiniToUETransformToTrafficLights_MetaData), Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_bApplyHoudiniToUETransformToTrafficLights_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLightTypesData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_NumTrafficLights,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLightsPointCloud,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_bApplyHoudiniToUETransformToTrafficLights,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficLightInstancesDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::ClassParams = {
		&UMassTrafficLightInstancesDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMassTrafficLightInstancesDataAsset()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficLightInstancesDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficLightInstancesDataAsset.OuterSingleton, Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficLightInstancesDataAsset.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficLightInstancesDataAsset>()
	{
		return UMassTrafficLightInstancesDataAsset::StaticClass();
	}
	UMassTrafficLightInstancesDataAsset::UMassTrafficLightInstancesDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficLightInstancesDataAsset);
	UMassTrafficLightInstancesDataAsset::~UMassTrafficLightInstancesDataAsset() {}

static_assert(std::is_polymorphic<FMassTrafficLightsParameters>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FMassTrafficLightsParameters cannot be polymorphic unless super FMassSharedFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficLightsParameters;
class UScriptStruct* FMassTrafficLightsParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficLightsParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficLightsParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficLightsParameters, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficLightsParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficLightsParameters.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficLightsParameters>()
{
	return FMassTrafficLightsParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightTypesData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TrafficLightTypesData;
		static const UECodeGen_Private::FInt16PropertyParams NewProp_TrafficLightTypesStaticMeshDescIndex_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightTypesStaticMeshDescIndex_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrafficLightTypesStaticMeshDescIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficLightsParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::NewProp_TrafficLightTypesData_MetaData[] = {
		{ "Category", "MassTrafficLightsParameters" },
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::NewProp_TrafficLightTypesData = { "TrafficLightTypesData", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLightsParameters, TrafficLightTypesData), Z_Construct_UClass_UMassTrafficLightTypesDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::NewProp_TrafficLightTypesData_MetaData), Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::NewProp_TrafficLightTypesData_MetaData) };
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::NewProp_TrafficLightTypesStaticMeshDescIndex_Inner = { "TrafficLightTypesStaticMeshDescIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::NewProp_TrafficLightTypesStaticMeshDescIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::NewProp_TrafficLightTypesStaticMeshDescIndex = { "TrafficLightTypesStaticMeshDescIndex", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLightsParameters, TrafficLightTypesStaticMeshDescIndex), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::NewProp_TrafficLightTypesStaticMeshDescIndex_MetaData), Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::NewProp_TrafficLightTypesStaticMeshDescIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::NewProp_TrafficLightTypesData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::NewProp_TrafficLightTypesStaticMeshDescIndex_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::NewProp_TrafficLightTypesStaticMeshDescIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
		Z_Construct_UScriptStruct_FMassSharedFragment,
		&NewStructOps,
		"MassTrafficLightsParameters",
		Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::PropPointers),
		sizeof(FMassTrafficLightsParameters),
		alignof(FMassTrafficLightsParameters),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLightsParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_MassTrafficLightsParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficLightsParameters.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassTrafficLightsParameters.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_Statics::ScriptStructInfo[] = {
		{ FMassTrafficLightTypeData::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewStructOps, TEXT("MassTrafficLightTypeData"), &Z_Registration_Info_UScriptStruct_MassTrafficLightTypeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficLightTypeData), 3833555916U) },
		{ FMassTrafficLightInstanceDesc::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewStructOps, TEXT("MassTrafficLightInstanceDesc"), &Z_Registration_Info_UScriptStruct_MassTrafficLightInstanceDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficLightInstanceDesc), 3501924402U) },
		{ FMassTrafficLightsParameters::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::NewStructOps, TEXT("MassTrafficLightsParameters"), &Z_Registration_Info_UScriptStruct_MassTrafficLightsParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficLightsParameters), 3011048166U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficLightTypesDataAsset, UMassTrafficLightTypesDataAsset::StaticClass, TEXT("UMassTrafficLightTypesDataAsset"), &Z_Registration_Info_UClass_UMassTrafficLightTypesDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficLightTypesDataAsset), 1092914212U) },
		{ Z_Construct_UClass_UMassTrafficLightInstancesDataAsset, UMassTrafficLightInstancesDataAsset::StaticClass, TEXT("UMassTrafficLightInstancesDataAsset"), &Z_Registration_Info_UClass_UMassTrafficLightInstancesDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficLightInstancesDataAsset), 3554148411U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_513396629(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
