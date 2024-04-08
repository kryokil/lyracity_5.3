// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldAudioDataSystem/Public/WorldAudioDataGameplayScript.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldAudioDataGameplayScript() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_WorldAudioDataSystem();
	WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_AWorldAudioDataGameplayScript();
	WORLDAUDIODATASYSTEM_API UClass* Z_Construct_UClass_AWorldAudioDataGameplayScript_NoRegister();
// End Cross Module References
	void AWorldAudioDataGameplayScript::StaticRegisterNativesAWorldAudioDataGameplayScript()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldAudioDataGameplayScript);
	UClass* Z_Construct_UClass_AWorldAudioDataGameplayScript_NoRegister()
	{
		return AWorldAudioDataGameplayScript::StaticClass();
	}
	struct Z_Construct_UClass_AWorldAudioDataGameplayScript_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorldAudioDataGameplayScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldAudioDataSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldAudioDataGameplayScript_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldAudioDataGameplayScript_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WorldAudioDataGameplayScript.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WorldAudioDataGameplayScript.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorldAudioDataGameplayScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldAudioDataGameplayScript>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldAudioDataGameplayScript_Statics::ClassParams = {
		&AWorldAudioDataGameplayScript::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldAudioDataGameplayScript_Statics::Class_MetaDataParams), Z_Construct_UClass_AWorldAudioDataGameplayScript_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AWorldAudioDataGameplayScript()
	{
		if (!Z_Registration_Info_UClass_AWorldAudioDataGameplayScript.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldAudioDataGameplayScript.OuterSingleton, Z_Construct_UClass_AWorldAudioDataGameplayScript_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWorldAudioDataGameplayScript.OuterSingleton;
	}
	template<> WORLDAUDIODATASYSTEM_API UClass* StaticClass<AWorldAudioDataGameplayScript>()
	{
		return AWorldAudioDataGameplayScript::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldAudioDataGameplayScript);
	AWorldAudioDataGameplayScript::~AWorldAudioDataGameplayScript() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataGameplayScript_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataGameplayScript_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWorldAudioDataGameplayScript, AWorldAudioDataGameplayScript::StaticClass, TEXT("AWorldAudioDataGameplayScript"), &Z_Registration_Info_UClass_AWorldAudioDataGameplayScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldAudioDataGameplayScript), 2003446665U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataGameplayScript_h_98628697(TEXT("/Script/WorldAudioDataSystem"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataGameplayScript_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_WorldAudioDataSystem_Source_WorldAudioDataSystem_Public_WorldAudioDataGameplayScript_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
