// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Camera/CameraMod_PostProcessMaterial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraMod_PostProcessMaterial() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCameraMod_PostProcessMaterial();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCameraMod_PostProcessMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	void UCameraMod_PostProcessMaterial::StaticRegisterNativesUCameraMod_PostProcessMaterial()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraMod_PostProcessMaterial);
	UClass* Z_Construct_UClass_UCameraMod_PostProcessMaterial_NoRegister()
	{
		return UCameraMod_PostProcessMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UCameraMod_PostProcessMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentVisionPostProcessMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AgentVisionPostProcessMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartDisabled_MetaData[];
#endif
		static void NewProp_bStartDisabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartDisabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraMod_PostProcessMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMod_PostProcessMaterial_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMod_PostProcessMaterial_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Basic class for a camera modifier that's a simple postprocess material camera overlay. Subclass in BP for specific effects.\n */" },
#endif
		{ "IncludePath", "Camera/CameraMod_PostProcessMaterial.h" },
		{ "ModuleRelativePath", "Public/Camera/CameraMod_PostProcessMaterial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic class for a camera modifier that's a simple postprocess material camera overlay. Subclass in BP for specific effects." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMod_PostProcessMaterial_Statics::NewProp_AgentVisionPostProcessMaterial_MetaData[] = {
		{ "Category", "CameraMod_PostProcessMaterial" },
		{ "ModuleRelativePath", "Public/Camera/CameraMod_PostProcessMaterial.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraMod_PostProcessMaterial_Statics::NewProp_AgentVisionPostProcessMaterial = { "AgentVisionPostProcessMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraMod_PostProcessMaterial, AgentVisionPostProcessMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMod_PostProcessMaterial_Statics::NewProp_AgentVisionPostProcessMaterial_MetaData), Z_Construct_UClass_UCameraMod_PostProcessMaterial_Statics::NewProp_AgentVisionPostProcessMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraMod_PostProcessMaterial_Statics::NewProp_bStartDisabled_MetaData[] = {
		{ "Category", "CameraMod_PostProcessMaterial" },
		{ "ModuleRelativePath", "Public/Camera/CameraMod_PostProcessMaterial.h" },
	};
#endif
	void Z_Construct_UClass_UCameraMod_PostProcessMaterial_Statics::NewProp_bStartDisabled_SetBit(void* Obj)
	{
		((UCameraMod_PostProcessMaterial*)Obj)->bStartDisabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraMod_PostProcessMaterial_Statics::NewProp_bStartDisabled = { "bStartDisabled", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCameraMod_PostProcessMaterial), &Z_Construct_UClass_UCameraMod_PostProcessMaterial_Statics::NewProp_bStartDisabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMod_PostProcessMaterial_Statics::NewProp_bStartDisabled_MetaData), Z_Construct_UClass_UCameraMod_PostProcessMaterial_Statics::NewProp_bStartDisabled_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraMod_PostProcessMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMod_PostProcessMaterial_Statics::NewProp_AgentVisionPostProcessMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraMod_PostProcessMaterial_Statics::NewProp_bStartDisabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraMod_PostProcessMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraMod_PostProcessMaterial>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraMod_PostProcessMaterial_Statics::ClassParams = {
		&UCameraMod_PostProcessMaterial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCameraMod_PostProcessMaterial_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMod_PostProcessMaterial_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMod_PostProcessMaterial_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraMod_PostProcessMaterial_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraMod_PostProcessMaterial_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCameraMod_PostProcessMaterial()
	{
		if (!Z_Registration_Info_UClass_UCameraMod_PostProcessMaterial.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraMod_PostProcessMaterial.OuterSingleton, Z_Construct_UClass_UCameraMod_PostProcessMaterial_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraMod_PostProcessMaterial.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCameraMod_PostProcessMaterial>()
	{
		return UCameraMod_PostProcessMaterial::StaticClass();
	}
	UCameraMod_PostProcessMaterial::UCameraMod_PostProcessMaterial(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraMod_PostProcessMaterial);
	UCameraMod_PostProcessMaterial::~UCameraMod_PostProcessMaterial() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CameraMod_PostProcessMaterial_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CameraMod_PostProcessMaterial_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraMod_PostProcessMaterial, UCameraMod_PostProcessMaterial::StaticClass, TEXT("UCameraMod_PostProcessMaterial"), &Z_Registration_Info_UClass_UCameraMod_PostProcessMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraMod_PostProcessMaterial), 1586195455U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CameraMod_PostProcessMaterial_h_4087046901(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CameraMod_PostProcessMaterial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_CameraMod_PostProcessMaterial_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
