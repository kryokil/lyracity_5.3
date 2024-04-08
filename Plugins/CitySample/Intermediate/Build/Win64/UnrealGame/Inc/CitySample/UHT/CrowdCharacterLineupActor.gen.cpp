// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Crowd/CrowdCharacterLineupActor.h"
#include "CitySample/Public/Crowd/CrowdCharacterDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdCharacterLineupActor() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACrowdCharacterLineup();
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACrowdCharacterLineup_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCrowdCharacterDataAsset_NoRegister();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECrowdLineupType();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECrowdLineupVariation();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdCharacterDefinition();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdCharacterOptions();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdLineupInstance();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdLineupRandomOptions();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdLineupVariationOptions();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdLineupInstance;
class UScriptStruct* FCrowdLineupInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdLineupInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdLineupInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdLineupInstance, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CrowdLineupInstance"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdLineupInstance.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCrowdLineupInstance>()
{
	return FCrowdLineupInstance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineupActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LineupActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineupCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineupCoordinates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdLineupInstance>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::NewProp_LineupActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::NewProp_LineupActor = { "LineupActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdLineupInstance, LineupActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::NewProp_LineupActor_MetaData), Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::NewProp_LineupActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::NewProp_LineupCoordinates_MetaData[] = {
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::NewProp_LineupCoordinates = { "LineupCoordinates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdLineupInstance, LineupCoordinates), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::NewProp_LineupCoordinates_MetaData), Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::NewProp_LineupCoordinates_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::NewProp_InstanceOptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::NewProp_InstanceOptions = { "InstanceOptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdLineupInstance, InstanceOptions), Z_Construct_UScriptStruct_FCrowdCharacterOptions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::NewProp_InstanceOptions_MetaData), Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::NewProp_InstanceOptions_MetaData) }; // 1650595031
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::NewProp_LineupActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::NewProp_LineupCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::NewProp_InstanceOptions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"CrowdLineupInstance",
		Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::PropPointers),
		sizeof(FCrowdLineupInstance),
		alignof(FCrowdLineupInstance),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCrowdLineupInstance()
	{
		if (!Z_Registration_Info_UScriptStruct_CrowdLineupInstance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdLineupInstance.InnerSingleton, Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CrowdLineupInstance.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECrowdLineupType;
	static UEnum* ECrowdLineupType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECrowdLineupType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECrowdLineupType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CitySample_ECrowdLineupType, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("ECrowdLineupType"));
		}
		return Z_Registration_Info_UEnum_ECrowdLineupType.OuterSingleton;
	}
	template<> CITYSAMPLE_API UEnum* StaticEnum<ECrowdLineupType>()
	{
		return ECrowdLineupType_StaticEnum();
	}
	struct Z_Construct_UEnum_CitySample_ECrowdLineupType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CitySample_ECrowdLineupType_Statics::Enumerators[] = {
		{ "ECrowdLineupType::Variation", (int64)ECrowdLineupType::Variation },
		{ "ECrowdLineupType::Random", (int64)ECrowdLineupType::Random },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CitySample_ECrowdLineupType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
		{ "Random.Name", "ECrowdLineupType::Random" },
		{ "Variation.Name", "ECrowdLineupType::Variation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CitySample_ECrowdLineupType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		"ECrowdLineupType",
		"ECrowdLineupType",
		Z_Construct_UEnum_CitySample_ECrowdLineupType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECrowdLineupType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CitySample_ECrowdLineupType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CitySample_ECrowdLineupType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CitySample_ECrowdLineupType()
	{
		if (!Z_Registration_Info_UEnum_ECrowdLineupType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECrowdLineupType.InnerSingleton, Z_Construct_UEnum_CitySample_ECrowdLineupType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECrowdLineupType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdLineupVariationOptions;
class UScriptStruct* FCrowdLineupVariationOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdLineupVariationOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdLineupVariationOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdLineupVariationOptions, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CrowdLineupVariationOptions"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdLineupVariationOptions.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCrowdLineupVariationOptions>()
{
	return FCrowdLineupVariationOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bX_MetaData[];
#endif
		static void NewProp_bX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bX;
		static const UECodeGen_Private::FBytePropertyParams NewProp_X_Variation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_Variation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_X_Variation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bY_MetaData[];
#endif
		static void NewProp_bY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bY;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Y_Variation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_Variation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Y_Variation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bZ_MetaData[];
#endif
		static void NewProp_bZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bZ;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Z_Variation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Z_Variation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Z_Variation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdLineupVariationOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bX_MetaData[] = {
		{ "Category", "CrowdLineupVariationOptions" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bX_SetBit(void* Obj)
	{
		((FCrowdLineupVariationOptions*)Obj)->bX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bX = { "bX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCrowdLineupVariationOptions), &Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bX_MetaData), Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bX_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_X_Variation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_X_Variation_MetaData[] = {
		{ "Category", "CrowdLineupVariationOptions" },
		{ "EditCondition", "bX" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_X_Variation = { "X_Variation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdLineupVariationOptions, X_Variation), Z_Construct_UEnum_CitySample_ECrowdLineupVariation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_X_Variation_MetaData), Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_X_Variation_MetaData) }; // 3035681866
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bY_MetaData[] = {
		{ "Category", "CrowdLineupVariationOptions" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bY_SetBit(void* Obj)
	{
		((FCrowdLineupVariationOptions*)Obj)->bY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCrowdLineupVariationOptions), &Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bY_MetaData), Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bY_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_Y_Variation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_Y_Variation_MetaData[] = {
		{ "Category", "CrowdLineupVariationOptions" },
		{ "EditCondition", "bY" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_Y_Variation = { "Y_Variation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdLineupVariationOptions, Y_Variation), Z_Construct_UEnum_CitySample_ECrowdLineupVariation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_Y_Variation_MetaData), Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_Y_Variation_MetaData) }; // 3035681866
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bZ_MetaData[] = {
		{ "Category", "CrowdLineupVariationOptions" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bZ_SetBit(void* Obj)
	{
		((FCrowdLineupVariationOptions*)Obj)->bZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bZ = { "bZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCrowdLineupVariationOptions), &Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bZ_MetaData), Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bZ_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_Z_Variation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_Z_Variation_MetaData[] = {
		{ "Category", "CrowdLineupVariationOptions" },
		{ "EditCondition", "bZ" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_Z_Variation = { "Z_Variation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdLineupVariationOptions, Z_Variation), Z_Construct_UEnum_CitySample_ECrowdLineupVariation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_Z_Variation_MetaData), Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_Z_Variation_MetaData) }; // 3035681866
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_X_Variation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_X_Variation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_Y_Variation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_Y_Variation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_bZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_Z_Variation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewProp_Z_Variation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"CrowdLineupVariationOptions",
		Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::PropPointers),
		sizeof(FCrowdLineupVariationOptions),
		alignof(FCrowdLineupVariationOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCrowdLineupVariationOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_CrowdLineupVariationOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdLineupVariationOptions.InnerSingleton, Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CrowdLineupVariationOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdLineupRandomOptions;
class UScriptStruct* FCrowdLineupRandomOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdLineupRandomOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdLineupRandomOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdLineupRandomOptions, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CrowdLineupRandomOptions"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdLineupRandomOptions.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCrowdLineupRandomOptions>()
{
	return FCrowdLineupRandomOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineupSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineupSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FixedOptions_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FixedOptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixedOptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FixedOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdLineupRandomOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::NewProp_LineupSize_MetaData[] = {
		{ "Category", "CrowdLineupRandomOptions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Specify the number of characters to spawn\n" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specify the number of characters to spawn" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::NewProp_LineupSize = { "LineupSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdLineupRandomOptions, LineupSize), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::NewProp_LineupSize_MetaData), Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::NewProp_LineupSize_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::NewProp_FixedOptions_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::NewProp_FixedOptions_Inner = { "FixedOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CitySample_ECrowdLineupVariation, METADATA_PARAMS(0, nullptr) }; // 3035681866
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::NewProp_FixedOptions_MetaData[] = {
		{ "Category", "CrowdLineupRandomOptions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The set of properties which will remain fixed when randomizing\n// Represented as an Array due to issues with how sets of enums display in editor\n" },
#endif
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The set of properties which will remain fixed when randomizing\nRepresented as an Array due to issues with how sets of enums display in editor" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::NewProp_FixedOptions = { "FixedOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdLineupRandomOptions, FixedOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::NewProp_FixedOptions_MetaData), Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::NewProp_FixedOptions_MetaData) }; // 3035681866
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::NewProp_LineupSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::NewProp_FixedOptions_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::NewProp_FixedOptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::NewProp_FixedOptions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"CrowdLineupRandomOptions",
		Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::PropPointers),
		sizeof(FCrowdLineupRandomOptions),
		alignof(FCrowdLineupRandomOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCrowdLineupRandomOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_CrowdLineupRandomOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdLineupRandomOptions.InnerSingleton, Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CrowdLineupRandomOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(ACrowdCharacterLineup::execUpdateLineup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLineup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACrowdCharacterLineup::execClearLineup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearLineup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACrowdCharacterLineup::execBuildLineup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildLineup();
		P_NATIVE_END;
	}
	struct CrowdCharacterLineup_eventSpawnLineupActor_Parms
	{
		FIntVector SpawnCoordinates;
		FString Label;
		FVector SpawnLocation;
		FRotator SpawnRotation;
		FCrowdCharacterDefinition CharacterDefinition;
		FCrowdCharacterOptions CharacterOptions;
		AActor* ReturnValue;

		/** Constructor, initializes return property only **/
		CrowdCharacterLineup_eventSpawnLineupActor_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct CrowdCharacterLineup_eventUpdateLineupActor_Parms
	{
		AActor* TargetActor;
		FIntVector SpawnCoordinates;
		FCrowdCharacterDefinition CharacterDefinition;
	};
	static FName NAME_ACrowdCharacterLineup_SpawnLineupActor = FName(TEXT("SpawnLineupActor"));
	AActor* ACrowdCharacterLineup::SpawnLineupActor(const FIntVector SpawnCoordinates, const FString& Label, FVector SpawnLocation, FRotator SpawnRotation, const FCrowdCharacterDefinition CharacterDefinition, const FCrowdCharacterOptions CharacterOptions)
	{
		CrowdCharacterLineup_eventSpawnLineupActor_Parms Parms;
		Parms.SpawnCoordinates=SpawnCoordinates;
		Parms.Label=Label;
		Parms.SpawnLocation=SpawnLocation;
		Parms.SpawnRotation=SpawnRotation;
		Parms.CharacterDefinition=CharacterDefinition;
		Parms.CharacterOptions=CharacterOptions;
		ProcessEvent(FindFunctionChecked(NAME_ACrowdCharacterLineup_SpawnLineupActor),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ACrowdCharacterLineup_UpdateLineupActor = FName(TEXT("UpdateLineupActor"));
	void ACrowdCharacterLineup::UpdateLineupActor(AActor* TargetActor, const FIntVector SpawnCoordinates, const FCrowdCharacterDefinition CharacterDefinition)
	{
		CrowdCharacterLineup_eventUpdateLineupActor_Parms Parms;
		Parms.TargetActor=TargetActor;
		Parms.SpawnCoordinates=SpawnCoordinates;
		Parms.CharacterDefinition=CharacterDefinition;
		ProcessEvent(FindFunctionChecked(NAME_ACrowdCharacterLineup_UpdateLineupActor),&Parms);
	}
	void ACrowdCharacterLineup::StaticRegisterNativesACrowdCharacterLineup()
	{
		UClass* Class = ACrowdCharacterLineup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildLineup", &ACrowdCharacterLineup::execBuildLineup },
			{ "ClearLineup", &ACrowdCharacterLineup::execClearLineup },
			{ "UpdateLineup", &ACrowdCharacterLineup::execUpdateLineup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACrowdCharacterLineup_BuildLineup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrowdCharacterLineup_BuildLineup_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Lineup" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrowdCharacterLineup_BuildLineup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrowdCharacterLineup, nullptr, "BuildLineup", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACrowdCharacterLineup_BuildLineup_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACrowdCharacterLineup_BuildLineup_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACrowdCharacterLineup_BuildLineup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACrowdCharacterLineup_BuildLineup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACrowdCharacterLineup_ClearLineup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrowdCharacterLineup_ClearLineup_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Lineup" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrowdCharacterLineup_ClearLineup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrowdCharacterLineup, nullptr, "ClearLineup", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACrowdCharacterLineup_ClearLineup_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACrowdCharacterLineup_ClearLineup_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACrowdCharacterLineup_ClearLineup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACrowdCharacterLineup_ClearLineup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnCoordinates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterDefinition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterOptions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_SpawnCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_SpawnCoordinates = { "SpawnCoordinates", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterLineup_eventSpawnLineupActor_Parms, SpawnCoordinates), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_SpawnCoordinates_MetaData), Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_SpawnCoordinates_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterLineup_eventSpawnLineupActor_Parms, Label), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_Label_MetaData), Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_Label_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterLineup_eventSpawnLineupActor_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterLineup_eventSpawnLineupActor_Parms, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_CharacterDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_CharacterDefinition = { "CharacterDefinition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterLineup_eventSpawnLineupActor_Parms, CharacterDefinition), Z_Construct_UScriptStruct_FCrowdCharacterDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_CharacterDefinition_MetaData), Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_CharacterDefinition_MetaData) }; // 2253127574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_CharacterOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_CharacterOptions = { "CharacterOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterLineup_eventSpawnLineupActor_Parms, CharacterOptions), Z_Construct_UScriptStruct_FCrowdCharacterOptions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_CharacterOptions_MetaData), Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_CharacterOptions_MetaData) }; // 1650595031
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterLineup_eventSpawnLineupActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_SpawnCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_SpawnLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_SpawnRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_CharacterDefinition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_CharacterOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lineup" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrowdCharacterLineup, nullptr, "SpawnLineupActor", nullptr, nullptr, Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::PropPointers), sizeof(CrowdCharacterLineup_eventSpawnLineupActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(CrowdCharacterLineup_eventSpawnLineupActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineup_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Lineup" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrowdCharacterLineup, nullptr, "UpdateLineup", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineup_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineup_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnCoordinates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterDefinition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterLineup_eventUpdateLineupActor_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::NewProp_SpawnCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::NewProp_SpawnCoordinates = { "SpawnCoordinates", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterLineup_eventUpdateLineupActor_Parms, SpawnCoordinates), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::NewProp_SpawnCoordinates_MetaData), Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::NewProp_SpawnCoordinates_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::NewProp_CharacterDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::NewProp_CharacterDefinition = { "CharacterDefinition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdCharacterLineup_eventUpdateLineupActor_Parms, CharacterDefinition), Z_Construct_UScriptStruct_FCrowdCharacterDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::NewProp_CharacterDefinition_MetaData), Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::NewProp_CharacterDefinition_MetaData) }; // 2253127574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::NewProp_SpawnCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::NewProp_CharacterDefinition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lineup" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrowdCharacterLineup, nullptr, "UpdateLineupActor", nullptr, nullptr, Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::PropPointers), sizeof(CrowdCharacterLineup_eventUpdateLineupActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(CrowdCharacterLineup_eventUpdateLineupActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACrowdCharacterLineup);
	UClass* Z_Construct_UClass_ACrowdCharacterLineup_NoRegister()
	{
		return ACrowdCharacterLineup::StaticClass();
	}
	struct Z_Construct_UClass_ACrowdCharacterLineup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterDataAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spacing_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowLabelOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RowLabelOffset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LineupType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineupType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LineupType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariationOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VariationOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseOptions;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RowLabels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowLabels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RowLabels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineupInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineupInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LineupInstances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrowdCharacterLineup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdCharacterLineup_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACrowdCharacterLineup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACrowdCharacterLineup_BuildLineup, "BuildLineup" }, // 4024157492
		{ &Z_Construct_UFunction_ACrowdCharacterLineup_ClearLineup, "ClearLineup" }, // 2964494835
		{ &Z_Construct_UFunction_ACrowdCharacterLineup_SpawnLineupActor, "SpawnLineupActor" }, // 3640265025
		{ &Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineup, "UpdateLineup" }, // 3638621704
		{ &Z_Construct_UFunction_ACrowdCharacterLineup_UpdateLineupActor, "UpdateLineupActor" }, // 475542531
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdCharacterLineup_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdCharacterLineup_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "VariationOptions RandomOptions" },
		{ "IncludePath", "Crowd/CrowdCharacterLineupActor.h" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_CharacterDataAsset_MetaData[] = {
		{ "Category", "Lineup" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_CharacterDataAsset = { "CharacterDataAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrowdCharacterLineup, CharacterDataAsset), Z_Construct_UClass_UCrowdCharacterDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_CharacterDataAsset_MetaData), Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_CharacterDataAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_Spacing_MetaData[] = {
		{ "Category", "Lineup" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_Spacing = { "Spacing", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrowdCharacterLineup, Spacing), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_Spacing_MetaData), Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_Spacing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "Category", "Lineup" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrowdCharacterLineup, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LocationOffset_MetaData), Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LocationOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "Category", "Lineup" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrowdCharacterLineup, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RotationOffset_MetaData), Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RotationOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RowLabelOffset_MetaData[] = {
		{ "Category", "Lineup" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RowLabelOffset = { "RowLabelOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrowdCharacterLineup, RowLabelOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RowLabelOffset_MetaData), Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RowLabelOffset_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LineupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LineupType_MetaData[] = {
		{ "Category", "Lineup" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LineupType = { "LineupType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrowdCharacterLineup, LineupType), Z_Construct_UEnum_CitySample_ECrowdLineupType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LineupType_MetaData), Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LineupType_MetaData) }; // 2285925948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_VariationOptions_MetaData[] = {
		{ "Category", "Lineup" },
		{ "EditCondition", "LineupType==ECrowdLineupType::Variation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_VariationOptions = { "VariationOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrowdCharacterLineup, VariationOptions), Z_Construct_UScriptStruct_FCrowdLineupVariationOptions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_VariationOptions_MetaData), Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_VariationOptions_MetaData) }; // 3045041208
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RandomOptions_MetaData[] = {
		{ "Category", "Lineup" },
		{ "EditCondition", "LineupType==ECrowdLineupType::Random" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RandomOptions = { "RandomOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrowdCharacterLineup, RandomOptions), Z_Construct_UScriptStruct_FCrowdLineupRandomOptions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RandomOptions_MetaData), Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RandomOptions_MetaData) }; // 636997217
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_BaseOptions_MetaData[] = {
		{ "Category", "Lineup" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_BaseOptions = { "BaseOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrowdCharacterLineup, BaseOptions), Z_Construct_UScriptStruct_FCrowdCharacterOptions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_BaseOptions_MetaData), Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_BaseOptions_MetaData) }; // 1650595031
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RowLabels_Inner = { "RowLabels", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RowLabels_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RowLabels = { "RowLabels", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrowdCharacterLineup, RowLabels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RowLabels_MetaData), Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RowLabels_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "CrowdCharacterLineup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrowdCharacterLineup, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_SceneComponent_MetaData), Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_SceneComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LineupInstances_Inner = { "LineupInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCrowdLineupInstance, METADATA_PARAMS(0, nullptr) }; // 3863583124
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LineupInstances_MetaData[] = {
		{ "ModuleRelativePath", "Public/Crowd/CrowdCharacterLineupActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LineupInstances = { "LineupInstances", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACrowdCharacterLineup, LineupInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LineupInstances_MetaData), Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LineupInstances_MetaData) }; // 3863583124
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACrowdCharacterLineup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_CharacterDataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_Spacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RowLabelOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LineupType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LineupType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_VariationOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RandomOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_BaseOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RowLabels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_RowLabels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LineupInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrowdCharacterLineup_Statics::NewProp_LineupInstances,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrowdCharacterLineup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrowdCharacterLineup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACrowdCharacterLineup_Statics::ClassParams = {
		&ACrowdCharacterLineup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACrowdCharacterLineup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdCharacterLineup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdCharacterLineup_Statics::Class_MetaDataParams), Z_Construct_UClass_ACrowdCharacterLineup_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACrowdCharacterLineup_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACrowdCharacterLineup()
	{
		if (!Z_Registration_Info_UClass_ACrowdCharacterLineup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACrowdCharacterLineup.OuterSingleton, Z_Construct_UClass_ACrowdCharacterLineup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACrowdCharacterLineup.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<ACrowdCharacterLineup>()
	{
		return ACrowdCharacterLineup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrowdCharacterLineup);
	ACrowdCharacterLineup::~ACrowdCharacterLineup() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterLineupActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterLineupActor_h_Statics::EnumInfo[] = {
		{ ECrowdLineupType_StaticEnum, TEXT("ECrowdLineupType"), &Z_Registration_Info_UEnum_ECrowdLineupType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2285925948U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterLineupActor_h_Statics::ScriptStructInfo[] = {
		{ FCrowdLineupInstance::StaticStruct, Z_Construct_UScriptStruct_FCrowdLineupInstance_Statics::NewStructOps, TEXT("CrowdLineupInstance"), &Z_Registration_Info_UScriptStruct_CrowdLineupInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdLineupInstance), 3863583124U) },
		{ FCrowdLineupVariationOptions::StaticStruct, Z_Construct_UScriptStruct_FCrowdLineupVariationOptions_Statics::NewStructOps, TEXT("CrowdLineupVariationOptions"), &Z_Registration_Info_UScriptStruct_CrowdLineupVariationOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdLineupVariationOptions), 3045041208U) },
		{ FCrowdLineupRandomOptions::StaticStruct, Z_Construct_UScriptStruct_FCrowdLineupRandomOptions_Statics::NewStructOps, TEXT("CrowdLineupRandomOptions"), &Z_Registration_Info_UScriptStruct_CrowdLineupRandomOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdLineupRandomOptions), 636997217U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterLineupActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACrowdCharacterLineup, ACrowdCharacterLineup::StaticClass, TEXT("ACrowdCharacterLineup"), &Z_Registration_Info_UClass_ACrowdCharacterLineup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACrowdCharacterLineup), 1714347889U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterLineupActor_h_2728088058(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterLineupActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterLineupActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterLineupActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterLineupActor_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterLineupActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdCharacterLineupActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
