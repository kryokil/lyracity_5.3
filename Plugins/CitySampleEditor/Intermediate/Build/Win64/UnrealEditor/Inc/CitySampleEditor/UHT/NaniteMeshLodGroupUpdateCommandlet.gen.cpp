// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleEditor/Public/Commandlets/NaniteMeshLodGroupUpdateCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaniteMeshLodGroupUpdateCommandlet() {}
// Cross Module References
	CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UNaniteMeshLodGroupUpdateCommandlet();
	CITYSAMPLEEDITOR_API UClass* Z_Construct_UClass_UNaniteMeshLodGroupUpdateCommandlet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_CitySampleEditor();
// End Cross Module References
	void UNaniteMeshLodGroupUpdateCommandlet::StaticRegisterNativesUNaniteMeshLodGroupUpdateCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNaniteMeshLodGroupUpdateCommandlet);
	UClass* Z_Construct_UClass_UNaniteMeshLodGroupUpdateCommandlet_NoRegister()
	{
		return UNaniteMeshLodGroupUpdateCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UNaniteMeshLodGroupUpdateCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNaniteMeshLodGroupUpdateCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySampleEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNaniteMeshLodGroupUpdateCommandlet_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNaniteMeshLodGroupUpdateCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/NaniteMeshLodGroupUpdateCommandlet.h" },
		{ "ModuleRelativePath", "Public/Commandlets/NaniteMeshLodGroupUpdateCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNaniteMeshLodGroupUpdateCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNaniteMeshLodGroupUpdateCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNaniteMeshLodGroupUpdateCommandlet_Statics::ClassParams = {
		&UNaniteMeshLodGroupUpdateCommandlet::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNaniteMeshLodGroupUpdateCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UNaniteMeshLodGroupUpdateCommandlet_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNaniteMeshLodGroupUpdateCommandlet()
	{
		if (!Z_Registration_Info_UClass_UNaniteMeshLodGroupUpdateCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNaniteMeshLodGroupUpdateCommandlet.OuterSingleton, Z_Construct_UClass_UNaniteMeshLodGroupUpdateCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNaniteMeshLodGroupUpdateCommandlet.OuterSingleton;
	}
	template<> CITYSAMPLEEDITOR_API UClass* StaticClass<UNaniteMeshLodGroupUpdateCommandlet>()
	{
		return UNaniteMeshLodGroupUpdateCommandlet::StaticClass();
	}
	UNaniteMeshLodGroupUpdateCommandlet::UNaniteMeshLodGroupUpdateCommandlet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNaniteMeshLodGroupUpdateCommandlet);
	UNaniteMeshLodGroupUpdateCommandlet::~UNaniteMeshLodGroupUpdateCommandlet() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Commandlets_NaniteMeshLodGroupUpdateCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Commandlets_NaniteMeshLodGroupUpdateCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNaniteMeshLodGroupUpdateCommandlet, UNaniteMeshLodGroupUpdateCommandlet::StaticClass, TEXT("UNaniteMeshLodGroupUpdateCommandlet"), &Z_Registration_Info_UClass_UNaniteMeshLodGroupUpdateCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNaniteMeshLodGroupUpdateCommandlet), 3676097526U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Commandlets_NaniteMeshLodGroupUpdateCommandlet_h_3337741090(TEXT("/Script/CitySampleEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Commandlets_NaniteMeshLodGroupUpdateCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleEditor_Source_CitySampleEditor_Public_Commandlets_NaniteMeshLodGroupUpdateCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
