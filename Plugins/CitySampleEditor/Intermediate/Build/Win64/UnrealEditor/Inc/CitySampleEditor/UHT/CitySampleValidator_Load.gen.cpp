// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleEditor/Public/Validation/CitySampleValidator_Load.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleValidator_Load() {}
// Cross Module References
	CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleEditorValidator();
	CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleValidator_Load();
	CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleValidator_Load_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySampleEditor();
// End Cross Module References
	void UCitySampleValidator_Load::StaticRegisterNativesUCitySampleValidator_Load()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleValidator_Load);
	UClass* Z_Construct_UClass_UCitySampleValidator_Load_NoRegister()
	{
		return UCitySampleValidator_Load::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleValidator_Load_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleValidator_Load_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCitySampleEditorValidator,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySampleEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleValidator_Load_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleValidator_Load_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Validation/CitySampleValidator_Load.h" },
		{ "ModuleRelativePath", "Public/Validation/CitySampleValidator_Load.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleValidator_Load_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleValidator_Load>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleValidator_Load_Statics::ClassParams = {
		&UCitySampleValidator_Load::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleValidator_Load_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleValidator_Load_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCitySampleValidator_Load()
	{
		if (!Z_Registration_Info_UClass_UCitySampleValidator_Load.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleValidator_Load.OuterSingleton, Z_Construct_UClass_UCitySampleValidator_Load_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleValidator_Load.OuterSingleton;
	}
	template<> CITYSAMPLEEDITOR_API UClass* StaticClass<UCitySampleValidator_Load>()
	{
		return UCitySampleValidator_Load::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleValidator_Load);
	UCitySampleValidator_Load::~UCitySampleValidator_Load() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Validation_CitySampleValidator_Load_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Validation_CitySampleValidator_Load_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleValidator_Load, UCitySampleValidator_Load::StaticClass, TEXT("UCitySampleValidator_Load"), &Z_Registration_Info_UClass_UCitySampleValidator_Load, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleValidator_Load), 1038969145U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Validation_CitySampleValidator_Load_h_1631096402(TEXT("/Script/CitySampleEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Validation_CitySampleValidator_Load_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Validation_CitySampleValidator_Load_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
