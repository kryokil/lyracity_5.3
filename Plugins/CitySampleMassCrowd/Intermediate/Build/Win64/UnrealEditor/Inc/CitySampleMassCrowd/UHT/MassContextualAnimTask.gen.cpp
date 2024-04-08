// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleMassCrowd/Private/Tasks/MassContextualAnimTask.h"
#include "MassEntityTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassContextualAnimTask() {}
// Cross Module References
	CITYSAMPLEMASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FMassContextualAnimTask();
	CITYSAMPLEMASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeTaskBase();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntityHandle();
	UPackage* Z_Construct_UPackage__Script_CitySampleMassCrowd();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassContextualAnimTaskInstanceData;
class UScriptStruct* FMassContextualAnimTaskInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassContextualAnimTaskInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassContextualAnimTaskInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData, (UObject*)Z_Construct_UPackage__Script_CitySampleMassCrowd(), TEXT("MassContextualAnimTaskInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_MassContextualAnimTaskInstanceData.OuterSingleton;
}
template<> CITYSAMPLEMASSCROWD_API UScriptStruct* StaticStruct<FMassContextualAnimTaskInstanceData>()
{
	return FMassContextualAnimTaskInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetEntity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetEntity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComputedDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ComputedDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tasks/MassContextualAnimTask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassContextualAnimTaskInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewProp_TargetEntity_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/Tasks/MassContextualAnimTask.h" },
		{ "Optional", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewProp_TargetEntity = { "TargetEntity", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassContextualAnimTaskInstanceData, TargetEntity), Z_Construct_UScriptStruct_FMassEntityHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewProp_TargetEntity_MetaData), Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewProp_TargetEntity_MetaData) }; // 966791987
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/Tasks/MassContextualAnimTask.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassContextualAnimTaskInstanceData, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewProp_Duration_MetaData), Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewProp_Duration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewProp_ComputedDuration_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tasks/MassContextualAnimTask.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewProp_ComputedDuration = { "ComputedDuration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassContextualAnimTaskInstanceData, ComputedDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewProp_ComputedDuration_MetaData), Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewProp_ComputedDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewProp_Time_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Accumulated time used to stop task if a montage is set */" },
#endif
		{ "ModuleRelativePath", "Private/Tasks/MassContextualAnimTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Accumulated time used to stop task if a montage is set" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassContextualAnimTaskInstanceData, Time), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewProp_Time_MetaData), Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewProp_Time_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewProp_TargetEntity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewProp_ComputedDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySampleMassCrowd,
		nullptr,
		&NewStructOps,
		"MassContextualAnimTaskInstanceData",
		Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::PropPointers),
		sizeof(FMassContextualAnimTaskInstanceData),
		alignof(FMassContextualAnimTaskInstanceData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_MassContextualAnimTaskInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassContextualAnimTaskInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassContextualAnimTaskInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassContextualAnimTask>() == std::is_polymorphic<FMassStateTreeTaskBase>(), "USTRUCT FMassContextualAnimTask cannot be polymorphic unless super FMassStateTreeTaskBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassContextualAnimTask;
class UScriptStruct* FMassContextualAnimTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassContextualAnimTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassContextualAnimTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassContextualAnimTask, (UObject*)Z_Construct_UPackage__Script_CitySampleMassCrowd(), TEXT("MassContextualAnimTask"));
	}
	return Z_Registration_Info_UScriptStruct_MassContextualAnimTask.OuterSingleton;
}
template<> CITYSAMPLEMASSCROWD_API UScriptStruct* StaticStruct<FMassContextualAnimTask>()
{
	return FMassContextualAnimTask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextualAnimAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextualAnimAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlignmentTrack_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AlignmentTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractorRole_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InteractorRole;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallbackMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FallbackMontage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Mass Contextual Anim Task" },
		{ "ModuleRelativePath", "Private/Tasks/MassContextualAnimTask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassContextualAnimTask>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewProp_ContextualAnimAsset_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/Tasks/MassContextualAnimTask.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewProp_ContextualAnimAsset = { "ContextualAnimAsset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassContextualAnimTask, ContextualAnimAsset), Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewProp_ContextualAnimAsset_MetaData), Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewProp_ContextualAnimAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewProp_AlignmentTrack_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/Tasks/MassContextualAnimTask.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewProp_AlignmentTrack = { "AlignmentTrack", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassContextualAnimTask, AlignmentTrack), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewProp_AlignmentTrack_MetaData), Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewProp_AlignmentTrack_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewProp_InteractorRole_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/Tasks/MassContextualAnimTask.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewProp_InteractorRole = { "InteractorRole", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassContextualAnimTask, InteractorRole), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewProp_InteractorRole_MetaData), Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewProp_InteractorRole_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewProp_FallbackMontage_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/Tasks/MassContextualAnimTask.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewProp_FallbackMontage = { "FallbackMontage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassContextualAnimTask, FallbackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewProp_FallbackMontage_MetaData), Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewProp_FallbackMontage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewProp_ContextualAnimAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewProp_AlignmentTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewProp_InteractorRole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewProp_FallbackMontage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySampleMassCrowd,
		Z_Construct_UScriptStruct_FMassStateTreeTaskBase,
		&NewStructOps,
		"MassContextualAnimTask",
		Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::PropPointers),
		sizeof(FMassContextualAnimTask),
		alignof(FMassContextualAnimTask),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMassContextualAnimTask()
	{
		if (!Z_Registration_Info_UScriptStruct_MassContextualAnimTask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassContextualAnimTask.InnerSingleton, Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassContextualAnimTask.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Private_Tasks_MassContextualAnimTask_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Private_Tasks_MassContextualAnimTask_h_Statics::ScriptStructInfo[] = {
		{ FMassContextualAnimTaskInstanceData::StaticStruct, Z_Construct_UScriptStruct_FMassContextualAnimTaskInstanceData_Statics::NewStructOps, TEXT("MassContextualAnimTaskInstanceData"), &Z_Registration_Info_UScriptStruct_MassContextualAnimTaskInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassContextualAnimTaskInstanceData), 4240081945U) },
		{ FMassContextualAnimTask::StaticStruct, Z_Construct_UScriptStruct_FMassContextualAnimTask_Statics::NewStructOps, TEXT("MassContextualAnimTask"), &Z_Registration_Info_UScriptStruct_MassContextualAnimTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassContextualAnimTask), 1085702545U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Private_Tasks_MassContextualAnimTask_h_3329889040(TEXT("/Script/CitySampleMassCrowd"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Private_Tasks_MassContextualAnimTask_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Private_Tasks_MassContextualAnimTask_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
