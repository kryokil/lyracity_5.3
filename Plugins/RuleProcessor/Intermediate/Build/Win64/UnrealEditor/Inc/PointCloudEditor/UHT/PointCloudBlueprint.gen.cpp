// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudEditor/Private/Blueprints/PointCloudBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudBlueprint() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityBlueprint();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudView_NoRegister();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UPointCloudBlueprint();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UPointCloudBlueprint_NoRegister();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UPointCloudBlueprintObject();
	POINTCLOUDEDITOR_API UClass* Z_Construct_UClass_UPointCloudBlueprintObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PointCloudEditor();
// End Cross Module References
	void UPointCloudBlueprint::StaticRegisterNativesUPointCloudBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPointCloudBlueprint);
	UClass* Z_Construct_UClass_UPointCloudBlueprint_NoRegister()
	{
		return UPointCloudBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UPointCloudBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointCloudBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudBlueprint_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudBlueprint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprints/PointCloudBlueprint.h" },
		{ "ModuleRelativePath", "Private/Blueprints/PointCloudBlueprint.h" },
		{ "NotBlueprintType", "true" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointCloudBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloudBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPointCloudBlueprint_Statics::ClassParams = {
		&UPointCloudBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UPointCloudBlueprint_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPointCloudBlueprint()
	{
		if (!Z_Registration_Info_UClass_UPointCloudBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPointCloudBlueprint.OuterSingleton, Z_Construct_UClass_UPointCloudBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPointCloudBlueprint.OuterSingleton;
	}
	template<> POINTCLOUDEDITOR_API UClass* StaticClass<UPointCloudBlueprint>()
	{
		return UPointCloudBlueprint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloudBlueprint);
	UPointCloudBlueprint::~UPointCloudBlueprint() {}
	struct PointCloudBlueprintObject_eventExecute_Parms
	{
		UPointCloudView* View;
	};
	static FName NAME_UPointCloudBlueprintObject_Execute = FName(TEXT("Execute"));
	void UPointCloudBlueprintObject::Execute(UPointCloudView* View)
	{
		PointCloudBlueprintObject_eventExecute_Parms Parms;
		Parms.View=View;
		ProcessEvent(FindFunctionChecked(NAME_UPointCloudBlueprintObject_Execute),&Parms);
	}
	void UPointCloudBlueprintObject::StaticRegisterNativesUPointCloudBlueprintObject()
	{
	}
	struct Z_Construct_UFunction_UPointCloudBlueprintObject_Execute_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_View;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudBlueprintObject_Execute_Statics::NewProp_View = { "View", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudBlueprintObject_eventExecute_Parms, View), Z_Construct_UClass_UPointCloudView_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudBlueprintObject_Execute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudBlueprintObject_Execute_Statics::NewProp_View,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudBlueprintObject_Execute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Blueprints/PointCloudBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudBlueprintObject_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudBlueprintObject, nullptr, "Execute", nullptr, nullptr, Z_Construct_UFunction_UPointCloudBlueprintObject_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudBlueprintObject_Execute_Statics::PropPointers), sizeof(PointCloudBlueprintObject_eventExecute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudBlueprintObject_Execute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudBlueprintObject_Execute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudBlueprintObject_Execute_Statics::PropPointers) < 2048);
	static_assert(sizeof(PointCloudBlueprintObject_eventExecute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudBlueprintObject_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudBlueprintObject_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPointCloudBlueprintObject);
	UClass* Z_Construct_UClass_UPointCloudBlueprintObject_NoRegister()
	{
		return UPointCloudBlueprintObject::StaticClass();
	}
	struct Z_Construct_UClass_UPointCloudBlueprintObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointCloudBlueprintObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloudEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudBlueprintObject_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPointCloudBlueprintObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPointCloudBlueprintObject_Execute, "Execute" }, // 419670355
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudBlueprintObject_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudBlueprintObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Blueprints/PointCloudBlueprint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Blueprints/PointCloudBlueprint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointCloudBlueprintObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloudBlueprintObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPointCloudBlueprintObject_Statics::ClassParams = {
		&UPointCloudBlueprintObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000002A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudBlueprintObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UPointCloudBlueprintObject_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPointCloudBlueprintObject()
	{
		if (!Z_Registration_Info_UClass_UPointCloudBlueprintObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPointCloudBlueprintObject.OuterSingleton, Z_Construct_UClass_UPointCloudBlueprintObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPointCloudBlueprintObject.OuterSingleton;
	}
	template<> POINTCLOUDEDITOR_API UClass* StaticClass<UPointCloudBlueprintObject>()
	{
		return UPointCloudBlueprintObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloudBlueprintObject);
	UPointCloudBlueprintObject::~UPointCloudBlueprintObject() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Blueprints_PointCloudBlueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Blueprints_PointCloudBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPointCloudBlueprint, UPointCloudBlueprint::StaticClass, TEXT("UPointCloudBlueprint"), &Z_Registration_Info_UClass_UPointCloudBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPointCloudBlueprint), 1052771560U) },
		{ Z_Construct_UClass_UPointCloudBlueprintObject, UPointCloudBlueprintObject::StaticClass, TEXT("UPointCloudBlueprintObject"), &Z_Registration_Info_UClass_UPointCloudBlueprintObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPointCloudBlueprintObject), 1672967890U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Blueprints_PointCloudBlueprint_h_714941253(TEXT("/Script/PointCloudEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Blueprints_PointCloudBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloudEditor_Private_Blueprints_PointCloudBlueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
