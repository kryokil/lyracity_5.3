// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleEditor/Public/Commandlets/AssetHardReferencesCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetHardReferencesCommandlet() {}
// Cross Module References
	CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UAssetHardReferencesCommandlet();
	CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UAssetHardReferencesCommandlet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_CitySampleEditor();
// End Cross Module References
	void UAssetHardReferencesCommandlet::StaticRegisterNativesUAssetHardReferencesCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetHardReferencesCommandlet);
	UClass* Z_Construct_UClass_UAssetHardReferencesCommandlet_NoRegister()
	{
		return UAssetHardReferencesCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UAssetHardReferencesCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetHardReferencesCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySampleEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetHardReferencesCommandlet_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetHardReferencesCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/AssetHardReferencesCommandlet.h" },
		{ "ModuleRelativePath", "Public/Commandlets/AssetHardReferencesCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetHardReferencesCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetHardReferencesCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetHardReferencesCommandlet_Statics::ClassParams = {
		&UAssetHardReferencesCommandlet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetHardReferencesCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetHardReferencesCommandlet_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAssetHardReferencesCommandlet()
	{
		if (!Z_Registration_Info_UClass_UAssetHardReferencesCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetHardReferencesCommandlet.OuterSingleton, Z_Construct_UClass_UAssetHardReferencesCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetHardReferencesCommandlet.OuterSingleton;
	}
	template<> CITYSAMPLEEDITOR_API UClass* StaticClass<UAssetHardReferencesCommandlet>()
	{
		return UAssetHardReferencesCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetHardReferencesCommandlet);
	UAssetHardReferencesCommandlet::~UAssetHardReferencesCommandlet() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Commandlets_AssetHardReferencesCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Commandlets_AssetHardReferencesCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetHardReferencesCommandlet, UAssetHardReferencesCommandlet::StaticClass, TEXT("UAssetHardReferencesCommandlet"), &Z_Registration_Info_UClass_UAssetHardReferencesCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetHardReferencesCommandlet), 2889844165U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Commandlets_AssetHardReferencesCommandlet_h_969596785(TEXT("/Script/CitySampleEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Commandlets_AssetHardReferencesCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Commandlets_AssetHardReferencesCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
