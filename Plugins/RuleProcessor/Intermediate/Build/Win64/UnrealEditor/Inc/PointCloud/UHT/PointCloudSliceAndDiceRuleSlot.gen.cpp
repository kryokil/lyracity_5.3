// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloud/Public/PointCloudSliceAndDiceRuleSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudSliceAndDiceRuleSlot() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRuleSlot();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudRuleSlot_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PointCloud();
// End Cross Module References
	void UPointCloudRuleSlot::StaticRegisterNativesUPointCloudRuleSlot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPointCloudRuleSlot);
	UClass* Z_Construct_UClass_UPointCloudRuleSlot_NoRegister()
	{
		return UPointCloudRuleSlot::StaticClass();
	}
	struct Z_Construct_UClass_UPointCloudRuleSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExternallyVisible_MetaData[];
#endif
		static void NewProp_bExternallyVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExternallyVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointCloudRuleSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloud,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudRuleSlot_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudRuleSlot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A Slot is a place a rule can be placed. Rules may have none, one or more slots. This object stores information about a slot \n*/" },
#endif
		{ "IncludePath", "PointCloudSliceAndDiceRuleSlot.h" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRuleSlot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A Slot is a place a rule can be placed. Rules may have none, one or more slots. This object stores information about a slot" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudRuleSlot_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRuleSlot.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPointCloudRuleSlot_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPointCloudRuleSlot, Label), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudRuleSlot_Statics::NewProp_Label_MetaData), Z_Construct_UClass_UPointCloudRuleSlot_Statics::NewProp_Label_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudRuleSlot_Statics::NewProp_bExternallyVisible_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRuleSlot.h" },
	};
#endif
	void Z_Construct_UClass_UPointCloudRuleSlot_Statics::NewProp_bExternallyVisible_SetBit(void* Obj)
	{
		((UPointCloudRuleSlot*)Obj)->bExternallyVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPointCloudRuleSlot_Statics::NewProp_bExternallyVisible = { "bExternallyVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPointCloudRuleSlot), &Z_Construct_UClass_UPointCloudRuleSlot_Statics::NewProp_bExternallyVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudRuleSlot_Statics::NewProp_bExternallyVisible_MetaData), Z_Construct_UClass_UPointCloudRuleSlot_Statics::NewProp_bExternallyVisible_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudRuleSlot_Statics::NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceRuleSlot.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPointCloudRuleSlot_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPointCloudRuleSlot, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudRuleSlot_Statics::NewProp_Guid_MetaData), Z_Construct_UClass_UPointCloudRuleSlot_Statics::NewProp_Guid_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPointCloudRuleSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudRuleSlot_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudRuleSlot_Statics::NewProp_bExternallyVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudRuleSlot_Statics::NewProp_Guid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointCloudRuleSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloudRuleSlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPointCloudRuleSlot_Statics::ClassParams = {
		&UPointCloudRuleSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPointCloudRuleSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudRuleSlot_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudRuleSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UPointCloudRuleSlot_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudRuleSlot_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPointCloudRuleSlot()
	{
		if (!Z_Registration_Info_UClass_UPointCloudRuleSlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPointCloudRuleSlot.OuterSingleton, Z_Construct_UClass_UPointCloudRuleSlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPointCloudRuleSlot.OuterSingleton;
	}
	template<> POINTCLOUD_API UClass* StaticClass<UPointCloudRuleSlot>()
	{
		return UPointCloudRuleSlot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloudRuleSlot);
	UPointCloudRuleSlot::~UPointCloudRuleSlot() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceRuleSlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceRuleSlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPointCloudRuleSlot, UPointCloudRuleSlot::StaticClass, TEXT("UPointCloudRuleSlot"), &Z_Registration_Info_UClass_UPointCloudRuleSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPointCloudRuleSlot), 1511259228U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceRuleSlot_h_1982316948(TEXT("/Script/PointCloud"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceRuleSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceRuleSlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
