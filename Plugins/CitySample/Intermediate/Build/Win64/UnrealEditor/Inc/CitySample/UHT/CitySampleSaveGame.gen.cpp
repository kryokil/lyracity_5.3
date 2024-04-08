// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Game/CitySampleSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleSaveGame() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleSaveGame();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleSaveGame_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	void UCitySampleSaveGame::StaticRegisterNativesUCitySampleSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleSaveGame);
	UClass* Z_Construct_UClass_UCitySampleSaveGame_NoRegister()
	{
		return UCitySampleSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVerticalAxisInverted_MetaData[];
#endif
		static void NewProp_bVerticalAxisInverted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVerticalAxisInverted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookSensivity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookSensivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceFeedbackEnabled_MetaData[];
#endif
		static void NewProp_bForceFeedbackEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceFeedbackEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleSaveGame_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleSaveGame_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Save game class for CitySample\n */" },
#endif
		{ "IncludePath", "Game/CitySampleSaveGame.h" },
		{ "ModuleRelativePath", "Public/Game/CitySampleSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Save game class for CitySample" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleSaveGame_Statics::NewProp_bVerticalAxisInverted_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Game/CitySampleSaveGame.h" },
	};
#endif
	void Z_Construct_UClass_UCitySampleSaveGame_Statics::NewProp_bVerticalAxisInverted_SetBit(void* Obj)
	{
		((UCitySampleSaveGame*)Obj)->bVerticalAxisInverted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleSaveGame_Statics::NewProp_bVerticalAxisInverted = { "bVerticalAxisInverted", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleSaveGame), &Z_Construct_UClass_UCitySampleSaveGame_Statics::NewProp_bVerticalAxisInverted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleSaveGame_Statics::NewProp_bVerticalAxisInverted_MetaData), Z_Construct_UClass_UCitySampleSaveGame_Statics::NewProp_bVerticalAxisInverted_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleSaveGame_Statics::NewProp_LookSensivity_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Game/CitySampleSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleSaveGame_Statics::NewProp_LookSensivity = { "LookSensivity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleSaveGame, LookSensivity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleSaveGame_Statics::NewProp_LookSensivity_MetaData), Z_Construct_UClass_UCitySampleSaveGame_Statics::NewProp_LookSensivity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleSaveGame_Statics::NewProp_bForceFeedbackEnabled_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Game/CitySampleSaveGame.h" },
	};
#endif
	void Z_Construct_UClass_UCitySampleSaveGame_Statics::NewProp_bForceFeedbackEnabled_SetBit(void* Obj)
	{
		((UCitySampleSaveGame*)Obj)->bForceFeedbackEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleSaveGame_Statics::NewProp_bForceFeedbackEnabled = { "bForceFeedbackEnabled", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleSaveGame), &Z_Construct_UClass_UCitySampleSaveGame_Statics::NewProp_bForceFeedbackEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleSaveGame_Statics::NewProp_bForceFeedbackEnabled_MetaData), Z_Construct_UClass_UCitySampleSaveGame_Statics::NewProp_bForceFeedbackEnabled_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleSaveGame_Statics::NewProp_bVerticalAxisInverted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleSaveGame_Statics::NewProp_LookSensivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleSaveGame_Statics::NewProp_bForceFeedbackEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleSaveGame_Statics::ClassParams = {
		&UCitySampleSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCitySampleSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleSaveGame_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleSaveGame_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCitySampleSaveGame()
	{
		if (!Z_Registration_Info_UClass_UCitySampleSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleSaveGame.OuterSingleton, Z_Construct_UClass_UCitySampleSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleSaveGame.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleSaveGame>()
	{
		return UCitySampleSaveGame::StaticClass();
	}
	UCitySampleSaveGame::UCitySampleSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleSaveGame);
	UCitySampleSaveGame::~UCitySampleSaveGame() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleSaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleSaveGame, UCitySampleSaveGame::StaticClass, TEXT("UCitySampleSaveGame"), &Z_Registration_Info_UClass_UCitySampleSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleSaveGame), 3559727910U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleSaveGame_h_3066508347(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
