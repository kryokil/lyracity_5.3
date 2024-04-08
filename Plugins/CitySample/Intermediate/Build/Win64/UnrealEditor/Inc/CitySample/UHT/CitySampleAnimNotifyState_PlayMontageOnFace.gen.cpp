// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Anim/CitySampleAnimNotifyState_PlayMontageOnFace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleAnimNotifyState_PlayMontageOnFace() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	void UCitySampleAnimNotifyState_PlayMontageOnFace::StaticRegisterNativesUCitySampleAnimNotifyState_PlayMontageOnFace()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleAnimNotifyState_PlayMontageOnFace);
	UClass* Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_NoRegister()
	{
		return UCitySampleAnimNotifyState_PlayMontageOnFace::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimToPlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimToPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTryToSync_MetaData[];
#endif
		static void NewProp_bTryToSync_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTryToSync;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopOnNotifyEnd_MetaData[];
#endif
		static void NewProp_bStopOnNotifyEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopOnNotifyEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Anim/CitySampleAnimNotifyState_PlayMontageOnFace.h" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNotifyState_PlayMontageOnFace.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_AnimToPlay_MetaData[] = {
		{ "Category", "Montage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The animation to play. If not using montage, it will create a dynamic one\n" },
#endif
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNotifyState_PlayMontageOnFace.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The animation to play. If not using montage, it will create a dynamic one" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_AnimToPlay = { "AnimToPlay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleAnimNotifyState_PlayMontageOnFace, AnimToPlay), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_AnimToPlay_MetaData), Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_AnimToPlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_bTryToSync_MetaData[] = {
		{ "Category", "Montage" },
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNotifyState_PlayMontageOnFace.h" },
	};
#endif
	void Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_bTryToSync_SetBit(void* Obj)
	{
		((UCitySampleAnimNotifyState_PlayMontageOnFace*)Obj)->bTryToSync = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_bTryToSync = { "bTryToSync", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleAnimNotifyState_PlayMontageOnFace), &Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_bTryToSync_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_bTryToSync_MetaData), Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_bTryToSync_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_bStopOnNotifyEnd_MetaData[] = {
		{ "Category", "Montage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If false, the anim will keep until its duration is up, and potentially past the main montage. This won't work if the anim is played as a dynamic montage.\n" },
#endif
		{ "ModuleRelativePath", "Public/Anim/CitySampleAnimNotifyState_PlayMontageOnFace.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If false, the anim will keep until its duration is up, and potentially past the main montage. This won't work if the anim is played as a dynamic montage." },
#endif
	};
#endif
	void Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_bStopOnNotifyEnd_SetBit(void* Obj)
	{
		((UCitySampleAnimNotifyState_PlayMontageOnFace*)Obj)->bStopOnNotifyEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_bStopOnNotifyEnd = { "bStopOnNotifyEnd", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleAnimNotifyState_PlayMontageOnFace), &Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_bStopOnNotifyEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_bStopOnNotifyEnd_MetaData), Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_bStopOnNotifyEnd_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_AnimToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_bTryToSync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::NewProp_bStopOnNotifyEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleAnimNotifyState_PlayMontageOnFace>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::ClassParams = {
		&UCitySampleAnimNotifyState_PlayMontageOnFace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace()
	{
		if (!Z_Registration_Info_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace.OuterSingleton, Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleAnimNotifyState_PlayMontageOnFace>()
	{
		return UCitySampleAnimNotifyState_PlayMontageOnFace::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleAnimNotifyState_PlayMontageOnFace);
	UCitySampleAnimNotifyState_PlayMontageOnFace::~UCitySampleAnimNotifyState_PlayMontageOnFace() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimNotifyState_PlayMontageOnFace_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimNotifyState_PlayMontageOnFace_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace, UCitySampleAnimNotifyState_PlayMontageOnFace::StaticClass, TEXT("UCitySampleAnimNotifyState_PlayMontageOnFace"), &Z_Registration_Info_UClass_UCitySampleAnimNotifyState_PlayMontageOnFace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleAnimNotifyState_PlayMontageOnFace), 1337388646U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimNotifyState_PlayMontageOnFace_h_4131070805(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimNotifyState_PlayMontageOnFace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Anim_CitySampleAnimNotifyState_PlayMontageOnFace_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
