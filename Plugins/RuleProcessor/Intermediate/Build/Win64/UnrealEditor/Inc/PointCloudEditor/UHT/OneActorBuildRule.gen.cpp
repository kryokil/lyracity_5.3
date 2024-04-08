// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Rules/OneActorBuildRule.h"
#include "PointCloudEditor/Public/PointCloudAssetHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOneActorBuildRule() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule();
	POINTCLOUD_API UEnum* Z_Construct_UEnum_PointCloud_EPointCloudPivotType();
	POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudRuleData();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UOneActorBuildRule();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UOneActorBuildRule_NoRegister();
	POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FOneActorBuildRuleData();
	POINTCLOUDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters();
	UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FOneActorBuildRuleData>() == std::is_polymorphic<FPointCloudRuleData>(), "USTRUCT FOneActorBuildRuleData cannot be polymorphic unless super FPointCloudRuleData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OneActorBuildRuleData;
class UScriptStruct* FOneActorBuildRuleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OneActorBuildRuleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OneActorBuildRuleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOneActorBuildRuleData, (UObject*)Z_Construct_UPackage__Script_PointCloudEditor(), TEXT("OneActorBuildRuleData"));
	}
	return Z_Registration_Info_UScriptStruct_OneActorBuildRuleData.OuterSingleton;
}
template<> POINTCLOUDEDITOR_API UScriptStruct* StaticStruct<FOneActorBuildRuleData>()
{
	return FOneActorBuildRuleData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FolderPath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FolderPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerModuleAttributeKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PerModuleAttributeKey;
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_PivotType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PivotType;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialOverrides;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Rules/OneActorBuildRule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOneActorBuildRuleData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_NamePattern_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/OneActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_NamePattern = { "NamePattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOneActorBuildRuleData, NamePattern), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_NamePattern_MetaData), Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_NamePattern_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_FolderPath_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/OneActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_FolderPath = { "FolderPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOneActorBuildRuleData, FolderPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_FolderPath_MetaData), Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_FolderPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_PerModuleAttributeKey_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/OneActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_PerModuleAttributeKey = { "PerModuleAttributeKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOneActorBuildRuleData, PerModuleAttributeKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_PerModuleAttributeKey_MetaData), Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_PerModuleAttributeKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_bSingleInstanceAsStaticMesh_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/OneActorBuildRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_bSingleInstanceAsStaticMesh_SetBit(void* Obj)
	{
		((FOneActorBuildRuleData*)Obj)->bSingleInstanceAsStaticMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_bSingleInstanceAsStaticMesh = { "bSingleInstanceAsStaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOneActorBuildRuleData), &Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_bSingleInstanceAsStaticMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_bSingleInstanceAsStaticMesh_MetaData), Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_bSingleInstanceAsStaticMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_bUseHierarchicalInstancedStaticMeshComponent_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/OneActorBuildRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_bUseHierarchicalInstancedStaticMeshComponent_SetBit(void* Obj)
	{
		((FOneActorBuildRuleData*)Obj)->bUseHierarchicalInstancedStaticMeshComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_bUseHierarchicalInstancedStaticMeshComponent = { "bUseHierarchicalInstancedStaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOneActorBuildRuleData), &Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_bUseHierarchicalInstancedStaticMeshComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_bUseHierarchicalInstancedStaticMeshComponent_MetaData), Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_bUseHierarchicalInstancedStaticMeshComponent_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_PivotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_PivotType_MetaData[] = {
		{ "Category", "Pivot" },
		{ "ModuleRelativePath", "Private/Rules/OneActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_PivotType = { "PivotType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOneActorBuildRuleData, PivotType), Z_Construct_UEnum_PointCloud_EPointCloudPivotType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_PivotType_MetaData), Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_PivotType_MetaData) }; // 1884918641
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_ComponentOverrideMap_ValueProp = { "ComponentOverrideMap", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_ComponentOverrideMap_Key_KeyProp = { "ComponentOverrideMap_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_ComponentOverrideMap_MetaData[] = {
		{ "Category", "Overrides" },
		{ "ModuleRelativePath", "Private/Rules/OneActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_ComponentOverrideMap = { "ComponentOverrideMap", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOneActorBuildRuleData, ComponentOverrideMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_ComponentOverrideMap_MetaData), Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_ComponentOverrideMap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_TemplateActor_MetaData[] = {
		{ "Category", "Templates" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Rules/OneActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_TemplateActor = { "TemplateActor", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOneActorBuildRuleData, TemplateActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_TemplateActor_MetaData), Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_TemplateActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_TemplateISM_MetaData[] = {
		{ "Category", "Templates" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Rules/OneActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_TemplateISM = { "TemplateISM", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOneActorBuildRuleData, TemplateISM), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_TemplateISM_MetaData), Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_TemplateISM_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_TemplateHISM_MetaData[] = {
		{ "Category", "Templates" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Rules/OneActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_TemplateHISM = { "TemplateHISM", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOneActorBuildRuleData, TemplateHISM), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_TemplateHISM_MetaData), Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_TemplateHISM_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_TemplateStaticMeshComponent_MetaData[] = {
		{ "Category", "Templates" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Rules/OneActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_TemplateStaticMeshComponent = { "TemplateStaticMeshComponent", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOneActorBuildRuleData, TemplateStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_TemplateStaticMeshComponent_MetaData), Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_TemplateStaticMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_bManualGroupId_MetaData[] = {
		{ "Category", "GroupId" },
		{ "ModuleRelativePath", "Private/Rules/OneActorBuildRule.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_bManualGroupId_SetBit(void* Obj)
	{
		((FOneActorBuildRuleData*)Obj)->bManualGroupId = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_bManualGroupId = { "bManualGroupId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOneActorBuildRuleData), &Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_bManualGroupId_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_bManualGroupId_MetaData), Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_bManualGroupId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_GroupId_MetaData[] = {
		{ "Category", "GroupId" },
		{ "ModuleRelativePath", "Private/Rules/OneActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOneActorBuildRuleData, GroupId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_GroupId_MetaData), Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_GroupId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_MaterialOverrides_MetaData[] = {
		{ "Category", "Overrides" },
		{ "ModuleRelativePath", "Private/Rules/OneActorBuildRule.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_MaterialOverrides = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOneActorBuildRuleData, MaterialOverrides), Z_Construct_UScriptStruct_FSpawnAndInitMaterialOverrideParameters, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_MaterialOverrides_MetaData), Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_MaterialOverrides_MetaData) }; // 925247130
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_NamePattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_FolderPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_PerModuleAttributeKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_bSingleInstanceAsStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_bUseHierarchicalInstancedStaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_PivotType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_PivotType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_ComponentOverrideMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_ComponentOverrideMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_ComponentOverrideMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_TemplateActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_TemplateISM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_TemplateHISM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_TemplateStaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_bManualGroupId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_GroupId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewProp_MaterialOverrides,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
		Z_Construct_UScriptStruct_FPointCloudRuleData,
		&NewStructOps,
		"OneActorBuildRuleData",
		Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::PropPointers),
		sizeof(FOneActorBuildRuleData),
		alignof(FOneActorBuildRuleData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOneActorBuildRuleData()
	{
		if (!Z_Registration_Info_UScriptStruct_OneActorBuildRuleData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OneActorBuildRuleData.InnerSingleton, Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OneActorBuildRuleData.InnerSingleton;
	}
	void UOneActorBuildRule::StaticRegisterNativesUOneActorBuildRule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOneActorBuildRule);
	UClass* Z_Construct_UClass_UOneActorBuildRule_NoRegister()
	{
		return UOneActorBuildRule::StaticClass();
	}
	struct Z_Construct_UClass_UOneActorBuildRule_Statics
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
	UObject* (*const Z_Construct_UClass_UOneActorBuildRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPointCloudRule,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOneActorBuildRule_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOneActorBuildRule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Rules/OneActorBuildRule.h" },
		{ "ModuleRelativePath", "Private/Rules/OneActorBuildRule.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOneActorBuildRule_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Rules/OneActorBuildRule.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOneActorBuildRule_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOneActorBuildRule, Data), Z_Construct_UScriptStruct_FOneActorBuildRuleData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOneActorBuildRule_Statics::NewProp_Data_MetaData), Z_Construct_UClass_UOneActorBuildRule_Statics::NewProp_Data_MetaData) }; // 3816408254
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOneActorBuildRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOneActorBuildRule_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOneActorBuildRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOneActorBuildRule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOneActorBuildRule_Statics::ClassParams = {
		&UOneActorBuildRule::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOneActorBuildRule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOneActorBuildRule_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOneActorBuildRule_Statics::Class_MetaDataParams), Z_Construct_UClass_UOneActorBuildRule_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOneActorBuildRule_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOneActorBuildRule()
	{
		if (!Z_Registration_Info_UClass_UOneActorBuildRule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOneActorBuildRule.OuterSingleton, Z_Construct_UClass_UOneActorBuildRule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOneActorBuildRule.OuterSingleton;
	}
	template<> POINTCLOUDEDITOR_API UClass* StaticClass<UOneActorBuildRule>()
	{
		return UOneActorBuildRule::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOneActorBuildRule);
	UOneActorBuildRule::~UOneActorBuildRule() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_OneActorBuildRule_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_OneActorBuildRule_h_Statics::ScriptStructInfo[] = {
		{ FOneActorBuildRuleData::StaticStruct, Z_Construct_UScriptStruct_FOneActorBuildRuleData_Statics::NewStructOps, TEXT("OneActorBuildRuleData"), &Z_Registration_Info_UScriptStruct_OneActorBuildRuleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOneActorBuildRuleData), 3816408254U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_OneActorBuildRule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOneActorBuildRule, UOneActorBuildRule::StaticClass, TEXT("UOneActorBuildRule"), &Z_Registration_Info_UClass_UOneActorBuildRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOneActorBuildRule), 1171372334U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_OneActorBuildRule_h_2670739171(TEXT("/Script/PointCloudEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_OneActorBuildRule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_OneActorBuildRule_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_OneActorBuildRule_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Rules_OneActorBuildRule_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
