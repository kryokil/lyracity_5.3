// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoverDrone/Public/HoverDroneSpeedLimitBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoverDroneSpeedLimitBox() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	HOVERDRONE_API UClass* Z_Construct_UClass_AHoverDroneSpeedLimitBox();
	HOVERDRONE_API UClass* Z_Construct_UClass_AHoverDroneSpeedLimitBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HoverDrone();
// End Cross Module References
	void AHoverDroneSpeedLimitBox::StaticRegisterNativesAHoverDroneSpeedLimitBox()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHoverDroneSpeedLimitBox);
	UClass* Z_Construct_UClass_AHoverDroneSpeedLimitBox_NoRegister()
	{
		return AHoverDroneSpeedLimitBox::StaticClass();
	}
	struct Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedSpeedIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAllowedSpeedIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_HoverDrone,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "HoverDroneSpeedLimitBox.h" },
		{ "ModuleRelativePath", "Public/HoverDroneSpeedLimitBox.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::NewProp_MaxAllowedSpeedIndex_MetaData[] = {
		{ "Category", "HoverDroneSpeedLimitBox" },
		{ "ModuleRelativePath", "Public/HoverDroneSpeedLimitBox.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::NewProp_MaxAllowedSpeedIndex = { "MaxAllowedSpeedIndex", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverDroneSpeedLimitBox, MaxAllowedSpeedIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::NewProp_MaxAllowedSpeedIndex_MetaData), Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::NewProp_MaxAllowedSpeedIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::NewProp_MaxAllowedSpeedIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHoverDroneSpeedLimitBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::ClassParams = {
		&AHoverDroneSpeedLimitBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::Class_MetaDataParams), Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AHoverDroneSpeedLimitBox()
	{
		if (!Z_Registration_Info_UClass_AHoverDroneSpeedLimitBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHoverDroneSpeedLimitBox.OuterSingleton, Z_Construct_UClass_AHoverDroneSpeedLimitBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHoverDroneSpeedLimitBox.OuterSingleton;
	}
	template<> HOVERDRONE_API UClass* StaticClass<AHoverDroneSpeedLimitBox>()
	{
		return AHoverDroneSpeedLimitBox::StaticClass();
	}
	AHoverDroneSpeedLimitBox::AHoverDroneSpeedLimitBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHoverDroneSpeedLimitBox);
	AHoverDroneSpeedLimitBox::~AHoverDroneSpeedLimitBox() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneSpeedLimitBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneSpeedLimitBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHoverDroneSpeedLimitBox, AHoverDroneSpeedLimitBox::StaticClass, TEXT("AHoverDroneSpeedLimitBox"), &Z_Registration_Info_UClass_AHoverDroneSpeedLimitBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHoverDroneSpeedLimitBox), 4194569361U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneSpeedLimitBox_h_3774013273(TEXT("/Script/HoverDrone"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneSpeedLimitBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_HoverDrone_Source_HoverDrone_Public_HoverDroneSpeedLimitBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
