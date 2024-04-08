// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Anim/CitySampleAnimNode_RequestInertialization.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleAnimNode_RequestInertialization() {}
// Cross Module References
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ERequestInertializationCondition();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertializationOnAssetChange();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERequestInertializationCondition;
	static UEnum* ERequestInertializationCondition_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERequestInertializationCondition.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERequestInertializationCondition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_ERequestInertializationCondition, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("ERequestInertializationCondition"));
		}
		return Z_Registration_Info_UEnum_ERequestInertializationCondition.OuterSingleton;
	}
	template<> CITYSAMPLE_API UEnum* StaticEnum<ERequestInertializationCondition>()
	{
		return ERequestInertializationCondition_StaticEnum();
	}
	struct Z_Construct_UEnum_CitySample_ERequestInertializationCondition_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CitySample_ERequestInertializationCondition_Statics::Enumerators[] = {
		{ "ERequestInertializationCondition::OnTrue", (int64)ERequestInertializationCondition::OnTrue },
		{ "ERequestInertializationCondition::OnChange", (int64)ERequestInertializationCondition::OnChange },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CitySample_ERequestInertializationCondition_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_RequestInertialization.h" },
		{ "OnChange.Name", "ERequestInertializationCondition::OnChange" },
		{ "OnTrue.Name", "ERequestInertializationCondition::OnTrue" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_ERequestInertializationCondition_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		"ERequestInertializationCondition",
		"ERequestInertializationCondition",
		Z_Construct_UEnum_CitySample_ERequestInertializationCondition_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ERequestInertializationCondition_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ERequestInertializationCondition_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_ERequestInertializationCondition_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CitySample_ERequestInertializationCondition()
	{
		if (!Z_Registration_Info_UEnum_ERequestInertializationCondition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERequestInertializationCondition.InnerSingleton, Z_Construct_UEnum_CitySample_ERequestInertializationCondition_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERequestInertializationCondition.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCitySampleAnimNode_RequestInertialization>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FCitySampleAnimNode_RequestInertialization cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySampleAnimNode_RequestInertialization;
class UScriptStruct* FCitySampleAnimNode_RequestInertialization::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleAnimNode_RequestInertialization.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySampleAnimNode_RequestInertialization.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CitySampleAnimNode_RequestInertialization"));
	}
	return Z_Registration_Info_UScriptStruct_CitySampleAnimNode_RequestInertialization.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySampleAnimNode_RequestInertialization>()
{
	return FCitySampleAnimNode_RequestInertialization::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInput_MetaData[];
#endif
		static void NewProp_bInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_Condition_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Condition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipOnBecomingRelevant_MetaData[];
#endif
		static void NewProp_bSkipOnBecomingRelevant_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipOnBecomingRelevant;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Requests inertialization based on a boolean input\n" },
#endif
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_RequestInertialization.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests inertialization based on a boolean input" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySampleAnimNode_RequestInertialization>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_RequestInertialization.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleAnimNode_RequestInertialization, Source), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_Source_MetaData), Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_Source_MetaData) }; // 1465313103
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_bInput_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Determines if an inertialization blend should be triggered, depending on Condition.\n" },
#endif
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_RequestInertialization.h" },
		{ "PinShownByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines if an inertialization blend should be triggered, depending on Condition." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_bInput_SetBit(void* Obj)
	{
		((FCitySampleAnimNode_RequestInertialization*)Obj)->bInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_bInput = { "bInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySampleAnimNode_RequestInertialization), &Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_bInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_bInput_MetaData), Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_bInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_BlendTime_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Duration of the requested inertialization blend.\n" },
#endif
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_RequestInertialization.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Duration of the requested inertialization blend." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleAnimNode_RequestInertialization, BlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_BlendTime_MetaData), Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_BlendTime_MetaData) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_Condition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_Condition_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If OnTrue, request when bInput is true; if OnChanged, request when bInput changes.\n" },
#endif
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_RequestInertialization.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If OnTrue, request when bInput is true; if OnChanged, request when bInput changes." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleAnimNode_RequestInertialization, Condition), Z_Construct_UEnum_CitySample_ERequestInertializationCondition, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_Condition_MetaData), Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_Condition_MetaData) }; // 824583121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_bSkipOnBecomingRelevant_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If set to true, inertialization will not be requested on the same frame the node becomes relevant\n" },
#endif
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_RequestInertialization.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set to true, inertialization will not be requested on the same frame the node becomes relevant" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_bSkipOnBecomingRelevant_SetBit(void* Obj)
	{
		((FCitySampleAnimNode_RequestInertialization*)Obj)->bSkipOnBecomingRelevant = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_bSkipOnBecomingRelevant = { "bSkipOnBecomingRelevant", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySampleAnimNode_RequestInertialization), &Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_bSkipOnBecomingRelevant_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_bSkipOnBecomingRelevant_MetaData), Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_bSkipOnBecomingRelevant_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_bInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_BlendTime,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_Condition_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_Condition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewProp_bSkipOnBecomingRelevant,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"CitySampleAnimNode_RequestInertialization",
		Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::PropPointers),
		sizeof(FCitySampleAnimNode_RequestInertialization),
		alignof(FCitySampleAnimNode_RequestInertialization),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization()
	{
		if (!Z_Registration_Info_UScriptStruct_CitySampleAnimNode_RequestInertialization.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySampleAnimNode_RequestInertialization.InnerSingleton, Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CitySampleAnimNode_RequestInertialization.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCitySampleAnimNode_RequestInertializationOnAssetChange>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FCitySampleAnimNode_RequestInertializationOnAssetChange cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySampleAnimNode_RequestInertializationOnAssetChange;
class UScriptStruct* FCitySampleAnimNode_RequestInertializationOnAssetChange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleAnimNode_RequestInertializationOnAssetChange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySampleAnimNode_RequestInertializationOnAssetChange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertializationOnAssetChange, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CitySampleAnimNode_RequestInertializationOnAssetChange"));
	}
	return Z_Registration_Info_UScriptStruct_CitySampleAnimNode_RequestInertializationOnAssetChange.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySampleAnimNode_RequestInertializationOnAssetChange>()
{
	return FCitySampleAnimNode_RequestInertializationOnAssetChange::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertializationOnAssetChange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertializationOnAssetChange_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This node must be added right after an animation asset player to function correctly. It\n// requests an inertialization blend when the animation asset of the corresponding player changes.\n" },
#endif
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_RequestInertialization.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This node must be added right after an animation asset player to function correctly. It\nrequests an inertialization blend when the animation asset of the corresponding player changes." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertializationOnAssetChange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySampleAnimNode_RequestInertializationOnAssetChange>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertializationOnAssetChange_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Links" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Must link to an asset player node for this to work correctly.\n" },
#endif
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_RequestInertialization.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Must link to an asset player node for this to work correctly." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertializationOnAssetChange_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleAnimNode_RequestInertializationOnAssetChange, Source), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertializationOnAssetChange_Statics::NewProp_Source_MetaData), Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertializationOnAssetChange_Statics::NewProp_Source_MetaData) }; // 1465313103
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertializationOnAssetChange_Statics::NewProp_BlendTime_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Duration of the requested inertialization blend.\n" },
#endif
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNode_RequestInertialization.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Duration of the requested inertialization blend." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertializationOnAssetChange_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleAnimNode_RequestInertializationOnAssetChange, BlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertializationOnAssetChange_Statics::NewProp_BlendTime_MetaData), Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertializationOnAssetChange_Statics::NewProp_BlendTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertializationOnAssetChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertializationOnAssetChange_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertializationOnAssetChange_Statics::NewProp_BlendTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertializationOnAssetChange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"CitySampleAnimNode_RequestInertializationOnAssetChange",
		Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertializationOnAssetChange_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertializationOnAssetChange_Statics::PropPointers),
		sizeof(FCitySampleAnimNode_RequestInertializationOnAssetChange),
		alignof(FCitySampleAnimNode_RequestInertializationOnAssetChange),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertializationOnAssetChange_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertializationOnAssetChange_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertializationOnAssetChange_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertializationOnAssetChange()
	{
		if (!Z_Registration_Info_UScriptStruct_CitySampleAnimNode_RequestInertializationOnAssetChange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySampleAnimNode_RequestInertializationOnAssetChange.InnerSingleton, Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertializationOnAssetChange_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CitySampleAnimNode_RequestInertializationOnAssetChange.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimNode_RequestInertialization_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimNode_RequestInertialization_h_Statics::EnumInfo[] = {
		{ ERequestInertializationCondition_StaticEnum, TEXT("ERequestInertializationCondition"), &Z_Registration_Info_UEnum_ERequestInertializationCondition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 824583121U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimNode_RequestInertialization_h_Statics::ScriptStructInfo[] = {
		{ FCitySampleAnimNode_RequestInertialization::StaticStruct, Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertialization_Statics::NewStructOps, TEXT("CitySampleAnimNode_RequestInertialization"), &Z_Registration_Info_UScriptStruct_CitySampleAnimNode_RequestInertialization, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySampleAnimNode_RequestInertialization), 2150483490U) },
		{ FCitySampleAnimNode_RequestInertializationOnAssetChange::StaticStruct, Z_Construct_UScriptStruct_FCitySampleAnimNode_RequestInertializationOnAssetChange_Statics::NewStructOps, TEXT("CitySampleAnimNode_RequestInertializationOnAssetChange"), &Z_Registration_Info_UScriptStruct_CitySampleAnimNode_RequestInertializationOnAssetChange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySampleAnimNode_RequestInertializationOnAssetChange), 1345157434U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimNode_RequestInertialization_h_2968644200(TEXT("/Script/CitySample"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimNode_RequestInertialization_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimNode_RequestInertialization_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimNode_RequestInertialization_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimNode_RequestInertialization_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
