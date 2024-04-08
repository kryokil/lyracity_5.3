// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloud/Public/PointCloud.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloud() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloud();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloud_NoRegister();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudView_NoRegister();
	POINTCLOUD_API UEnum* Z_Construct_UEnum_PointCloud_EFilterMode();
	POINTCLOUD_API UScriptStruct* Z_Construct_UScriptStruct_FPointCloudPoint();
	UPackage* Z_Construct_UPackage__Script_PointCloud();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFilterMode;
	static UEnum* EFilterMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFilterMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFilterMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PointCloud_EFilterMode, (UObject*)Z_Construct_UPackage__Script_PointCloud(), TEXT("EFilterMode"));
		}
		return Z_Registration_Info_UEnum_EFilterMode.OuterSingleton;
	}
	template<> POINTCLOUD_API UEnum* StaticEnum<EFilterMode>()
	{
		return EFilterMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PointCloud_EFilterMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PointCloud_EFilterMode_Statics::Enumerators[] = {
		{ "EFilterMode::FILTER_Or", (int64)EFilterMode::FILTER_Or },
		{ "EFilterMode::FILTER_And", (int64)EFilterMode::FILTER_And },
		{ "EFilterMode::FILTER_Not", (int64)EFilterMode::FILTER_Not },
		{ "EFilterMode::FILTER_MAX", (int64)EFilterMode::FILTER_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PointCloud_EFilterMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This enum can be used to control how sets of results or data are combined in the Pointcloud. It represents the basic boolen operations */" },
#endif
		{ "FILTER_And.DisplayName", "AND" },
		{ "FILTER_And.Name", "EFilterMode::FILTER_And" },
		{ "FILTER_MAX.Name", "EFilterMode::FILTER_MAX" },
		{ "FILTER_Not.DisplayName", "NOT" },
		{ "FILTER_Not.Name", "EFilterMode::FILTER_Not" },
		{ "FILTER_Or.DisplayName", "OR" },
		{ "FILTER_Or.Name", "EFilterMode::FILTER_Or" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This enum can be used to control how sets of results or data are combined in the Pointcloud. It represents the basic boolen operations" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PointCloud_EFilterMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PointCloud,
		nullptr,
		"EFilterMode",
		"EFilterMode",
		Z_Construct_UEnum_PointCloud_EFilterMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PointCloud_EFilterMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PointCloud_EFilterMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PointCloud_EFilterMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PointCloud_EFilterMode()
	{
		if (!Z_Registration_Info_UEnum_EFilterMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFilterMode.InnerSingleton, Z_Construct_UEnum_PointCloud_EFilterMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFilterMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PointCloudPoint;
class UScriptStruct* FPointCloudPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PointCloudPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PointCloudPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointCloudPoint, (UObject*)Z_Construct_UPackage__Script_PointCloud(), TEXT("PointCloudPoint"));
	}
	return Z_Registration_Info_UScriptStruct_PointCloudPoint.OuterSingleton;
}
template<> POINTCLOUD_API UScriptStruct* StaticStruct<FPointCloudPoint>()
{
	return FPointCloudPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPointCloudPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Attributes_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Attributes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Attributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPointCloudPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointCloudPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudPoint_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "PointCloudPoint" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPointCloudPoint_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointCloudPoint, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudPoint_Statics::NewProp_Transform_MetaData), Z_Construct_UScriptStruct_FPointCloudPoint_Statics::NewProp_Transform_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPointCloudPoint_Statics::NewProp_Attributes_ValueProp = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPointCloudPoint_Statics::NewProp_Attributes_Key_KeyProp = { "Attributes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointCloudPoint_Statics::NewProp_Attributes_MetaData[] = {
		{ "Category", "PointCloudPoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Map from metadata type to value */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloud.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map from metadata type to value" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPointCloudPoint_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPointCloudPoint, Attributes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudPoint_Statics::NewProp_Attributes_MetaData), Z_Construct_UScriptStruct_FPointCloudPoint_Statics::NewProp_Attributes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPointCloudPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudPoint_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudPoint_Statics::NewProp_Attributes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudPoint_Statics::NewProp_Attributes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointCloudPoint_Statics::NewProp_Attributes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointCloudPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloud,
		nullptr,
		&NewStructOps,
		"PointCloudPoint",
		Z_Construct_UScriptStruct_FPointCloudPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudPoint_Statics::PropPointers),
		sizeof(FPointCloudPoint),
		alignof(FPointCloudPoint),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPointCloudPoint_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointCloudPoint_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPointCloudPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_PointCloudPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PointCloudPoint.InnerSingleton, Z_Construct_UScriptStruct_FPointCloudPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PointCloudPoint.InnerSingleton;
	}
	DEFINE_FUNCTION(UPointCloud::execReplacePoints)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_STRUCT_REF(FBox,Z_Param_Out_ReimportBounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReplacePoints(Z_Param_FileName,Z_Param_Out_ReimportBounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloud::execReimport)
	{
		P_GET_STRUCT_REF(FBox,Z_Param_Out_ReimportBounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Reimport(Z_Param_Out_ReimportBounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloud::execGetLoadedFiles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetLoadedFiles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloud::execLoggingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoggingEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloud::execStopLogging)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StopLogging();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloud::execStartLogging)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartLogging(Z_Param_InFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloud::execSaveToDisk)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveToDisk(Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloud::execLoadFromPoints)
	{
		P_GET_TARRAY_REF(FPointCloudPoint,Z_Param_Out_InPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadFromPoints(Z_Param_Out_InPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloud::execGetBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox*)Z_Param__Result=P_THIS->GetBounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloud::execGetCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloud::execHasMetaDataAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasMetaDataAttribute(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloud::execHasDefaultAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasDefaultAttribute(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloud::execGetMetadataAttributes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FString>*)Z_Param__Result=P_THIS->GetMetadataAttributes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloud::execGetDefaultAttributes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetDefaultAttributes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloud::execMakeView)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPointCloudView**)Z_Param__Result=P_THIS->MakeView();
		P_NATIVE_END;
	}
	void UPointCloud::StaticRegisterNativesUPointCloud()
	{
		UClass* Class = UPointCloud::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBounds", &UPointCloud::execGetBounds },
			{ "GetCount", &UPointCloud::execGetCount },
			{ "GetDefaultAttributes", &UPointCloud::execGetDefaultAttributes },
			{ "GetLoadedFiles", &UPointCloud::execGetLoadedFiles },
			{ "GetMetadataAttributes", &UPointCloud::execGetMetadataAttributes },
			{ "HasDefaultAttribute", &UPointCloud::execHasDefaultAttribute },
			{ "HasMetaDataAttribute", &UPointCloud::execHasMetaDataAttribute },
			{ "LoadFromPoints", &UPointCloud::execLoadFromPoints },
			{ "LoggingEnabled", &UPointCloud::execLoggingEnabled },
			{ "MakeView", &UPointCloud::execMakeView },
			{ "Reimport", &UPointCloud::execReimport },
			{ "ReplacePoints", &UPointCloud::execReplacePoints },
			{ "SaveToDisk", &UPointCloud::execSaveToDisk },
			{ "StartLogging", &UPointCloud::execStartLogging },
			{ "StopLogging", &UPointCloud::execStopLogging },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPointCloud_GetBounds_Statics
	{
		struct PointCloud_eventGetBounds_Parms
		{
			FBox ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloud_GetBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloud_eventGetBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_GetBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_GetBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloud|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Return the bounding box of all of the points in this PointCloud\n\x09* @return the bounding box that contains all of the points in this PointCloud\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloud.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the bounding box of all of the points in this PointCloud\n@return the bounding box that contains all of the points in this PointCloud" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_GetBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "GetBounds", nullptr, nullptr, Z_Construct_UFunction_UPointCloud_GetBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloud_GetBounds_Statics::PointCloud_eventGetBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloud_GetBounds_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetBounds_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloud_GetBounds_Statics::PointCloud_eventGetBounds_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloud_GetBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloud_GetBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_GetCount_Statics
	{
		struct PointCloud_eventGetCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloud_GetCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloud_eventGetCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_GetCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_GetCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloud|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// return the number of points in the point cloud \n" },
#endif
		{ "ModuleRelativePath", "Public/PointCloud.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "return the number of points in the point cloud" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_GetCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "GetCount", nullptr, nullptr, Z_Construct_UFunction_UPointCloud_GetCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloud_GetCount_Statics::PointCloud_eventGetCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloud_GetCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloud_GetCount_Statics::PointCloud_eventGetCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloud_GetCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloud_GetCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_GetDefaultAttributes_Statics
	{
		struct PointCloud_eventGetDefaultAttributes_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloud_GetDefaultAttributes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloud_GetDefaultAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloud_eventGetDefaultAttributes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_GetDefaultAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetDefaultAttributes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetDefaultAttributes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_GetDefaultAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloud|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Return the default attributes each item in the point cloud have by default. Data in the point cloud is divided into Default attributes and Metadata.\n\x09* @return The list of attribute names that each item in the point cloud has by default\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloud.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the default attributes each item in the point cloud have by default. Data in the point cloud is divided into Default attributes and Metadata.\n@return The list of attribute names that each item in the point cloud has by default" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_GetDefaultAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "GetDefaultAttributes", nullptr, nullptr, Z_Construct_UFunction_UPointCloud_GetDefaultAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetDefaultAttributes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloud_GetDefaultAttributes_Statics::PointCloud_eventGetDefaultAttributes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetDefaultAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloud_GetDefaultAttributes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetDefaultAttributes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloud_GetDefaultAttributes_Statics::PointCloud_eventGetDefaultAttributes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloud_GetDefaultAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloud_GetDefaultAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_GetLoadedFiles_Statics
	{
		struct PointCloud_eventGetLoadedFiles_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloud_GetLoadedFiles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloud_GetLoadedFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloud_eventGetLoadedFiles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_GetLoadedFiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetLoadedFiles_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetLoadedFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_GetLoadedFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloud|Files" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* A point cloud may be composed of various different input files. This method returns the paths of the files loaded into this pointcloud\n\x09* @return The list of paths of files that were loaded to make this pointcloud\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloud.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A point cloud may be composed of various different input files. This method returns the paths of the files loaded into this pointcloud\n@return The list of paths of files that were loaded to make this pointcloud" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_GetLoadedFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "GetLoadedFiles", nullptr, nullptr, Z_Construct_UFunction_UPointCloud_GetLoadedFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetLoadedFiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloud_GetLoadedFiles_Statics::PointCloud_eventGetLoadedFiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetLoadedFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloud_GetLoadedFiles_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetLoadedFiles_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloud_GetLoadedFiles_Statics::PointCloud_eventGetLoadedFiles_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloud_GetLoadedFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloud_GetLoadedFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_GetMetadataAttributes_Statics
	{
		struct PointCloud_eventGetMetadataAttributes_Parms
		{
			TSet<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloud_GetMetadataAttributes_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UPointCloud_GetMetadataAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloud_eventGetMetadataAttributes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_GetMetadataAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetMetadataAttributes_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_GetMetadataAttributes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_GetMetadataAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloud|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Return the names of the metadata items in this point cloud. Each point may have zero, one or more items of metadata associated with it.\n\x09* Metadata is sparse and not all Points in the cloud may have each item of Metadata.\n\x09* @return The list of Metadata names represented in this PointCloud\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloud.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the names of the metadata items in this point cloud. Each point may have zero, one or more items of metadata associated with it.\nMetadata is sparse and not all Points in the cloud may have each item of Metadata.\n@return The list of Metadata names represented in this PointCloud" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_GetMetadataAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "GetMetadataAttributes", nullptr, nullptr, Z_Construct_UFunction_UPointCloud_GetMetadataAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetMetadataAttributes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloud_GetMetadataAttributes_Statics::PointCloud_eventGetMetadataAttributes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetMetadataAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloud_GetMetadataAttributes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_GetMetadataAttributes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloud_GetMetadataAttributes_Statics::PointCloud_eventGetMetadataAttributes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloud_GetMetadataAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloud_GetMetadataAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_HasDefaultAttribute_Statics
	{
		struct PointCloud_eventHasDefaultAttribute_Parms
		{
			FString Name;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_HasDefaultAttribute_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloud_HasDefaultAttribute_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloud_eventHasDefaultAttribute_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_HasDefaultAttribute_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPointCloud_HasDefaultAttribute_Statics::NewProp_Name_MetaData) };
	void Z_Construct_UFunction_UPointCloud_HasDefaultAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointCloud_eventHasDefaultAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_HasDefaultAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PointCloud_eventHasDefaultAttribute_Parms), &Z_Construct_UFunction_UPointCloud_HasDefaultAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_HasDefaultAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_HasDefaultAttribute_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_HasDefaultAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_HasDefaultAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloud|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Query if this point cloud supports a given, Named default attribute. The default attributes are those attributes shared by all points in the PointCloud\n\x09* @param Name - The name of the default attribute to query\n\x09* @return True if a default attribute with the given name exists\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloud.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query if this point cloud supports a given, Named default attribute. The default attributes are those attributes shared by all points in the PointCloud\n@param Name - The name of the default attribute to query\n@return True if a default attribute with the given name exists" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_HasDefaultAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "HasDefaultAttribute", nullptr, nullptr, Z_Construct_UFunction_UPointCloud_HasDefaultAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_HasDefaultAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloud_HasDefaultAttribute_Statics::PointCloud_eventHasDefaultAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_HasDefaultAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloud_HasDefaultAttribute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_HasDefaultAttribute_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloud_HasDefaultAttribute_Statics::PointCloud_eventHasDefaultAttribute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloud_HasDefaultAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloud_HasDefaultAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_HasMetaDataAttribute_Statics
	{
		struct PointCloud_eventHasMetaDataAttribute_Parms
		{
			FString Name;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_HasMetaDataAttribute_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloud_HasMetaDataAttribute_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloud_eventHasMetaDataAttribute_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_HasMetaDataAttribute_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_UPointCloud_HasMetaDataAttribute_Statics::NewProp_Name_MetaData) };
	void Z_Construct_UFunction_UPointCloud_HasMetaDataAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointCloud_eventHasMetaDataAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_HasMetaDataAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PointCloud_eventHasMetaDataAttribute_Parms), &Z_Construct_UFunction_UPointCloud_HasMetaDataAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_HasMetaDataAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_HasMetaDataAttribute_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_HasMetaDataAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_HasMetaDataAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloud|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Query if this point cloud contains a given, Named metadata attribute. \n\x09* @param Name - The name of the metadata attribute to query\n\x09* @return True if at least point in this pointcloud has a metadata attribute with the given name\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloud.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query if this point cloud contains a given, Named metadata attribute.\n@param Name - The name of the metadata attribute to query\n@return True if at least point in this pointcloud has a metadata attribute with the given name" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_HasMetaDataAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "HasMetaDataAttribute", nullptr, nullptr, Z_Construct_UFunction_UPointCloud_HasMetaDataAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_HasMetaDataAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloud_HasMetaDataAttribute_Statics::PointCloud_eventHasMetaDataAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_HasMetaDataAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloud_HasMetaDataAttribute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_HasMetaDataAttribute_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloud_HasMetaDataAttribute_Statics::PointCloud_eventHasMetaDataAttribute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloud_HasMetaDataAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloud_HasMetaDataAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_LoadFromPoints_Statics
	{
		struct PointCloud_eventLoadFromPoints_Parms
		{
			TArray<FPointCloudPoint> InPoints;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InPoints;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloud_LoadFromPoints_Statics::NewProp_InPoints_Inner = { "InPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPointCloudPoint, METADATA_PARAMS(0, nullptr) }; // 4108211218
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_LoadFromPoints_Statics::NewProp_InPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloud_LoadFromPoints_Statics::NewProp_InPoints = { "InPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloud_eventLoadFromPoints_Parms, InPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_LoadFromPoints_Statics::NewProp_InPoints_MetaData), Z_Construct_UFunction_UPointCloud_LoadFromPoints_Statics::NewProp_InPoints_MetaData) }; // 4108211218
	void Z_Construct_UFunction_UPointCloud_LoadFromPoints_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointCloud_eventLoadFromPoints_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_LoadFromPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PointCloud_eventLoadFromPoints_Parms), &Z_Construct_UFunction_UPointCloud_LoadFromPoints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_LoadFromPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_LoadFromPoints_Statics::NewProp_InPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_LoadFromPoints_Statics::NewProp_InPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_LoadFromPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_LoadFromPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloud|Construction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Load a point cloud from structured points.\n\x09* @return True if the data was loaded successfully, false otherwise\n\x09* @param Points Array holding the points to add to the point cloud\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloud.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Load a point cloud from structured points.\n@return True if the data was loaded successfully, false otherwise\n@param Points Array holding the points to add to the point cloud" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_LoadFromPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "LoadFromPoints", nullptr, nullptr, Z_Construct_UFunction_UPointCloud_LoadFromPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_LoadFromPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloud_LoadFromPoints_Statics::PointCloud_eventLoadFromPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_LoadFromPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloud_LoadFromPoints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_LoadFromPoints_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloud_LoadFromPoints_Statics::PointCloud_eventLoadFromPoints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloud_LoadFromPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloud_LoadFromPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_LoggingEnabled_Statics
	{
		struct PointCloud_eventLoggingEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloud_LoggingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointCloud_eventLoggingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_LoggingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PointCloud_eventLoggingEnabled_Parms), &Z_Construct_UFunction_UPointCloud_LoggingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_LoggingEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_LoggingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_LoggingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloud|Logging" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Query if SQL logging is enabled\n\x09* @return True if logging is currently active, false otherwise\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloud.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query if SQL logging is enabled\n@return True if logging is currently active, false otherwise" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_LoggingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "LoggingEnabled", nullptr, nullptr, Z_Construct_UFunction_UPointCloud_LoggingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_LoggingEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloud_LoggingEnabled_Statics::PointCloud_eventLoggingEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_LoggingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloud_LoggingEnabled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_LoggingEnabled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloud_LoggingEnabled_Statics::PointCloud_eventLoggingEnabled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloud_LoggingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloud_LoggingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_MakeView_Statics
	{
		struct PointCloud_eventMakeView_Parms
		{
			UPointCloudView* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloud_MakeView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloud_eventMakeView_Parms, ReturnValue), Z_Construct_UClass_UPointCloudView_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_MakeView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_MakeView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_MakeView_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloud|View" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Create a new view onto this PointCloud Asset. The view is used to access data in the point cloud. Each view is indepdentant and can be used to filter and modify the data as it is read from the PointCloud.\n\x09* The views do not modify the source data in the point cloud unless explicitly requested to. The view implements an override system on top of the PointCloud Data.\n\x09* @return A point to a new UPointCloudView Object that references this PointCloud\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloud.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a new view onto this PointCloud Asset. The view is used to access data in the point cloud. Each view is indepdentant and can be used to filter and modify the data as it is read from the PointCloud.\nThe views do not modify the source data in the point cloud unless explicitly requested to. The view implements an override system on top of the PointCloud Data.\n@return A point to a new UPointCloudView Object that references this PointCloud" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_MakeView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "MakeView", nullptr, nullptr, Z_Construct_UFunction_UPointCloud_MakeView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_MakeView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloud_MakeView_Statics::PointCloud_eventMakeView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_MakeView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloud_MakeView_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_MakeView_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloud_MakeView_Statics::PointCloud_eventMakeView_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloud_MakeView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloud_MakeView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_Reimport_Statics
	{
		struct PointCloud_eventReimport_Parms
		{
			FBox ReimportBounds;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReimportBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReimportBounds;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_Reimport_Statics::NewProp_ReimportBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloud_Reimport_Statics::NewProp_ReimportBounds = { "ReimportBounds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloud_eventReimport_Parms, ReimportBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_Reimport_Statics::NewProp_ReimportBounds_MetaData), Z_Construct_UFunction_UPointCloud_Reimport_Statics::NewProp_ReimportBounds_MetaData) };
	void Z_Construct_UFunction_UPointCloud_Reimport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointCloud_eventReimport_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_Reimport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PointCloud_eventReimport_Parms), &Z_Construct_UFunction_UPointCloud_Reimport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_Reimport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_Reimport_Statics::NewProp_ReimportBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_Reimport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_Reimport_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloud|Files" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reload the point cloud from the original files, if all of the files can be found. This will fail if any of the original files, as returned by GetLoadedFiles, cannot be found \n\x09* @param ReimportBounds - Optional Box defining the zone that should be reimported\n\x09* @return True if the point cloud was reloaded sucessfully, false otherwise\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloud.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reload the point cloud from the original files, if all of the files can be found. This will fail if any of the original files, as returned by GetLoadedFiles, cannot be found\n@param ReimportBounds - Optional Box defining the zone that should be reimported\n@return True if the point cloud was reloaded sucessfully, false otherwise" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_Reimport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "Reimport", nullptr, nullptr, Z_Construct_UFunction_UPointCloud_Reimport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_Reimport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloud_Reimport_Statics::PointCloud_eventReimport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_Reimport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloud_Reimport_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_Reimport_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloud_Reimport_Statics::PointCloud_eventReimport_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloud_Reimport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloud_Reimport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_ReplacePoints_Statics
	{
		struct PointCloud_eventReplacePoints_Parms
		{
			FString FileName;
			FBox ReimportBounds;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReimportBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReimportBounds;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_ReplacePoints_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloud_ReplacePoints_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloud_eventReplacePoints_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_ReplacePoints_Statics::NewProp_FileName_MetaData), Z_Construct_UFunction_UPointCloud_ReplacePoints_Statics::NewProp_FileName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_ReplacePoints_Statics::NewProp_ReimportBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloud_ReplacePoints_Statics::NewProp_ReimportBounds = { "ReimportBounds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloud_eventReplacePoints_Parms, ReimportBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_ReplacePoints_Statics::NewProp_ReimportBounds_MetaData), Z_Construct_UFunction_UPointCloud_ReplacePoints_Statics::NewProp_ReimportBounds_MetaData) };
	void Z_Construct_UFunction_UPointCloud_ReplacePoints_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointCloud_eventReplacePoints_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_ReplacePoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PointCloud_eventReplacePoints_Parms), &Z_Construct_UFunction_UPointCloud_ReplacePoints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_ReplacePoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_ReplacePoints_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_ReplacePoints_Statics::NewProp_ReimportBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_ReplacePoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_ReplacePoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloud|Files" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Replace the data in this point cloud from another file\n\x09* @param FileName - The path to the file to load\n\x09* @param ReimportBounds - Optional Box defining the zone that should be reimported\n\x09* @return True if the point cloud was reloaded sucessfully, false otherwise\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloud.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replace the data in this point cloud from another file\n@param FileName - The path to the file to load\n@param ReimportBounds - Optional Box defining the zone that should be reimported\n@return True if the point cloud was reloaded sucessfully, false otherwise" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_ReplacePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "ReplacePoints", nullptr, nullptr, Z_Construct_UFunction_UPointCloud_ReplacePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_ReplacePoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloud_ReplacePoints_Statics::PointCloud_eventReplacePoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_ReplacePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloud_ReplacePoints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_ReplacePoints_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloud_ReplacePoints_Statics::PointCloud_eventReplacePoints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloud_ReplacePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloud_ReplacePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_SaveToDisk_Statics
	{
		struct PointCloud_eventSaveToDisk_Parms
		{
			FString FileName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_SaveToDisk_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloud_SaveToDisk_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloud_eventSaveToDisk_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_SaveToDisk_Statics::NewProp_FileName_MetaData), Z_Construct_UFunction_UPointCloud_SaveToDisk_Statics::NewProp_FileName_MetaData) };
	void Z_Construct_UFunction_UPointCloud_SaveToDisk_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointCloud_eventSaveToDisk_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_SaveToDisk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PointCloud_eventSaveToDisk_Parms), &Z_Construct_UFunction_UPointCloud_SaveToDisk_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_SaveToDisk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_SaveToDisk_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_SaveToDisk_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_SaveToDisk_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloud|Database" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Save this PointCloud to a file on disk. This currently only saves .db files compatible with SQLLITE3. More formats may be added in the future. \n\x09* No name or extension checking is performed. You get what you ask for if the file can be written. \n\x09* @return True if the file could be saved to disk correctly, False if the saving failed\n\x09* @param FileName - The name of the file to write\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloud.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Save this PointCloud to a file on disk. This currently only saves .db files compatible with SQLLITE3. More formats may be added in the future.\nNo name or extension checking is performed. You get what you ask for if the file can be written.\n@return True if the file could be saved to disk correctly, False if the saving failed\n@param FileName - The name of the file to write" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_SaveToDisk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "SaveToDisk", nullptr, nullptr, Z_Construct_UFunction_UPointCloud_SaveToDisk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_SaveToDisk_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloud_SaveToDisk_Statics::PointCloud_eventSaveToDisk_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_SaveToDisk_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloud_SaveToDisk_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_SaveToDisk_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloud_SaveToDisk_Statics::PointCloud_eventSaveToDisk_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloud_SaveToDisk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloud_SaveToDisk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_StartLogging_Statics
	{
		struct PointCloud_eventStartLogging_Parms
		{
			FString InFileName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InFileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_StartLogging_Statics::NewProp_InFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloud_StartLogging_Statics::NewProp_InFileName = { "InFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloud_eventStartLogging_Parms, InFileName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_StartLogging_Statics::NewProp_InFileName_MetaData), Z_Construct_UFunction_UPointCloud_StartLogging_Statics::NewProp_InFileName_MetaData) };
	void Z_Construct_UFunction_UPointCloud_StartLogging_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointCloud_eventStartLogging_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_StartLogging_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PointCloud_eventStartLogging_Parms), &Z_Construct_UFunction_UPointCloud_StartLogging_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_StartLogging_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_StartLogging_Statics::NewProp_InFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_StartLogging_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_StartLogging_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloud|Logging" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Call this function to start logging sql calls\n\x09* @return True if logging can be started. This may return false if SetSqlLog has not been called with a valid log file name\x09\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloud.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call this function to start logging sql calls\n@return True if logging can be started. This may return false if SetSqlLog has not been called with a valid log file name" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_StartLogging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "StartLogging", nullptr, nullptr, Z_Construct_UFunction_UPointCloud_StartLogging_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_StartLogging_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloud_StartLogging_Statics::PointCloud_eventStartLogging_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_StartLogging_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloud_StartLogging_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_StartLogging_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloud_StartLogging_Statics::PointCloud_eventStartLogging_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloud_StartLogging()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloud_StartLogging_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloud_StopLogging_Statics
	{
		struct PointCloud_eventStopLogging_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloud_StopLogging_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PointCloud_eventStopLogging_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloud_StopLogging_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PointCloud_eventStopLogging_Parms), &Z_Construct_UFunction_UPointCloud_StopLogging_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloud_StopLogging_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloud_StopLogging_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloud_StopLogging_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloud|Logging" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Call this function to start logging sql calls\n\x09* @return True if logging can be started. This may return false if SetSqlLog has not been called with a valid log file name\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloud.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call this function to start logging sql calls\n@return True if logging can be started. This may return false if SetSqlLog has not been called with a valid log file name" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloud_StopLogging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloud, nullptr, "StopLogging", nullptr, nullptr, Z_Construct_UFunction_UPointCloud_StopLogging_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_StopLogging_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloud_StopLogging_Statics::PointCloud_eventStopLogging_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_StopLogging_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloud_StopLogging_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloud_StopLogging_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloud_StopLogging_Statics::PointCloud_eventStopLogging_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloud_StopLogging()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloud_StopLogging_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPointCloud);
	UClass* Z_Construct_UClass_UPointCloud_NoRegister()
	{
		return UPointCloud::StaticClass();
	}
	struct Z_Construct_UClass_UPointCloud_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootViews_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootViews_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_RootViews;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointCloud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloud,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPointCloud_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPointCloud_GetBounds, "GetBounds" }, // 1425607894
		{ &Z_Construct_UFunction_UPointCloud_GetCount, "GetCount" }, // 1648506268
		{ &Z_Construct_UFunction_UPointCloud_GetDefaultAttributes, "GetDefaultAttributes" }, // 3583054442
		{ &Z_Construct_UFunction_UPointCloud_GetLoadedFiles, "GetLoadedFiles" }, // 3780641000
		{ &Z_Construct_UFunction_UPointCloud_GetMetadataAttributes, "GetMetadataAttributes" }, // 3759890503
		{ &Z_Construct_UFunction_UPointCloud_HasDefaultAttribute, "HasDefaultAttribute" }, // 62816644
		{ &Z_Construct_UFunction_UPointCloud_HasMetaDataAttribute, "HasMetaDataAttribute" }, // 401888830
		{ &Z_Construct_UFunction_UPointCloud_LoadFromPoints, "LoadFromPoints" }, // 3952019678
		{ &Z_Construct_UFunction_UPointCloud_LoggingEnabled, "LoggingEnabled" }, // 1650811002
		{ &Z_Construct_UFunction_UPointCloud_MakeView, "MakeView" }, // 4218063952
		{ &Z_Construct_UFunction_UPointCloud_Reimport, "Reimport" }, // 615223040
		{ &Z_Construct_UFunction_UPointCloud_ReplacePoints, "ReplacePoints" }, // 2108540247
		{ &Z_Construct_UFunction_UPointCloud_SaveToDisk, "SaveToDisk" }, // 2490861790
		{ &Z_Construct_UFunction_UPointCloud_StartLogging, "StartLogging" }, // 4040813729
		{ &Z_Construct_UFunction_UPointCloud_StopLogging, "StopLogging" }, // 418168201
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Implements a prototype point cloud data structure using SQLLITE as the backend\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "PointCloud.h" },
		{ "ModuleRelativePath", "Public/PointCloud.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements a prototype point cloud data structure using SQLLITE as the backend" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_RootViews_ElementProp = { "RootViews", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPointCloudView_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloud_Statics::NewProp_RootViews_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Store pointers to the root views so that they don't get garbage collected while we are processing */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloud.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Store pointers to the root views so that they don't get garbage collected while we are processing" },
#endif
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPointCloud_Statics::NewProp_RootViews = { "RootViews", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPointCloud, RootViews), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::NewProp_RootViews_MetaData), Z_Construct_UClass_UPointCloud_Statics::NewProp_RootViews_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPointCloud_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_RootViews_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloud_Statics::NewProp_RootViews,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointCloud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloud>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPointCloud_Statics::ClassParams = {
		&UPointCloud::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPointCloud_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::Class_MetaDataParams), Z_Construct_UClass_UPointCloud_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloud_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPointCloud()
	{
		if (!Z_Registration_Info_UClass_UPointCloud.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPointCloud.OuterSingleton, Z_Construct_UClass_UPointCloud_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPointCloud.OuterSingleton;
	}
	template<> POINTCLOUD_API UClass* StaticClass<UPointCloud>()
	{
		return UPointCloud::StaticClass();
	}
	UPointCloud::UPointCloud(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloud);
	UPointCloud::~UPointCloud() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h_Statics::EnumInfo[] = {
		{ EFilterMode_StaticEnum, TEXT("EFilterMode"), &Z_Registration_Info_UEnum_EFilterMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4017410103U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h_Statics::ScriptStructInfo[] = {
		{ FPointCloudPoint::StaticStruct, Z_Construct_UScriptStruct_FPointCloudPoint_Statics::NewStructOps, TEXT("PointCloudPoint"), &Z_Registration_Info_UScriptStruct_PointCloudPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPointCloudPoint), 4108211218U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPointCloud, UPointCloud::StaticClass, TEXT("UPointCloud"), &Z_Registration_Info_UClass_UPointCloud, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPointCloud), 3856007161U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h_3888756008(TEXT("/Script/PointCloud"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloud_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
