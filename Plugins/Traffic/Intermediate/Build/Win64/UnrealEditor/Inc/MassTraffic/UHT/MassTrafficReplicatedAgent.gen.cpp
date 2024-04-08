// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficReplicatedAgent.h"
#include "MassReplicationTransformHandlers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficReplicatedAgent() {}
// Cross Module References
	MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassFastArrayItemBase();
	MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FReplicatedAgentBase();
	MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData();
	MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FReplicatedTrafficAgent();
	MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FTrafficFastArrayItem();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

static_assert(std::is_polymorphic<FReplicatedTrafficAgent>() == std::is_polymorphic<FReplicatedAgentBase>(), "USTRUCT FReplicatedTrafficAgent cannot be polymorphic unless super FReplicatedAgentBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReplicatedTrafficAgent;
class UScriptStruct* FReplicatedTrafficAgent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReplicatedTrafficAgent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReplicatedTrafficAgent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplicatedTrafficAgent, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("ReplicatedTrafficAgent"));
	}
	return Z_Registration_Info_UScriptStruct_ReplicatedTrafficAgent.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FReplicatedTrafficAgent>()
{
	return FReplicatedTrafficAgent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionYaw_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionYaw;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The data that is replicated for each agent */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficReplicatedAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The data that is replicated for each agent" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplicatedTrafficAgent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics::NewProp_PositionYaw_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficReplicatedAgent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics::NewProp_PositionYaw = { "PositionYaw", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReplicatedTrafficAgent, PositionYaw), Z_Construct_UScriptStruct_FReplicatedAgentPositionYawData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics::NewProp_PositionYaw_MetaData), Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics::NewProp_PositionYaw_MetaData) }; // 1548753052
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics::NewProp_PositionYaw,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
		Z_Construct_UScriptStruct_FReplicatedAgentBase,
		&NewStructOps,
		"ReplicatedTrafficAgent",
		Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics::PropPointers),
		sizeof(FReplicatedTrafficAgent),
		alignof(FReplicatedTrafficAgent),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FReplicatedTrafficAgent()
	{
		if (!Z_Registration_Info_UScriptStruct_ReplicatedTrafficAgent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReplicatedTrafficAgent.InnerSingleton, Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ReplicatedTrafficAgent.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTrafficFastArrayItem>() == std::is_polymorphic<FMassFastArrayItemBase>(), "USTRUCT FTrafficFastArrayItem cannot be polymorphic unless super FMassFastArrayItemBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TrafficFastArrayItem;
class UScriptStruct* FTrafficFastArrayItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TrafficFastArrayItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TrafficFastArrayItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrafficFastArrayItem, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("TrafficFastArrayItem"));
	}
	return Z_Registration_Info_UScriptStruct_TrafficFastArrayItem.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FTrafficFastArrayItem>()
{
	return FTrafficFastArrayItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Agent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Agent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fast array item for efficient agent replication. Remember to make this dirty if any FReplicatedTrafficAgent member variables are modified */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficReplicatedAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fast array item for efficient agent replication. Remember to make this dirty if any FReplicatedTrafficAgent member variables are modified" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrafficFastArrayItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics::NewProp_Agent_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficReplicatedAgent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics::NewProp_Agent = { "Agent", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrafficFastArrayItem, Agent), Z_Construct_UScriptStruct_FReplicatedTrafficAgent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics::NewProp_Agent_MetaData), Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics::NewProp_Agent_MetaData) }; // 1793240810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics::NewProp_Agent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
		Z_Construct_UScriptStruct_FMassFastArrayItemBase,
		&NewStructOps,
		"TrafficFastArrayItem",
		Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics::PropPointers),
		sizeof(FTrafficFastArrayItem),
		alignof(FTrafficFastArrayItem),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTrafficFastArrayItem()
	{
		if (!Z_Registration_Info_UScriptStruct_TrafficFastArrayItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TrafficFastArrayItem.InnerSingleton, Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TrafficFastArrayItem.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficReplicatedAgent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficReplicatedAgent_h_Statics::ScriptStructInfo[] = {
		{ FReplicatedTrafficAgent::StaticStruct, Z_Construct_UScriptStruct_FReplicatedTrafficAgent_Statics::NewStructOps, TEXT("ReplicatedTrafficAgent"), &Z_Registration_Info_UScriptStruct_ReplicatedTrafficAgent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReplicatedTrafficAgent), 1793240810U) },
		{ FTrafficFastArrayItem::StaticStruct, Z_Construct_UScriptStruct_FTrafficFastArrayItem_Statics::NewStructOps, TEXT("TrafficFastArrayItem"), &Z_Registration_Info_UScriptStruct_TrafficFastArrayItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTrafficFastArrayItem), 169065851U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficReplicatedAgent_h_2333912936(TEXT("/Script/MassTraffic"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficReplicatedAgent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficReplicatedAgent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
