// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficEditor/Public/MassTrafficBuilderMarkerActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficBuilderMarkerActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	MASSTRAFFICEDITOR_API UClass* Z_Construct_UClass_AMassTrafficBuilderMarkerActor();
	MASSTRAFFICEDITOR_API UClass* Z_Construct_UClass_AMassTrafficBuilderMarkerActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassTrafficEditor();
// End Cross Module References
	void AMassTrafficBuilderMarkerActor::StaticRegisterNativesAMassTrafficBuilderMarkerActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMassTrafficBuilderMarkerActor);
	UClass* Z_Construct_UClass_AMassTrafficBuilderMarkerActor_NoRegister()
	{
		return AMassTrafficBuilderMarkerActor::StaticClass();
	}
	struct Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseGroundRotation_MetaData[];
#endif
		static void NewProp_bUseGroundRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGroundRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ErrorDescription;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTrafficEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MassTrafficBuilderMarkerActor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderMarkerActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderMarkerActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderMarkerActor, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::NewProp_ArrowComponent_MetaData), Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::NewProp_ArrowComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::NewProp_bUseGroundRotation_MetaData[] = {
		{ "Category", "MassTrafficBuilderMarkerActor" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderMarkerActor.h" },
	};
#endif
	void Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::NewProp_bUseGroundRotation_SetBit(void* Obj)
	{
		((AMassTrafficBuilderMarkerActor*)Obj)->bUseGroundRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::NewProp_bUseGroundRotation = { "bUseGroundRotation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMassTrafficBuilderMarkerActor), &Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::NewProp_bUseGroundRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::NewProp_bUseGroundRotation_MetaData), Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::NewProp_bUseGroundRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::NewProp_ErrorDescription_MetaData[] = {
		{ "Category", "MassTrafficBuilderMarkerActor" },
		{ "ModuleRelativePath", "Public/MassTrafficBuilderMarkerActor.h" },
		{ "MultiLine", "TRUE" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::NewProp_ErrorDescription = { "ErrorDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBuilderMarkerActor, ErrorDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::NewProp_ErrorDescription_MetaData), Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::NewProp_ErrorDescription_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::NewProp_ArrowComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::NewProp_bUseGroundRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::NewProp_ErrorDescription,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMassTrafficBuilderMarkerActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::ClassParams = {
		&AMassTrafficBuilderMarkerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMassTrafficBuilderMarkerActor()
	{
		if (!Z_Registration_Info_UClass_AMassTrafficBuilderMarkerActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMassTrafficBuilderMarkerActor.OuterSingleton, Z_Construct_UClass_AMassTrafficBuilderMarkerActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMassTrafficBuilderMarkerActor.OuterSingleton;
	}
	template<> MASSTRAFFICEDITOR_API UClass* StaticClass<AMassTrafficBuilderMarkerActor>()
	{
		return AMassTrafficBuilderMarkerActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMassTrafficBuilderMarkerActor);
	AMassTrafficBuilderMarkerActor::~AMassTrafficBuilderMarkerActor() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderMarkerActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderMarkerActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMassTrafficBuilderMarkerActor, AMassTrafficBuilderMarkerActor::StaticClass, TEXT("AMassTrafficBuilderMarkerActor"), &Z_Registration_Info_UClass_AMassTrafficBuilderMarkerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMassTrafficBuilderMarkerActor), 3737385267U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderMarkerActor_h_3173944271(TEXT("/Script/MassTrafficEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderMarkerActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderMarkerActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
