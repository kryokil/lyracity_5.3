// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleEditor/Public/Validation/CitySampleEditorValidator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleEditorValidator() {}
// Cross Module References
	CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleEditorValidator();
	CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UCitySampleEditorValidator_NoRegister();
	DATAVALIDATION_API UClass* Z_Construct_UClass_UEditorValidatorBase();
	UPackage* Z_Construct_UPackage__Script_CitySampleEditor();
// End Cross Module References
	void UCitySampleEditorValidator::StaticRegisterNativesUCitySampleEditorValidator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleEditorValidator);
	UClass* Z_Construct_UClass_UCitySampleEditorValidator_NoRegister()
	{
		return UCitySampleEditorValidator::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleEditorValidator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleEditorValidator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorValidatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySampleEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleEditorValidator_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleEditorValidator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Validation/CitySampleEditorValidator.h" },
		{ "ModuleRelativePath", "Public/Validation/CitySampleEditorValidator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleEditorValidator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleEditorValidator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleEditorValidator_Statics::ClassParams = {
		&UCitySampleEditorValidator::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleEditorValidator_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleEditorValidator_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCitySampleEditorValidator()
	{
		if (!Z_Registration_Info_UClass_UCitySampleEditorValidator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleEditorValidator.OuterSingleton, Z_Construct_UClass_UCitySampleEditorValidator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleEditorValidator.OuterSingleton;
	}
	template<> CITYSAMPLEEDITOR_API UClass* StaticClass<UCitySampleEditorValidator>()
	{
		return UCitySampleEditorValidator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleEditorValidator);
	UCitySampleEditorValidator::~UCitySampleEditorValidator() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Validation_CitySampleEditorValidator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Validation_CitySampleEditorValidator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleEditorValidator, UCitySampleEditorValidator::StaticClass, TEXT("UCitySampleEditorValidator"), &Z_Registration_Info_UClass_UCitySampleEditorValidator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleEditorValidator), 3691625903U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Validation_CitySampleEditorValidator_h_3584114726(TEXT("/Script/CitySampleEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Validation_CitySampleEditorValidator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Validation_CitySampleEditorValidator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
