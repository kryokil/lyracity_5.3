// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficEditor/Public/MassTrafficEditorBaseActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficEditorBaseActor() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_AEditorUtilityActor();
	MASSTRAFFICEDITOR_API UClass* Z_Construct_UClass_AMassTrafficEditorBaseActor();
	MASSTRAFFICEDITOR_API UClass* Z_Construct_UClass_AMassTrafficEditorBaseActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassTrafficEditor();
// End Cross Module References
	DEFINE_FUNCTION(AMassTrafficEditorBaseActor::execRefreshEditor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshEditor();
		P_NATIVE_END;
	}
	void AMassTrafficEditorBaseActor::StaticRegisterNativesAMassTrafficEditorBaseActor()
	{
		UClass* Class = AMassTrafficEditorBaseActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RefreshEditor", &AMassTrafficEditorBaseActor::execRefreshEditor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMassTrafficEditorBaseActor_RefreshEditor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassTrafficEditorBaseActor_RefreshEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Mass Traffic Editor|Mass Traffic Builder|Editor" },
		{ "ModuleRelativePath", "Public/MassTrafficEditorBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficEditorBaseActor_RefreshEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassTrafficEditorBaseActor, nullptr, "RefreshEditor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficEditorBaseActor_RefreshEditor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficEditorBaseActor_RefreshEditor_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMassTrafficEditorBaseActor_RefreshEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficEditorBaseActor_RefreshEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMassTrafficEditorBaseActor);
	UClass* Z_Construct_UClass_AMassTrafficEditorBaseActor_NoRegister()
	{
		return AMassTrafficEditorBaseActor::StaticClass();
	}
	struct Z_Construct_UClass_AMassTrafficEditorBaseActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanTickInEditor_MetaData[];
#endif
		static void NewProp_CanTickInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanTickInEditor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMassTrafficEditorBaseActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEditorUtilityActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTrafficEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficEditorBaseActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMassTrafficEditorBaseActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMassTrafficEditorBaseActor_RefreshEditor, "RefreshEditor" }, // 3310253192
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficEditorBaseActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficEditorBaseActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MassTrafficEditorBaseActor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficEditorBaseActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassTrafficEditorBaseActor_Statics::NewProp_CanTickInEditor_MetaData[] = {
		{ "Category", "Mass Traffic|Mass Traffic Editor|Tick" },
		{ "ModuleRelativePath", "Public/MassTrafficEditorBaseActor.h" },
	};
#endif
	void Z_Construct_UClass_AMassTrafficEditorBaseActor_Statics::NewProp_CanTickInEditor_SetBit(void* Obj)
	{
		((AMassTrafficEditorBaseActor*)Obj)->CanTickInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMassTrafficEditorBaseActor_Statics::NewProp_CanTickInEditor = { "CanTickInEditor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMassTrafficEditorBaseActor), &Z_Construct_UClass_AMassTrafficEditorBaseActor_Statics::NewProp_CanTickInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficEditorBaseActor_Statics::NewProp_CanTickInEditor_MetaData), Z_Construct_UClass_AMassTrafficEditorBaseActor_Statics::NewProp_CanTickInEditor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMassTrafficEditorBaseActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficEditorBaseActor_Statics::NewProp_CanTickInEditor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMassTrafficEditorBaseActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMassTrafficEditorBaseActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMassTrafficEditorBaseActor_Statics::ClassParams = {
		&AMassTrafficEditorBaseActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMassTrafficEditorBaseActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficEditorBaseActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficEditorBaseActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMassTrafficEditorBaseActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficEditorBaseActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMassTrafficEditorBaseActor()
	{
		if (!Z_Registration_Info_UClass_AMassTrafficEditorBaseActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMassTrafficEditorBaseActor.OuterSingleton, Z_Construct_UClass_AMassTrafficEditorBaseActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMassTrafficEditorBaseActor.OuterSingleton;
	}
	template<> MASSTRAFFICEDITOR_API UClass* StaticClass<AMassTrafficEditorBaseActor>()
	{
		return AMassTrafficEditorBaseActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMassTrafficEditorBaseActor);
	AMassTrafficEditorBaseActor::~AMassTrafficEditorBaseActor() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorBaseActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorBaseActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMassTrafficEditorBaseActor, AMassTrafficEditorBaseActor::StaticClass, TEXT("AMassTrafficEditorBaseActor"), &Z_Registration_Info_UClass_AMassTrafficEditorBaseActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMassTrafficEditorBaseActor), 3657216925U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorBaseActor_h_3578200476(TEXT("/Script/MassTrafficEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorBaseActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorBaseActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
