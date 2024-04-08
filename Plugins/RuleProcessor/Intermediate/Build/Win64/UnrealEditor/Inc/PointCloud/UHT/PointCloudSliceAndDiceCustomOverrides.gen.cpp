// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloud/Public/PointCloudSliceAndDiceCustomOverrides.h"
#include "InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudSliceAndDiceCustomOverrides() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FCustomOverrides();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_PointCloud();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomOverrides;
class UScriptStruct* FCustomOverrides::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomOverrides.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomOverrides.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomOverrides, (UObject*)Z_Construct_UPackage__Script_PointCloud(), TEXT("CustomOverrides"));
	}
	return Z_Registration_Info_UScriptStruct_CustomOverrides.OuterSingleton;
}
template<> POINTCLOUD_API UScriptStruct* StaticStruct<FCustomOverrides>()
{
	return FCustomOverrides::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomOverrides_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructClass_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StructClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructInstance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StructInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomOverrides_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceCustomOverrides.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomOverrides_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomOverrides>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomOverrides_Statics::NewProp_StructClass_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds the dynamically created struct class */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceCustomOverrides.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the dynamically created struct class" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCustomOverrides_Statics::NewProp_StructClass = { "StructClass", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomOverrides, StructClass), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomOverrides_Statics::NewProp_StructClass_MetaData), Z_Construct_UScriptStruct_FCustomOverrides_Statics::NewProp_StructClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomOverrides_Statics::NewProp_StructInstance_MetaData[] = {
		{ "Category", "CustomOverrides" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds the struct instance */" },
#endif
		{ "DisplayName", "Custom override values" },
		{ "ModuleRelativePath", "Public/PointCloudSliceAndDiceCustomOverrides.h" },
		{ "StructTypeConst", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the struct instance" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomOverrides_Statics::NewProp_StructInstance = { "StructInstance", nullptr, (EPropertyFlags)0x0020080000002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomOverrides, StructInstance), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomOverrides_Statics::NewProp_StructInstance_MetaData), Z_Construct_UScriptStruct_FCustomOverrides_Statics::NewProp_StructInstance_MetaData) }; // 2114042832
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomOverrides_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomOverrides_Statics::NewProp_StructClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomOverrides_Statics::NewProp_StructInstance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomOverrides_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloud,
		nullptr,
		&NewStructOps,
		"CustomOverrides",
		Z_Construct_UScriptStruct_FCustomOverrides_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomOverrides_Statics::PropPointers),
		sizeof(FCustomOverrides),
		alignof(FCustomOverrides),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomOverrides_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomOverrides_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomOverrides_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCustomOverrides()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomOverrides.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomOverrides.InnerSingleton, Z_Construct_UScriptStruct_FCustomOverrides_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomOverrides.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceCustomOverrides_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceCustomOverrides_h_Statics::ScriptStructInfo[] = {
		{ FCustomOverrides::StaticStruct, Z_Construct_UScriptStruct_FCustomOverrides_Statics::NewStructOps, TEXT("CustomOverrides"), &Z_Registration_Info_UScriptStruct_CustomOverrides, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomOverrides), 3690033724U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceCustomOverrides_h_868892925(TEXT("/Script/PointCloud"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceCustomOverrides_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudSliceAndDiceCustomOverrides_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
