// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleEditor/Public/Commandlets/CitySampleContentValidationCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleContentValidationCommandlet() {}
// Cross Module References
	CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleContentValidationCommandlet();
	CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleContentValidationCommandlet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_CitySampleEditor();
// End Cross Module References
	void UCitySampleContentValidationCommandlet::StaticRegisterNativesUCitySampleContentValidationCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleContentValidationCommandlet);
	UClass* Z_Construct_UClass_UCitySampleContentValidationCommandlet_NoRegister()
	{
		return UCitySampleContentValidationCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleContentValidationCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleContentValidationCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySampleEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleContentValidationCommandlet_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleContentValidationCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/CitySampleContentValidationCommandlet.h" },
		{ "ModuleRelativePath", "Public/Commandlets/CitySampleContentValidationCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleContentValidationCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleContentValidationCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleContentValidationCommandlet_Statics::ClassParams = {
		&UCitySampleContentValidationCommandlet::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleContentValidationCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleContentValidationCommandlet_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCitySampleContentValidationCommandlet()
	{
		if (!Z_Registration_Info_UClass_UCitySampleContentValidationCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleContentValidationCommandlet.OuterSingleton, Z_Construct_UClass_UCitySampleContentValidationCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleContentValidationCommandlet.OuterSingleton;
	}
	template<> CITYSAMPLEEDITOR_API UClass* StaticClass<UCitySampleContentValidationCommandlet>()
	{
		return UCitySampleContentValidationCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleContentValidationCommandlet);
	UCitySampleContentValidationCommandlet::~UCitySampleContentValidationCommandlet() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Commandlets_CitySampleContentValidationCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Commandlets_CitySampleContentValidationCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleContentValidationCommandlet, UCitySampleContentValidationCommandlet::StaticClass, TEXT("UCitySampleContentValidationCommandlet"), &Z_Registration_Info_UClass_UCitySampleContentValidationCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleContentValidationCommandlet), 3698904751U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Commandlets_CitySampleContentValidationCommandlet_h_644283798(TEXT("/Script/CitySampleEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Commandlets_CitySampleContentValidationCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Commandlets_CitySampleContentValidationCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
