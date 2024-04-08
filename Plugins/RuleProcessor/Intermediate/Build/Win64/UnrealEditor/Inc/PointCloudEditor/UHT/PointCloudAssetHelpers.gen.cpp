// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Public/PointCloudAssetHelpers.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "PointCloud/Public/PointCloud.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudAssetHelpers() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UDataLayerAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloud_NoRegister();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudView_NoRegister();
	POINTCLOUD_API UClass* Z_Construct_UClass_USliceAndDiceMapping_NoRegister();
	POINTCLOUD_API UEnum* Z_Construct_UEnum_PointCloud_EPointCloudPivotType();
	POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudPoint();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UPointCloudAssetsHelpers();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UPointCloudAssetsHelpers_NoRegister();
	POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudComponentData();
	POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudManagedActorData();
	POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnAndInitActorParameters();
	POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters();
	UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PointCloudComponentData;
class UScriptStruct* FPointCloudComponentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PointCloudComponentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PointCloudComponentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointCloudComponentData, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("PointCloudComponentData"));
	}
	return Z_Registration_Info_UScriptStruct_PointCloudComponentData.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FPointCloudComponentData>()
{
	return FPointCloudComponentData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPointCloudComponentData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_View_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_View;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Component;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetadataValues_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetadataValues_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetadataValues_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MetadataValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointCloudComponentData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::NewProp_View_MetaData[] = {
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::NewProp_View = { "View", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointCloudComponentData, View), Z_Construct_UClass_UPointCloudView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::NewProp_View_MetaData), Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::NewProp_View_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::NewProp_Component_MetaData[] = {
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointCloudComponentData, Component), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::NewProp_Component_MetaData), Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::NewProp_Component_MetaData) }; // 834145860
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::NewProp_MetadataValues_ValueProp = { "MetadataValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::NewProp_MetadataValues_Key_KeyProp = { "MetadataValues_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::NewProp_MetadataValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::NewProp_MetadataValues = { "MetadataValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointCloudComponentData, MetadataValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::NewProp_MetadataValues_MetaData), Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::NewProp_MetadataValues_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::NewProp_Count_MetaData[] = {
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointCloudComponentData, Count), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::NewProp_Count_MetaData), Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::NewProp_Count_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::NewProp_View,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::NewProp_MetadataValues_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::NewProp_MetadataValues_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::NewProp_MetadataValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::NewProp_Count,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
		nullptr,
		&NewStructOps,
		"PointCloudComponentData",
		Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::PropPointers),
		sizeof(FPointCloudComponentData),
		alignof(FPointCloudComponentData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPointCloudComponentData()
	{
		if (!Z_Registration_Info_UScriptStruct_PointCloudComponentData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PointCloudComponentData.InnerSingleton, Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PointCloudComponentData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PointCloudManagedActorData;
class UScriptStruct* FPointCloudManagedActorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PointCloudManagedActorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PointCloudManagedActorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointCloudManagedActorData, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("PointCloudManagedActorData"));
	}
	return Z_Registration_Info_UScriptStruct_PointCloudManagedActorData.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FPointCloudManagedActorData>()
{
	return FPointCloudManagedActorData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleAttributeKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ModuleAttributeKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginatingView_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OriginatingView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorView_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActorView;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentsData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentsData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentsData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointCloudManagedActorData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewProp_Actor_MetaData[] = {
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointCloudManagedActorData, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewProp_Actor_MetaData), Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewProp_Actor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewProp_ModuleAttributeKey_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If the user chooses to create multiple actors, store which Metadata key Value this actor was created with */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the user chooses to create multiple actors, store which Metadata key Value this actor was created with" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewProp_ModuleAttributeKey = { "ModuleAttributeKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointCloudManagedActorData, ModuleAttributeKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewProp_ModuleAttributeKey_MetaData), Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewProp_ModuleAttributeKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewProp_OriginatingView_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds the original view at the rule level */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the original view at the rule level" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewProp_OriginatingView = { "OriginatingView", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointCloudManagedActorData, OriginatingView), Z_Construct_UClass_UPointCloudView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewProp_OriginatingView_MetaData), Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewProp_OriginatingView_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewProp_ActorView_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds the sub-view containing only this actor's information */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the sub-view containing only this actor's information" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewProp_ActorView = { "ActorView", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointCloudManagedActorData, ActorView), Z_Construct_UClass_UPointCloudView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewProp_ActorView_MetaData), Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewProp_ActorView_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewProp_ComponentsData_Inner = { "ComponentsData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPointCloudComponentData, METADATA_PARAMS(0, nullptr) }; // 3446771995
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewProp_ComponentsData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Slice and dice uses views to extract information from the point cloud. This maps between the static mesh in question and the view that extracts the points associated with that mesh from the PC */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Slice and dice uses views to extract information from the point cloud. This maps between the static mesh in question and the view that extracts the points associated with that mesh from the PC" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewProp_ComponentsData = { "ComponentsData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointCloudManagedActorData, ComponentsData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewProp_ComponentsData_MetaData), Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewProp_ComponentsData_MetaData) }; // 3446771995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewProp_ModuleAttributeKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewProp_OriginatingView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewProp_ActorView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewProp_ComponentsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewProp_ComponentsData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
		nullptr,
		&NewStructOps,
		"PointCloudManagedActorData",
		Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::PropPointers),
		sizeof(FPointCloudManagedActorData),
		alignof(FPointCloudManagedActorData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPointCloudManagedActorData()
	{
		if (!Z_Registration_Info_UScriptStruct_PointCloudManagedActorData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PointCloudManagedActorData.InnerSingleton, Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PointCloudManagedActorData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpawnAndInitMaterialOverrideParameters;
class UScriptStruct* FSpawnAndInitMaterialOverrideParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnAndInitMaterialOverrideParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpawnAndInitMaterialOverrideParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("SpawnAndInitMaterialOverrideParameters"));
	}
	return Z_Registration_Info_UScriptStruct_SpawnAndInitMaterialOverrideParameters.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FSpawnAndInitMaterialOverrideParameters>()
{
	return FSpawnAndInitMaterialOverrideParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_MetadataKeyToIndex_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetadataKeyToIndex_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetadataKeyToIndex_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MetadataKeyToIndex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetadataKeyToTemplate_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetadataKeyToTemplate_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetadataKeyToTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MetadataKeyToTemplate;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetadataKeyToSlotName_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetadataKeyToSlotName_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetadataKeyToSlotName_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MetadataKeyToSlotName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnAndInitMaterialOverrideParameters>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewProp_MetadataKeyToIndex_ValueProp = { "MetadataKeyToIndex", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewProp_MetadataKeyToIndex_Key_KeyProp = { "MetadataKeyToIndex_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewProp_MetadataKeyToIndex_MetaData[] = {
		{ "Category", "Overrides" },
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewProp_MetadataKeyToIndex = { "MetadataKeyToIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnAndInitMaterialOverrideParameters, MetadataKeyToIndex), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewProp_MetadataKeyToIndex_MetaData), Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewProp_MetadataKeyToIndex_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewProp_MetadataKeyToTemplate_ValueProp = { "MetadataKeyToTemplate", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewProp_MetadataKeyToTemplate_Key_KeyProp = { "MetadataKeyToTemplate_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewProp_MetadataKeyToTemplate_MetaData[] = {
		{ "Category", "Overrides" },
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewProp_MetadataKeyToTemplate = { "MetadataKeyToTemplate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnAndInitMaterialOverrideParameters, MetadataKeyToTemplate), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewProp_MetadataKeyToTemplate_MetaData), Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewProp_MetadataKeyToTemplate_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewProp_MetadataKeyToSlotName_ValueProp = { "MetadataKeyToSlotName", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewProp_MetadataKeyToSlotName_Key_KeyProp = { "MetadataKeyToSlotName_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewProp_MetadataKeyToSlotName_MetaData[] = {
		{ "Category", "Overrides" },
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewProp_MetadataKeyToSlotName = { "MetadataKeyToSlotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnAndInitMaterialOverrideParameters, MetadataKeyToSlotName), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewProp_MetadataKeyToSlotName_MetaData), Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewProp_MetadataKeyToSlotName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewProp_MetadataKeyToIndex_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewProp_MetadataKeyToIndex_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewProp_MetadataKeyToIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewProp_MetadataKeyToTemplate_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewProp_MetadataKeyToTemplate_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewProp_MetadataKeyToTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewProp_MetadataKeyToSlotName_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewProp_MetadataKeyToSlotName_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewProp_MetadataKeyToSlotName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
		nullptr,
		&NewStructOps,
		"SpawnAndInitMaterialOverrideParameters",
		Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::PropPointers),
		sizeof(FSpawnAndInitMaterialOverrideParameters),
		alignof(FSpawnAndInitMaterialOverrideParameters),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_SpawnAndInitMaterialOverrideParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpawnAndInitMaterialOverrideParameters.InnerSingleton, Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SpawnAndInitMaterialOverrideParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpawnAndInitActorParameters;
class UScriptStruct* FSpawnAndInitActorParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnAndInitActorParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpawnAndInitActorParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnAndInitActorParameters, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("SpawnAndInitActorParameters"));
	}
	return Z_Registration_Info_UScriptStruct_SpawnAndInitActorParameters.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FSpawnAndInitActorParameters>()
{
	return FSpawnAndInitActorParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverrideMap_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverrideMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OverrideMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateIsm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TemplateIsm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateHISM_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TemplateHISM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateStaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TemplateStaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSingleInstanceAsStaticMesh_MetaData[];
#endif
		static void NewProp_bSingleInstanceAsStaticMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSingleInstanceAsStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseHierarchicalInstancedStaticMeshComponent_MetaData[];
#endif
		static void NewProp_bUseHierarchicalInstancedStaticMeshComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHierarchicalInstancedStaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TemplateActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_World;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PivotType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PivotType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PivotKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PivotValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerModuleAttributeKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PerModuleAttributeKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bManualGroupId_MetaData[];
#endif
		static void NewProp_bManualGroupId_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bManualGroupId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GroupId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FolderPath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FolderPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnAndInitActorParameters>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_OverrideMap_ValueProp = { "OverrideMap", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_OverrideMap_Key_KeyProp = { "OverrideMap_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_OverrideMap_MetaData[] = {
		{ "Category", "Overrides" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a copy of the original map which should make it easier to multi-thread the actor creation down the line\n" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a copy of the original map which should make it easier to multi-thread the actor creation down the line" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_OverrideMap = { "OverrideMap", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnAndInitActorParameters, OverrideMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_OverrideMap_MetaData), Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_OverrideMap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_MaterialOverrides_MetaData[] = {
		{ "Category", "Overrides" },
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_MaterialOverrides = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnAndInitActorParameters, MaterialOverrides), Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_MaterialOverrides_MetaData), Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_MaterialOverrides_MetaData) }; // 925247130
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_TemplateIsm_MetaData[] = {
		{ "Category", "Templates" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_TemplateIsm = { "TemplateIsm", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnAndInitActorParameters, TemplateIsm), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_TemplateIsm_MetaData), Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_TemplateIsm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_TemplateHISM_MetaData[] = {
		{ "Category", "Templates" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_TemplateHISM = { "TemplateHISM", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnAndInitActorParameters, TemplateHISM), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_TemplateHISM_MetaData), Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_TemplateHISM_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_TemplateStaticMeshComponent_MetaData[] = {
		{ "Category", "Templates" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_TemplateStaticMeshComponent = { "TemplateStaticMeshComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnAndInitActorParameters, TemplateStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_TemplateStaticMeshComponent_MetaData), Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_TemplateStaticMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_bSingleInstanceAsStaticMesh_MetaData[] = {
		{ "Category", "Overrides" },
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_bSingleInstanceAsStaticMesh_SetBit(void* Obj)
	{
		((FSpawnAndInitActorParameters*)Obj)->bSingleInstanceAsStaticMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_bSingleInstanceAsStaticMesh = { "bSingleInstanceAsStaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpawnAndInitActorParameters), &Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_bSingleInstanceAsStaticMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_bSingleInstanceAsStaticMesh_MetaData), Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_bSingleInstanceAsStaticMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_bUseHierarchicalInstancedStaticMeshComponent_MetaData[] = {
		{ "Category", "Overrides" },
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_bUseHierarchicalInstancedStaticMeshComponent_SetBit(void* Obj)
	{
		((FSpawnAndInitActorParameters*)Obj)->bUseHierarchicalInstancedStaticMeshComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_bUseHierarchicalInstancedStaticMeshComponent = { "bUseHierarchicalInstancedStaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpawnAndInitActorParameters), &Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_bUseHierarchicalInstancedStaticMeshComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_bUseHierarchicalInstancedStaticMeshComponent_MetaData), Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_bUseHierarchicalInstancedStaticMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_TemplateActor_MetaData[] = {
		{ "Category", "Templates" },
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_TemplateActor = { "TemplateActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnAndInitActorParameters, TemplateActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_TemplateActor_MetaData), Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_TemplateActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_World_MetaData[] = {
		{ "Category", "Overrides" },
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnAndInitActorParameters, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_World_MetaData), Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_World_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_PivotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_PivotType_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_PivotType = { "PivotType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnAndInitActorParameters, PivotType), Z_Construct_UEnum_PointCloud_EPointCloudPivotType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_PivotType_MetaData), Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_PivotType_MetaData) }; // 1884918641
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_PivotKey_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_PivotKey = { "PivotKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnAndInitActorParameters, PivotKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_PivotKey_MetaData), Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_PivotKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_PivotValue_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_PivotValue = { "PivotValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnAndInitActorParameters, PivotValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_PivotValue_MetaData), Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_PivotValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_PerModuleAttributeKey_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_PerModuleAttributeKey = { "PerModuleAttributeKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnAndInitActorParameters, PerModuleAttributeKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_PerModuleAttributeKey_MetaData), Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_PerModuleAttributeKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_bManualGroupId_MetaData[] = {
		{ "Category", "Overrides" },
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_bManualGroupId_SetBit(void* Obj)
	{
		((FSpawnAndInitActorParameters*)Obj)->bManualGroupId = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_bManualGroupId = { "bManualGroupId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpawnAndInitActorParameters), &Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_bManualGroupId_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_bManualGroupId_MetaData), Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_bManualGroupId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_GroupId_MetaData[] = {
		{ "Category", "Overrides" },
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnAndInitActorParameters, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_GroupId_MetaData), Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_GroupId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_FolderPath_MetaData[] = {
		{ "Category", "Overrides" },
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_FolderPath = { "FolderPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnAndInitActorParameters, FolderPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_FolderPath_MetaData), Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_FolderPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_MeshKey_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Metadata key in point cloud that maps to mesh module. */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Metadata key in point cloud that maps to mesh module." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_MeshKey = { "MeshKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnAndInitActorParameters, MeshKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_MeshKey_MetaData), Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_MeshKey_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_OverrideMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_OverrideMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_OverrideMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_MaterialOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_TemplateIsm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_TemplateHISM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_TemplateStaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_bSingleInstanceAsStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_bUseHierarchicalInstancedStaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_TemplateActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_PivotType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_PivotType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_PivotKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_PivotValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_PerModuleAttributeKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_bManualGroupId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_GroupId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_FolderPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewProp_MeshKey,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
		nullptr,
		&NewStructOps,
		"SpawnAndInitActorParameters",
		Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::PropPointers),
		sizeof(FSpawnAndInitActorParameters),
		alignof(FSpawnAndInitActorParameters),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSpawnAndInitActorParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_SpawnAndInitActorParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpawnAndInitActorParameters.InnerSingleton, Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SpawnAndInitActorParameters.InnerSingleton;
	}
	DEFINE_FUNCTION(UPointCloudAssetsHelpers::execExportToAlembic)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InFilename);
		P_GET_TARRAY_REF(FPointCloudPoint,Z_Param_Out_InPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPointCloudAssetsHelpers::ExportToAlembic(Z_Param_InFilename,Z_Param_Out_InPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudAssetsHelpers::execExportToCSV)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InFilename);
		P_GET_TARRAY_REF(FPointCloudPoint,Z_Param_Out_InPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPointCloudAssetsHelpers::ExportToCSV(Z_Param_InFilename,Z_Param_Out_InPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudAssetsHelpers::execGetModulesFromMapping)
	{
		P_GET_OBJECT(USliceAndDiceMapping,Z_Param_InMapping);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FPointCloudPoint>*)Z_Param__Result=UPointCloudAssetsHelpers::GetModulesFromMapping(Z_Param_InMapping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudAssetsHelpers::execGetModulesFromDataLayers)
	{
		P_GET_OBJECT(UWorld,Z_Param_InWorld);
		P_GET_TARRAY_REF(UDataLayerAsset*,Z_Param_Out_InDataLayerAssets);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FPointCloudPoint>*)Z_Param__Result=UPointCloudAssetsHelpers::GetModulesFromDataLayers(Z_Param_InWorld,Z_Param_Out_InDataLayerAssets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudAssetsHelpers::execSetActorPivots)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_InActors);
		P_GET_ENUM(EPointCloudPivotType,Z_Param_InPivotType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPointCloudAssetsHelpers::SetActorPivots(Z_Param_Out_InActors,EPointCloudPivotType(Z_Param_InPivotType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudAssetsHelpers::execDeleteAllActorsByPrefixInPartitionedWorld)
	{
		P_GET_OBJECT(UWorld,Z_Param_InWorld);
		P_GET_PROPERTY(FStrProperty,Z_Param_InPrefix);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPointCloudAssetsHelpers::DeleteAllActorsByPrefixInPartitionedWorld(Z_Param_InWorld,Z_Param_InPrefix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudAssetsHelpers::execDeleteAllActorsOnDataLayer)
	{
		P_GET_OBJECT(UWorld,Z_Param_InWorld);
		P_GET_OBJECT(UDataLayerInstance,Z_Param_InDataLayerInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPointCloudAssetsHelpers::DeleteAllActorsOnDataLayer(Z_Param_InWorld,Z_Param_InDataLayerInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudAssetsHelpers::execCreateActorFromView)
	{
		P_GET_OBJECT(UPointCloudView,Z_Param_PointCloudView);
		P_GET_PROPERTY(FStrProperty,Z_Param_Label);
		P_GET_STRUCT_REF(FSpawnAndInitActorParameters,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UPointCloudAssetsHelpers::CreateActorFromView(Z_Param_PointCloudView,Z_Param_Label,Z_Param_Out_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudAssetsHelpers::execCreateEmptyPointCloudAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PackageName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPointCloud**)Z_Param__Result=UPointCloudAssetsHelpers::CreateEmptyPointCloudAsset(Z_Param_PackageName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudAssetsHelpers::execLoadPointCloudAssetFromPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPointCloud**)Z_Param__Result=UPointCloudAssetsHelpers::LoadPointCloudAssetFromPath(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudAssetsHelpers::execLoadPointCloudAlembic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UPointCloud*>*)Z_Param__Result=UPointCloudAssetsHelpers::LoadPointCloudAlembic();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudAssetsHelpers::execLoadPointCloudCSV)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UPointCloud*>*)Z_Param__Result=UPointCloudAssetsHelpers::LoadPointCloudCSV();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudAssetsHelpers::execGetSelectedRuleProcessorItemsFromContentBrowser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UPointCloudAssetsHelpers::GetSelectedRuleProcessorItemsFromContentBrowser();
		P_NATIVE_END;
	}
	void UPointCloudAssetsHelpers::StaticRegisterNativesUPointCloudAssetsHelpers()
	{
		UClass* Class = UPointCloudAssetsHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateActorFromView", &UPointCloudAssetsHelpers::execCreateActorFromView },
			{ "CreateEmptyPointCloudAsset", &UPointCloudAssetsHelpers::execCreateEmptyPointCloudAsset },
			{ "DeleteAllActorsByPrefixInPartitionedWorld", &UPointCloudAssetsHelpers::execDeleteAllActorsByPrefixInPartitionedWorld },
			{ "DeleteAllActorsOnDataLayer", &UPointCloudAssetsHelpers::execDeleteAllActorsOnDataLayer },
			{ "ExportToAlembic", &UPointCloudAssetsHelpers::execExportToAlembic },
			{ "ExportToCSV", &UPointCloudAssetsHelpers::execExportToCSV },
			{ "GetModulesFromDataLayers", &UPointCloudAssetsHelpers::execGetModulesFromDataLayers },
			{ "GetModulesFromMapping", &UPointCloudAssetsHelpers::execGetModulesFromMapping },
			{ "GetSelectedRuleProcessorItemsFromContentBrowser", &UPointCloudAssetsHelpers::execGetSelectedRuleProcessorItemsFromContentBrowser },
			{ "LoadPointCloudAlembic", &UPointCloudAssetsHelpers::execLoadPointCloudAlembic },
			{ "LoadPointCloudAssetFromPath", &UPointCloudAssetsHelpers::execLoadPointCloudAssetFromPath },
			{ "LoadPointCloudCSV", &UPointCloudAssetsHelpers::execLoadPointCloudCSV },
			{ "SetActorPivots", &UPointCloudAssetsHelpers::execSetActorPivots },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateActorFromView_Statics
	{
		struct PointCloudAssetsHelpers_eventCreateActorFromView_Parms
		{
			UPointCloudView* PointCloudView;
			FString Label;
			FSpawnAndInitActorParameters Params;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PointCloudView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateActorFromView_Statics::NewProp_PointCloudView = { "PointCloudView", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudAssetsHelpers_eventCreateActorFromView_Parms, PointCloudView), Z_Construct_UClass_UPointCloudView_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateActorFromView_Statics::NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateActorFromView_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudAssetsHelpers_eventCreateActorFromView_Parms, Label), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateActorFromView_Statics::NewProp_Label_MetaData), Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateActorFromView_Statics::NewProp_Label_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateActorFromView_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateActorFromView_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudAssetsHelpers_eventCreateActorFromView_Parms, Params), Z_Construct_UScriptStruct_FSpawnAndInitActorParameters, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateActorFromView_Statics::NewProp_Params_MetaData), Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateActorFromView_Statics::NewProp_Params_MetaData) }; // 3399278195
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateActorFromView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudAssetsHelpers_eventCreateActorFromView_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateActorFromView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateActorFromView_Statics::NewProp_PointCloudView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateActorFromView_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateActorFromView_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateActorFromView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateActorFromView_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudView" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Create a single actor to represent all of the points in the given pointcloud view\n\x09* @param PointCloud - The point cloud to initialize the objects with\n\x09* @param PointCloudView - The point cloud view to initialize the objects with\n\x09* @param Label - The label to give to this new actor\n\x09* @param World - The world into which the new actor should be created\n\x09* @param InTemplateActor - A template actor from which the parameters will be copied\n\x09* @param InTemplateIsm - A template ISM from which the parameters will be copied\n\x09* @param InOverrideMap - A map of Static mesh components to Static Mesh Components. This is used when populating the ISMs to provide overrides. I.e. if the key is found, use the value instead\n\x09* @return - A point to the new Managed Actor\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a single actor to represent all of the points in the given pointcloud view\n@param PointCloud - The point cloud to initialize the objects with\n@param PointCloudView - The point cloud view to initialize the objects with\n@param Label - The label to give to this new actor\n@param World - The world into which the new actor should be created\n@param InTemplateActor - A template actor from which the parameters will be copied\n@param InTemplateIsm - A template ISM from which the parameters will be copied\n@param InOverrideMap - A map of Static mesh components to Static Mesh Components. This is used when populating the ISMs to provide overrides. I.e. if the key is found, use the value instead\n@return - A point to the new Managed Actor" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateActorFromView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudAssetsHelpers, nullptr, "CreateActorFromView", nullptr, nullptr, Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateActorFromView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateActorFromView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateActorFromView_Statics::PointCloudAssetsHelpers_eventCreateActorFromView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateActorFromView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateActorFromView_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateActorFromView_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateActorFromView_Statics::PointCloudAssetsHelpers_eventCreateActorFromView_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateActorFromView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateActorFromView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateEmptyPointCloudAsset_Statics
	{
		struct PointCloudAssetsHelpers_eventCreateEmptyPointCloudAsset_Parms
		{
			FString PackageName;
			UPointCloud* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackageName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateEmptyPointCloudAsset_Statics::NewProp_PackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateEmptyPointCloudAsset_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudAssetsHelpers_eventCreateEmptyPointCloudAsset_Parms, PackageName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateEmptyPointCloudAsset_Statics::NewProp_PackageName_MetaData), Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateEmptyPointCloudAsset_Statics::NewProp_PackageName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateEmptyPointCloudAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudAssetsHelpers_eventCreateEmptyPointCloudAsset_Parms, ReturnValue), Z_Construct_UClass_UPointCloud_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateEmptyPointCloudAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateEmptyPointCloudAsset_Statics::NewProp_PackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateEmptyPointCloudAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateEmptyPointCloudAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloud" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Creates an empty point cloud.\n\x09* @param The file path to load from. If empty or invalid, will ask for a path in a dialog. Can overwrite existing files.\n\x09* @return Pointer to the point cloud loaded/created\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates an empty point cloud.\n@param The file path to load from. If empty or invalid, will ask for a path in a dialog. Can overwrite existing files.\n@return Pointer to the point cloud loaded/created" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateEmptyPointCloudAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudAssetsHelpers, nullptr, "CreateEmptyPointCloudAsset", nullptr, nullptr, Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateEmptyPointCloudAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateEmptyPointCloudAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateEmptyPointCloudAsset_Statics::PointCloudAssetsHelpers_eventCreateEmptyPointCloudAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateEmptyPointCloudAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateEmptyPointCloudAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateEmptyPointCloudAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateEmptyPointCloudAsset_Statics::PointCloudAssetsHelpers_eventCreateEmptyPointCloudAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateEmptyPointCloudAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateEmptyPointCloudAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsByPrefixInPartitionedWorld_Statics
	{
		struct PointCloudAssetsHelpers_eventDeleteAllActorsByPrefixInPartitionedWorld_Parms
		{
			UWorld* InWorld;
			FString InPrefix;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPrefix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InPrefix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsByPrefixInPartitionedWorld_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudAssetsHelpers_eventDeleteAllActorsByPrefixInPartitionedWorld_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsByPrefixInPartitionedWorld_Statics::NewProp_InPrefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsByPrefixInPartitionedWorld_Statics::NewProp_InPrefix = { "InPrefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudAssetsHelpers_eventDeleteAllActorsByPrefixInPartitionedWorld_Parms, InPrefix), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsByPrefixInPartitionedWorld_Statics::NewProp_InPrefix_MetaData), Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsByPrefixInPartitionedWorld_Statics::NewProp_InPrefix_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsByPrefixInPartitionedWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsByPrefixInPartitionedWorld_Statics::NewProp_InWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsByPrefixInPartitionedWorld_Statics::NewProp_InPrefix,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsByPrefixInPartitionedWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloud" },
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsByPrefixInPartitionedWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudAssetsHelpers, nullptr, "DeleteAllActorsByPrefixInPartitionedWorld", nullptr, nullptr, Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsByPrefixInPartitionedWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsByPrefixInPartitionedWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsByPrefixInPartitionedWorld_Statics::PointCloudAssetsHelpers_eventDeleteAllActorsByPrefixInPartitionedWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsByPrefixInPartitionedWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsByPrefixInPartitionedWorld_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsByPrefixInPartitionedWorld_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsByPrefixInPartitionedWorld_Statics::PointCloudAssetsHelpers_eventDeleteAllActorsByPrefixInPartitionedWorld_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsByPrefixInPartitionedWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsByPrefixInPartitionedWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsOnDataLayer_Statics
	{
		struct PointCloudAssetsHelpers_eventDeleteAllActorsOnDataLayer_Parms
		{
			UWorld* InWorld;
			const UDataLayerInstance* InDataLayerInstance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayerInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InDataLayerInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsOnDataLayer_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudAssetsHelpers_eventDeleteAllActorsOnDataLayer_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsOnDataLayer_Statics::NewProp_InDataLayerInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsOnDataLayer_Statics::NewProp_InDataLayerInstance = { "InDataLayerInstance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudAssetsHelpers_eventDeleteAllActorsOnDataLayer_Parms, InDataLayerInstance), Z_Construct_UClass_UDataLayerInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsOnDataLayer_Statics::NewProp_InDataLayerInstance_MetaData), Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsOnDataLayer_Statics::NewProp_InDataLayerInstance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsOnDataLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsOnDataLayer_Statics::NewProp_InWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsOnDataLayer_Statics::NewProp_InDataLayerInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsOnDataLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloud" },
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsOnDataLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudAssetsHelpers, nullptr, "DeleteAllActorsOnDataLayer", nullptr, nullptr, Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsOnDataLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsOnDataLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsOnDataLayer_Statics::PointCloudAssetsHelpers_eventDeleteAllActorsOnDataLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsOnDataLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsOnDataLayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsOnDataLayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsOnDataLayer_Statics::PointCloudAssetsHelpers_eventDeleteAllActorsOnDataLayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsOnDataLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsOnDataLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToAlembic_Statics
	{
		struct PointCloudAssetsHelpers_eventExportToAlembic_Parms
		{
			FString InFilename;
			TArray<FPointCloudPoint> InPoints;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InFilename;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToAlembic_Statics::NewProp_InFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToAlembic_Statics::NewProp_InFilename = { "InFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudAssetsHelpers_eventExportToAlembic_Parms, InFilename), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToAlembic_Statics::NewProp_InFilename_MetaData), Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToAlembic_Statics::NewProp_InFilename_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToAlembic_Statics::NewProp_InPoints_Inner = { "InPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPointCloudPoint, METADATA_PARAMS(0, nullptr) }; // 4108211218
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToAlembic_Statics::NewProp_InPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToAlembic_Statics::NewProp_InPoints = { "InPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudAssetsHelpers_eventExportToAlembic_Parms, InPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToAlembic_Statics::NewProp_InPoints_MetaData), Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToAlembic_Statics::NewProp_InPoints_MetaData) }; // 4108211218
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToAlembic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToAlembic_Statics::NewProp_InFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToAlembic_Statics::NewProp_InPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToAlembic_Statics::NewProp_InPoints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToAlembic_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudUtils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Exports an array of points to an Alembic file */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exports an array of points to an Alembic file" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToAlembic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudAssetsHelpers, nullptr, "ExportToAlembic", nullptr, nullptr, Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToAlembic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToAlembic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToAlembic_Statics::PointCloudAssetsHelpers_eventExportToAlembic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToAlembic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToAlembic_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToAlembic_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToAlembic_Statics::PointCloudAssetsHelpers_eventExportToAlembic_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToAlembic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToAlembic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToCSV_Statics
	{
		struct PointCloudAssetsHelpers_eventExportToCSV_Parms
		{
			FString InFilename;
			TArray<FPointCloudPoint> InPoints;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InFilename;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToCSV_Statics::NewProp_InFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToCSV_Statics::NewProp_InFilename = { "InFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudAssetsHelpers_eventExportToCSV_Parms, InFilename), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToCSV_Statics::NewProp_InFilename_MetaData), Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToCSV_Statics::NewProp_InFilename_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToCSV_Statics::NewProp_InPoints_Inner = { "InPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPointCloudPoint, METADATA_PARAMS(0, nullptr) }; // 4108211218
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToCSV_Statics::NewProp_InPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToCSV_Statics::NewProp_InPoints = { "InPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudAssetsHelpers_eventExportToCSV_Parms, InPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToCSV_Statics::NewProp_InPoints_MetaData), Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToCSV_Statics::NewProp_InPoints_MetaData) }; // 4108211218
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToCSV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToCSV_Statics::NewProp_InFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToCSV_Statics::NewProp_InPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToCSV_Statics::NewProp_InPoints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToCSV_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudUtils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Exports an array of points to a CSV file */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exports an array of points to a CSV file" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToCSV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudAssetsHelpers, nullptr, "ExportToCSV", nullptr, nullptr, Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToCSV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToCSV_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToCSV_Statics::PointCloudAssetsHelpers_eventExportToCSV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToCSV_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToCSV_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToCSV_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToCSV_Statics::PointCloudAssetsHelpers_eventExportToCSV_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToCSV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToCSV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromDataLayers_Statics
	{
		struct PointCloudAssetsHelpers_eventGetModulesFromDataLayers_Parms
		{
			UWorld* InWorld;
			TArray<UDataLayerAsset*> InDataLayerAssets;
			TArray<FPointCloudPoint> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InDataLayerAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayerAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InDataLayerAssets;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromDataLayers_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudAssetsHelpers_eventGetModulesFromDataLayers_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromDataLayers_Statics::NewProp_InDataLayerAssets_Inner = { "InDataLayerAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDataLayerAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromDataLayers_Statics::NewProp_InDataLayerAssets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromDataLayers_Statics::NewProp_InDataLayerAssets = { "InDataLayerAssets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudAssetsHelpers_eventGetModulesFromDataLayers_Parms, InDataLayerAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromDataLayers_Statics::NewProp_InDataLayerAssets_MetaData), Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromDataLayers_Statics::NewProp_InDataLayerAssets_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromDataLayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPointCloudPoint, METADATA_PARAMS(0, nullptr) }; // 4108211218
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromDataLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudAssetsHelpers_eventGetModulesFromDataLayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4108211218
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromDataLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromDataLayers_Statics::NewProp_InWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromDataLayers_Statics::NewProp_InDataLayerAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromDataLayers_Statics::NewProp_InDataLayerAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromDataLayers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromDataLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromDataLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudUtils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Builds an array of points containing the modules found on the actors in the provided data layers */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Builds an array of points containing the modules found on the actors in the provided data layers" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromDataLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudAssetsHelpers, nullptr, "GetModulesFromDataLayers", nullptr, nullptr, Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromDataLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromDataLayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromDataLayers_Statics::PointCloudAssetsHelpers_eventGetModulesFromDataLayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromDataLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromDataLayers_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromDataLayers_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromDataLayers_Statics::PointCloudAssetsHelpers_eventGetModulesFromDataLayers_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromDataLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromDataLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromMapping_Statics
	{
		struct PointCloudAssetsHelpers_eventGetModulesFromMapping_Parms
		{
			USliceAndDiceMapping* InMapping;
			TArray<FPointCloudPoint> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMapping;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromMapping_Statics::NewProp_InMapping = { "InMapping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudAssetsHelpers_eventGetModulesFromMapping_Parms, InMapping), Z_Construct_UClass_USliceAndDiceMapping_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromMapping_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPointCloudPoint, METADATA_PARAMS(0, nullptr) }; // 4108211218
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudAssetsHelpers_eventGetModulesFromMapping_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4108211218
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromMapping_Statics::NewProp_InMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromMapping_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromMapping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudUtils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Builds an array of points containing the modules found on the actors in the provided Slice & Dice mapping */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Builds an array of points containing the modules found on the actors in the provided Slice & Dice mapping" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudAssetsHelpers, nullptr, "GetModulesFromMapping", nullptr, nullptr, Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromMapping_Statics::PointCloudAssetsHelpers_eventGetModulesFromMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromMapping_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromMapping_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromMapping_Statics::PointCloudAssetsHelpers_eventGetModulesFromMapping_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudAssetsHelpers_GetSelectedRuleProcessorItemsFromContentBrowser_Statics
	{
		struct PointCloudAssetsHelpers_eventGetSelectedRuleProcessorItemsFromContentBrowser_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_GetSelectedRuleProcessorItemsFromContentBrowser_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_GetSelectedRuleProcessorItemsFromContentBrowser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudAssetsHelpers_eventGetSelectedRuleProcessorItemsFromContentBrowser_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudAssetsHelpers_GetSelectedRuleProcessorItemsFromContentBrowser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_GetSelectedRuleProcessorItemsFromContentBrowser_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_GetSelectedRuleProcessorItemsFromContentBrowser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudAssetsHelpers_GetSelectedRuleProcessorItemsFromContentBrowser_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloud" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Return an array containing the selected RuleProcessor items from the content browser\n\x09* @return - An Array of FAssetData items for any RuleProcessorItems selected in the content browser. An empty Array if no RuleProcessor Items are selected\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return an array containing the selected RuleProcessor items from the content browser\n@return - An Array of FAssetData items for any RuleProcessorItems selected in the content browser. An empty Array if no RuleProcessor Items are selected" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudAssetsHelpers_GetSelectedRuleProcessorItemsFromContentBrowser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudAssetsHelpers, nullptr, "GetSelectedRuleProcessorItemsFromContentBrowser", nullptr, nullptr, Z_Construct_UFunction_UPointCloudAssetsHelpers_GetSelectedRuleProcessorItemsFromContentBrowser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_GetSelectedRuleProcessorItemsFromContentBrowser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudAssetsHelpers_GetSelectedRuleProcessorItemsFromContentBrowser_Statics::PointCloudAssetsHelpers_eventGetSelectedRuleProcessorItemsFromContentBrowser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_GetSelectedRuleProcessorItemsFromContentBrowser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudAssetsHelpers_GetSelectedRuleProcessorItemsFromContentBrowser_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_GetSelectedRuleProcessorItemsFromContentBrowser_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudAssetsHelpers_GetSelectedRuleProcessorItemsFromContentBrowser_Statics::PointCloudAssetsHelpers_eventGetSelectedRuleProcessorItemsFromContentBrowser_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudAssetsHelpers_GetSelectedRuleProcessorItemsFromContentBrowser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudAssetsHelpers_GetSelectedRuleProcessorItemsFromContentBrowser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAlembic_Statics
	{
		struct PointCloudAssetsHelpers_eventLoadPointCloudAlembic_Parms
		{
			TArray<UPointCloud*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAlembic_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPointCloud_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAlembic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudAssetsHelpers_eventLoadPointCloudAlembic_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAlembic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAlembic_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAlembic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAlembic_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloud" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Open a file Open dialog to load an Alembic file into a new PointCloud asset\n\x09* @return - An array of pointers to the newly created PointCloud Asset or NULL on failure / cancel\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Open a file Open dialog to load an Alembic file into a new PointCloud asset\n@return - An array of pointers to the newly created PointCloud Asset or NULL on failure / cancel" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAlembic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudAssetsHelpers, nullptr, "LoadPointCloudAlembic", nullptr, nullptr, Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAlembic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAlembic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAlembic_Statics::PointCloudAssetsHelpers_eventLoadPointCloudAlembic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAlembic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAlembic_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAlembic_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAlembic_Statics::PointCloudAssetsHelpers_eventLoadPointCloudAlembic_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAlembic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAlembic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAssetFromPath_Statics
	{
		struct PointCloudAssetsHelpers_eventLoadPointCloudAssetFromPath_Parms
		{
			FString Path;
			UPointCloud* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAssetFromPath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAssetFromPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudAssetsHelpers_eventLoadPointCloudAssetFromPath_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAssetFromPath_Statics::NewProp_Path_MetaData), Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAssetFromPath_Statics::NewProp_Path_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAssetFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudAssetsHelpers_eventLoadPointCloudAssetFromPath_Parms, ReturnValue), Z_Construct_UClass_UPointCloud_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAssetFromPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAssetFromPath_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAssetFromPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAssetFromPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloud" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Loads a point cloud from a given file path\n\x09* @param The file path to load\n\x09* @return A pointer to the newly created PointCloud Asset or NULL on failure / cancel\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loads a point cloud from a given file path\n@param The file path to load\n@return A pointer to the newly created PointCloud Asset or NULL on failure / cancel" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAssetFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudAssetsHelpers, nullptr, "LoadPointCloudAssetFromPath", nullptr, nullptr, Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAssetFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAssetFromPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAssetFromPath_Statics::PointCloudAssetsHelpers_eventLoadPointCloudAssetFromPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAssetFromPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAssetFromPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAssetFromPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAssetFromPath_Statics::PointCloudAssetsHelpers_eventLoadPointCloudAssetFromPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAssetFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAssetFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudCSV_Statics
	{
		struct PointCloudAssetsHelpers_eventLoadPointCloudCSV_Parms
		{
			TArray<UPointCloud*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudCSV_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPointCloud_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudCSV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudAssetsHelpers_eventLoadPointCloudCSV_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudCSV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudCSV_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudCSV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudCSV_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloud" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Open a file Open dialog to load a PSV file into a new PointCloud asset\n\x09* @return - An array of pointers to the newly created PointCloud Asset or NULL on failure / cancel\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Open a file Open dialog to load a PSV file into a new PointCloud asset\n@return - An array of pointers to the newly created PointCloud Asset or NULL on failure / cancel" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudCSV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudAssetsHelpers, nullptr, "LoadPointCloudCSV", nullptr, nullptr, Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudCSV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudCSV_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudCSV_Statics::PointCloudAssetsHelpers_eventLoadPointCloudCSV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudCSV_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudCSV_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudCSV_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudCSV_Statics::PointCloudAssetsHelpers_eventLoadPointCloudCSV_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudCSV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudCSV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudAssetsHelpers_SetActorPivots_Statics
	{
		struct PointCloudAssetsHelpers_eventSetActorPivots_Parms
		{
			TArray<AActor*> InActors;
			EPointCloudPivotType InPivotType;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InActors;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InPivotType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InPivotType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_SetActorPivots_Statics::NewProp_InActors_Inner = { "InActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudAssetsHelpers_SetActorPivots_Statics::NewProp_InActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_SetActorPivots_Statics::NewProp_InActors = { "InActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudAssetsHelpers_eventSetActorPivots_Parms, InActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_SetActorPivots_Statics::NewProp_InActors_MetaData), Z_Construct_UFunction_UPointCloudAssetsHelpers_SetActorPivots_Statics::NewProp_InActors_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_SetActorPivots_Statics::NewProp_InPivotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPointCloudAssetsHelpers_SetActorPivots_Statics::NewProp_InPivotType = { "InPivotType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudAssetsHelpers_eventSetActorPivots_Parms, InPivotType), Z_Construct_UEnum_PointCloud_EPointCloudPivotType, METADATA_PARAMS(0, nullptr) }; // 1884918641
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudAssetsHelpers_SetActorPivots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_SetActorPivots_Statics::NewProp_InActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_SetActorPivots_Statics::NewProp_InActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_SetActorPivots_Statics::NewProp_InPivotType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudAssetsHelpers_SetActorPivots_Statics::NewProp_InPivotType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudAssetsHelpers_SetActorPivots_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloud" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Transform actors and their meshes to a certain pivot type.\n\x09* @param InActors - This list of actors to transform\n\x09* @param InPivotType - The type of pivot (Default, WorldOrigin, AABBCenter, AABBCenterMinZ)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transform actors and their meshes to a certain pivot type.\n@param InActors - This list of actors to transform\n@param InPivotType - The type of pivot (Default, WorldOrigin, AABBCenter, AABBCenterMinZ)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudAssetsHelpers_SetActorPivots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudAssetsHelpers, nullptr, "SetActorPivots", nullptr, nullptr, Z_Construct_UFunction_UPointCloudAssetsHelpers_SetActorPivots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_SetActorPivots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudAssetsHelpers_SetActorPivots_Statics::PointCloudAssetsHelpers_eventSetActorPivots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_SetActorPivots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudAssetsHelpers_SetActorPivots_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudAssetsHelpers_SetActorPivots_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudAssetsHelpers_SetActorPivots_Statics::PointCloudAssetsHelpers_eventSetActorPivots_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudAssetsHelpers_SetActorPivots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudAssetsHelpers_SetActorPivots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPointCloudAssetsHelpers);
	UClass* Z_Construct_UClass_UPointCloudAssetsHelpers_NoRegister()
	{
		return UPointCloudAssetsHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UPointCloudAssetsHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointCloudAssetsHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudAssetsHelpers_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPointCloudAssetsHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateActorFromView, "CreateActorFromView" }, // 2881444153
		{ &Z_Construct_UFunction_UPointCloudAssetsHelpers_CreateEmptyPointCloudAsset, "CreateEmptyPointCloudAsset" }, // 2640227047
		{ &Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsByPrefixInPartitionedWorld, "DeleteAllActorsByPrefixInPartitionedWorld" }, // 773878757
		{ &Z_Construct_UFunction_UPointCloudAssetsHelpers_DeleteAllActorsOnDataLayer, "DeleteAllActorsOnDataLayer" }, // 3622969829
		{ &Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToAlembic, "ExportToAlembic" }, // 1202348281
		{ &Z_Construct_UFunction_UPointCloudAssetsHelpers_ExportToCSV, "ExportToCSV" }, // 46076475
		{ &Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromDataLayers, "GetModulesFromDataLayers" }, // 631711
		{ &Z_Construct_UFunction_UPointCloudAssetsHelpers_GetModulesFromMapping, "GetModulesFromMapping" }, // 1466418825
		{ &Z_Construct_UFunction_UPointCloudAssetsHelpers_GetSelectedRuleProcessorItemsFromContentBrowser, "GetSelectedRuleProcessorItemsFromContentBrowser" }, // 3672198502
		{ &Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAlembic, "LoadPointCloudAlembic" }, // 2828579759
		{ &Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudAssetFromPath, "LoadPointCloudAssetFromPath" }, // 884413475
		{ &Z_Construct_UFunction_UPointCloudAssetsHelpers_LoadPointCloudCSV, "LoadPointCloudCSV" }, // 1022651539
		{ &Z_Construct_UFunction_UPointCloudAssetsHelpers_SetActorPivots, "SetActorPivots" }, // 4003102948
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudAssetsHelpers_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudAssetsHelpers_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A suite of helper blueprint functions to make life easier when using PointClouds and associated classes */" },
#endif
		{ "IncludePath", "PointCloudAssetHelpers.h" },
		{ "ModuleRelativePath", "Public/PointCloudAssetHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A suite of helper blueprint functions to make life easier when using PointClouds and associated classes" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointCloudAssetsHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloudAssetsHelpers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPointCloudAssetsHelpers_Statics::ClassParams = {
		&UPointCloudAssetsHelpers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudAssetsHelpers_Statics::Class_MetaDataParams), Z_Construct_UClass_UPointCloudAssetsHelpers_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPointCloudAssetsHelpers()
	{
		if (!Z_Registration_Info_UClass_UPointCloudAssetsHelpers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPointCloudAssetsHelpers.OuterSingleton, Z_Construct_UClass_UPointCloudAssetsHelpers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPointCloudAssetsHelpers.OuterSingleton;
	}
	template<> POINTCLOUDEDITOR_API UClass* StaticClass<UPointCloudAssetsHelpers>()
	{
		return UPointCloudAssetsHelpers::StaticClass();
	}
	UPointCloudAssetsHelpers::UPointCloudAssetsHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloudAssetsHelpers);
	UPointCloudAssetsHelpers::~UPointCloudAssetsHelpers() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h_Statics::ScriptStructInfo[] = {
		{ FPointCloudComponentData::StaticStruct, Z_Construct_UScriptStruct_FPointCloudComponentData_Statics::NewStructOps, TEXT("PointCloudComponentData"), &Z_Registration_Info_UScriptStruct_PointCloudComponentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPointCloudComponentData), 3446771995U) },
		{ FPointCloudManagedActorData::StaticStruct, Z_Construct_UScriptStruct_FPointCloudManagedActorData_Statics::NewStructOps, TEXT("PointCloudManagedActorData"), &Z_Registration_Info_UScriptStruct_PointCloudManagedActorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPointCloudManagedActorData), 667256574U) },
		{ FSpawnAndInitMaterialOverrideParameters::StaticStruct, Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters_Statics::NewStructOps, TEXT("SpawnAndInitMaterialOverrideParameters"), &Z_Registration_Info_UScriptStruct_SpawnAndInitMaterialOverrideParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnAndInitMaterialOverrideParameters), 925247130U) },
		{ FSpawnAndInitActorParameters::StaticStruct, Z_Construct_UScriptStruct_FSpawnAndInitActorParameters_Statics::NewStructOps, TEXT("SpawnAndInitActorParameters"), &Z_Registration_Info_UScriptStruct_SpawnAndInitActorParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnAndInitActorParameters), 3399278195U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPointCloudAssetsHelpers, UPointCloudAssetsHelpers::StaticClass, TEXT("UPointCloudAssetsHelpers"), &Z_Registration_Info_UClass_UPointCloudAssetsHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPointCloudAssetsHelpers), 2145263651U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h_3521978391(TEXT("/Script/PointCloudEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Public_PointCloudAssetHelpers_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
