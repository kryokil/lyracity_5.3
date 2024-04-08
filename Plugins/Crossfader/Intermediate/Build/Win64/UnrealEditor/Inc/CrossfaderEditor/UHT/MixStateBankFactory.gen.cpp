// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossfaderEditor/Private/MixStateBankFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMixStateBankFactory() {}
// Cross Module References
	CROSSFADEREDITOR_API UClass* Z_Construct_UClass_UMixStateBankFactory();
	CROSSFADEREDITOR_API UClass* Z_Construct_UClass_UMixStateBankFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_CrossfaderEditor();
// End Cross Module References
	void UMixStateBankFactory::StaticRegisterNativesUMixStateBankFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMixStateBankFactory);
	UClass* Z_Construct_UClass_UMixStateBankFactory_NoRegister()
	{
		return UMixStateBankFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMixStateBankFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMixStateBankFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CrossfaderEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMixStateBankFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMixStateBankFactory_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "MixStateBankFactory.h" },
		{ "ModuleRelativePath", "Private/MixStateBankFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMixStateBankFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMixStateBankFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMixStateBankFactory_Statics::ClassParams = {
		&UMixStateBankFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMixStateBankFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UMixStateBankFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMixStateBankFactory()
	{
		if (!Z_Registration_Info_UClass_UMixStateBankFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMixStateBankFactory.OuterSingleton, Z_Construct_UClass_UMixStateBankFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMixStateBankFactory.OuterSingleton;
	}
	template<> CROSSFADEREDITOR_API UClass* StaticClass<UMixStateBankFactory>()
	{
		return UMixStateBankFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMixStateBankFactory);
	UMixStateBankFactory::~UMixStateBankFactory() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Crossfader_Source_CrossfaderEditor_Private_MixStateBankFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Crossfader_Source_CrossfaderEditor_Private_MixStateBankFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMixStateBankFactory, UMixStateBankFactory::StaticClass, TEXT("UMixStateBankFactory"), &Z_Registration_Info_UClass_UMixStateBankFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMixStateBankFactory), 2220704379U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Crossfader_Source_CrossfaderEditor_Private_MixStateBankFactory_h_888808543(TEXT("/Script/CrossfaderEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Crossfader_Source_CrossfaderEditor_Private_MixStateBankFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Crossfader_Source_CrossfaderEditor_Private_MixStateBankFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
