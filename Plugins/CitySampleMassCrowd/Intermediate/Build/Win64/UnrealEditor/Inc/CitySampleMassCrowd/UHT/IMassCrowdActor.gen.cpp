// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySampleMassCrowd/Public/IMassCrowdActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMassCrowdActor() {}
// Cross Module References
	CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdActorInterface();
	CITYSAMPLEMASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdActorInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CitySampleMassCrowd();
// End Cross Module References
	void UMassCrowdActorInterface::StaticRegisterNativesUMassCrowdActorInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCrowdActorInterface);
	UClass* Z_Construct_UClass_UMassCrowdActorInterface_NoRegister()
	{
		return UMassCrowdActorInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMassCrowdActorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCrowdActorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySampleMassCrowd,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdActorInterface_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdActorInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/IMassCrowdActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCrowdActorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMassCrowdActorInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCrowdActorInterface_Statics::ClassParams = {
		&UMassCrowdActorInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdActorInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassCrowdActorInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassCrowdActorInterface()
	{
		if (!Z_Registration_Info_UClass_UMassCrowdActorInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCrowdActorInterface.OuterSingleton, Z_Construct_UClass_UMassCrowdActorInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCrowdActorInterface.OuterSingleton;
	}
	template<> CITYSAMPLEMASSCROWD_API UClass* StaticClass<UMassCrowdActorInterface>()
	{
		return UMassCrowdActorInterface::StaticClass();
	}
	UMassCrowdActorInterface::UMassCrowdActorInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCrowdActorInterface);
	UMassCrowdActorInterface::~UMassCrowdActorInterface() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_IMassCrowdActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_IMassCrowdActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassCrowdActorInterface, UMassCrowdActorInterface::StaticClass, TEXT("UMassCrowdActorInterface"), &Z_Registration_Info_UClass_UMassCrowdActorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCrowdActorInterface), 460905421U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_IMassCrowdActor_h_3767700474(TEXT("/Script/CitySampleMassCrowd"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_IMassCrowdActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleMassCrowd_Source_CitySampleMassCrowd_Public_IMassCrowdActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
