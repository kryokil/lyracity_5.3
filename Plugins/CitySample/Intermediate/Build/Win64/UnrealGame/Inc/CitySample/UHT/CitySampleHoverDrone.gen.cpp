// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Character/CitySampleHoverDrone.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleHoverDrone() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleHoverDrone();
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleHoverDrone_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleControlsOverlayInterface_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleInputInterface_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleTraversalInterface_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	HOVERDRONE_API UClass* Z_Construct_UClass_AHoverDronePawn();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	void ACitySampleHoverDrone::StaticRegisterNativesACitySampleHoverDrone()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACitySampleHoverDrone);
	UClass* Z_Construct_UClass_ACitySampleHoverDrone_NoRegister()
	{
		return ACitySampleHoverDrone::StaticClass();
	}
	struct Z_Construct_UClass_ACitySampleHoverDrone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InputActionDescriptions_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputActionDescriptions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputActionDescriptions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InputActionDescriptions;
		static const UECodeGen_Private::FTextPropertyParams NewProp_InputKeyDescriptionOverrides_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputKeyDescriptionOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputKeyDescriptionOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InputKeyDescriptionOverrides;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACitySampleHoverDrone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHoverDronePawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleHoverDrone_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleHoverDrone_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/CitySampleHoverDrone.h" },
		{ "ModuleRelativePath", "Public/Character/CitySampleHoverDrone.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ACitySampleHoverDrone_Statics::NewProp_InputActionDescriptions_ValueProp = { "InputActionDescriptions", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySampleHoverDrone_Statics::NewProp_InputActionDescriptions_Key_KeyProp = { "InputActionDescriptions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleHoverDrone_Statics::NewProp_InputActionDescriptions_MetaData[] = {
		{ "Category", "Controls Overlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mapping of pawn relevant InputActions to their string description for the controls overlay UI. */" },
#endif
		{ "ModuleRelativePath", "Public/Character/CitySampleHoverDrone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mapping of pawn relevant InputActions to their string description for the controls overlay UI." },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACitySampleHoverDrone_Statics::NewProp_InputActionDescriptions = { "InputActionDescriptions", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleHoverDrone, InputActionDescriptions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleHoverDrone_Statics::NewProp_InputActionDescriptions_MetaData), Z_Construct_UClass_ACitySampleHoverDrone_Statics::NewProp_InputActionDescriptions_MetaData) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ACitySampleHoverDrone_Statics::NewProp_InputKeyDescriptionOverrides_ValueProp = { "InputKeyDescriptionOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySampleHoverDrone_Statics::NewProp_InputKeyDescriptionOverrides_Key_KeyProp = { "InputKeyDescriptionOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleHoverDrone_Statics::NewProp_InputKeyDescriptionOverrides_MetaData[] = {
		{ "Category", "Controls Overlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mapping of pawn relevant input keys to their string description for the controls overlay UI. */" },
#endif
		{ "ModuleRelativePath", "Public/Character/CitySampleHoverDrone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mapping of pawn relevant input keys to their string description for the controls overlay UI." },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACitySampleHoverDrone_Statics::NewProp_InputKeyDescriptionOverrides = { "InputKeyDescriptionOverrides", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleHoverDrone, InputKeyDescriptionOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleHoverDrone_Statics::NewProp_InputKeyDescriptionOverrides_MetaData), Z_Construct_UClass_ACitySampleHoverDrone_Statics::NewProp_InputKeyDescriptionOverrides_MetaData) }; // 46000949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACitySampleHoverDrone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleHoverDrone_Statics::NewProp_InputActionDescriptions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleHoverDrone_Statics::NewProp_InputActionDescriptions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleHoverDrone_Statics::NewProp_InputActionDescriptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleHoverDrone_Statics::NewProp_InputKeyDescriptionOverrides_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleHoverDrone_Statics::NewProp_InputKeyDescriptionOverrides_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleHoverDrone_Statics::NewProp_InputKeyDescriptionOverrides,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACitySampleHoverDrone_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCitySampleTraversalInterface_NoRegister, (int32)VTABLE_OFFSET(ACitySampleHoverDrone, ICitySampleTraversalInterface), false },  // 4006226774
			{ Z_Construct_UClass_UCitySampleControlsOverlayInterface_NoRegister, (int32)VTABLE_OFFSET(ACitySampleHoverDrone, ICitySampleControlsOverlayInterface), false },  // 598373316
			{ Z_Construct_UClass_UCitySampleInputInterface_NoRegister, (int32)VTABLE_OFFSET(ACitySampleHoverDrone, ICitySampleInputInterface), false },  // 3904874896
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleHoverDrone_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACitySampleHoverDrone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACitySampleHoverDrone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACitySampleHoverDrone_Statics::ClassParams = {
		&ACitySampleHoverDrone::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACitySampleHoverDrone_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleHoverDrone_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleHoverDrone_Statics::Class_MetaDataParams), Z_Construct_UClass_ACitySampleHoverDrone_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleHoverDrone_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACitySampleHoverDrone()
	{
		if (!Z_Registration_Info_UClass_ACitySampleHoverDrone.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACitySampleHoverDrone.OuterSingleton, Z_Construct_UClass_ACitySampleHoverDrone_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACitySampleHoverDrone.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<ACitySampleHoverDrone>()
	{
		return ACitySampleHoverDrone::StaticClass();
	}
	ACitySampleHoverDrone::ACitySampleHoverDrone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACitySampleHoverDrone);
	ACitySampleHoverDrone::~ACitySampleHoverDrone() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Character_CitySampleHoverDrone_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Character_CitySampleHoverDrone_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACitySampleHoverDrone, ACitySampleHoverDrone::StaticClass, TEXT("ACitySampleHoverDrone"), &Z_Registration_Info_UClass_ACitySampleHoverDrone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACitySampleHoverDrone), 3869614781U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Character_CitySampleHoverDrone_h_636755602(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Character_CitySampleHoverDrone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Character_CitySampleHoverDrone_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
