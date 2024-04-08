// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Util/CitySampleRumbleInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleRumbleInfo() {}
// Cross Module References
	CITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCitySampleRumbleInfo();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CitySampleRumbleInfo;
class UScriptStruct* FCitySampleRumbleInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CitySampleRumbleInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CitySampleRumbleInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCitySampleRumbleInfo, (UObject*)Z_Construct_UPackage__Script_CitySample(), TEXT("CitySampleRumbleInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CitySampleRumbleInfo.OuterSingleton;
}
template<> CITYSAMPLE_API UScriptStruct* StaticStruct<FCitySampleRumbleInfo>()
{
	return FCitySampleRumbleInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRightLarge_MetaData[];
#endif
		static void NewProp_bUseRightLarge_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRightLarge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRightSmall_MetaData[];
#endif
		static void NewProp_bUseRightSmall_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRightSmall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLeftLarge_MetaData[];
#endif
		static void NewProp_bUseLeftLarge_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLeftLarge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLeftSmall_MetaData[];
#endif
		static void NewProp_bUseLeftSmall_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLeftSmall;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct for storing generic rumble info and what specific motors in the gamepad will be affected\n */" },
#endif
		{ "ModuleRelativePath", "Public/Util/CitySampleRumbleInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct for storing generic rumble info and what specific motors in the gamepad will be affected" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCitySampleRumbleInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "CitySampleRumbleInfo" },
		{ "ModuleRelativePath", "Public/Util/CitySampleRumbleInfo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleRumbleInfo, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_Duration_MetaData), Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_Duration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "CitySampleRumbleInfo" },
		{ "ModuleRelativePath", "Public/Util/CitySampleRumbleInfo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCitySampleRumbleInfo, Intensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_Intensity_MetaData), Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_Intensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseRightLarge_MetaData[] = {
		{ "Category", "CitySampleRumbleInfo" },
		{ "ModuleRelativePath", "Public/Util/CitySampleRumbleInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseRightLarge_SetBit(void* Obj)
	{
		((FCitySampleRumbleInfo*)Obj)->bUseRightLarge = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseRightLarge = { "bUseRightLarge", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySampleRumbleInfo), &Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseRightLarge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseRightLarge_MetaData), Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseRightLarge_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseRightSmall_MetaData[] = {
		{ "Category", "CitySampleRumbleInfo" },
		{ "ModuleRelativePath", "Public/Util/CitySampleRumbleInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseRightSmall_SetBit(void* Obj)
	{
		((FCitySampleRumbleInfo*)Obj)->bUseRightSmall = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseRightSmall = { "bUseRightSmall", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySampleRumbleInfo), &Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseRightSmall_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseRightSmall_MetaData), Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseRightSmall_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseLeftLarge_MetaData[] = {
		{ "Category", "CitySampleRumbleInfo" },
		{ "ModuleRelativePath", "Public/Util/CitySampleRumbleInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseLeftLarge_SetBit(void* Obj)
	{
		((FCitySampleRumbleInfo*)Obj)->bUseLeftLarge = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseLeftLarge = { "bUseLeftLarge", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySampleRumbleInfo), &Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseLeftLarge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseLeftLarge_MetaData), Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseLeftLarge_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseLeftSmall_MetaData[] = {
		{ "Category", "CitySampleRumbleInfo" },
		{ "ModuleRelativePath", "Public/Util/CitySampleRumbleInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseLeftSmall_SetBit(void* Obj)
	{
		((FCitySampleRumbleInfo*)Obj)->bUseLeftSmall = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseLeftSmall = { "bUseLeftSmall", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCitySampleRumbleInfo), &Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseLeftSmall_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseLeftSmall_MetaData), Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseLeftSmall_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_Intensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseRightLarge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseRightSmall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseLeftLarge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewProp_bUseLeftSmall,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
		nullptr,
		&NewStructOps,
		"CitySampleRumbleInfo",
		Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::PropPointers),
		sizeof(FCitySampleRumbleInfo),
		alignof(FCitySampleRumbleInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCitySampleRumbleInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_CitySampleRumbleInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CitySampleRumbleInfo.InnerSingleton, Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CitySampleRumbleInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleRumbleInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleRumbleInfo_h_Statics::ScriptStructInfo[] = {
		{ FCitySampleRumbleInfo::StaticStruct, Z_Construct_UScriptStruct_FCitySampleRumbleInfo_Statics::NewStructOps, TEXT("CitySampleRumbleInfo"), &Z_Registration_Info_UScriptStruct_CitySampleRumbleInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCitySampleRumbleInfo), 1559263547U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleRumbleInfo_h_3723875873(TEXT("/Script/CitySample"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleRumbleInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_CitySampleRumbleInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
