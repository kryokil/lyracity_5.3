// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Rules/MultiActorBuildRule.h"
#include "PointCloudEditor/Public/PointCloudAssetHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiActorBuildRule() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
	POINTCLOUD_API UEnum* Z_Construct_UEnum_PointCloud_EPointCloudPivotType();
	POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UMultiActorBuildRule();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UMultiActorBuildRule_NoRegister();
	POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMultiActorBuildRuleData();
	POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters();
	UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiActorBuildRuleData>() == std::is_polymorphic<FPointCloudRuleData>(), "USTRUCT FMultiActorBuildRuleData cannot be polymorphic unless super FPointCloudRuleData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiActorBuildRuleData;
class UScriptStruct* FMultiActorBuildRuleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiActorBuildRuleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiActorBuildRuleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiActorBuildRuleData, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("MultiActorBuildRuleData"));
	}
	return Z_Registration_Info_UScriptStruct_MultiActorBuildRuleData.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FMultiActorBuildRuleData>()
{
	return FMultiActorBuildRuleData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamePattern_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NamePattern;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetadataKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetadataKey;
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
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComponentOverrideMap_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComponentOverrideMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentOverrideMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ComponentOverrideMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TemplateActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateISM_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TemplateISM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateHISM_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TemplateHISM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateStaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TemplateStaticMeshComponent;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FolderPath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FolderPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GroupId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialOverrides;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Rules/MultiActorBuildRule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiActorBuildRuleData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_NamePattern_MetaData[] = {
		{ "Category", "MultiActorBuildRuleData" },
		{ "ModuleRelativePath", "Private/Rules/MultiActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_NamePattern = { "NamePattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiActorBuildRuleData, NamePattern), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_NamePattern_MetaData), Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_NamePattern_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_MetadataKey_MetaData[] = {
		{ "Category", "MultiActorBuildRuleData" },
		{ "ModuleRelativePath", "Private/Rules/MultiActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_MetadataKey = { "MetadataKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiActorBuildRuleData, MetadataKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_MetadataKey_MetaData), Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_MetadataKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_bSingleInstanceAsStaticMesh_MetaData[] = {
		{ "Category", "MultiActorBuildRuleData" },
		{ "ModuleRelativePath", "Private/Rules/MultiActorBuildRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_bSingleInstanceAsStaticMesh_SetBit(void* Obj)
	{
		((FMultiActorBuildRuleData*)Obj)->bSingleInstanceAsStaticMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_bSingleInstanceAsStaticMesh = { "bSingleInstanceAsStaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMultiActorBuildRuleData), &Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_bSingleInstanceAsStaticMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_bSingleInstanceAsStaticMesh_MetaData), Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_bSingleInstanceAsStaticMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_bUseHierarchicalInstancedStaticMeshComponent_MetaData[] = {
		{ "Category", "MultiActorBuildRuleData" },
		{ "ModuleRelativePath", "Private/Rules/MultiActorBuildRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_bUseHierarchicalInstancedStaticMeshComponent_SetBit(void* Obj)
	{
		((FMultiActorBuildRuleData*)Obj)->bUseHierarchicalInstancedStaticMeshComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_bUseHierarchicalInstancedStaticMeshComponent = { "bUseHierarchicalInstancedStaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMultiActorBuildRuleData), &Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_bUseHierarchicalInstancedStaticMeshComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_bUseHierarchicalInstancedStaticMeshComponent_MetaData), Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_bUseHierarchicalInstancedStaticMeshComponent_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_ComponentOverrideMap_ValueProp = { "ComponentOverrideMap", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_ComponentOverrideMap_Key_KeyProp = { "ComponentOverrideMap_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_ComponentOverrideMap_MetaData[] = {
		{ "Category", "MultiActorBuildRuleData" },
		{ "ModuleRelativePath", "Private/Rules/MultiActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_ComponentOverrideMap = { "ComponentOverrideMap", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiActorBuildRuleData, ComponentOverrideMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_ComponentOverrideMap_MetaData), Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_ComponentOverrideMap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_TemplateActor_MetaData[] = {
		{ "Category", "Templates" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Rules/MultiActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_TemplateActor = { "TemplateActor", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiActorBuildRuleData, TemplateActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_TemplateActor_MetaData), Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_TemplateActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_TemplateISM_MetaData[] = {
		{ "Category", "Templates" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Rules/MultiActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_TemplateISM = { "TemplateISM", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiActorBuildRuleData, TemplateISM), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_TemplateISM_MetaData), Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_TemplateISM_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_TemplateHISM_MetaData[] = {
		{ "Category", "Templates" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Rules/MultiActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_TemplateHISM = { "TemplateHISM", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiActorBuildRuleData, TemplateHISM), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_TemplateHISM_MetaData), Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_TemplateHISM_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_TemplateStaticMeshComponent_MetaData[] = {
		{ "Category", "Templates" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Rules/MultiActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_TemplateStaticMeshComponent = { "TemplateStaticMeshComponent", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiActorBuildRuleData, TemplateStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_TemplateStaticMeshComponent_MetaData), Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_TemplateStaticMeshComponent_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_PivotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_PivotType_MetaData[] = {
		{ "Category", "Pivot" },
		{ "DisplayName", "Fallback Pivot Type" },
		{ "ModuleRelativePath", "Private/Rules/MultiActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_PivotType = { "PivotType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiActorBuildRuleData, PivotType), Z_Construct_UEnum_PointCloud_EPointCloudPivotType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_PivotType_MetaData), Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_PivotType_MetaData) }; // 1884918641
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_PivotKey_MetaData[] = {
		{ "Category", "Pivot" },
		{ "ModuleRelativePath", "Private/Rules/MultiActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_PivotKey = { "PivotKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiActorBuildRuleData, PivotKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_PivotKey_MetaData), Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_PivotKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_PivotValue_MetaData[] = {
		{ "Category", "Pivot" },
		{ "ModuleRelativePath", "Private/Rules/MultiActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_PivotValue = { "PivotValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiActorBuildRuleData, PivotValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_PivotValue_MetaData), Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_PivotValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_PerModuleAttributeKey_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/MultiActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_PerModuleAttributeKey = { "PerModuleAttributeKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiActorBuildRuleData, PerModuleAttributeKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_PerModuleAttributeKey_MetaData), Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_PerModuleAttributeKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_bManualGroupId_MetaData[] = {
		{ "Category", "GroupId" },
		{ "ModuleRelativePath", "Private/Rules/MultiActorBuildRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_bManualGroupId_SetBit(void* Obj)
	{
		((FMultiActorBuildRuleData*)Obj)->bManualGroupId = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_bManualGroupId = { "bManualGroupId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMultiActorBuildRuleData), &Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_bManualGroupId_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_bManualGroupId_MetaData), Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_bManualGroupId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_FolderPath_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/MultiActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_FolderPath = { "FolderPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiActorBuildRuleData, FolderPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_FolderPath_MetaData), Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_FolderPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_GroupId_MetaData[] = {
		{ "Category", "GroupId" },
		{ "ModuleRelativePath", "Private/Rules/MultiActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiActorBuildRuleData, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_GroupId_MetaData), Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_GroupId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_MaterialOverrides_MetaData[] = {
		{ "Category", "Overrides" },
		{ "ModuleRelativePath", "Private/Rules/MultiActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_MaterialOverrides = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiActorBuildRuleData, MaterialOverrides), Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_MaterialOverrides_MetaData), Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_MaterialOverrides_MetaData) }; // 925247130
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_NamePattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_MetadataKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_bSingleInstanceAsStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_bUseHierarchicalInstancedStaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_ComponentOverrideMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_ComponentOverrideMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_ComponentOverrideMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_TemplateActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_TemplateISM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_TemplateHISM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_TemplateStaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_PivotType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_PivotType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_PivotKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_PivotValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_PerModuleAttributeKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_bManualGroupId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_FolderPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_GroupId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewProp_MaterialOverrides,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
		Z_Construct_UScriptStruct_FPointCloudRuleData,
		&NewStructOps,
		"MultiActorBuildRuleData",
		Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::PropPointers),
		sizeof(FMultiActorBuildRuleData),
		alignof(FMultiActorBuildRuleData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMultiActorBuildRuleData()
	{
		if (!Z_Registration_Info_UScriptStruct_MultiActorBuildRuleData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiActorBuildRuleData.InnerSingleton, Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultiActorBuildRuleData.InnerSingleton;
	}
	void UMultiActorBuildRule::StaticRegisterNativesUMultiActorBuildRule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiActorBuildRule);
	UClass* Z_Construct_UClass_UMultiActorBuildRule_NoRegister()
	{
		return UMultiActorBuildRule::StaticClass();
	}
	struct Z_Construct_UClass_UMultiActorBuildRule_Statics
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
	UObject* (*const Z_Construct_UClass_UMultiActorBuildRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPointCloudRule,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiActorBuildRule_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiActorBuildRule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Rules/MultiActorBuildRule.h" },
		{ "ModuleRelativePath", "Private/Rules/MultiActorBuildRule.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiActorBuildRule_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/MultiActorBuildRule.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiActorBuildRule_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMultiActorBuildRule, Data), Z_Construct_UScriptStruct_FMultiActorBuildRuleData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiActorBuildRule_Statics::NewProp_Data_MetaData), Z_Construct_UClass_UMultiActorBuildRule_Statics::NewProp_Data_MetaData) }; // 2867424511
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultiActorBuildRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiActorBuildRule_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiActorBuildRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiActorBuildRule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiActorBuildRule_Statics::ClassParams = {
		&UMultiActorBuildRule::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMultiActorBuildRule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMultiActorBuildRule_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiActorBuildRule_Statics::Class_MetaDataParams), Z_Construct_UClass_UMultiActorBuildRule_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiActorBuildRule_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMultiActorBuildRule()
	{
		if (!Z_Registration_Info_UClass_UMultiActorBuildRule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiActorBuildRule.OuterSingleton, Z_Construct_UClass_UMultiActorBuildRule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMultiActorBuildRule.OuterSingleton;
	}
	template<> POINTCLOUDEDITOR_API UClass* StaticClass<UMultiActorBuildRule>()
	{
		return UMultiActorBuildRule::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiActorBuildRule);
	UMultiActorBuildRule::~UMultiActorBuildRule() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MultiActorBuildRule_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MultiActorBuildRule_h_Statics::ScriptStructInfo[] = {
		{ FMultiActorBuildRuleData::StaticStruct, Z_Construct_UScriptStruct_FMultiActorBuildRuleData_Statics::NewStructOps, TEXT("MultiActorBuildRuleData"), &Z_Registration_Info_UScriptStruct_MultiActorBuildRuleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiActorBuildRuleData), 2867424511U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MultiActorBuildRule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMultiActorBuildRule, UMultiActorBuildRule::StaticClass, TEXT("UMultiActorBuildRule"), &Z_Registration_Info_UClass_UMultiActorBuildRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiActorBuildRule), 1381965254U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MultiActorBuildRule_h_508369641(TEXT("/Script/PointCloudEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MultiActorBuildRule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MultiActorBuildRule_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MultiActorBuildRule_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_MultiActorBuildRule_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
