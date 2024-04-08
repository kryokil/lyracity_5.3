// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Crowd/CrowdPresetDataAsset.h"
#include "CitySample/Public/Crowd/CrowdCharacterDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdPresetDataAsset() {}
// Cross Module References
	ANIMTOTEXTURE_API UClass* Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCrowdCharacterDataAsset_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCrowdPresetDataAsset();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCrowdPresetDataAsset_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCrowdVATPresetDataAsset();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCrowdVATPresetDataAsset_NoRegister();
	CITYSAMPLE_API UEnum* Z_Construct_UEnum_CitySample_ECrowdLineupVariation();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdCharacterOptions();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdPreset();
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdVATPreset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficDriverTypesDataAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdPreset;
class UScriptStruct* FCrowdPreset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdPreset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdPreset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdPreset, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CrowdPreset"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdPreset.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCrowdPreset>()
{
	return FCrowdPreset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCrowdPreset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterOptions;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Meshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Meshes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdPreset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdPresetDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCrowdPreset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdPreset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdPreset_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "CrowdPreset" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdPresetDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCrowdPreset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdPreset, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdPreset_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FCrowdPreset_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdPreset_Statics::NewProp_CharacterOptions_MetaData[] = {
		{ "Category", "CrowdPreset" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdPresetDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCrowdPreset_Statics::NewProp_CharacterOptions = { "CharacterOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdPreset, CharacterOptions), Z_Construct_UScriptStruct_FCrowdCharacterOptions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdPreset_Statics::NewProp_CharacterOptions_MetaData), Z_Construct_UScriptStruct_FCrowdPreset_Statics::NewProp_CharacterOptions_MetaData) }; // 1650595031
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCrowdPreset_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdPreset_Statics::NewProp_Meshes_MetaData[] = {
		{ "Category", "CrowdPreset" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdPresetDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCrowdPreset_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdPreset, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdPreset_Statics::NewProp_Meshes_MetaData), Z_Construct_UScriptStruct_FCrowdPreset_Statics::NewProp_Meshes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdPreset_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdPreset_Statics::NewProp_CharacterOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdPreset_Statics::NewProp_Meshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdPreset_Statics::NewProp_Meshes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdPreset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"CrowdPreset",
		Z_Construct_UScriptStruct_FCrowdPreset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdPreset_Statics::PropPointers),
		sizeof(FCrowdPreset),
		alignof(FCrowdPreset),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdPreset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdPreset_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdPreset_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCrowdPreset()
	{
		if (!Z_Registration_Info_UScriptStruct_CrowdPreset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdPreset.InnerSingleton, Z_Construct_UScriptStruct_FCrowdPreset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CrowdPreset.InnerSingleton;
	}
	void UCrowdPresetDataAsset::StaticRegisterNativesUCrowdPresetDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCrowdPresetDataAsset);
	UClass* Z_Construct_UClass_UCrowdPresetDataAsset_NoRegister()
	{
		return UCrowdPresetDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UCrowdPresetDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Presets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Presets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Presets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrowdPresetDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdPresetDataAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdPresetDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Crowd/CrowdPresetDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdPresetDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrowdPresetDataAsset_Statics::NewProp_Presets_Inner = { "Presets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCrowdPreset, METADATA_PARAMS(0, nullptr) }; // 1618378672
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdPresetDataAsset_Statics::NewProp_Presets_MetaData[] = {
		{ "Category", "CrowdPresetDataAsset" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdPresetDataAsset.h" },
		{ "TitleProperty", "Name" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCrowdPresetDataAsset_Statics::NewProp_Presets = { "Presets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrowdPresetDataAsset, Presets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdPresetDataAsset_Statics::NewProp_Presets_MetaData), Z_Construct_UClass_UCrowdPresetDataAsset_Statics::NewProp_Presets_MetaData) }; // 1618378672
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrowdPresetDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdPresetDataAsset_Statics::NewProp_Presets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdPresetDataAsset_Statics::NewProp_Presets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrowdPresetDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrowdPresetDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrowdPresetDataAsset_Statics::ClassParams = {
		&UCrowdPresetDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCrowdPresetDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdPresetDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdPresetDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UCrowdPresetDataAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdPresetDataAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCrowdPresetDataAsset()
	{
		if (!Z_Registration_Info_UClass_UCrowdPresetDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrowdPresetDataAsset.OuterSingleton, Z_Construct_UClass_UCrowdPresetDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCrowdPresetDataAsset.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCrowdPresetDataAsset>()
	{
		return UCrowdPresetDataAsset::StaticClass();
	}
	UCrowdPresetDataAsset::UCrowdPresetDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrowdPresetDataAsset);
	UCrowdPresetDataAsset::~UCrowdPresetDataAsset() {}

static_assert(std::is_polymorphic<FCrowdVATPreset>() == std::is_polymorphic<FCrowdPreset>(), "USTRUCT FCrowdVATPreset cannot be polymorphic unless super FCrowdPreset is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdVATPreset;
class UScriptStruct* FCrowdVATPreset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdVATPreset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdVATPreset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdVATPreset, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CrowdVATPreset"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdVATPreset.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCrowdVATPreset>()
{
	return FCrowdVATPreset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCrowdVATPreset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimToTextureAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimToTextureAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdVATPreset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdPresetDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCrowdVATPreset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdVATPreset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdVATPreset_Statics::NewProp_AnimToTextureAsset_MetaData[] = {
		{ "Category", "CrowdVATPreset" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdPresetDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCrowdVATPreset_Statics::NewProp_AnimToTextureAsset = { "AnimToTextureAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCrowdVATPreset, AnimToTextureAsset), Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdVATPreset_Statics::NewProp_AnimToTextureAsset_MetaData), Z_Construct_UScriptStruct_FCrowdVATPreset_Statics::NewProp_AnimToTextureAsset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdVATPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdVATPreset_Statics::NewProp_AnimToTextureAsset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdVATPreset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		Z_Construct_UScriptStruct_FCrowdPreset,
		&NewStructOps,
		"CrowdVATPreset",
		Z_Construct_UScriptStruct_FCrowdVATPreset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdVATPreset_Statics::PropPointers),
		sizeof(FCrowdVATPreset),
		alignof(FCrowdVATPreset),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdVATPreset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCrowdVATPreset_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdVATPreset_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCrowdVATPreset()
	{
		if (!Z_Registration_Info_UScriptStruct_CrowdVATPreset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdVATPreset.InnerSingleton, Z_Construct_UScriptStruct_FCrowdVATPreset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CrowdVATPreset.InnerSingleton;
	}
	DEFINE_FUNCTION(UCrowdVATPresetDataAsset::execRandomize)
	{
		P_GET_OBJECT(UCrowdCharacterDataAsset,Z_Param_CrowdDataAsset);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumPresets);
		P_GET_STRUCT_REF(FCrowdCharacterOptions,Z_Param_Out_BaseOptions);
		P_GET_TARRAY(ECrowdLineupVariation,Z_Param_FixedOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Randomize(Z_Param_CrowdDataAsset,Z_Param_NumPresets,Z_Param_Out_BaseOptions,Z_Param_FixedOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCrowdVATPresetDataAsset::execCopyToDataTable)
	{
		P_GET_OBJECT(UMassTrafficDriverTypesDataAsset,Z_Param_DriverTypesDataAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyToDataTable(Z_Param_DriverTypesDataAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCrowdVATPresetDataAsset::execCopyFromCrowdPreset)
	{
		P_GET_OBJECT(UCrowdPresetDataAsset,Z_Param_CrowdPresetDataAsset);
		P_GET_OBJECT(UCrowdCharacterDataAsset,Z_Param_ValidationAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyFromCrowdPreset(Z_Param_CrowdPresetDataAsset,Z_Param_ValidationAsset);
		P_NATIVE_END;
	}
	void UCrowdVATPresetDataAsset::StaticRegisterNativesUCrowdVATPresetDataAsset()
	{
		UClass* Class = UCrowdVATPresetDataAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyFromCrowdPreset", &UCrowdVATPresetDataAsset::execCopyFromCrowdPreset },
			{ "CopyToDataTable", &UCrowdVATPresetDataAsset::execCopyToDataTable },
			{ "Randomize", &UCrowdVATPresetDataAsset::execRandomize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyFromCrowdPreset_Statics
	{
		struct CrowdVATPresetDataAsset_eventCopyFromCrowdPreset_Parms
		{
			UCrowdPresetDataAsset* CrowdPresetDataAsset;
			UCrowdCharacterDataAsset* ValidationAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrowdPresetDataAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ValidationAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyFromCrowdPreset_Statics::NewProp_CrowdPresetDataAsset = { "CrowdPresetDataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdVATPresetDataAsset_eventCopyFromCrowdPreset_Parms, CrowdPresetDataAsset), Z_Construct_UClass_UCrowdPresetDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyFromCrowdPreset_Statics::NewProp_ValidationAsset = { "ValidationAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdVATPresetDataAsset_eventCopyFromCrowdPreset_Parms, ValidationAsset), Z_Construct_UClass_UCrowdCharacterDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyFromCrowdPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyFromCrowdPreset_Statics::NewProp_CrowdPresetDataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyFromCrowdPreset_Statics::NewProp_ValidationAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyFromCrowdPreset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Crowd/CrowdPresetDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyFromCrowdPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdVATPresetDataAsset, nullptr, "CopyFromCrowdPreset", nullptr, nullptr, Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyFromCrowdPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyFromCrowdPreset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyFromCrowdPreset_Statics::CrowdVATPresetDataAsset_eventCopyFromCrowdPreset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyFromCrowdPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyFromCrowdPreset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyFromCrowdPreset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyFromCrowdPreset_Statics::CrowdVATPresetDataAsset_eventCopyFromCrowdPreset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyFromCrowdPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyFromCrowdPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyToDataTable_Statics
	{
		struct CrowdVATPresetDataAsset_eventCopyToDataTable_Parms
		{
			UMassTrafficDriverTypesDataAsset* DriverTypesDataAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DriverTypesDataAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyToDataTable_Statics::NewProp_DriverTypesDataAsset = { "DriverTypesDataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdVATPresetDataAsset_eventCopyToDataTable_Parms, DriverTypesDataAsset), Z_Construct_UClass_UMassTrafficDriverTypesDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyToDataTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyToDataTable_Statics::NewProp_DriverTypesDataAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyToDataTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Crowd/CrowdPresetDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyToDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdVATPresetDataAsset, nullptr, "CopyToDataTable", nullptr, nullptr, Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyToDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyToDataTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyToDataTable_Statics::CrowdVATPresetDataAsset_eventCopyToDataTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyToDataTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyToDataTable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyToDataTable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyToDataTable_Statics::CrowdVATPresetDataAsset_eventCopyToDataTable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyToDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyToDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize_Statics
	{
		struct CrowdVATPresetDataAsset_eventRandomize_Parms
		{
			UCrowdCharacterDataAsset* CrowdDataAsset;
			int32 NumPresets;
			FCrowdCharacterOptions BaseOptions;
			TArray<ECrowdLineupVariation> FixedOptions;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrowdDataAsset;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumPresets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseOptions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FixedOptions_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FixedOptions_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FixedOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize_Statics::NewProp_CrowdDataAsset = { "CrowdDataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdVATPresetDataAsset_eventRandomize_Parms, CrowdDataAsset), Z_Construct_UClass_UCrowdCharacterDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize_Statics::NewProp_NumPresets = { "NumPresets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdVATPresetDataAsset_eventRandomize_Parms, NumPresets), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize_Statics::NewProp_BaseOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize_Statics::NewProp_BaseOptions = { "BaseOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdVATPresetDataAsset_eventRandomize_Parms, BaseOptions), Z_Construct_UScriptStruct_FCrowdCharacterOptions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize_Statics::NewProp_BaseOptions_MetaData), Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize_Statics::NewProp_BaseOptions_MetaData) }; // 1650595031
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize_Statics::NewProp_FixedOptions_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize_Statics::NewProp_FixedOptions_Inner = { "FixedOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CitySample_ECrowdLineupVariation, METADATA_PARAMS(0, nullptr) }; // 3035681866
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize_Statics::NewProp_FixedOptions = { "FixedOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CrowdVATPresetDataAsset_eventRandomize_Parms, FixedOptions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3035681866
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize_Statics::NewProp_CrowdDataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize_Statics::NewProp_NumPresets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize_Statics::NewProp_BaseOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize_Statics::NewProp_FixedOptions_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize_Statics::NewProp_FixedOptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize_Statics::NewProp_FixedOptions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Crowd/CrowdPresetDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdVATPresetDataAsset, nullptr, "Randomize", nullptr, nullptr, Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize_Statics::CrowdVATPresetDataAsset_eventRandomize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize_Statics::CrowdVATPresetDataAsset_eventRandomize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCrowdVATPresetDataAsset);
	UClass* Z_Construct_UClass_UCrowdVATPresetDataAsset_NoRegister()
	{
		return UCrowdVATPresetDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UCrowdVATPresetDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Presets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Presets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Presets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrowdVATPresetDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdVATPresetDataAsset_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCrowdVATPresetDataAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyFromCrowdPreset, "CopyFromCrowdPreset" }, // 3223090548
		{ &Z_Construct_UFunction_UCrowdVATPresetDataAsset_CopyToDataTable, "CopyToDataTable" }, // 2844914199
		{ &Z_Construct_UFunction_UCrowdVATPresetDataAsset_Randomize, "Randomize" }, // 1115067146
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdVATPresetDataAsset_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdVATPresetDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Crowd/CrowdPresetDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdPresetDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrowdVATPresetDataAsset_Statics::NewProp_Presets_Inner = { "Presets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCrowdVATPreset, METADATA_PARAMS(0, nullptr) }; // 1980921796
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdVATPresetDataAsset_Statics::NewProp_Presets_MetaData[] = {
		{ "Category", "CrowdVATPresetDataAsset" },
		{ "ModuleRelativePath", "Public/Crowd/CrowdPresetDataAsset.h" },
		{ "TitleProperty", "Name" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCrowdVATPresetDataAsset_Statics::NewProp_Presets = { "Presets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCrowdVATPresetDataAsset, Presets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdVATPresetDataAsset_Statics::NewProp_Presets_MetaData), Z_Construct_UClass_UCrowdVATPresetDataAsset_Statics::NewProp_Presets_MetaData) }; // 1980921796
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrowdVATPresetDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdVATPresetDataAsset_Statics::NewProp_Presets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdVATPresetDataAsset_Statics::NewProp_Presets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrowdVATPresetDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrowdVATPresetDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCrowdVATPresetDataAsset_Statics::ClassParams = {
		&UCrowdVATPresetDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCrowdVATPresetDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdVATPresetDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdVATPresetDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UCrowdVATPresetDataAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdVATPresetDataAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCrowdVATPresetDataAsset()
	{
		if (!Z_Registration_Info_UClass_UCrowdVATPresetDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrowdVATPresetDataAsset.OuterSingleton, Z_Construct_UClass_UCrowdVATPresetDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCrowdVATPresetDataAsset.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCrowdVATPresetDataAsset>()
	{
		return UCrowdVATPresetDataAsset::StaticClass();
	}
	UCrowdVATPresetDataAsset::UCrowdVATPresetDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrowdVATPresetDataAsset);
	UCrowdVATPresetDataAsset::~UCrowdVATPresetDataAsset() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdPresetDataAsset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdPresetDataAsset_h_Statics::ScriptStructInfo[] = {
		{ FCrowdPreset::StaticStruct, Z_Construct_UScriptStruct_FCrowdPreset_Statics::NewStructOps, TEXT("CrowdPreset"), &Z_Registration_Info_UScriptStruct_CrowdPreset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdPreset), 1618378672U) },
		{ FCrowdVATPreset::StaticStruct, Z_Construct_UScriptStruct_FCrowdVATPreset_Statics::NewStructOps, TEXT("CrowdVATPreset"), &Z_Registration_Info_UScriptStruct_CrowdVATPreset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdVATPreset), 1980921796U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdPresetDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCrowdPresetDataAsset, UCrowdPresetDataAsset::StaticClass, TEXT("UCrowdPresetDataAsset"), &Z_Registration_Info_UClass_UCrowdPresetDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrowdPresetDataAsset), 3787861525U) },
		{ Z_Construct_UClass_UCrowdVATPresetDataAsset, UCrowdVATPresetDataAsset::StaticClass, TEXT("UCrowdVATPresetDataAsset"), &Z_Registration_Info_UClass_UCrowdVATPresetDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrowdVATPresetDataAsset), 2427023687U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdPresetDataAsset_h_1843801350(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdPresetDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdPresetDataAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdPresetDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Crowd_CrowdPresetDataAsset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
