// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficVehicleRepresentationActorManagement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficVehicleRepresentationActorManagement() {}
// Cross Module References
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationActorManagement();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleRepresentationActorManagement();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleRepresentationActorManagement_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	void UMassTrafficVehicleRepresentationActorManagement::StaticRegisterNativesUMassTrafficVehicleRepresentationActorManagement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficVehicleRepresentationActorManagement);
	UClass* Z_Construct_UClass_UMassTrafficVehicleRepresentationActorManagement_NoRegister()
	{
		return UMassTrafficVehicleRepresentationActorManagement::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficVehicleRepresentationActorManagement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficVehicleRepresentationActorManagement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassRepresentationActorManagement,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleRepresentationActorManagement_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficVehicleRepresentationActorManagement_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Overridden actor management for traffic vehicles\n */" },
#endif
		{ "HideCategories", "Mass|LOD" },
		{ "IncludePath", "MassTrafficVehicleRepresentationActorManagement.h" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleRepresentationActorManagement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overridden actor management for traffic vehicles" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficVehicleRepresentationActorManagement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficVehicleRepresentationActorManagement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVehicleRepresentationActorManagement_Statics::ClassParams = {
		&UMassTrafficVehicleRepresentationActorManagement::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleRepresentationActorManagement_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVehicleRepresentationActorManagement_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassTrafficVehicleRepresentationActorManagement()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficVehicleRepresentationActorManagement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVehicleRepresentationActorManagement.OuterSingleton, Z_Construct_UClass_UMassTrafficVehicleRepresentationActorManagement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficVehicleRepresentationActorManagement.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficVehicleRepresentationActorManagement>()
	{
		return UMassTrafficVehicleRepresentationActorManagement::StaticClass();
	}
	UMassTrafficVehicleRepresentationActorManagement::UMassTrafficVehicleRepresentationActorManagement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficVehicleRepresentationActorManagement);
	UMassTrafficVehicleRepresentationActorManagement::~UMassTrafficVehicleRepresentationActorManagement() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleRepresentationActorManagement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleRepresentationActorManagement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficVehicleRepresentationActorManagement, UMassTrafficVehicleRepresentationActorManagement::StaticClass, TEXT("UMassTrafficVehicleRepresentationActorManagement"), &Z_Registration_Info_UClass_UMassTrafficVehicleRepresentationActorManagement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVehicleRepresentationActorManagement), 4293703989U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleRepresentationActorManagement_h_3235060520(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleRepresentationActorManagement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleRepresentationActorManagement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
