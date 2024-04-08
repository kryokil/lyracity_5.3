// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficEditor/Public/MassTrafficEditorFunctionLibrary.h"
#include "ZoneGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficEditorFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MASSTRAFFICEDITOR_API UClass* Z_Construct_UClass_UMassTrafficEditorFunctionLibrary();
	MASSTRAFFICEDITOR_API UClass* Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassTrafficEditor();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTag();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagMask();
// End Cross Module References
	DEFINE_FUNCTION(UMassTrafficEditorFunctionLibrary::execAddTagToTagMask)
	{
		P_GET_STRUCT(FZoneGraphTagMask,Z_Param_TagMask);
		P_GET_STRUCT_REF(FZoneGraphTag,Z_Param_Out_AddTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FZoneGraphTagMask*)Z_Param__Result=UMassTrafficEditorFunctionLibrary::AddTagToTagMask(Z_Param_TagMask,Z_Param_Out_AddTag);
		P_NATIVE_END;
	}
	void UMassTrafficEditorFunctionLibrary::StaticRegisterNativesUMassTrafficEditorFunctionLibrary()
	{
		UClass* Class = UMassTrafficEditorFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTagToTagMask", &UMassTrafficEditorFunctionLibrary::execAddTagToTagMask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics
	{
		struct MassTrafficEditorFunctionLibrary_eventAddTagToTagMask_Parms
		{
			FZoneGraphTagMask TagMask;
			FZoneGraphTag AddTag;
			FZoneGraphTagMask ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AddTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::NewProp_TagMask = { "TagMask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficEditorFunctionLibrary_eventAddTagToTagMask_Parms, TagMask), Z_Construct_UScriptStruct_FZoneGraphTagMask, METADATA_PARAMS(0, nullptr) }; // 2479371343
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::NewProp_AddTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::NewProp_AddTag = { "AddTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficEditorFunctionLibrary_eventAddTagToTagMask_Parms, AddTag), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::NewProp_AddTag_MetaData), Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::NewProp_AddTag_MetaData) }; // 2776536726
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficEditorFunctionLibrary_eventAddTagToTagMask_Parms, ReturnValue), Z_Construct_UScriptStruct_FZoneGraphTagMask, METADATA_PARAMS(0, nullptr) }; // 2479371343
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::NewProp_TagMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::NewProp_AddTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Zone Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add a Zone Graph Tag to a Zone Graph Tag Mask. */" },
#endif
		{ "DisplayName", "Add" },
		{ "ModuleRelativePath", "Public/MassTrafficEditorFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a Zone Graph Tag to a Zone Graph Tag Mask." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassTrafficEditorFunctionLibrary, nullptr, "AddTagToTagMask", nullptr, nullptr, Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::MassTrafficEditorFunctionLibrary_eventAddTagToTagMask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::MassTrafficEditorFunctionLibrary_eventAddTagToTagMask_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficEditorFunctionLibrary);
	UClass* Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_NoRegister()
	{
		return UMassTrafficEditorFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTrafficEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask, "AddTagToTagMask" }, // 257703381
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MassTrafficEditorFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MassTrafficEditorFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficEditorFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_Statics::ClassParams = {
		&UMassTrafficEditorFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassTrafficEditorFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficEditorFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficEditorFunctionLibrary.OuterSingleton, Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficEditorFunctionLibrary.OuterSingleton;
	}
	template<> MASSTRAFFICEDITOR_API UClass* StaticClass<UMassTrafficEditorFunctionLibrary>()
	{
		return UMassTrafficEditorFunctionLibrary::StaticClass();
	}
	UMassTrafficEditorFunctionLibrary::UMassTrafficEditorFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficEditorFunctionLibrary);
	UMassTrafficEditorFunctionLibrary::~UMassTrafficEditorFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficEditorFunctionLibrary, UMassTrafficEditorFunctionLibrary::StaticClass, TEXT("UMassTrafficEditorFunctionLibrary"), &Z_Registration_Info_UClass_UMassTrafficEditorFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficEditorFunctionLibrary), 827396812U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorFunctionLibrary_h_3296236612(TEXT("/Script/MassTrafficEditor"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
