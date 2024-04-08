// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Crowd/CitySampleMassContextualAnimTask.h"
#include "MassEntityTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleMassContextualAnimTask() {}
// Cross Module References
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTask();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeTaskBase();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntityHandle();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySampleMassContextualAnimTaskInstanceData;
class UScriptStruct* FCitySampleMassContextualAnimTaskInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleMassContextualAnimTaskInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySampleMassContextualAnimTaskInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CitySampleMassContextualAnimTaskInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_CitySampleMassContextualAnimTaskInstanceData.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySampleMassContextualAnimTaskInstanceData>()
{
	return FCitySampleMassContextualAnimTaskInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Crowd/CitySampleMassContextualAnimTask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySampleMassContextualAnimTaskInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::NewProp_TargetEntity_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Crowd/CitySampleMassContextualAnimTask.h" },
		{ "Optional", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::NewProp_TargetEntity = { "TargetEntity", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleMassContextualAnimTaskInstanceData, TargetEntity), Z_Construct_UScriptStruct_FMassEntityHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::NewProp_TargetEntity_MetaData), Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::NewProp_TargetEntity_MetaData) }; // 966791987
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/Crowd/CitySampleMassContextualAnimTask.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleMassContextualAnimTaskInstanceData, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::NewProp_Duration_MetaData), Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::NewProp_Duration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::NewProp_ComputedDuration_MetaData[] = {
		{ "ModuleRelativePath", "Public/Crowd/CitySampleMassContextualAnimTask.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::NewProp_ComputedDuration = { "ComputedDuration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleMassContextualAnimTaskInstanceData, ComputedDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::NewProp_ComputedDuration_MetaData), Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::NewProp_ComputedDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::NewProp_Time_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Accumulated time used to stop task if a montage is set */" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CitySampleMassContextualAnimTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Accumulated time used to stop task if a montage is set" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleMassContextualAnimTaskInstanceData, Time), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::NewProp_Time_MetaData), Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::NewProp_Time_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::NewProp_TargetEntity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::NewProp_ComputedDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"CitySampleMassContextualAnimTaskInstanceData",
		Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::PropPointers),
		sizeof(FCitySampleMassContextualAnimTaskInstanceData),
		alignof(FCitySampleMassContextualAnimTaskInstanceData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_CitySampleMassContextualAnimTaskInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySampleMassContextualAnimTaskInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CitySampleMassContextualAnimTaskInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCitySampleMassContextualAnimTask>() == std::is_polymorphic<FMassStateTreeTaskBase>(), "USTRUCT FCitySampleMassContextualAnimTask cannot be polymorphic unless super FMassStateTreeTaskBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySampleMassContextualAnimTask;
class UScriptStruct* FCitySampleMassContextualAnimTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleMassContextualAnimTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySampleMassContextualAnimTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTask, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CitySampleMassContextualAnimTask"));
	}
	return Z_Registration_Info_UScriptStruct_CitySampleMassContextualAnimTask.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySampleMassContextualAnimTask>()
{
	return FCitySampleMassContextualAnimTask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextualAnimName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ContextualAnimName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTask_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This task is the same as MassContextualAnimTask but it picks the animation to play from \n\x09the character definition's ContextualAnimDataAsset.\n\x09To add an animation, add a name tag on CommonCrowdContextualAnimNames in project settings,\n\x09""and add an entry to that tag in your contextual anim data asset. */" },
#endif
		{ "DisplayName", "CitySample Mass Contextual Anim Task" },
		{ "ModuleRelativePath", "Public/Crowd/CitySampleMassContextualAnimTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This task is the same as MassContextualAnimTask but it picks the animation to play from\n      the character definition's ContextualAnimDataAsset.\n      To add an animation, add a name tag on CommonCrowdContextualAnimNames in project settings,\n      and add an entry to that tag in your contextual anim data asset." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySampleMassContextualAnimTask>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTask_Statics::NewProp_ContextualAnimName_MetaData[] = {
		{ "Category", "Anim" },
		{ "GetOptions", "CitySampleMassCrowd.MassCrowdAnimationSettings.GetContextualAnimOptions" },
		{ "ModuleRelativePath", "Public/Crowd/CitySampleMassContextualAnimTask.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTask_Statics::NewProp_ContextualAnimName = { "ContextualAnimName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleMassContextualAnimTask, ContextualAnimName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTask_Statics::NewProp_ContextualAnimName_MetaData), Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTask_Statics::NewProp_ContextualAnimName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTask_Statics::NewProp_ContextualAnimName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		Z_Construct_UScriptStruct_FMassStateTreeTaskBase,
		&NewStructOps,
		"CitySampleMassContextualAnimTask",
		Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTask_Statics::PropPointers),
		sizeof(FCitySampleMassContextualAnimTask),
		alignof(FCitySampleMassContextualAnimTask),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTask_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTask_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTask()
	{
		if (!Z_Registration_Info_UScriptStruct_CitySampleMassContextualAnimTask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySampleMassContextualAnimTask.InnerSingleton, Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CitySampleMassContextualAnimTask.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CitySampleMassContextualAnimTask_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CitySampleMassContextualAnimTask_h_Statics::ScriptStructInfo[] = {
		{ FCitySampleMassContextualAnimTaskInstanceData::StaticStruct, Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTaskInstanceData_Statics::NewStructOps, TEXT("CitySampleMassContextualAnimTaskInstanceData"), &Z_Registration_Info_UScriptStruct_CitySampleMassContextualAnimTaskInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySampleMassContextualAnimTaskInstanceData), 1506154801U) },
		{ FCitySampleMassContextualAnimTask::StaticStruct, Z_Construct_UScriptStruct_FCitySampleMassContextualAnimTask_Statics::NewStructOps, TEXT("CitySampleMassContextualAnimTask"), &Z_Registration_Info_UScriptStruct_CitySampleMassContextualAnimTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySampleMassContextualAnimTask), 3686486113U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CitySampleMassContextualAnimTask_h_2390249882(TEXT("/Script/CitySample"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CitySampleMassContextualAnimTask_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CitySampleMassContextualAnimTask_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
