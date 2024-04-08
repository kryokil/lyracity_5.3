// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficTrailerRepresentationActorManagement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficTrailerRepresentationActorManagement() {}
// Cross Module References
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationActorManagement();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	void UMassTrafficTrailerRepresentationActorManagement::StaticRegisterNativesUMassTrafficTrailerRepresentationActorManagement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficTrailerRepresentationActorManagement);
	UClass* Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_NoRegister()
	{
		return UMassTrafficTrailerRepresentationActorManagement::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassRepresentationActorManagement,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Overridden representation actor management traffic vehicle trailers\n */" },
#endif
		{ "IncludePath", "MassTrafficTrailerRepresentationActorManagement.h" },
		{ "ModuleRelativePath", "Public/MassTrafficTrailerRepresentationActorManagement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overridden representation actor management traffic vehicle trailers" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficTrailerRepresentationActorManagement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_Statics::ClassParams = {
		&UMassTrafficTrailerRepresentationActorManagement::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficTrailerRepresentationActorManagement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficTrailerRepresentationActorManagement.OuterSingleton, Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficTrailerRepresentationActorManagement.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficTrailerRepresentationActorManagement>()
	{
		return UMassTrafficTrailerRepresentationActorManagement::StaticClass();
	}
	UMassTrafficTrailerRepresentationActorManagement::UMassTrafficTrailerRepresentationActorManagement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficTrailerRepresentationActorManagement);
	UMassTrafficTrailerRepresentationActorManagement::~UMassTrafficTrailerRepresentationActorManagement() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerRepresentationActorManagement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerRepresentationActorManagement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement, UMassTrafficTrailerRepresentationActorManagement::StaticClass, TEXT("UMassTrafficTrailerRepresentationActorManagement"), &Z_Registration_Info_UClass_UMassTrafficTrailerRepresentationActorManagement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficTrailerRepresentationActorManagement), 1089593206U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerRepresentationActorManagement_h_2798622503(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerRepresentationActorManagement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerRepresentationActorManagement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
