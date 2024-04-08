// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloud/Public/PointCloudSliceAndDiceManager.h"
#include "PointCloud/Public/PointCloudSliceAndDiceShared.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudSliceAndDiceManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	POINTCLOUD_API UClass* Z_Construct_UClass_ASliceAndDiceManager();
	POINTCLOUD_API UClass* Z_Construct_UClass_ASliceAndDiceManager_NoRegister();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloud_NoRegister();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRule_NoRegister();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_NoRegister();
	POINTCLOUD_API UClass* Z_Construct_UClass_USliceAndDiceManagedActors();
	POINTCLOUD_API UClass* Z_Construct_UClass_USliceAndDiceManagedActors_NoRegister();
	POINTCLOUD_API UClass* Z_Construct_UClass_USliceAndDiceMapping();
	POINTCLOUD_API UClass* Z_Construct_UClass_USliceAndDiceMapping_NoRegister();
	POINTCLOUD_API UEnum* Z_Construct_UEnum_PointCloud_EPointCloudReportLevel();
	POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsEntry();
	POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo();
	UPackage* Z_Construct_UPackage__Script_PointCloud();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SliceAndDiceManagedActorsHashInfo;
class UScriptStruct* FSliceAndDiceManagedActorsHashInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SliceAndDiceManagedActorsHashInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SliceAndDiceManagedActorsHashInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo, (UObject*)Z_Construct_UPackage__Script_PointCloud(), TEXT("SliceAndDiceManagedActorsHashInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SliceAndDiceManagedActorsHashInfo.OuterSingleton;
}
template<> POINTCLOUD_API UScriptStruct* StaticStruct<FSliceAndDiceManagedActorsHashInfo>()
{
	return FSliceAndDiceManagedActorsHashInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Hash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentHash_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParentHash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ActorIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorCount_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ActorCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSliceAndDiceManagedActorsHashInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::NewProp_Hash_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Contains matching query hash */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains matching query hash" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceAndDiceManagedActorsHashInfo, Hash), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::NewProp_Hash_MetaData), Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::NewProp_Hash_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::NewProp_ParentHash_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Contains parent query hash, needed to skip subtrees */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains parent query hash, needed to skip subtrees" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::NewProp_ParentHash = { "ParentHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceAndDiceManagedActorsHashInfo, ParentHash), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::NewProp_ParentHash_MetaData), Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::NewProp_ParentHash_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::NewProp_ActorIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Index in the ManagedActors array */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index in the ManagedActors array" },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::NewProp_ActorIndex = { "ActorIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceAndDiceManagedActorsHashInfo, ActorIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::NewProp_ActorIndex_MetaData), Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::NewProp_ActorIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::NewProp_ActorCount_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of elements in the ManagedActors array, starting at the index ActorIndex */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of elements in the ManagedActors array, starting at the index ActorIndex" },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::NewProp_ActorCount = { "ActorCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSliceAndDiceManagedActorsHashInfo, ActorCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::NewProp_ActorCount_MetaData), Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::NewProp_ActorCount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::NewProp_Hash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::NewProp_ParentHash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::NewProp_ActorIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::NewProp_ActorCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloud,
		nullptr,
		&NewStructOps,
		"SliceAndDiceManagedActorsHashInfo",
		Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::PropPointers),
		sizeof(FSliceAndDiceManagedActorsHashInfo),
		alignof(FSliceAndDiceManagedActorsHashInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SliceAndDiceManagedActorsHashInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SliceAndDiceManagedActorsHashInfo.InnerSingleton, Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SliceAndDiceManagedActorsHashInfo.InnerSingleton;
	}
	void USliceAndDiceManagedActors::StaticRegisterNativesUSliceAndDiceManagedActors()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USliceAndDiceManagedActors);
	UClass* Z_Construct_UClass_USliceAndDiceManagedActors_NoRegister()
	{
		return USliceAndDiceManagedActors::StaticClass();
	}
	struct Z_Construct_UClass_USliceAndDiceManagedActors_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rule_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Rule;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ManagedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManagedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ManagedActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuleRevisionNumber_MetaData[];
#endif
		static const UECodeGen_Private::FUInt64PropertyParams NewProp_RuleRevisionNumber;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HashInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HashInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HashInfo;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorEntries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorEntries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorEntries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USliceAndDiceManagedActors_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloud,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USliceAndDiceManagedActors_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USliceAndDiceManagedActors_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Class to hold mapping of rule hierarchy to actor soft paths\n*/" },
#endif
		{ "IncludePath", "PointCloudSliceAndDiceManager.h" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class to hold mapping of rule hierarchy to actor soft paths" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_Rule_MetaData[] = {
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_Rule = { "Rule", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USliceAndDiceManagedActors, Rule), Z_Construct_UClass_UPointCloudRule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_Rule_MetaData), Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_Rule_MetaData) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_ManagedActors_Inner = { "ManagedActors", nullptr, (EPropertyFlags)0x0004000020000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_ManagedActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_ManagedActors = { "ManagedActors", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USliceAndDiceManagedActors, ManagedActors_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_ManagedActors_MetaData), Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_ManagedActors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_RuleRevisionNumber_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Revision number of the rule associated to this object */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Revision number of the rule associated to this object" },
#endif
	};
#endif
	const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_RuleRevisionNumber = { "RuleRevisionNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USliceAndDiceManagedActors, RuleRevisionNumber), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_RuleRevisionNumber_MetaData), Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_RuleRevisionNumber_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_HashInfo_Inner = { "HashInfo", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo, METADATA_PARAMS(0, nullptr) }; // 2421629819
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_HashInfo_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Compacted hash related info, will be unpacked for execution and re-packed at the end */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Compacted hash related info, will be unpacked for execution and re-packed at the end" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_HashInfo = { "HashInfo", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USliceAndDiceManagedActors, HashInfo_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_HashInfo_MetaData), Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_HashInfo_MetaData) }; // 2421629819
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USliceAndDiceManagedActors_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_Children_MetaData[] = {
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USliceAndDiceManagedActors, Children), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_Children_MetaData), Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_Children_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_ActorEntries_Inner = { "ActorEntries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsEntry, METADATA_PARAMS(0, nullptr) }; // 3672950293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_ActorEntries_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Flat list of managed actor entries for serialization */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flat list of managed actor entries for serialization" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_ActorEntries = { "ActorEntries", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USliceAndDiceManagedActors, ActorEntries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_ActorEntries_MetaData), Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_ActorEntries_MetaData) }; // 3672950293
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USliceAndDiceManagedActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_Rule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_ManagedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_ManagedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_RuleRevisionNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_HashInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_HashInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_Children_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_Children,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_ActorEntries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USliceAndDiceManagedActors_Statics::NewProp_ActorEntries,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USliceAndDiceManagedActors_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USliceAndDiceManagedActors>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USliceAndDiceManagedActors_Statics::ClassParams = {
		&USliceAndDiceManagedActors::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USliceAndDiceManagedActors_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USliceAndDiceManagedActors_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USliceAndDiceManagedActors_Statics::Class_MetaDataParams), Z_Construct_UClass_USliceAndDiceManagedActors_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USliceAndDiceManagedActors_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USliceAndDiceManagedActors()
	{
		if (!Z_Registration_Info_UClass_USliceAndDiceManagedActors.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USliceAndDiceManagedActors.OuterSingleton, Z_Construct_UClass_USliceAndDiceManagedActors_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USliceAndDiceManagedActors.OuterSingleton;
	}
	template<> POINTCLOUD_API UClass* StaticClass<USliceAndDiceManagedActors>()
	{
		return USliceAndDiceManagedActors::StaticClass();
	}
	USliceAndDiceManagedActors::USliceAndDiceManagedActors(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USliceAndDiceManagedActors);
	USliceAndDiceManagedActors::~USliceAndDiceManagedActors() {}
	DEFINE_FUNCTION(USliceAndDiceMapping::execClearManagedActors)
	{
		P_GET_UBOOL(Z_Param_bClearDisabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearManagedActors(Z_Param_bClearDisabled);
		P_NATIVE_END;
	}
	void USliceAndDiceMapping::StaticRegisterNativesUSliceAndDiceMapping()
	{
		UClass* Class = USliceAndDiceMapping::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearManagedActors", &USliceAndDiceMapping::execClearManagedActors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USliceAndDiceMapping_ClearManagedActors_Statics
	{
		struct SliceAndDiceMapping_eventClearManagedActors_Parms
		{
			bool bClearDisabled;
		};
		static void NewProp_bClearDisabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearDisabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USliceAndDiceMapping_ClearManagedActors_Statics::NewProp_bClearDisabled_SetBit(void* Obj)
	{
		((SliceAndDiceMapping_eventClearManagedActors_Parms*)Obj)->bClearDisabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USliceAndDiceMapping_ClearManagedActors_Statics::NewProp_bClearDisabled = { "bClearDisabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SliceAndDiceMapping_eventClearManagedActors_Parms), &Z_Construct_UFunction_USliceAndDiceMapping_ClearManagedActors_Statics::NewProp_bClearDisabled_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USliceAndDiceMapping_ClearManagedActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USliceAndDiceMapping_ClearManagedActors_Statics::NewProp_bClearDisabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USliceAndDiceMapping_ClearManagedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "SliceAndDice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Clears all managed actors in this mapping.\n\x09* @param bClearDisabled Specifies whether to also clear the managed actors when the associated rule is disabled\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears all managed actors in this mapping.\n@param bClearDisabled Specifies whether to also clear the managed actors when the associated rule is disabled" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USliceAndDiceMapping_ClearManagedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USliceAndDiceMapping, nullptr, "ClearManagedActors", nullptr, nullptr, Z_Construct_UFunction_USliceAndDiceMapping_ClearManagedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USliceAndDiceMapping_ClearManagedActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_USliceAndDiceMapping_ClearManagedActors_Statics::SliceAndDiceMapping_eventClearManagedActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USliceAndDiceMapping_ClearManagedActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_USliceAndDiceMapping_ClearManagedActors_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USliceAndDiceMapping_ClearManagedActors_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USliceAndDiceMapping_ClearManagedActors_Statics::SliceAndDiceMapping_eventClearManagedActors_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USliceAndDiceMapping_ClearManagedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USliceAndDiceMapping_ClearManagedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USliceAndDiceMapping);
	UClass* Z_Construct_UClass_USliceAndDiceMapping_NoRegister()
	{
		return USliceAndDiceMapping::StaticClass();
	}
	struct Z_Construct_UClass_USliceAndDiceMapping_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointCloud_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PointCloud;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuleSet_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RuleSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USliceAndDiceMapping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloud,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USliceAndDiceMapping_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USliceAndDiceMapping_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USliceAndDiceMapping_ClearManagedActors, "ClearManagedActors" }, // 3563779755
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USliceAndDiceMapping_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USliceAndDiceMapping_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Struct to hold point cloud with ruleset and book-keeping data\n*/" },
#endif
		{ "IncludePath", "PointCloudSliceAndDiceManager.h" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct to hold point cloud with ruleset and book-keeping data" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USliceAndDiceMapping_Statics::NewProp_PointCloud_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Point cloud kept as a soft ref to prevent loading when not needed */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Point cloud kept as a soft ref to prevent loading when not needed" },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USliceAndDiceMapping_Statics::NewProp_PointCloud = { "PointCloud", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USliceAndDiceMapping, PointCloud), Z_Construct_UClass_UPointCloud_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USliceAndDiceMapping_Statics::NewProp_PointCloud_MetaData), Z_Construct_UClass_USliceAndDiceMapping_Statics::NewProp_PointCloud_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USliceAndDiceMapping_Statics::NewProp_RuleSet_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USliceAndDiceMapping_Statics::NewProp_RuleSet = { "RuleSet", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USliceAndDiceMapping, RuleSet), Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USliceAndDiceMapping_Statics::NewProp_RuleSet_MetaData), Z_Construct_UClass_USliceAndDiceMapping_Statics::NewProp_RuleSet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USliceAndDiceMapping_Statics::NewProp_Root_MetaData[] = {
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USliceAndDiceMapping_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USliceAndDiceMapping, Root), Z_Construct_UClass_USliceAndDiceManagedActors_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USliceAndDiceMapping_Statics::NewProp_Root_MetaData), Z_Construct_UClass_USliceAndDiceMapping_Statics::NewProp_Root_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USliceAndDiceMapping_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Flag to enable and disable execution of mappings during \"run all\" */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flag to enable and disable execution of mappings during \"run all\"" },
#endif
	};
#endif
	void Z_Construct_UClass_USliceAndDiceMapping_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((USliceAndDiceMapping*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USliceAndDiceMapping_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USliceAndDiceMapping), &Z_Construct_UClass_USliceAndDiceMapping_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USliceAndDiceMapping_Statics::NewProp_bEnabled_MetaData), Z_Construct_UClass_USliceAndDiceMapping_Statics::NewProp_bEnabled_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USliceAndDiceMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USliceAndDiceMapping_Statics::NewProp_PointCloud,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USliceAndDiceMapping_Statics::NewProp_RuleSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USliceAndDiceMapping_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USliceAndDiceMapping_Statics::NewProp_bEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USliceAndDiceMapping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USliceAndDiceMapping>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USliceAndDiceMapping_Statics::ClassParams = {
		&USliceAndDiceMapping::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USliceAndDiceMapping_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USliceAndDiceMapping_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USliceAndDiceMapping_Statics::Class_MetaDataParams), Z_Construct_UClass_USliceAndDiceMapping_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USliceAndDiceMapping_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USliceAndDiceMapping()
	{
		if (!Z_Registration_Info_UClass_USliceAndDiceMapping.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USliceAndDiceMapping.OuterSingleton, Z_Construct_UClass_USliceAndDiceMapping_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USliceAndDiceMapping.OuterSingleton;
	}
	template<> POINTCLOUD_API UClass* StaticClass<USliceAndDiceMapping>()
	{
		return USliceAndDiceMapping::StaticClass();
	}
	USliceAndDiceMapping::USliceAndDiceMapping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USliceAndDiceMapping);
	USliceAndDiceMapping::~USliceAndDiceMapping() {}
	DEFINE_FUNCTION(ASliceAndDiceManager::execSetLogging)
	{
		P_GET_UBOOL(Z_Param_bInLoggingEnabled);
		P_GET_PROPERTY(FStrProperty,Z_Param_InLogPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLogging(Z_Param_bInLoggingEnabled,Z_Param_InLogPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASliceAndDiceManager::execReloadPointCloudsOnMappings)
	{
		P_GET_TARRAY_REF(USliceAndDiceMapping*,Z_Param_Out_SelectedMappings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReloadPointCloudsOnMappings(Z_Param_Out_SelectedMappings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASliceAndDiceManager::execReloadAllPointClouds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReloadAllPointClouds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASliceAndDiceManager::execRunRulesOnMappings)
	{
		P_GET_TARRAY_REF(USliceAndDiceMapping*,Z_Param_Out_SelectedMappings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RunRulesOnMappings(Z_Param_Out_SelectedMappings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASliceAndDiceManager::execRunRules)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RunRules();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASliceAndDiceManager::execRunReportOnMappings)
	{
		P_GET_TARRAY_REF(USliceAndDiceMapping*,Z_Param_Out_SelectedMappings);
		P_GET_ENUM(EPointCloudReportLevel,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->RunReportOnMappings(Z_Param_Out_SelectedMappings,EPointCloudReportLevel(Z_Param_Level));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASliceAndDiceManager::execRunReport)
	{
		P_GET_ENUM(EPointCloudReportLevel,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->RunReport(EPointCloudReportLevel(Z_Param_Level));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASliceAndDiceManager::execMoveMappings)
	{
		P_GET_TARRAY_REF(USliceAndDiceMapping*,Z_Param_Out_InMapping);
		P_GET_OBJECT(ASliceAndDiceManager,Z_Param_InTargetManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MoveMappings(Z_Param_Out_InMapping,Z_Param_InTargetManager);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASliceAndDiceManager::execMoveMapping)
	{
		P_GET_OBJECT(USliceAndDiceMapping,Z_Param_InMapping);
		P_GET_OBJECT(ASliceAndDiceManager,Z_Param_InTargetManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MoveMapping(Z_Param_InMapping,Z_Param_InTargetManager);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASliceAndDiceManager::execRemoveMapping)
	{
		P_GET_OBJECT(USliceAndDiceMapping,Z_Param_InMapping);
		P_GET_UBOOL(Z_Param_bDeleteManagedActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveMapping(Z_Param_InMapping,Z_Param_bDeleteManagedActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASliceAndDiceManager::execAddNewMapping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USliceAndDiceMapping**)Z_Param__Result=P_THIS->AddNewMapping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASliceAndDiceManager::execDeleteManagedActorsFromMapping)
	{
		P_GET_OBJECT(USliceAndDiceMapping,Z_Param_InMapping);
		P_GET_UBOOL(Z_Param_bCleanDisabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeleteManagedActorsFromMapping(Z_Param_InMapping,Z_Param_bCleanDisabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASliceAndDiceManager::execDeleteManagedActorsFromMappings)
	{
		P_GET_TARRAY_REF(USliceAndDiceMapping*,Z_Param_Out_InMappings);
		P_GET_UBOOL(Z_Param_bCleanDisabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeleteManagedActorsFromMappings(Z_Param_Out_InMappings,Z_Param_bCleanDisabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASliceAndDiceManager::execDeleteAllManagedActors)
	{
		P_GET_UBOOL(Z_Param_bCleanDisabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeleteAllManagedActors(Z_Param_bCleanDisabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASliceAndDiceManager::execFindMapping)
	{
		P_GET_OBJECT(UPointCloud,Z_Param_InPointCloud);
		P_GET_OBJECT(UPointCloudSliceAndDiceRuleSet,Z_Param_InRuleSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USliceAndDiceMapping**)Z_Param__Result=P_THIS->FindMapping(Z_Param_InPointCloud,Z_Param_InRuleSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASliceAndDiceManager::execFindOrAddMapping)
	{
		P_GET_OBJECT(UPointCloud,Z_Param_InPointCloud);
		P_GET_OBJECT(UPointCloudSliceAndDiceRuleSet,Z_Param_InRuleSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USliceAndDiceMapping**)Z_Param__Result=P_THIS->FindOrAddMapping(Z_Param_InPointCloud,Z_Param_InRuleSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASliceAndDiceManager::execGetSliceAndDiceManagers)
	{
		P_GET_OBJECT(UWorld,Z_Param_InWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ASliceAndDiceManager*>*)Z_Param__Result=ASliceAndDiceManager::GetSliceAndDiceManagers(Z_Param_InWorld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASliceAndDiceManager::execGetSliceAndDiceManagersInLevel)
	{
		P_GET_OBJECT(ULevel,Z_Param_InLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ASliceAndDiceManager*>*)Z_Param__Result=ASliceAndDiceManager::GetSliceAndDiceManagersInLevel(Z_Param_InLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASliceAndDiceManager::execNumMappings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->NumMappings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASliceAndDiceManager::execCreateSliceAndDiceManager)
	{
		P_GET_OBJECT(UWorld,Z_Param_InWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASliceAndDiceManager**)Z_Param__Result=ASliceAndDiceManager::CreateSliceAndDiceManager(Z_Param_InWorld);
		P_NATIVE_END;
	}
	void ASliceAndDiceManager::StaticRegisterNativesASliceAndDiceManager()
	{
		UClass* Class = ASliceAndDiceManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddNewMapping", &ASliceAndDiceManager::execAddNewMapping },
			{ "CreateSliceAndDiceManager", &ASliceAndDiceManager::execCreateSliceAndDiceManager },
			{ "DeleteAllManagedActors", &ASliceAndDiceManager::execDeleteAllManagedActors },
			{ "DeleteManagedActorsFromMapping", &ASliceAndDiceManager::execDeleteManagedActorsFromMapping },
			{ "DeleteManagedActorsFromMappings", &ASliceAndDiceManager::execDeleteManagedActorsFromMappings },
			{ "FindMapping", &ASliceAndDiceManager::execFindMapping },
			{ "FindOrAddMapping", &ASliceAndDiceManager::execFindOrAddMapping },
			{ "GetSliceAndDiceManagers", &ASliceAndDiceManager::execGetSliceAndDiceManagers },
			{ "GetSliceAndDiceManagersInLevel", &ASliceAndDiceManager::execGetSliceAndDiceManagersInLevel },
			{ "MoveMapping", &ASliceAndDiceManager::execMoveMapping },
			{ "MoveMappings", &ASliceAndDiceManager::execMoveMappings },
			{ "NumMappings", &ASliceAndDiceManager::execNumMappings },
			{ "ReloadAllPointClouds", &ASliceAndDiceManager::execReloadAllPointClouds },
			{ "ReloadPointCloudsOnMappings", &ASliceAndDiceManager::execReloadPointCloudsOnMappings },
			{ "RemoveMapping", &ASliceAndDiceManager::execRemoveMapping },
			{ "RunReport", &ASliceAndDiceManager::execRunReport },
			{ "RunReportOnMappings", &ASliceAndDiceManager::execRunReportOnMappings },
			{ "RunRules", &ASliceAndDiceManager::execRunRules },
			{ "RunRulesOnMappings", &ASliceAndDiceManager::execRunRulesOnMappings },
			{ "SetLogging", &ASliceAndDiceManager::execSetLogging },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASliceAndDiceManager_AddNewMapping_Statics
	{
		struct SliceAndDiceManager_eventAddNewMapping_Parms
		{
			USliceAndDiceMapping* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_AddNewMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventAddNewMapping_Parms, ReturnValue), Z_Construct_UClass_USliceAndDiceMapping_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASliceAndDiceManager_AddNewMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_AddNewMapping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASliceAndDiceManager_AddNewMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "SliceAndDice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Method to add a new empty mapping */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method to add a new empty mapping" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASliceAndDiceManager_AddNewMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASliceAndDiceManager, nullptr, "AddNewMapping", nullptr, nullptr, Z_Construct_UFunction_ASliceAndDiceManager_AddNewMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_AddNewMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASliceAndDiceManager_AddNewMapping_Statics::SliceAndDiceManager_eventAddNewMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_AddNewMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASliceAndDiceManager_AddNewMapping_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_AddNewMapping_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASliceAndDiceManager_AddNewMapping_Statics::SliceAndDiceManager_eventAddNewMapping_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASliceAndDiceManager_AddNewMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASliceAndDiceManager_AddNewMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASliceAndDiceManager_CreateSliceAndDiceManager_Statics
	{
		struct SliceAndDiceManager_eventCreateSliceAndDiceManager_Parms
		{
			UWorld* InWorld;
			ASliceAndDiceManager* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_CreateSliceAndDiceManager_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventCreateSliceAndDiceManager_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_CreateSliceAndDiceManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventCreateSliceAndDiceManager_Parms, ReturnValue), Z_Construct_UClass_ASliceAndDiceManager_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASliceAndDiceManager_CreateSliceAndDiceManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_CreateSliceAndDiceManager_Statics::NewProp_InWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_CreateSliceAndDiceManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASliceAndDiceManager_CreateSliceAndDiceManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "SliceAndDice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Static method to create this from the RuleProcessor widget */" },
#endif
		{ "CPP_Default_InWorld", "None" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static method to create this from the RuleProcessor widget" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASliceAndDiceManager_CreateSliceAndDiceManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASliceAndDiceManager, nullptr, "CreateSliceAndDiceManager", nullptr, nullptr, Z_Construct_UFunction_ASliceAndDiceManager_CreateSliceAndDiceManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_CreateSliceAndDiceManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASliceAndDiceManager_CreateSliceAndDiceManager_Statics::SliceAndDiceManager_eventCreateSliceAndDiceManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_CreateSliceAndDiceManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASliceAndDiceManager_CreateSliceAndDiceManager_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_CreateSliceAndDiceManager_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASliceAndDiceManager_CreateSliceAndDiceManager_Statics::SliceAndDiceManager_eventCreateSliceAndDiceManager_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASliceAndDiceManager_CreateSliceAndDiceManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASliceAndDiceManager_CreateSliceAndDiceManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASliceAndDiceManager_DeleteAllManagedActors_Statics
	{
		struct SliceAndDiceManager_eventDeleteAllManagedActors_Parms
		{
			bool bCleanDisabled;
			bool ReturnValue;
		};
		static void NewProp_bCleanDisabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCleanDisabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASliceAndDiceManager_DeleteAllManagedActors_Statics::NewProp_bCleanDisabled_SetBit(void* Obj)
	{
		((SliceAndDiceManager_eventDeleteAllManagedActors_Parms*)Obj)->bCleanDisabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_DeleteAllManagedActors_Statics::NewProp_bCleanDisabled = { "bCleanDisabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SliceAndDiceManager_eventDeleteAllManagedActors_Parms), &Z_Construct_UFunction_ASliceAndDiceManager_DeleteAllManagedActors_Statics::NewProp_bCleanDisabled_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ASliceAndDiceManager_DeleteAllManagedActors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SliceAndDiceManager_eventDeleteAllManagedActors_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_DeleteAllManagedActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SliceAndDiceManager_eventDeleteAllManagedActors_Parms), &Z_Construct_UFunction_ASliceAndDiceManager_DeleteAllManagedActors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASliceAndDiceManager_DeleteAllManagedActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_DeleteAllManagedActors_Statics::NewProp_bCleanDisabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_DeleteAllManagedActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASliceAndDiceManager_DeleteAllManagedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "SliceAndDice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Method to clear all actors from all mappings */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method to clear all actors from all mappings" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASliceAndDiceManager_DeleteAllManagedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASliceAndDiceManager, nullptr, "DeleteAllManagedActors", nullptr, nullptr, Z_Construct_UFunction_ASliceAndDiceManager_DeleteAllManagedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_DeleteAllManagedActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASliceAndDiceManager_DeleteAllManagedActors_Statics::SliceAndDiceManager_eventDeleteAllManagedActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_DeleteAllManagedActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASliceAndDiceManager_DeleteAllManagedActors_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_DeleteAllManagedActors_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASliceAndDiceManager_DeleteAllManagedActors_Statics::SliceAndDiceManager_eventDeleteAllManagedActors_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASliceAndDiceManager_DeleteAllManagedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASliceAndDiceManager_DeleteAllManagedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMapping_Statics
	{
		struct SliceAndDiceManager_eventDeleteManagedActorsFromMapping_Parms
		{
			USliceAndDiceMapping* InMapping;
			bool bCleanDisabled;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMapping;
		static void NewProp_bCleanDisabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCleanDisabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMapping_Statics::NewProp_InMapping = { "InMapping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventDeleteManagedActorsFromMapping_Parms, InMapping), Z_Construct_UClass_USliceAndDiceMapping_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMapping_Statics::NewProp_bCleanDisabled_SetBit(void* Obj)
	{
		((SliceAndDiceManager_eventDeleteManagedActorsFromMapping_Parms*)Obj)->bCleanDisabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMapping_Statics::NewProp_bCleanDisabled = { "bCleanDisabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SliceAndDiceManager_eventDeleteManagedActorsFromMapping_Parms), &Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMapping_Statics::NewProp_bCleanDisabled_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMapping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SliceAndDiceManager_eventDeleteManagedActorsFromMapping_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SliceAndDiceManager_eventDeleteManagedActorsFromMapping_Parms), &Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMapping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMapping_Statics::NewProp_InMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMapping_Statics::NewProp_bCleanDisabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMapping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "SliceAndDice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Method to clear all actors from one mappings */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method to clear all actors from one mappings" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASliceAndDiceManager, nullptr, "DeleteManagedActorsFromMapping", nullptr, nullptr, Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMapping_Statics::SliceAndDiceManager_eventDeleteManagedActorsFromMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMapping_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMapping_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMapping_Statics::SliceAndDiceManager_eventDeleteManagedActorsFromMapping_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings_Statics
	{
		struct SliceAndDiceManager_eventDeleteManagedActorsFromMappings_Parms
		{
			TArray<USliceAndDiceMapping*> InMappings;
			bool bCleanDisabled;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InMappings;
		static void NewProp_bCleanDisabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCleanDisabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings_Statics::NewProp_InMappings_Inner = { "InMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USliceAndDiceMapping_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings_Statics::NewProp_InMappings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings_Statics::NewProp_InMappings = { "InMappings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventDeleteManagedActorsFromMappings_Parms, InMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings_Statics::NewProp_InMappings_MetaData), Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings_Statics::NewProp_InMappings_MetaData) };
	void Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings_Statics::NewProp_bCleanDisabled_SetBit(void* Obj)
	{
		((SliceAndDiceManager_eventDeleteManagedActorsFromMappings_Parms*)Obj)->bCleanDisabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings_Statics::NewProp_bCleanDisabled = { "bCleanDisabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SliceAndDiceManager_eventDeleteManagedActorsFromMappings_Parms), &Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings_Statics::NewProp_bCleanDisabled_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SliceAndDiceManager_eventDeleteManagedActorsFromMappings_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SliceAndDiceManager_eventDeleteManagedActorsFromMappings_Parms), &Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings_Statics::NewProp_InMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings_Statics::NewProp_InMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings_Statics::NewProp_bCleanDisabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings_Statics::Function_MetaDataParams[] = {
		{ "Category", "SliceAndDice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Method to delete all actors from a list of mappings */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method to delete all actors from a list of mappings" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASliceAndDiceManager, nullptr, "DeleteManagedActorsFromMappings", nullptr, nullptr, Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings_Statics::SliceAndDiceManager_eventDeleteManagedActorsFromMappings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings_Statics::SliceAndDiceManager_eventDeleteManagedActorsFromMappings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASliceAndDiceManager_FindMapping_Statics
	{
		struct SliceAndDiceManager_eventFindMapping_Parms
		{
			UPointCloud* InPointCloud;
			UPointCloudSliceAndDiceRuleSet* InRuleSet;
			USliceAndDiceMapping* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPointCloud;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRuleSet;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_FindMapping_Statics::NewProp_InPointCloud = { "InPointCloud", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventFindMapping_Parms, InPointCloud), Z_Construct_UClass_UPointCloud_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_FindMapping_Statics::NewProp_InRuleSet = { "InRuleSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventFindMapping_Parms, InRuleSet), Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_FindMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventFindMapping_Parms, ReturnValue), Z_Construct_UClass_USliceAndDiceMapping_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASliceAndDiceManager_FindMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_FindMapping_Statics::NewProp_InPointCloud,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_FindMapping_Statics::NewProp_InRuleSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_FindMapping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASliceAndDiceManager_FindMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "SliceAndDice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Method to find an already existing mapping from its point cloud & ruleset */" },
#endif
		{ "CPP_Default_InPointCloud", "None" },
		{ "CPP_Default_InRuleSet", "None" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method to find an already existing mapping from its point cloud & ruleset" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASliceAndDiceManager_FindMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASliceAndDiceManager, nullptr, "FindMapping", nullptr, nullptr, Z_Construct_UFunction_ASliceAndDiceManager_FindMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_FindMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASliceAndDiceManager_FindMapping_Statics::SliceAndDiceManager_eventFindMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_FindMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASliceAndDiceManager_FindMapping_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_FindMapping_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASliceAndDiceManager_FindMapping_Statics::SliceAndDiceManager_eventFindMapping_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASliceAndDiceManager_FindMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASliceAndDiceManager_FindMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASliceAndDiceManager_FindOrAddMapping_Statics
	{
		struct SliceAndDiceManager_eventFindOrAddMapping_Parms
		{
			UPointCloud* InPointCloud;
			UPointCloudSliceAndDiceRuleSet* InRuleSet;
			USliceAndDiceMapping* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPointCloud;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRuleSet;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_FindOrAddMapping_Statics::NewProp_InPointCloud = { "InPointCloud", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventFindOrAddMapping_Parms, InPointCloud), Z_Construct_UClass_UPointCloud_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_FindOrAddMapping_Statics::NewProp_InRuleSet = { "InRuleSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventFindOrAddMapping_Parms, InRuleSet), Z_Construct_UClass_UPointCloudSliceAndDiceRuleSet_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_FindOrAddMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventFindOrAddMapping_Parms, ReturnValue), Z_Construct_UClass_USliceAndDiceMapping_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASliceAndDiceManager_FindOrAddMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_FindOrAddMapping_Statics::NewProp_InPointCloud,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_FindOrAddMapping_Statics::NewProp_InRuleSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_FindOrAddMapping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASliceAndDiceManager_FindOrAddMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "SliceAndDice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Method to find or add a new point-cloud to rule-set mapping */" },
#endif
		{ "CPP_Default_InPointCloud", "None" },
		{ "CPP_Default_InRuleSet", "None" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method to find or add a new point-cloud to rule-set mapping" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASliceAndDiceManager_FindOrAddMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASliceAndDiceManager, nullptr, "FindOrAddMapping", nullptr, nullptr, Z_Construct_UFunction_ASliceAndDiceManager_FindOrAddMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_FindOrAddMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASliceAndDiceManager_FindOrAddMapping_Statics::SliceAndDiceManager_eventFindOrAddMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_FindOrAddMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASliceAndDiceManager_FindOrAddMapping_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_FindOrAddMapping_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASliceAndDiceManager_FindOrAddMapping_Statics::SliceAndDiceManager_eventFindOrAddMapping_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASliceAndDiceManager_FindOrAddMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASliceAndDiceManager_FindOrAddMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagers_Statics
	{
		struct SliceAndDiceManager_eventGetSliceAndDiceManagers_Parms
		{
			UWorld* InWorld;
			TArray<ASliceAndDiceManager*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagers_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventGetSliceAndDiceManagers_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASliceAndDiceManager_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventGetSliceAndDiceManagers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagers_Statics::NewProp_InWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagers_Statics::Function_MetaDataParams[] = {
		{ "Category", "SliceAndDice" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASliceAndDiceManager, nullptr, "GetSliceAndDiceManagers", nullptr, nullptr, Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagers_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagers_Statics::SliceAndDiceManager_eventGetSliceAndDiceManagers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagers_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagers_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagers_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagers_Statics::SliceAndDiceManager_eventGetSliceAndDiceManagers_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagersInLevel_Statics
	{
		struct SliceAndDiceManager_eventGetSliceAndDiceManagersInLevel_Parms
		{
			ULevel* InLevel;
			TArray<ASliceAndDiceManager*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InLevel;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagersInLevel_Statics::NewProp_InLevel = { "InLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventGetSliceAndDiceManagersInLevel_Parms, InLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagersInLevel_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASliceAndDiceManager_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagersInLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventGetSliceAndDiceManagersInLevel_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagersInLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagersInLevel_Statics::NewProp_InLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagersInLevel_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagersInLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagersInLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SliceAndDice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Static method to find all Slice & Dice managers */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static method to find all Slice & Dice managers" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagersInLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASliceAndDiceManager, nullptr, "GetSliceAndDiceManagersInLevel", nullptr, nullptr, Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagersInLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagersInLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagersInLevel_Statics::SliceAndDiceManager_eventGetSliceAndDiceManagersInLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagersInLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagersInLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagersInLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagersInLevel_Statics::SliceAndDiceManager_eventGetSliceAndDiceManagersInLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagersInLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagersInLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASliceAndDiceManager_MoveMapping_Statics
	{
		struct SliceAndDiceManager_eventMoveMapping_Parms
		{
			USliceAndDiceMapping* InMapping;
			ASliceAndDiceManager* InTargetManager;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMapping;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTargetManager;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_MoveMapping_Statics::NewProp_InMapping = { "InMapping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventMoveMapping_Parms, InMapping), Z_Construct_UClass_USliceAndDiceMapping_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_MoveMapping_Statics::NewProp_InTargetManager = { "InTargetManager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventMoveMapping_Parms, InTargetManager), Z_Construct_UClass_ASliceAndDiceManager_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ASliceAndDiceManager_MoveMapping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SliceAndDiceManager_eventMoveMapping_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_MoveMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SliceAndDiceManager_eventMoveMapping_Parms), &Z_Construct_UFunction_ASliceAndDiceManager_MoveMapping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASliceAndDiceManager_MoveMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_MoveMapping_Statics::NewProp_InMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_MoveMapping_Statics::NewProp_InTargetManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_MoveMapping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASliceAndDiceManager_MoveMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "SliceAndDice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Moves a mapping from this manager to another manager\n\x09* @param InMapping Mapping to move\n\x09* @param InTargetManager Manager to move the mapping to\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Moves a mapping from this manager to another manager\n@param InMapping Mapping to move\n@param InTargetManager Manager to move the mapping to" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASliceAndDiceManager_MoveMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASliceAndDiceManager, nullptr, "MoveMapping", nullptr, nullptr, Z_Construct_UFunction_ASliceAndDiceManager_MoveMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_MoveMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASliceAndDiceManager_MoveMapping_Statics::SliceAndDiceManager_eventMoveMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_MoveMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASliceAndDiceManager_MoveMapping_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_MoveMapping_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASliceAndDiceManager_MoveMapping_Statics::SliceAndDiceManager_eventMoveMapping_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASliceAndDiceManager_MoveMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASliceAndDiceManager_MoveMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASliceAndDiceManager_MoveMappings_Statics
	{
		struct SliceAndDiceManager_eventMoveMappings_Parms
		{
			TArray<USliceAndDiceMapping*> InMapping;
			ASliceAndDiceManager* InTargetManager;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMapping_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMapping_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InMapping;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTargetManager;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_MoveMappings_Statics::NewProp_InMapping_Inner = { "InMapping", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USliceAndDiceMapping_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASliceAndDiceManager_MoveMappings_Statics::NewProp_InMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_MoveMappings_Statics::NewProp_InMapping = { "InMapping", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventMoveMappings_Parms, InMapping), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_MoveMappings_Statics::NewProp_InMapping_MetaData), Z_Construct_UFunction_ASliceAndDiceManager_MoveMappings_Statics::NewProp_InMapping_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_MoveMappings_Statics::NewProp_InTargetManager = { "InTargetManager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventMoveMappings_Parms, InTargetManager), Z_Construct_UClass_ASliceAndDiceManager_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ASliceAndDiceManager_MoveMappings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SliceAndDiceManager_eventMoveMappings_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_MoveMappings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SliceAndDiceManager_eventMoveMappings_Parms), &Z_Construct_UFunction_ASliceAndDiceManager_MoveMappings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASliceAndDiceManager_MoveMappings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_MoveMappings_Statics::NewProp_InMapping_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_MoveMappings_Statics::NewProp_InMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_MoveMappings_Statics::NewProp_InTargetManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_MoveMappings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASliceAndDiceManager_MoveMappings_Statics::Function_MetaDataParams[] = {
		{ "Category", "SliceAndDice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Moves mappings from this manager to another manager\n\x09* @param InMappings Mappings to move\n\x09* @param InTargetManager Manager to move the mapping to\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Moves mappings from this manager to another manager\n@param InMappings Mappings to move\n@param InTargetManager Manager to move the mapping to" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASliceAndDiceManager_MoveMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASliceAndDiceManager, nullptr, "MoveMappings", nullptr, nullptr, Z_Construct_UFunction_ASliceAndDiceManager_MoveMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_MoveMappings_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASliceAndDiceManager_MoveMappings_Statics::SliceAndDiceManager_eventMoveMappings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_MoveMappings_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASliceAndDiceManager_MoveMappings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_MoveMappings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASliceAndDiceManager_MoveMappings_Statics::SliceAndDiceManager_eventMoveMappings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASliceAndDiceManager_MoveMappings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASliceAndDiceManager_MoveMappings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASliceAndDiceManager_NumMappings_Statics
	{
		struct SliceAndDiceManager_eventNumMappings_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_NumMappings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventNumMappings_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASliceAndDiceManager_NumMappings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_NumMappings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASliceAndDiceManager_NumMappings_Statics::Function_MetaDataParams[] = {
		{ "Category", "SliceAndDice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Return the number of mappings on this manager */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the number of mappings on this manager" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASliceAndDiceManager_NumMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASliceAndDiceManager, nullptr, "NumMappings", nullptr, nullptr, Z_Construct_UFunction_ASliceAndDiceManager_NumMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_NumMappings_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASliceAndDiceManager_NumMappings_Statics::SliceAndDiceManager_eventNumMappings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_NumMappings_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASliceAndDiceManager_NumMappings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_NumMappings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASliceAndDiceManager_NumMappings_Statics::SliceAndDiceManager_eventNumMappings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASliceAndDiceManager_NumMappings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASliceAndDiceManager_NumMappings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASliceAndDiceManager_ReloadAllPointClouds_Statics
	{
		struct SliceAndDiceManager_eventReloadAllPointClouds_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASliceAndDiceManager_ReloadAllPointClouds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SliceAndDiceManager_eventReloadAllPointClouds_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_ReloadAllPointClouds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SliceAndDiceManager_eventReloadAllPointClouds_Parms), &Z_Construct_UFunction_ASliceAndDiceManager_ReloadAllPointClouds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASliceAndDiceManager_ReloadAllPointClouds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_ReloadAllPointClouds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASliceAndDiceManager_ReloadAllPointClouds_Statics::Function_MetaDataParams[] = {
		{ "Category", "SliceAndDice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Reload the point clouds associated with the mappings. Reload will be called once on each PointCloud that appears in the set of mappings\n\x09*\n\x09* @return True if the PointClouds reloaded succesfully, false otherwise\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reload the point clouds associated with the mappings. Reload will be called once on each PointCloud that appears in the set of mappings\n\n@return True if the PointClouds reloaded succesfully, false otherwise" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASliceAndDiceManager_ReloadAllPointClouds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASliceAndDiceManager, nullptr, "ReloadAllPointClouds", nullptr, nullptr, Z_Construct_UFunction_ASliceAndDiceManager_ReloadAllPointClouds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_ReloadAllPointClouds_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASliceAndDiceManager_ReloadAllPointClouds_Statics::SliceAndDiceManager_eventReloadAllPointClouds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_ReloadAllPointClouds_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASliceAndDiceManager_ReloadAllPointClouds_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_ReloadAllPointClouds_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASliceAndDiceManager_ReloadAllPointClouds_Statics::SliceAndDiceManager_eventReloadAllPointClouds_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASliceAndDiceManager_ReloadAllPointClouds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASliceAndDiceManager_ReloadAllPointClouds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASliceAndDiceManager_ReloadPointCloudsOnMappings_Statics
	{
		struct SliceAndDiceManager_eventReloadPointCloudsOnMappings_Parms
		{
			TArray<USliceAndDiceMapping*> SelectedMappings;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedMappings;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_ReloadPointCloudsOnMappings_Statics::NewProp_SelectedMappings_Inner = { "SelectedMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USliceAndDiceMapping_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASliceAndDiceManager_ReloadPointCloudsOnMappings_Statics::NewProp_SelectedMappings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_ReloadPointCloudsOnMappings_Statics::NewProp_SelectedMappings = { "SelectedMappings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventReloadPointCloudsOnMappings_Parms, SelectedMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_ReloadPointCloudsOnMappings_Statics::NewProp_SelectedMappings_MetaData), Z_Construct_UFunction_ASliceAndDiceManager_ReloadPointCloudsOnMappings_Statics::NewProp_SelectedMappings_MetaData) };
	void Z_Construct_UFunction_ASliceAndDiceManager_ReloadPointCloudsOnMappings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SliceAndDiceManager_eventReloadPointCloudsOnMappings_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_ReloadPointCloudsOnMappings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SliceAndDiceManager_eventReloadPointCloudsOnMappings_Parms), &Z_Construct_UFunction_ASliceAndDiceManager_ReloadPointCloudsOnMappings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASliceAndDiceManager_ReloadPointCloudsOnMappings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_ReloadPointCloudsOnMappings_Statics::NewProp_SelectedMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_ReloadPointCloudsOnMappings_Statics::NewProp_SelectedMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_ReloadPointCloudsOnMappings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASliceAndDiceManager_ReloadPointCloudsOnMappings_Statics::Function_MetaDataParams[] = {
		{ "Category", "SliceAndDice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Same as the ReloadAllPointClouds method but on specific mappings\n\x09* @param SelectedMappings The mappings on which to reload the point clouds\n\x09* @return True if the PointClouds reloaded succesfully, false otherwise\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Same as the ReloadAllPointClouds method but on specific mappings\n@param SelectedMappings The mappings on which to reload the point clouds\n@return True if the PointClouds reloaded succesfully, false otherwise" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASliceAndDiceManager_ReloadPointCloudsOnMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASliceAndDiceManager, nullptr, "ReloadPointCloudsOnMappings", nullptr, nullptr, Z_Construct_UFunction_ASliceAndDiceManager_ReloadPointCloudsOnMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_ReloadPointCloudsOnMappings_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASliceAndDiceManager_ReloadPointCloudsOnMappings_Statics::SliceAndDiceManager_eventReloadPointCloudsOnMappings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_ReloadPointCloudsOnMappings_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASliceAndDiceManager_ReloadPointCloudsOnMappings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_ReloadPointCloudsOnMappings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASliceAndDiceManager_ReloadPointCloudsOnMappings_Statics::SliceAndDiceManager_eventReloadPointCloudsOnMappings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASliceAndDiceManager_ReloadPointCloudsOnMappings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASliceAndDiceManager_ReloadPointCloudsOnMappings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASliceAndDiceManager_RemoveMapping_Statics
	{
		struct SliceAndDiceManager_eventRemoveMapping_Parms
		{
			USliceAndDiceMapping* InMapping;
			bool bDeleteManagedActors;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMapping;
		static void NewProp_bDeleteManagedActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteManagedActors;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_RemoveMapping_Statics::NewProp_InMapping = { "InMapping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventRemoveMapping_Parms, InMapping), Z_Construct_UClass_USliceAndDiceMapping_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ASliceAndDiceManager_RemoveMapping_Statics::NewProp_bDeleteManagedActors_SetBit(void* Obj)
	{
		((SliceAndDiceManager_eventRemoveMapping_Parms*)Obj)->bDeleteManagedActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_RemoveMapping_Statics::NewProp_bDeleteManagedActors = { "bDeleteManagedActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SliceAndDiceManager_eventRemoveMapping_Parms), &Z_Construct_UFunction_ASliceAndDiceManager_RemoveMapping_Statics::NewProp_bDeleteManagedActors_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ASliceAndDiceManager_RemoveMapping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SliceAndDiceManager_eventRemoveMapping_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_RemoveMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SliceAndDiceManager_eventRemoveMapping_Parms), &Z_Construct_UFunction_ASliceAndDiceManager_RemoveMapping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASliceAndDiceManager_RemoveMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_RemoveMapping_Statics::NewProp_InMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_RemoveMapping_Statics::NewProp_bDeleteManagedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_RemoveMapping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASliceAndDiceManager_RemoveMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "SliceAndDice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Method to remove mapping with appropriate warnings */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method to remove mapping with appropriate warnings" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASliceAndDiceManager_RemoveMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASliceAndDiceManager, nullptr, "RemoveMapping", nullptr, nullptr, Z_Construct_UFunction_ASliceAndDiceManager_RemoveMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_RemoveMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASliceAndDiceManager_RemoveMapping_Statics::SliceAndDiceManager_eventRemoveMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_RemoveMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASliceAndDiceManager_RemoveMapping_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_RemoveMapping_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASliceAndDiceManager_RemoveMapping_Statics::SliceAndDiceManager_eventRemoveMapping_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASliceAndDiceManager_RemoveMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASliceAndDiceManager_RemoveMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASliceAndDiceManager_RunReport_Statics
	{
		struct SliceAndDiceManager_eventRunReport_Parms
		{
			EPointCloudReportLevel Level;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Level_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Level;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASliceAndDiceManager_RunReport_Statics::NewProp_Level_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_RunReport_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventRunReport_Parms, Level), Z_Construct_UEnum_PointCloud_EPointCloudReportLevel, METADATA_PARAMS(0, nullptr) }; // 3618392436
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_RunReport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventRunReport_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASliceAndDiceManager_RunReport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_RunReport_Statics::NewProp_Level_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_RunReport_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_RunReport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASliceAndDiceManager_RunReport_Statics::Function_MetaDataParams[] = {
		{ "Category", "SliceAndDice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Dry run the execution of the rules over the set of point clouds producing a human readable report on what each rule will do when executed\n\x09* The purpose of this method is to enable users to debug problems or to sanity check execution without having to bear the cost of a full execution run\n\x09*\n\x09* @return An array of strings containing a human readable report on what this rule set will do when executed\n\x09*/" },
#endif
		{ "CPP_Default_Level", "Basic" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dry run the execution of the rules over the set of point clouds producing a human readable report on what each rule will do when executed\nThe purpose of this method is to enable users to debug problems or to sanity check execution without having to bear the cost of a full execution run\n\n@return An array of strings containing a human readable report on what this rule set will do when executed" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASliceAndDiceManager_RunReport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASliceAndDiceManager, nullptr, "RunReport", nullptr, nullptr, Z_Construct_UFunction_ASliceAndDiceManager_RunReport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_RunReport_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASliceAndDiceManager_RunReport_Statics::SliceAndDiceManager_eventRunReport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_RunReport_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASliceAndDiceManager_RunReport_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_RunReport_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASliceAndDiceManager_RunReport_Statics::SliceAndDiceManager_eventRunReport_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASliceAndDiceManager_RunReport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASliceAndDiceManager_RunReport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASliceAndDiceManager_RunReportOnMappings_Statics
	{
		struct SliceAndDiceManager_eventRunReportOnMappings_Parms
		{
			TArray<USliceAndDiceMapping*> SelectedMappings;
			EPointCloudReportLevel Level;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedMappings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Level_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Level;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_RunReportOnMappings_Statics::NewProp_SelectedMappings_Inner = { "SelectedMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USliceAndDiceMapping_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASliceAndDiceManager_RunReportOnMappings_Statics::NewProp_SelectedMappings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_RunReportOnMappings_Statics::NewProp_SelectedMappings = { "SelectedMappings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventRunReportOnMappings_Parms, SelectedMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_RunReportOnMappings_Statics::NewProp_SelectedMappings_MetaData), Z_Construct_UFunction_ASliceAndDiceManager_RunReportOnMappings_Statics::NewProp_SelectedMappings_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASliceAndDiceManager_RunReportOnMappings_Statics::NewProp_Level_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_RunReportOnMappings_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventRunReportOnMappings_Parms, Level), Z_Construct_UEnum_PointCloud_EPointCloudReportLevel, METADATA_PARAMS(0, nullptr) }; // 3618392436
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_RunReportOnMappings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventRunReportOnMappings_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASliceAndDiceManager_RunReportOnMappings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_RunReportOnMappings_Statics::NewProp_SelectedMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_RunReportOnMappings_Statics::NewProp_SelectedMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_RunReportOnMappings_Statics::NewProp_Level_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_RunReportOnMappings_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_RunReportOnMappings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASliceAndDiceManager_RunReportOnMappings_Statics::Function_MetaDataParams[] = {
		{ "Category", "SliceAndDice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Same as the RunReport method, except this one runs on a specific list of mappings\n\x09* @param SelectedMappings The mappings on which to run the report\n\x09*\n\x09* @return An array of strings containing a human readable report on what this rule set will do when executed\n\x09*/" },
#endif
		{ "CPP_Default_Level", "Basic" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Same as the RunReport method, except this one runs on a specific list of mappings\n@param SelectedMappings The mappings on which to run the report\n\n@return An array of strings containing a human readable report on what this rule set will do when executed" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASliceAndDiceManager_RunReportOnMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASliceAndDiceManager, nullptr, "RunReportOnMappings", nullptr, nullptr, Z_Construct_UFunction_ASliceAndDiceManager_RunReportOnMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_RunReportOnMappings_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASliceAndDiceManager_RunReportOnMappings_Statics::SliceAndDiceManager_eventRunReportOnMappings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_RunReportOnMappings_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASliceAndDiceManager_RunReportOnMappings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_RunReportOnMappings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASliceAndDiceManager_RunReportOnMappings_Statics::SliceAndDiceManager_eventRunReportOnMappings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASliceAndDiceManager_RunReportOnMappings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASliceAndDiceManager_RunReportOnMappings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASliceAndDiceManager_RunRules_Statics
	{
		struct SliceAndDiceManager_eventRunRules_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASliceAndDiceManager_RunRules_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SliceAndDiceManager_eventRunRules_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_RunRules_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SliceAndDiceManager_eventRunRules_Parms), &Z_Construct_UFunction_ASliceAndDiceManager_RunRules_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASliceAndDiceManager_RunRules_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_RunRules_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASliceAndDiceManager_RunRules_Statics::Function_MetaDataParams[] = {
		{ "Category", "SliceAndDice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Execute the Rule Sets over their associated Point Cloud.\n\x09*\n\x09* @return True if the rules executed succesfully, false otherwise\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute the Rule Sets over their associated Point Cloud.\n\n@return True if the rules executed succesfully, false otherwise" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASliceAndDiceManager_RunRules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASliceAndDiceManager, nullptr, "RunRules", nullptr, nullptr, Z_Construct_UFunction_ASliceAndDiceManager_RunRules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_RunRules_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASliceAndDiceManager_RunRules_Statics::SliceAndDiceManager_eventRunRules_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_RunRules_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASliceAndDiceManager_RunRules_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_RunRules_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASliceAndDiceManager_RunRules_Statics::SliceAndDiceManager_eventRunRules_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASliceAndDiceManager_RunRules()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASliceAndDiceManager_RunRules_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASliceAndDiceManager_RunRulesOnMappings_Statics
	{
		struct SliceAndDiceManager_eventRunRulesOnMappings_Parms
		{
			TArray<USliceAndDiceMapping*> SelectedMappings;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedMappings;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_RunRulesOnMappings_Statics::NewProp_SelectedMappings_Inner = { "SelectedMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USliceAndDiceMapping_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASliceAndDiceManager_RunRulesOnMappings_Statics::NewProp_SelectedMappings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_RunRulesOnMappings_Statics::NewProp_SelectedMappings = { "SelectedMappings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventRunRulesOnMappings_Parms, SelectedMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_RunRulesOnMappings_Statics::NewProp_SelectedMappings_MetaData), Z_Construct_UFunction_ASliceAndDiceManager_RunRulesOnMappings_Statics::NewProp_SelectedMappings_MetaData) };
	void Z_Construct_UFunction_ASliceAndDiceManager_RunRulesOnMappings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SliceAndDiceManager_eventRunRulesOnMappings_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_RunRulesOnMappings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SliceAndDiceManager_eventRunRulesOnMappings_Parms), &Z_Construct_UFunction_ASliceAndDiceManager_RunRulesOnMappings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASliceAndDiceManager_RunRulesOnMappings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_RunRulesOnMappings_Statics::NewProp_SelectedMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_RunRulesOnMappings_Statics::NewProp_SelectedMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_RunRulesOnMappings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASliceAndDiceManager_RunRulesOnMappings_Statics::Function_MetaDataParams[] = {
		{ "Category", "SliceAndDice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Same as the RunRules method but on specific mappings\n\x09* @param SelectedMappings The mappings on which to run the rules\n\x09* @return True if the rules executed succesfully, false otherwise\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Same as the RunRules method but on specific mappings\n@param SelectedMappings The mappings on which to run the rules\n@return True if the rules executed succesfully, false otherwise" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASliceAndDiceManager_RunRulesOnMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASliceAndDiceManager, nullptr, "RunRulesOnMappings", nullptr, nullptr, Z_Construct_UFunction_ASliceAndDiceManager_RunRulesOnMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_RunRulesOnMappings_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASliceAndDiceManager_RunRulesOnMappings_Statics::SliceAndDiceManager_eventRunRulesOnMappings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_RunRulesOnMappings_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASliceAndDiceManager_RunRulesOnMappings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_RunRulesOnMappings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASliceAndDiceManager_RunRulesOnMappings_Statics::SliceAndDiceManager_eventRunRulesOnMappings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASliceAndDiceManager_RunRulesOnMappings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASliceAndDiceManager_RunRulesOnMappings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASliceAndDiceManager_SetLogging_Statics
	{
		struct SliceAndDiceManager_eventSetLogging_Parms
		{
			bool bInLoggingEnabled;
			FString InLogPath;
		};
		static void NewProp_bInLoggingEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInLoggingEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLogPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InLogPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASliceAndDiceManager_SetLogging_Statics::NewProp_bInLoggingEnabled_SetBit(void* Obj)
	{
		((SliceAndDiceManager_eventSetLogging_Parms*)Obj)->bInLoggingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_SetLogging_Statics::NewProp_bInLoggingEnabled = { "bInLoggingEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SliceAndDiceManager_eventSetLogging_Parms), &Z_Construct_UFunction_ASliceAndDiceManager_SetLogging_Statics::NewProp_bInLoggingEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASliceAndDiceManager_SetLogging_Statics::NewProp_InLogPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASliceAndDiceManager_SetLogging_Statics::NewProp_InLogPath = { "InLogPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SliceAndDiceManager_eventSetLogging_Parms, InLogPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_SetLogging_Statics::NewProp_InLogPath_MetaData), Z_Construct_UFunction_ASliceAndDiceManager_SetLogging_Statics::NewProp_InLogPath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASliceAndDiceManager_SetLogging_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_SetLogging_Statics::NewProp_bInLoggingEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASliceAndDiceManager_SetLogging_Statics::NewProp_InLogPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASliceAndDiceManager_SetLogging_Statics::Function_MetaDataParams[] = {
		{ "Category", "SliceAndDice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets logging settings, which will be applied when running reports or rules\n\x09* @param bInLoggingEnabled True to enable logging\n\x09* @param InLogPath The path in which to write log files, if any\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets logging settings, which will be applied when running reports or rules\n@param bInLoggingEnabled True to enable logging\n@param InLogPath The path in which to write log files, if any" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASliceAndDiceManager_SetLogging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASliceAndDiceManager, nullptr, "SetLogging", nullptr, nullptr, Z_Construct_UFunction_ASliceAndDiceManager_SetLogging_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_SetLogging_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASliceAndDiceManager_SetLogging_Statics::SliceAndDiceManager_eventSetLogging_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_SetLogging_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASliceAndDiceManager_SetLogging_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASliceAndDiceManager_SetLogging_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASliceAndDiceManager_SetLogging_Statics::SliceAndDiceManager_eventSetLogging_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASliceAndDiceManager_SetLogging()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASliceAndDiceManager_SetLogging_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASliceAndDiceManager);
	UClass* Z_Construct_UClass_ASliceAndDiceManager_NoRegister()
	{
		return ASliceAndDiceManager::StaticClass();
	}
	struct Z_Construct_UClass_ASliceAndDiceManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Mappings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASliceAndDiceManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloud,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASliceAndDiceManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASliceAndDiceManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASliceAndDiceManager_AddNewMapping, "AddNewMapping" }, // 1996167655
		{ &Z_Construct_UFunction_ASliceAndDiceManager_CreateSliceAndDiceManager, "CreateSliceAndDiceManager" }, // 1461329798
		{ &Z_Construct_UFunction_ASliceAndDiceManager_DeleteAllManagedActors, "DeleteAllManagedActors" }, // 3262111960
		{ &Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMapping, "DeleteManagedActorsFromMapping" }, // 3227793904
		{ &Z_Construct_UFunction_ASliceAndDiceManager_DeleteManagedActorsFromMappings, "DeleteManagedActorsFromMappings" }, // 419081567
		{ &Z_Construct_UFunction_ASliceAndDiceManager_FindMapping, "FindMapping" }, // 976079927
		{ &Z_Construct_UFunction_ASliceAndDiceManager_FindOrAddMapping, "FindOrAddMapping" }, // 1190458934
		{ &Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagers, "GetSliceAndDiceManagers" }, // 3206262103
		{ &Z_Construct_UFunction_ASliceAndDiceManager_GetSliceAndDiceManagersInLevel, "GetSliceAndDiceManagersInLevel" }, // 235073066
		{ &Z_Construct_UFunction_ASliceAndDiceManager_MoveMapping, "MoveMapping" }, // 3326783327
		{ &Z_Construct_UFunction_ASliceAndDiceManager_MoveMappings, "MoveMappings" }, // 23365782
		{ &Z_Construct_UFunction_ASliceAndDiceManager_NumMappings, "NumMappings" }, // 1826090567
		{ &Z_Construct_UFunction_ASliceAndDiceManager_ReloadAllPointClouds, "ReloadAllPointClouds" }, // 2878645239
		{ &Z_Construct_UFunction_ASliceAndDiceManager_ReloadPointCloudsOnMappings, "ReloadPointCloudsOnMappings" }, // 861426139
		{ &Z_Construct_UFunction_ASliceAndDiceManager_RemoveMapping, "RemoveMapping" }, // 3127456472
		{ &Z_Construct_UFunction_ASliceAndDiceManager_RunReport, "RunReport" }, // 604241914
		{ &Z_Construct_UFunction_ASliceAndDiceManager_RunReportOnMappings, "RunReportOnMappings" }, // 3235466241
		{ &Z_Construct_UFunction_ASliceAndDiceManager_RunRules, "RunRules" }, // 3361998742
		{ &Z_Construct_UFunction_ASliceAndDiceManager_RunRulesOnMappings, "RunRulesOnMappings" }, // 4063180734
		{ &Z_Construct_UFunction_ASliceAndDiceManager_SetLogging, "SetLogging" }, // 3904280558
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASliceAndDiceManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASliceAndDiceManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Manager object that will contain ruleset + point cloud association,\n* Various default settings and book-keeping for efficient RuleProcessor-created actor removal.\n*/" },
#endif
		{ "IncludePath", "PointCloudSliceAndDiceManager.h" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manager object that will contain ruleset + point cloud association,\nVarious default settings and book-keeping for efficient RuleProcessor-created actor removal." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASliceAndDiceManager_Statics::NewProp_Mappings_Inner = { "Mappings", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USliceAndDiceMapping_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASliceAndDiceManager_Statics::NewProp_Mappings_MetaData[] = {
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASliceAndDiceManager_Statics::NewProp_Mappings = { "Mappings", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASliceAndDiceManager, Mappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASliceAndDiceManager_Statics::NewProp_Mappings_MetaData), Z_Construct_UClass_ASliceAndDiceManager_Statics::NewProp_Mappings_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASliceAndDiceManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASliceAndDiceManager_Statics::NewProp_Mappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASliceAndDiceManager_Statics::NewProp_Mappings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASliceAndDiceManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASliceAndDiceManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASliceAndDiceManager_Statics::ClassParams = {
		&ASliceAndDiceManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASliceAndDiceManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASliceAndDiceManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASliceAndDiceManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ASliceAndDiceManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASliceAndDiceManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASliceAndDiceManager()
	{
		if (!Z_Registration_Info_UClass_ASliceAndDiceManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASliceAndDiceManager.OuterSingleton, Z_Construct_UClass_ASliceAndDiceManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASliceAndDiceManager.OuterSingleton;
	}
	template<> POINTCLOUD_API UClass* StaticClass<ASliceAndDiceManager>()
	{
		return ASliceAndDiceManager::StaticClass();
	}
	ASliceAndDiceManager::ASliceAndDiceManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASliceAndDiceManager);
	ASliceAndDiceManager::~ASliceAndDiceManager() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_Statics::ScriptStructInfo[] = {
		{ FSliceAndDiceManagedActorsHashInfo::StaticStruct, Z_Construct_UScriptStruct_FSliceAndDiceManagedActorsHashInfo_Statics::NewStructOps, TEXT("SliceAndDiceManagedActorsHashInfo"), &Z_Registration_Info_UScriptStruct_SliceAndDiceManagedActorsHashInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSliceAndDiceManagedActorsHashInfo), 2421629819U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USliceAndDiceManagedActors, USliceAndDiceManagedActors::StaticClass, TEXT("USliceAndDiceManagedActors"), &Z_Registration_Info_UClass_USliceAndDiceManagedActors, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USliceAndDiceManagedActors), 4046193885U) },
		{ Z_Construct_UClass_USliceAndDiceMapping, USliceAndDiceMapping::StaticClass, TEXT("USliceAndDiceMapping"), &Z_Registration_Info_UClass_USliceAndDiceMapping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USliceAndDiceMapping), 2674683306U) },
		{ Z_Construct_UClass_ASliceAndDiceManager, ASliceAndDiceManager::StaticClass, TEXT("ASliceAndDiceManager"), &Z_Registration_Info_UClass_ASliceAndDiceManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASliceAndDiceManager), 439914408U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_389394546(TEXT("/Script/PointCloud"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
