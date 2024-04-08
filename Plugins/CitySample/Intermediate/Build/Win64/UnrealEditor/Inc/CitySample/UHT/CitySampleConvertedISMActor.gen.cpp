// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/LevelInstance/CitySampleConvertedISMActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleConvertedISMActor() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleConvertedISMActor();
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleConvertedISMActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	void ACitySampleConvertedISMActor::StaticRegisterNativesACitySampleConvertedISMActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACitySampleConvertedISMActor);
	UClass* Z_Construct_UClass_ACitySampleConvertedISMActor_NoRegister()
	{
		return ACitySampleConvertedISMActor::StaticClass();
	}
	struct Z_Construct_UClass_ACitySampleConvertedISMActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintAsset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BlueprintAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldAsset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WorldAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACitySampleConvertedISMActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleConvertedISMActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleConvertedISMActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelInstance/CitySampleConvertedISMActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/LevelInstance/CitySampleConvertedISMActor.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleConvertedISMActor_Statics::NewProp_BlueprintAsset_MetaData[] = {
		{ "Category", "ConvertedFrom" },
		{ "ModuleRelativePath", "Public/LevelInstance/CitySampleConvertedISMActor.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ACitySampleConvertedISMActor_Statics::NewProp_BlueprintAsset = { "BlueprintAsset", nullptr, (EPropertyFlags)0x0014000800020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleConvertedISMActor, BlueprintAsset), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleConvertedISMActor_Statics::NewProp_BlueprintAsset_MetaData), Z_Construct_UClass_ACitySampleConvertedISMActor_Statics::NewProp_BlueprintAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleConvertedISMActor_Statics::NewProp_WorldAsset_MetaData[] = {
		{ "Category", "ConvertedFrom" },
		{ "ModuleRelativePath", "Public/LevelInstance/CitySampleConvertedISMActor.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ACitySampleConvertedISMActor_Statics::NewProp_WorldAsset = { "WorldAsset", nullptr, (EPropertyFlags)0x0014000800020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleConvertedISMActor, WorldAsset), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleConvertedISMActor_Statics::NewProp_WorldAsset_MetaData), Z_Construct_UClass_ACitySampleConvertedISMActor_Statics::NewProp_WorldAsset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACitySampleConvertedISMActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleConvertedISMActor_Statics::NewProp_BlueprintAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleConvertedISMActor_Statics::NewProp_WorldAsset,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACitySampleConvertedISMActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACitySampleConvertedISMActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACitySampleConvertedISMActor_Statics::ClassParams = {
		&ACitySampleConvertedISMActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ACitySampleConvertedISMActor_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleConvertedISMActor_Statics::PropPointers), 0),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleConvertedISMActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ACitySampleConvertedISMActor_Statics::Class_MetaDataParams)
	};
#if WITH_EDITORONLY_DATA
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleConvertedISMActor_Statics::PropPointers) < 2048);
#endif
	UClass* Z_Construct_UClass_ACitySampleConvertedISMActor()
	{
		if (!Z_Registration_Info_UClass_ACitySampleConvertedISMActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACitySampleConvertedISMActor.OuterSingleton, Z_Construct_UClass_ACitySampleConvertedISMActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACitySampleConvertedISMActor.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<ACitySampleConvertedISMActor>()
	{
		return ACitySampleConvertedISMActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACitySampleConvertedISMActor);
	ACitySampleConvertedISMActor::~ACitySampleConvertedISMActor() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_LevelInstance_CitySampleConvertedISMActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_LevelInstance_CitySampleConvertedISMActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACitySampleConvertedISMActor, ACitySampleConvertedISMActor::StaticClass, TEXT("ACitySampleConvertedISMActor"), &Z_Registration_Info_UClass_ACitySampleConvertedISMActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACitySampleConvertedISMActor), 3861334147U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_LevelInstance_CitySampleConvertedISMActor_h_655819781(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_LevelInstance_CitySampleConvertedISMActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_LevelInstance_CitySampleConvertedISMActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
