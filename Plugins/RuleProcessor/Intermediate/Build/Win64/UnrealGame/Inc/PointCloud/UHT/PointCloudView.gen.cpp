// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloud/Public/PointCloudView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudView() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloud_NoRegister();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudImpl_NoRegister();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudView();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudView_NoRegister();
	POINTCLOUD_API UEnum* Z_Construct_UEnum_PointCloud_EFilterMode();
	UPackage* Z_Construct_UPackage__Script_PointCloud();
// End Cross Module References
	DEFINE_FUNCTION(UPointCloudView::execGetPointCloud)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPointCloud**)Z_Param__Result=P_THIS->GetPointCloud();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudView::execFilterOnIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_ENUM(EFilterMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FilterOnIndex(Z_Param_Index,EFilterMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudView::execFilterOnRange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_StartIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_EndIndex);
		P_GET_ENUM(EFilterMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FilterOnRange(Z_Param_StartIndex,Z_Param_EndIndex,EFilterMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudView::execFilterOnBoundingSphere)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_ENUM(EFilterMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FilterOnBoundingSphere(Z_Param_Out_Center,Z_Param_Radius,EFilterMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudView::execFilterOnTile)
	{
		P_GET_STRUCT_REF(FBox,Z_Param_Out_QueryGridBounds);
		P_GET_PROPERTY(FIntProperty,Z_Param_InNumTilesX);
		P_GET_PROPERTY(FIntProperty,Z_Param_InNumTilesY);
		P_GET_PROPERTY(FIntProperty,Z_Param_InNumTilesZ);
		P_GET_PROPERTY(FIntProperty,Z_Param_InTileX);
		P_GET_PROPERTY(FIntProperty,Z_Param_InTileY);
		P_GET_PROPERTY(FIntProperty,Z_Param_InTileZ);
		P_GET_UBOOL(Z_Param_bInvertSelection);
		P_GET_ENUM(EFilterMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FilterOnTile(Z_Param_Out_QueryGridBounds,Z_Param_InNumTilesX,Z_Param_InNumTilesY,Z_Param_InNumTilesZ,Z_Param_InTileX,Z_Param_InTileY,Z_Param_InTileZ,Z_Param_bInvertSelection,EFilterMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudView::execFilterOnOrientedBoundingBox)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InOBB);
		P_GET_UBOOL(Z_Param_bInvertSelection);
		P_GET_ENUM(EFilterMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FilterOnOrientedBoundingBox(Z_Param_Out_InOBB,Z_Param_bInvertSelection,EFilterMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudView::execFilterOnBoundingBox)
	{
		P_GET_STRUCT_REF(FBox,Z_Param_Out_BoundingBox);
		P_GET_UBOOL(Z_Param_bInvertSelection);
		P_GET_ENUM(EFilterMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FilterOnBoundingBox(Z_Param_Out_BoundingBox,Z_Param_bInvertSelection,EFilterMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudView::execFilterOnPointExpression)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Expression);
		P_GET_ENUM(EFilterMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FilterOnPointExpression(Z_Param_Expression,EFilterMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudView::execFilterOnMetadataPattern)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MetaData);
		P_GET_PROPERTY(FStrProperty,Z_Param_Pattern);
		P_GET_ENUM(EFilterMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FilterOnMetadataPattern(Z_Param_MetaData,Z_Param_Pattern,EFilterMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudView::execFilterOnMetadata)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MetaData);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_GET_ENUM(EFilterMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FilterOnMetadata(Z_Param_MetaData,Z_Param_Value,EFilterMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudView::execGetHash)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetHash();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudView::execGetCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudView::execGetUniqueMetadataValues)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetUniqueMetadataValues(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudView::execGetUniqueMetadataValuesAndCounts)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,int32>*)Z_Param__Result=P_THIS->GetUniqueMetadataValuesAndCounts(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudView::execGetMetadataValues)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<int32,FString>*)Z_Param__Result=P_THIS->GetMetadataValues(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudView::execGetMetadataValuesArrayAsFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetMetadataValuesArrayAsFloat(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudView::execGetMetadataValuesArrayAsInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetMetadataValuesArrayAsInt(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudView::execGetMetadata)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PointId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FString>*)Z_Param__Result=P_THIS->GetMetadata(Z_Param_PointId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudView::execCountResultsInBox)
	{
		P_GET_STRUCT_REF(FBox,Z_Param_Out_Box);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CountResultsInBox(Z_Param_Out_Box);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudView::execGetResultsBoundingBox)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox*)Z_Param__Result=P_THIS->GetResultsBoundingBox();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudView::execGetIndexes)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetIndexes(Z_Param_Out_OutIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudView::execGetTransformsAndIds)
	{
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_OutTransforms);
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTransformsAndIds(Z_Param_Out_OutTransforms,Z_Param_Out_OutIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudView::execGetTransforms)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTransform>*)Z_Param__Result=P_THIS->GetTransforms();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudView::execMakeChildView)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPointCloudView**)Z_Param__Result=P_THIS->MakeChildView();
		P_NATIVE_END;
	}
	void UPointCloudView::StaticRegisterNativesUPointCloudView()
	{
		UClass* Class = UPointCloudView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CountResultsInBox", &UPointCloudView::execCountResultsInBox },
			{ "FilterOnBoundingBox", &UPointCloudView::execFilterOnBoundingBox },
			{ "FilterOnBoundingSphere", &UPointCloudView::execFilterOnBoundingSphere },
			{ "FilterOnIndex", &UPointCloudView::execFilterOnIndex },
			{ "FilterOnMetadata", &UPointCloudView::execFilterOnMetadata },
			{ "FilterOnMetadataPattern", &UPointCloudView::execFilterOnMetadataPattern },
			{ "FilterOnOrientedBoundingBox", &UPointCloudView::execFilterOnOrientedBoundingBox },
			{ "FilterOnPointExpression", &UPointCloudView::execFilterOnPointExpression },
			{ "FilterOnRange", &UPointCloudView::execFilterOnRange },
			{ "FilterOnTile", &UPointCloudView::execFilterOnTile },
			{ "GetCount", &UPointCloudView::execGetCount },
			{ "GetHash", &UPointCloudView::execGetHash },
			{ "GetIndexes", &UPointCloudView::execGetIndexes },
			{ "GetMetadata", &UPointCloudView::execGetMetadata },
			{ "GetMetadataValues", &UPointCloudView::execGetMetadataValues },
			{ "GetMetadataValuesArrayAsFloat", &UPointCloudView::execGetMetadataValuesArrayAsFloat },
			{ "GetMetadataValuesArrayAsInt", &UPointCloudView::execGetMetadataValuesArrayAsInt },
			{ "GetPointCloud", &UPointCloudView::execGetPointCloud },
			{ "GetResultsBoundingBox", &UPointCloudView::execGetResultsBoundingBox },
			{ "GetTransforms", &UPointCloudView::execGetTransforms },
			{ "GetTransformsAndIds", &UPointCloudView::execGetTransformsAndIds },
			{ "GetUniqueMetadataValues", &UPointCloudView::execGetUniqueMetadataValues },
			{ "GetUniqueMetadataValuesAndCounts", &UPointCloudView::execGetUniqueMetadataValuesAndCounts },
			{ "MakeChildView", &UPointCloudView::execMakeChildView },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPointCloudView_CountResultsInBox_Statics
	{
		struct PointCloudView_eventCountResultsInBox_Parms
		{
			FBox Box;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_CountResultsInBox_Statics::NewProp_Box_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudView_CountResultsInBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventCountResultsInBox_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_CountResultsInBox_Statics::NewProp_Box_MetaData), Z_Construct_UFunction_UPointCloudView_CountResultsInBox_Statics::NewProp_Box_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudView_CountResultsInBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventCountResultsInBox_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudView_CountResultsInBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_CountResultsInBox_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_CountResultsInBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_CountResultsInBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudView|Bounds" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Return the number of points passing the filter that are also inside the given bounding box\n\x09* @return The bounding box of the points that will be returned by this view\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the number of points passing the filter that are also inside the given bounding box\n@return The bounding box of the points that will be returned by this view" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudView_CountResultsInBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudView, nullptr, "CountResultsInBox", nullptr, nullptr, Z_Construct_UFunction_UPointCloudView_CountResultsInBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_CountResultsInBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudView_CountResultsInBox_Statics::PointCloudView_eventCountResultsInBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_CountResultsInBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudView_CountResultsInBox_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_CountResultsInBox_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudView_CountResultsInBox_Statics::PointCloudView_eventCountResultsInBox_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudView_CountResultsInBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudView_CountResultsInBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudView_FilterOnBoundingBox_Statics
	{
		struct PointCloudView_eventFilterOnBoundingBox_Parms
		{
			FBox BoundingBox;
			bool bInvertSelection;
			EFilterMode Mode;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBox;
		static void NewProp_bInvertSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertSelection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_FilterOnBoundingBox_Statics::NewProp_BoundingBox_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnBoundingBox_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventFilterOnBoundingBox_Parms, BoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnBoundingBox_Statics::NewProp_BoundingBox_MetaData), Z_Construct_UFunction_UPointCloudView_FilterOnBoundingBox_Statics::NewProp_BoundingBox_MetaData) };
	void Z_Construct_UFunction_UPointCloudView_FilterOnBoundingBox_Statics::NewProp_bInvertSelection_SetBit(void* Obj)
	{
		((PointCloudView_eventFilterOnBoundingBox_Parms*)Obj)->bInvertSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnBoundingBox_Statics::NewProp_bInvertSelection = { "bInvertSelection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PointCloudView_eventFilterOnBoundingBox_Parms), &Z_Construct_UFunction_UPointCloudView_FilterOnBoundingBox_Statics::NewProp_bInvertSelection_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnBoundingBox_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnBoundingBox_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventFilterOnBoundingBox_Parms, Mode), Z_Construct_UEnum_PointCloud_EFilterMode, METADATA_PARAMS(0, nullptr) }; // 4017410103
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudView_FilterOnBoundingBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnBoundingBox_Statics::NewProp_BoundingBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnBoundingBox_Statics::NewProp_bInvertSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnBoundingBox_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnBoundingBox_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_FilterOnBoundingBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudView|Filters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Add a filter to this view that only includes point if it's within a given bounding box\n\x09* @param BoundingBox - The bounding box to test the points against\n\x09* @param bInvertSelection - Flag whether to include or exclude the points inside the bounding box\n\x09* @param Mode - How the results of this filter are combined with the result set. Allows inclusion, exclusion and intersection of matching results\n\x09*/" },
#endif
		{ "CPP_Default_Mode", "FILTER_Or" },
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a filter to this view that only includes point if it's within a given bounding box\n@param BoundingBox - The bounding box to test the points against\n@param bInvertSelection - Flag whether to include or exclude the points inside the bounding box\n@param Mode - How the results of this filter are combined with the result set. Allows inclusion, exclusion and intersection of matching results" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudView_FilterOnBoundingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudView, nullptr, "FilterOnBoundingBox", nullptr, nullptr, Z_Construct_UFunction_UPointCloudView_FilterOnBoundingBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnBoundingBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudView_FilterOnBoundingBox_Statics::PointCloudView_eventFilterOnBoundingBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnBoundingBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudView_FilterOnBoundingBox_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnBoundingBox_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudView_FilterOnBoundingBox_Statics::PointCloudView_eventFilterOnBoundingBox_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudView_FilterOnBoundingBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudView_FilterOnBoundingBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudView_FilterOnBoundingSphere_Statics
	{
		struct PointCloudView_eventFilterOnBoundingSphere_Parms
		{
			FVector Center;
			float Radius;
			EFilterMode Mode;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_FilterOnBoundingSphere_Statics::NewProp_Center_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnBoundingSphere_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventFilterOnBoundingSphere_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnBoundingSphere_Statics::NewProp_Center_MetaData), Z_Construct_UFunction_UPointCloudView_FilterOnBoundingSphere_Statics::NewProp_Center_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnBoundingSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventFilterOnBoundingSphere_Parms, Radius), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnBoundingSphere_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnBoundingSphere_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventFilterOnBoundingSphere_Parms, Mode), Z_Construct_UEnum_PointCloud_EFilterMode, METADATA_PARAMS(0, nullptr) }; // 4017410103
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudView_FilterOnBoundingSphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnBoundingSphere_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnBoundingSphere_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnBoundingSphere_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnBoundingSphere_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_FilterOnBoundingSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudView|Filters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Add a filter to this view that only includes point if the are within a given bounding sphere\n\x09* @param Center - The center of the bounding sphere\n\x09* @param Radius - The Radius of the bounding sphere\n\x09* @param Mode - How the results of this filter are combined with the result set. Allows inclusion, exclusion and intersection of matching results\n\x09*/" },
#endif
		{ "CPP_Default_Mode", "FILTER_Or" },
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a filter to this view that only includes point if the are within a given bounding sphere\n@param Center - The center of the bounding sphere\n@param Radius - The Radius of the bounding sphere\n@param Mode - How the results of this filter are combined with the result set. Allows inclusion, exclusion and intersection of matching results" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudView_FilterOnBoundingSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudView, nullptr, "FilterOnBoundingSphere", nullptr, nullptr, Z_Construct_UFunction_UPointCloudView_FilterOnBoundingSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnBoundingSphere_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudView_FilterOnBoundingSphere_Statics::PointCloudView_eventFilterOnBoundingSphere_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnBoundingSphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudView_FilterOnBoundingSphere_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnBoundingSphere_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudView_FilterOnBoundingSphere_Statics::PointCloudView_eventFilterOnBoundingSphere_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudView_FilterOnBoundingSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudView_FilterOnBoundingSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudView_FilterOnIndex_Statics
	{
		struct PointCloudView_eventFilterOnIndex_Parms
		{
			int32 Index;
			EFilterMode Mode;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventFilterOnIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnIndex_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnIndex_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventFilterOnIndex_Parms, Mode), Z_Construct_UEnum_PointCloud_EFilterMode, METADATA_PARAMS(0, nullptr) }; // 4017410103
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudView_FilterOnIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnIndex_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnIndex_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_FilterOnIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudView|Filters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Add a filter to this view that only includes point if point indexes are within a given range. Pass -1 for both StartIndex and EndIndex to return all points.\n\x09* @param StartIndex - The start index of the range to test (-1) for no lower bound.\n\x09* @param EndIndex - The end index of the range to test (-1) for no upper bound.\n\x09* @param Mode - How the results of this filter are combined with the result set. Allows inclusion, exclusion and intersection of matching results\n\x09*/" },
#endif
		{ "CPP_Default_Index", "-1" },
		{ "CPP_Default_Mode", "FILTER_Or" },
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a filter to this view that only includes point if point indexes are within a given range. Pass -1 for both StartIndex and EndIndex to return all points.\n@param StartIndex - The start index of the range to test (-1) for no lower bound.\n@param EndIndex - The end index of the range to test (-1) for no upper bound.\n@param Mode - How the results of this filter are combined with the result set. Allows inclusion, exclusion and intersection of matching results" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudView_FilterOnIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudView, nullptr, "FilterOnIndex", nullptr, nullptr, Z_Construct_UFunction_UPointCloudView_FilterOnIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudView_FilterOnIndex_Statics::PointCloudView_eventFilterOnIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudView_FilterOnIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudView_FilterOnIndex_Statics::PointCloudView_eventFilterOnIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudView_FilterOnIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudView_FilterOnIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudView_FilterOnMetadata_Statics
	{
		struct PointCloudView_eventFilterOnMetadata_Parms
		{
			FString MetaData;
			FString Value;
			EFilterMode Mode;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetaData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_FilterOnMetadata_Statics::NewProp_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnMetadata_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventFilterOnMetadata_Parms, MetaData), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnMetadata_Statics::NewProp_MetaData_MetaData), Z_Construct_UFunction_UPointCloudView_FilterOnMetadata_Statics::NewProp_MetaData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_FilterOnMetadata_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnMetadata_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventFilterOnMetadata_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnMetadata_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UPointCloudView_FilterOnMetadata_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnMetadata_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnMetadata_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventFilterOnMetadata_Parms, Mode), Z_Construct_UEnum_PointCloud_EFilterMode, METADATA_PARAMS(0, nullptr) }; // 4017410103
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudView_FilterOnMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnMetadata_Statics::NewProp_MetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnMetadata_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnMetadata_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnMetadata_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_FilterOnMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudView|Filters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Add a filter to this view that only includes point if they Pass a Metadata test, i.e. Key=Value\n\x09* @param MetaData - The name of the Metadata Item to test\n\x09* @param Value - The value to search for, i.e. only points where MetaData=Value are added to the result set\n\x09* @param Mode - How the results of this filter are combined with the result set. Allows inclusion, exclusion and intersection of matching results\x09\n\x09*/" },
#endif
		{ "CPP_Default_Mode", "FILTER_Or" },
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a filter to this view that only includes point if they Pass a Metadata test, i.e. Key=Value\n@param MetaData - The name of the Metadata Item to test\n@param Value - The value to search for, i.e. only points where MetaData=Value are added to the result set\n@param Mode - How the results of this filter are combined with the result set. Allows inclusion, exclusion and intersection of matching results" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudView_FilterOnMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudView, nullptr, "FilterOnMetadata", nullptr, nullptr, Z_Construct_UFunction_UPointCloudView_FilterOnMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnMetadata_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudView_FilterOnMetadata_Statics::PointCloudView_eventFilterOnMetadata_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnMetadata_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudView_FilterOnMetadata_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnMetadata_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudView_FilterOnMetadata_Statics::PointCloudView_eventFilterOnMetadata_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudView_FilterOnMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudView_FilterOnMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudView_FilterOnMetadataPattern_Statics
	{
		struct PointCloudView_eventFilterOnMetadataPattern_Parms
		{
			FString MetaData;
			FString Pattern;
			EFilterMode Mode;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetaData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pattern_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Pattern;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_FilterOnMetadataPattern_Statics::NewProp_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnMetadataPattern_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventFilterOnMetadataPattern_Parms, MetaData), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnMetadataPattern_Statics::NewProp_MetaData_MetaData), Z_Construct_UFunction_UPointCloudView_FilterOnMetadataPattern_Statics::NewProp_MetaData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_FilterOnMetadataPattern_Statics::NewProp_Pattern_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnMetadataPattern_Statics::NewProp_Pattern = { "Pattern", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventFilterOnMetadataPattern_Parms, Pattern), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnMetadataPattern_Statics::NewProp_Pattern_MetaData), Z_Construct_UFunction_UPointCloudView_FilterOnMetadataPattern_Statics::NewProp_Pattern_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnMetadataPattern_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnMetadataPattern_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventFilterOnMetadataPattern_Parms, Mode), Z_Construct_UEnum_PointCloud_EFilterMode, METADATA_PARAMS(0, nullptr) }; // 4017410103
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudView_FilterOnMetadataPattern_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnMetadataPattern_Statics::NewProp_MetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnMetadataPattern_Statics::NewProp_Pattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnMetadataPattern_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnMetadataPattern_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_FilterOnMetadataPattern_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudView|Filters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Add a filter to this view that only includes point if they Pass a Metadata pattern , i.e. Key LIKE (Value)\n\x09* @param MetaData - The name of the Metadata Item to test\n\x09* @param Pattern - The value to search for, i.e. only points where MetaData=Value are added to the result set\n\x09* @param Mode - How the results of this filter are combined with the result set. Allows inclusion, exclusion and intersection of matching results\n\x09*/" },
#endif
		{ "CPP_Default_Mode", "FILTER_Or" },
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a filter to this view that only includes point if they Pass a Metadata pattern , i.e. Key LIKE (Value)\n@param MetaData - The name of the Metadata Item to test\n@param Pattern - The value to search for, i.e. only points where MetaData=Value are added to the result set\n@param Mode - How the results of this filter are combined with the result set. Allows inclusion, exclusion and intersection of matching results" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudView_FilterOnMetadataPattern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudView, nullptr, "FilterOnMetadataPattern", nullptr, nullptr, Z_Construct_UFunction_UPointCloudView_FilterOnMetadataPattern_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnMetadataPattern_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudView_FilterOnMetadataPattern_Statics::PointCloudView_eventFilterOnMetadataPattern_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnMetadataPattern_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudView_FilterOnMetadataPattern_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnMetadataPattern_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudView_FilterOnMetadataPattern_Statics::PointCloudView_eventFilterOnMetadataPattern_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudView_FilterOnMetadataPattern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudView_FilterOnMetadataPattern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudView_FilterOnOrientedBoundingBox_Statics
	{
		struct PointCloudView_eventFilterOnOrientedBoundingBox_Parms
		{
			FTransform InOBB;
			bool bInvertSelection;
			EFilterMode Mode;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOBB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InOBB;
		static void NewProp_bInvertSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertSelection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_FilterOnOrientedBoundingBox_Statics::NewProp_InOBB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnOrientedBoundingBox_Statics::NewProp_InOBB = { "InOBB", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventFilterOnOrientedBoundingBox_Parms, InOBB), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnOrientedBoundingBox_Statics::NewProp_InOBB_MetaData), Z_Construct_UFunction_UPointCloudView_FilterOnOrientedBoundingBox_Statics::NewProp_InOBB_MetaData) };
	void Z_Construct_UFunction_UPointCloudView_FilterOnOrientedBoundingBox_Statics::NewProp_bInvertSelection_SetBit(void* Obj)
	{
		((PointCloudView_eventFilterOnOrientedBoundingBox_Parms*)Obj)->bInvertSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnOrientedBoundingBox_Statics::NewProp_bInvertSelection = { "bInvertSelection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PointCloudView_eventFilterOnOrientedBoundingBox_Parms), &Z_Construct_UFunction_UPointCloudView_FilterOnOrientedBoundingBox_Statics::NewProp_bInvertSelection_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnOrientedBoundingBox_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnOrientedBoundingBox_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventFilterOnOrientedBoundingBox_Parms, Mode), Z_Construct_UEnum_PointCloud_EFilterMode, METADATA_PARAMS(0, nullptr) }; // 4017410103
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudView_FilterOnOrientedBoundingBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnOrientedBoundingBox_Statics::NewProp_InOBB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnOrientedBoundingBox_Statics::NewProp_bInvertSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnOrientedBoundingBox_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnOrientedBoundingBox_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_FilterOnOrientedBoundingBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudView|Filters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Add a filter to this view that only includes point if it's within a given oriented bounding box\n\x09* @param InOBB - The oriented bounding box to test the points against (FTransform containing center location, orientation and extent)\n\x09* @param bInvertSelection - Flag whether to include or exclude the points inside the oriented bounding box\n\x09* @param Mode - How the results of this filter are combined with the result set. Allows inclusion, exclusion and intersection of matching results\n\x09*/" },
#endif
		{ "CPP_Default_Mode", "FILTER_Or" },
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a filter to this view that only includes point if it's within a given oriented bounding box\n@param InOBB - The oriented bounding box to test the points against (FTransform containing center location, orientation and extent)\n@param bInvertSelection - Flag whether to include or exclude the points inside the oriented bounding box\n@param Mode - How the results of this filter are combined with the result set. Allows inclusion, exclusion and intersection of matching results" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudView_FilterOnOrientedBoundingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudView, nullptr, "FilterOnOrientedBoundingBox", nullptr, nullptr, Z_Construct_UFunction_UPointCloudView_FilterOnOrientedBoundingBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnOrientedBoundingBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudView_FilterOnOrientedBoundingBox_Statics::PointCloudView_eventFilterOnOrientedBoundingBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnOrientedBoundingBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudView_FilterOnOrientedBoundingBox_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnOrientedBoundingBox_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudView_FilterOnOrientedBoundingBox_Statics::PointCloudView_eventFilterOnOrientedBoundingBox_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudView_FilterOnOrientedBoundingBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudView_FilterOnOrientedBoundingBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudView_FilterOnPointExpression_Statics
	{
		struct PointCloudView_eventFilterOnPointExpression_Parms
		{
			FString Expression;
			EFilterMode Mode;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Expression_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Expression;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_FilterOnPointExpression_Statics::NewProp_Expression_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnPointExpression_Statics::NewProp_Expression = { "Expression", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventFilterOnPointExpression_Parms, Expression), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnPointExpression_Statics::NewProp_Expression_MetaData), Z_Construct_UFunction_UPointCloudView_FilterOnPointExpression_Statics::NewProp_Expression_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnPointExpression_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnPointExpression_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventFilterOnPointExpression_Parms, Mode), Z_Construct_UEnum_PointCloud_EFilterMode, METADATA_PARAMS(0, nullptr) }; // 4017410103
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudView_FilterOnPointExpression_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnPointExpression_Statics::NewProp_Expression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnPointExpression_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnPointExpression_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_FilterOnPointExpression_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudView|Filters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Add a filter to this view that only includes point if they Pass an expression of the form P.x>? or P.y!=? and so on.\n\x09* @param Expression - The expression to run on each potential point. If the expression resolves to true then the point is included in the result set\n\x09* @param Mode - How the results of this filter are combined with the result set. Allows inclusion, exclusion and intersection of matching results\x09\n\x09*/" },
#endif
		{ "CPP_Default_Mode", "FILTER_Or" },
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a filter to this view that only includes point if they Pass an expression of the form P.x>? or P.y!=? and so on.\n@param Expression - The expression to run on each potential point. If the expression resolves to true then the point is included in the result set\n@param Mode - How the results of this filter are combined with the result set. Allows inclusion, exclusion and intersection of matching results" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudView_FilterOnPointExpression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudView, nullptr, "FilterOnPointExpression", nullptr, nullptr, Z_Construct_UFunction_UPointCloudView_FilterOnPointExpression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnPointExpression_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudView_FilterOnPointExpression_Statics::PointCloudView_eventFilterOnPointExpression_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnPointExpression_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudView_FilterOnPointExpression_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnPointExpression_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudView_FilterOnPointExpression_Statics::PointCloudView_eventFilterOnPointExpression_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudView_FilterOnPointExpression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudView_FilterOnPointExpression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudView_FilterOnRange_Statics
	{
		struct PointCloudView_eventFilterOnRange_Parms
		{
			int32 StartIndex;
			int32 EndIndex;
			EFilterMode Mode;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnRange_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventFilterOnRange_Parms, StartIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnRange_Statics::NewProp_EndIndex = { "EndIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventFilterOnRange_Parms, EndIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnRange_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnRange_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventFilterOnRange_Parms, Mode), Z_Construct_UEnum_PointCloud_EFilterMode, METADATA_PARAMS(0, nullptr) }; // 4017410103
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudView_FilterOnRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnRange_Statics::NewProp_StartIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnRange_Statics::NewProp_EndIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnRange_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnRange_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_FilterOnRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudView|Filters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Add a filter to this view that only includes point if point indexes are within a given range. Pass -1 for both StartIndex and EndIndex to return all points.\n\x09* @param StartIndex - The start index of the range to test (-1) for no lower bound.\n\x09* @param EndIndex - The end index of the range to test (-1) for no upper bound.\n\x09* @param Mode - How the results of this filter are combined with the result set. Allows inclusion, exclusion and intersection of matching results\n\x09*/" },
#endif
		{ "CPP_Default_EndIndex", "-1" },
		{ "CPP_Default_Mode", "FILTER_Or" },
		{ "CPP_Default_StartIndex", "-1" },
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a filter to this view that only includes point if point indexes are within a given range. Pass -1 for both StartIndex and EndIndex to return all points.\n@param StartIndex - The start index of the range to test (-1) for no lower bound.\n@param EndIndex - The end index of the range to test (-1) for no upper bound.\n@param Mode - How the results of this filter are combined with the result set. Allows inclusion, exclusion and intersection of matching results" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudView_FilterOnRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudView, nullptr, "FilterOnRange", nullptr, nullptr, Z_Construct_UFunction_UPointCloudView_FilterOnRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudView_FilterOnRange_Statics::PointCloudView_eventFilterOnRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudView_FilterOnRange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnRange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudView_FilterOnRange_Statics::PointCloudView_eventFilterOnRange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudView_FilterOnRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudView_FilterOnRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics
	{
		struct PointCloudView_eventFilterOnTile_Parms
		{
			FBox QueryGridBounds;
			int32 InNumTilesX;
			int32 InNumTilesY;
			int32 InNumTilesZ;
			int32 InTileX;
			int32 InTileY;
			int32 InTileZ;
			bool bInvertSelection;
			EFilterMode Mode;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryGridBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryGridBounds;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InNumTilesX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InNumTilesY;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InNumTilesZ;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InTileX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InTileY;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InTileZ;
		static void NewProp_bInvertSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertSelection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::NewProp_QueryGridBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::NewProp_QueryGridBounds = { "QueryGridBounds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventFilterOnTile_Parms, QueryGridBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::NewProp_QueryGridBounds_MetaData), Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::NewProp_QueryGridBounds_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::NewProp_InNumTilesX = { "InNumTilesX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventFilterOnTile_Parms, InNumTilesX), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::NewProp_InNumTilesY = { "InNumTilesY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventFilterOnTile_Parms, InNumTilesY), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::NewProp_InNumTilesZ = { "InNumTilesZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventFilterOnTile_Parms, InNumTilesZ), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::NewProp_InTileX = { "InTileX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventFilterOnTile_Parms, InTileX), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::NewProp_InTileY = { "InTileY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventFilterOnTile_Parms, InTileY), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::NewProp_InTileZ = { "InTileZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventFilterOnTile_Parms, InTileZ), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::NewProp_bInvertSelection_SetBit(void* Obj)
	{
		((PointCloudView_eventFilterOnTile_Parms*)Obj)->bInvertSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::NewProp_bInvertSelection = { "bInvertSelection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PointCloudView_eventFilterOnTile_Parms), &Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::NewProp_bInvertSelection_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventFilterOnTile_Parms, Mode), Z_Construct_UEnum_PointCloud_EFilterMode, METADATA_PARAMS(0, nullptr) }; // 4017410103
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::NewProp_QueryGridBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::NewProp_InNumTilesX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::NewProp_InNumTilesY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::NewProp_InNumTilesZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::NewProp_InTileX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::NewProp_InTileY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::NewProp_InTileZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::NewProp_bInvertSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudView|Filters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Add a filter to this view that only includes points that are within of a given tile in a grid on a bounding box.\n\x09 * @param QueryGridBounds - The bounding box that holds the grid to test against\n\x09 * @param InNumTiles(X|Y|Z) - The number of tiles in each dimension\n\x09 * @param InTile(X|Y|Z) - The tile index per dimension\n\x09 * @param bInvertSection - If true, will include only points outside of the given tile\n\x09 * @param Mode - How the results of this filter are combined with the result set. Allows inclusion, exclusion and intersection of matching results\n\x09 */" },
#endif
		{ "CPP_Default_Mode", "FILTER_Or" },
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a filter to this view that only includes points that are within of a given tile in a grid on a bounding box.\n@param QueryGridBounds - The bounding box that holds the grid to test against\n@param InNumTiles(X|Y|Z) - The number of tiles in each dimension\n@param InTile(X|Y|Z) - The tile index per dimension\n@param bInvertSection - If true, will include only points outside of the given tile\n@param Mode - How the results of this filter are combined with the result set. Allows inclusion, exclusion and intersection of matching results" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudView, nullptr, "FilterOnTile", nullptr, nullptr, Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::PointCloudView_eventFilterOnTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::PointCloudView_eventFilterOnTile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudView_FilterOnTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudView_FilterOnTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudView_GetCount_Statics
	{
		struct PointCloudView_eventGetCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudView_GetCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventGetCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudView_GetCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_GetCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudView|Results" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Return the number of points returned from this view after applying all filters and modifications\n\x09* @return The number of points returned from this view\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the number of points returned from this view after applying all filters and modifications\n@return The number of points returned from this view" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudView_GetCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudView, nullptr, "GetCount", nullptr, nullptr, Z_Construct_UFunction_UPointCloudView_GetCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudView_GetCount_Statics::PointCloudView_eventGetCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudView_GetCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudView_GetCount_Statics::PointCloudView_eventGetCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudView_GetCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudView_GetCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudView_GetHash_Statics
	{
		struct PointCloudView_eventGetHash_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_GetHash_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloudView_GetHash_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventGetHash_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetHash_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UPointCloudView_GetHash_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudView_GetHash_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetHash_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_GetHash_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudView|Results" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Returns the hash of the results in the current view after applying all filters and modifications\n\x09* @return String containing the hash\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the hash of the results in the current view after applying all filters and modifications\n@return String containing the hash" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudView_GetHash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudView, nullptr, "GetHash", nullptr, nullptr, Z_Construct_UFunction_UPointCloudView_GetHash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetHash_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudView_GetHash_Statics::PointCloudView_eventGetHash_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetHash_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudView_GetHash_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetHash_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudView_GetHash_Statics::PointCloudView_eventGetHash_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudView_GetHash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudView_GetHash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudView_GetIndexes_Statics
	{
		struct PointCloudView_eventGetIndexes_Parms
		{
			TArray<int32> OutIds;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutIds;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudView_GetIndexes_Statics::NewProp_OutIds_Inner = { "OutIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloudView_GetIndexes_Statics::NewProp_OutIds = { "OutIds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventGetIndexes_Parms, OutIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudView_GetIndexes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventGetIndexes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudView_GetIndexes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetIndexes_Statics::NewProp_OutIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetIndexes_Statics::NewProp_OutIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetIndexes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_GetIndexes_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudView|Ids" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get the Ids of the points from this view\n\x09* This method uses a pathway that utilizes intermediate tables\n\x09* @return The number of points returned by this call\x09\x09\n\x09* @param OutIds - Array to contain the point ids if OutputIds == TRUE\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Ids of the points from this view\nThis method uses a pathway that utilizes intermediate tables\n@return The number of points returned by this call\n@param OutIds - Array to contain the point ids if OutputIds == TRUE" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudView_GetIndexes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudView, nullptr, "GetIndexes", nullptr, nullptr, Z_Construct_UFunction_UPointCloudView_GetIndexes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetIndexes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudView_GetIndexes_Statics::PointCloudView_eventGetIndexes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetIndexes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudView_GetIndexes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetIndexes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudView_GetIndexes_Statics::PointCloudView_eventGetIndexes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudView_GetIndexes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudView_GetIndexes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudView_GetMetadata_Statics
	{
		struct PointCloudView_eventGetMetadata_Parms
		{
			int32 PointId;
			TMap<FString,FString> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudView_GetMetadata_Statics::NewProp_PointId = { "PointId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventGetMetadata_Parms, PointId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloudView_GetMetadata_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloudView_GetMetadata_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPointCloudView_GetMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventGetMetadata_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudView_GetMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetMetadata_Statics::NewProp_PointId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetMetadata_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetMetadata_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_GetMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudView|Metadata" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Return the Metadata associated with a given point\n\x09* @return Metadata (Name,Value) associated with the given point\n\x09* @param PointId - The Id of the point to query. \n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the Metadata associated with a given point\n@return Metadata (Name,Value) associated with the given point\n@param PointId - The Id of the point to query." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudView_GetMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudView, nullptr, "GetMetadata", nullptr, nullptr, Z_Construct_UFunction_UPointCloudView_GetMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetMetadata_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudView_GetMetadata_Statics::PointCloudView_eventGetMetadata_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetMetadata_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudView_GetMetadata_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetMetadata_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudView_GetMetadata_Statics::PointCloudView_eventGetMetadata_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudView_GetMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudView_GetMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudView_GetMetadataValues_Statics
	{
		struct PointCloudView_eventGetMetadataValues_Parms
		{
			FString Key;
			TMap<int32,FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_GetMetadataValues_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloudView_GetMetadataValues_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventGetMetadataValues_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetMetadataValues_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UPointCloudView_GetMetadataValues_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloudView_GetMetadataValues_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudView_GetMetadataValues_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPointCloudView_GetMetadataValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventGetMetadataValues_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudView_GetMetadataValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetMetadataValues_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetMetadataValues_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetMetadataValues_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetMetadataValues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_GetMetadataValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudView|Metadata" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Return the values associated with a given Metadata Key and the ID of the points on which the Metadata appears\n\x09* @return The values of the given Metadata item and the PointId for each result\n\x09* @param Key - The name of the Metadata Item to Query\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the values associated with a given Metadata Key and the ID of the points on which the Metadata appears\n@return The values of the given Metadata item and the PointId for each result\n@param Key - The name of the Metadata Item to Query" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudView_GetMetadataValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudView, nullptr, "GetMetadataValues", nullptr, nullptr, Z_Construct_UFunction_UPointCloudView_GetMetadataValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetMetadataValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudView_GetMetadataValues_Statics::PointCloudView_eventGetMetadataValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetMetadataValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudView_GetMetadataValues_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetMetadataValues_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudView_GetMetadataValues_Statics::PointCloudView_eventGetMetadataValues_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudView_GetMetadataValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudView_GetMetadataValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsFloat_Statics
	{
		struct PointCloudView_eventGetMetadataValuesArrayAsFloat_Parms
		{
			FString Key;
			TArray<float> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsFloat_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsFloat_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventGetMetadataValuesArrayAsFloat_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsFloat_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsFloat_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsFloat_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventGetMetadataValuesArrayAsFloat_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsFloat_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsFloat_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudView|Metadata" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Return the values associated with a given Metadata Key as an array of floats\n\x09* @return The values of the given Metadata item and the PointId for each result\n\x09* @param Key - The name of the Metadata Item to Query\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the values associated with a given Metadata Key as an array of floats\n@return The values of the given Metadata item and the PointId for each result\n@param Key - The name of the Metadata Item to Query" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudView, nullptr, "GetMetadataValuesArrayAsFloat", nullptr, nullptr, Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsFloat_Statics::PointCloudView_eventGetMetadataValuesArrayAsFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsFloat_Statics::PointCloudView_eventGetMetadataValuesArrayAsFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsInt_Statics
	{
		struct PointCloudView_eventGetMetadataValuesArrayAsInt_Parms
		{
			FString Key;
			TArray<int32> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsInt_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsInt_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventGetMetadataValuesArrayAsInt_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsInt_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsInt_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsInt_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventGetMetadataValuesArrayAsInt_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsInt_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsInt_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudView|Metadata" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Return the values associated with a given Metadata Key as an array of Ints\n\x09* @return The values of the given Metadata item and the PointId for each result\n\x09* @param Key - The name of the Metadata Item to Query\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the values associated with a given Metadata Key as an array of Ints\n@return The values of the given Metadata item and the PointId for each result\n@param Key - The name of the Metadata Item to Query" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudView, nullptr, "GetMetadataValuesArrayAsInt", nullptr, nullptr, Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsInt_Statics::PointCloudView_eventGetMetadataValuesArrayAsInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsInt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsInt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsInt_Statics::PointCloudView_eventGetMetadataValuesArrayAsInt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudView_GetPointCloud_Statics
	{
		struct PointCloudView_eventGetPointCloud_Parms
		{
			UPointCloud* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudView_GetPointCloud_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventGetPointCloud_Parms, ReturnValue), Z_Construct_UClass_UPointCloud_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudView_GetPointCloud_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetPointCloud_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_GetPointCloud_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudView|Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the point cloud this view is associated to */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the point cloud this view is associated to" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudView_GetPointCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudView, nullptr, "GetPointCloud", nullptr, nullptr, Z_Construct_UFunction_UPointCloudView_GetPointCloud_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetPointCloud_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudView_GetPointCloud_Statics::PointCloudView_eventGetPointCloud_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetPointCloud_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudView_GetPointCloud_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetPointCloud_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudView_GetPointCloud_Statics::PointCloudView_eventGetPointCloud_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudView_GetPointCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudView_GetPointCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudView_GetResultsBoundingBox_Statics
	{
		struct PointCloudView_eventGetResultsBoundingBox_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudView_GetResultsBoundingBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventGetResultsBoundingBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudView_GetResultsBoundingBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetResultsBoundingBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_GetResultsBoundingBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudView|Bounds" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get the bounding box of the points that pass the filter for this view. This bounding box is axis aligned but should be fast to calculate and doesn't require accessing all of the data returned by the filter\n\x09* @return The bounding box of the points that will be returned by this view\x09\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the bounding box of the points that pass the filter for this view. This bounding box is axis aligned but should be fast to calculate and doesn't require accessing all of the data returned by the filter\n@return The bounding box of the points that will be returned by this view" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudView_GetResultsBoundingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudView, nullptr, "GetResultsBoundingBox", nullptr, nullptr, Z_Construct_UFunction_UPointCloudView_GetResultsBoundingBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetResultsBoundingBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudView_GetResultsBoundingBox_Statics::PointCloudView_eventGetResultsBoundingBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetResultsBoundingBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudView_GetResultsBoundingBox_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetResultsBoundingBox_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudView_GetResultsBoundingBox_Statics::PointCloudView_eventGetResultsBoundingBox_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudView_GetResultsBoundingBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudView_GetResultsBoundingBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudView_GetTransforms_Statics
	{
		struct PointCloudView_eventGetTransforms_Parms
		{
			TArray<FTransform> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudView_GetTransforms_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloudView_GetTransforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventGetTransforms_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudView_GetTransforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetTransforms_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetTransforms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_GetTransforms_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudView|Transforms" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the transforms of all points in the current view\n\x09* @return The transforms array\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the transforms of all points in the current view\n@return The transforms array" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudView_GetTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudView, nullptr, "GetTransforms", nullptr, nullptr, Z_Construct_UFunction_UPointCloudView_GetTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetTransforms_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudView_GetTransforms_Statics::PointCloudView_eventGetTransforms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetTransforms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudView_GetTransforms_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetTransforms_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudView_GetTransforms_Statics::PointCloudView_eventGetTransforms_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudView_GetTransforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudView_GetTransforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudView_GetTransformsAndIds_Statics
	{
		struct PointCloudView_eventGetTransformsAndIds_Parms
		{
			TArray<FTransform> OutTransforms;
			TArray<int32> OutIds;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTransforms_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutTransforms;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutIds;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudView_GetTransformsAndIds_Statics::NewProp_OutTransforms_Inner = { "OutTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloudView_GetTransformsAndIds_Statics::NewProp_OutTransforms = { "OutTransforms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventGetTransformsAndIds_Parms, OutTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudView_GetTransformsAndIds_Statics::NewProp_OutIds_Inner = { "OutIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloudView_GetTransformsAndIds_Statics::NewProp_OutIds = { "OutIds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventGetTransformsAndIds_Parms, OutIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudView_GetTransformsAndIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventGetTransformsAndIds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudView_GetTransformsAndIds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetTransformsAndIds_Statics::NewProp_OutTransforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetTransformsAndIds_Statics::NewProp_OutTransforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetTransformsAndIds_Statics::NewProp_OutIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetTransformsAndIds_Statics::NewProp_OutIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetTransformsAndIds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_GetTransformsAndIds_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudView|Transforms" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get transforms and optionally the point ids from this view. If no FilterOn methods have been called this will return all of the points, if not it will return the result of applying the filter\n\x09* This method uses a pathway that utilizes intermediate tables\n\x09* @return The number of transforms returned by this call\n\x09* @param OutTransforms - Array to contain the transforms\n\x09* @param OutIds - Array to contain the point ids if OutputIds == TRUE\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get transforms and optionally the point ids from this view. If no FilterOn methods have been called this will return all of the points, if not it will return the result of applying the filter\nThis method uses a pathway that utilizes intermediate tables\n@return The number of transforms returned by this call\n@param OutTransforms - Array to contain the transforms\n@param OutIds - Array to contain the point ids if OutputIds == TRUE" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudView_GetTransformsAndIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudView, nullptr, "GetTransformsAndIds", nullptr, nullptr, Z_Construct_UFunction_UPointCloudView_GetTransformsAndIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetTransformsAndIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudView_GetTransformsAndIds_Statics::PointCloudView_eventGetTransformsAndIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetTransformsAndIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudView_GetTransformsAndIds_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetTransformsAndIds_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudView_GetTransformsAndIds_Statics::PointCloudView_eventGetTransformsAndIds_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudView_GetTransformsAndIds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudView_GetTransformsAndIds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValues_Statics
	{
		struct PointCloudView_eventGetUniqueMetadataValues_Parms
		{
			FString Key;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValues_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValues_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventGetUniqueMetadataValues_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValues_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValues_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValues_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventGetUniqueMetadataValues_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValues_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValues_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudView|Metadata" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Return the unique values associated with a given Metadata Key\n\x09* @return The unique values of the given Metadata item\n\x09* @param Key - The name of the Metadata Item to Query\n\x09* @param ApplyFilters - Set to true if any add filters should be applied, i.e. get the unique metadatavalues represented by the result set. If false then all unique values will be returned\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the unique values associated with a given Metadata Key\n@return The unique values of the given Metadata item\n@param Key - The name of the Metadata Item to Query\n@param ApplyFilters - Set to true if any add filters should be applied, i.e. get the unique metadatavalues represented by the result set. If false then all unique values will be returned" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudView, nullptr, "GetUniqueMetadataValues", nullptr, nullptr, Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValues_Statics::PointCloudView_eventGetUniqueMetadataValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValues_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValues_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValues_Statics::PointCloudView_eventGetUniqueMetadataValues_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValuesAndCounts_Statics
	{
		struct PointCloudView_eventGetUniqueMetadataValuesAndCounts_Parms
		{
			FString Key;
			TMap<FString,int32> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValuesAndCounts_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValuesAndCounts_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventGetUniqueMetadataValuesAndCounts_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValuesAndCounts_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValuesAndCounts_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValuesAndCounts_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValuesAndCounts_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValuesAndCounts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventGetUniqueMetadataValuesAndCounts_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValuesAndCounts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValuesAndCounts_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValuesAndCounts_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValuesAndCounts_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValuesAndCounts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValuesAndCounts_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudView|Metadata" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Get the unique values for the given metadata values and the associated occurance Count for each item\n\x09* @return A map containing the names of the unique metadata values and the number of times that value appeared in the results\n\x09* @param Key - The name of the Metadata Item to Query\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the unique values for the given metadata values and the associated occurance Count for each item\n@return A map containing the names of the unique metadata values and the number of times that value appeared in the results\n@param Key - The name of the Metadata Item to Query" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValuesAndCounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudView, nullptr, "GetUniqueMetadataValuesAndCounts", nullptr, nullptr, Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValuesAndCounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValuesAndCounts_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValuesAndCounts_Statics::PointCloudView_eventGetUniqueMetadataValuesAndCounts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValuesAndCounts_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValuesAndCounts_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValuesAndCounts_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValuesAndCounts_Statics::PointCloudView_eventGetUniqueMetadataValuesAndCounts_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValuesAndCounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValuesAndCounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudView_MakeChildView_Statics
	{
		struct PointCloudView_eventMakeChildView_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPointCloudView_MakeChildView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PointCloudView_eventMakeChildView_Parms, ReturnValue), Z_Construct_UClass_UPointCloudView_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudView_MakeChildView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudView_MakeChildView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudView_MakeChildView_Statics::Function_MetaDataParams[] = {
		{ "Category", "PointCloudView|Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Creates a child view for view stacks and parents this view to it.\n\x09* @return A child view to this view\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a child view for view stacks and parents this view to it.\n@return A child view to this view" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudView_MakeChildView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudView, nullptr, "MakeChildView", nullptr, nullptr, Z_Construct_UFunction_UPointCloudView_MakeChildView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_MakeChildView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPointCloudView_MakeChildView_Statics::PointCloudView_eventMakeChildView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_MakeChildView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointCloudView_MakeChildView_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudView_MakeChildView_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPointCloudView_MakeChildView_Statics::PointCloudView_eventMakeChildView_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPointCloudView_MakeChildView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudView_MakeChildView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPointCloudView);
	UClass* Z_Construct_UClass_UPointCloudView_NoRegister()
	{
		return UPointCloudView::StaticClass();
	}
	struct Z_Construct_UClass_UPointCloudView_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointCloud_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PointCloud;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentView_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentView;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildViews_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildViews_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ChildViews;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointCloudView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloud,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudView_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPointCloudView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPointCloudView_CountResultsInBox, "CountResultsInBox" }, // 1720347795
		{ &Z_Construct_UFunction_UPointCloudView_FilterOnBoundingBox, "FilterOnBoundingBox" }, // 1182348280
		{ &Z_Construct_UFunction_UPointCloudView_FilterOnBoundingSphere, "FilterOnBoundingSphere" }, // 929798234
		{ &Z_Construct_UFunction_UPointCloudView_FilterOnIndex, "FilterOnIndex" }, // 2015203982
		{ &Z_Construct_UFunction_UPointCloudView_FilterOnMetadata, "FilterOnMetadata" }, // 607934332
		{ &Z_Construct_UFunction_UPointCloudView_FilterOnMetadataPattern, "FilterOnMetadataPattern" }, // 2920124553
		{ &Z_Construct_UFunction_UPointCloudView_FilterOnOrientedBoundingBox, "FilterOnOrientedBoundingBox" }, // 1994693049
		{ &Z_Construct_UFunction_UPointCloudView_FilterOnPointExpression, "FilterOnPointExpression" }, // 4242946460
		{ &Z_Construct_UFunction_UPointCloudView_FilterOnRange, "FilterOnRange" }, // 466392183
		{ &Z_Construct_UFunction_UPointCloudView_FilterOnTile, "FilterOnTile" }, // 3670055204
		{ &Z_Construct_UFunction_UPointCloudView_GetCount, "GetCount" }, // 1984540414
		{ &Z_Construct_UFunction_UPointCloudView_GetHash, "GetHash" }, // 2912090074
		{ &Z_Construct_UFunction_UPointCloudView_GetIndexes, "GetIndexes" }, // 561554369
		{ &Z_Construct_UFunction_UPointCloudView_GetMetadata, "GetMetadata" }, // 982270975
		{ &Z_Construct_UFunction_UPointCloudView_GetMetadataValues, "GetMetadataValues" }, // 1492852812
		{ &Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsFloat, "GetMetadataValuesArrayAsFloat" }, // 1393503608
		{ &Z_Construct_UFunction_UPointCloudView_GetMetadataValuesArrayAsInt, "GetMetadataValuesArrayAsInt" }, // 2816121878
		{ &Z_Construct_UFunction_UPointCloudView_GetPointCloud, "GetPointCloud" }, // 505089085
		{ &Z_Construct_UFunction_UPointCloudView_GetResultsBoundingBox, "GetResultsBoundingBox" }, // 3030777026
		{ &Z_Construct_UFunction_UPointCloudView_GetTransforms, "GetTransforms" }, // 804672396
		{ &Z_Construct_UFunction_UPointCloudView_GetTransformsAndIds, "GetTransformsAndIds" }, // 2501469806
		{ &Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValues, "GetUniqueMetadataValues" }, // 1251855986
		{ &Z_Construct_UFunction_UPointCloudView_GetUniqueMetadataValuesAndCounts, "GetUniqueMetadataValuesAndCounts" }, // 3028317673
		{ &Z_Construct_UFunction_UPointCloudView_MakeChildView, "MakeChildView" }, // 3601970590
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudView_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudView_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Data within a PointCloud cannot be accessed directly. It must be accessed via a PointCloudView. A view encapsualtes the concept of reading from and modifying data in a PointCloud. \n * The general usage pattern is to create a PointCloud, Create a view onto the PointCloud using the CreateView Method and then configure the view to extract the information \n * you want from the point cloud. As many views as required can be made on a PointCloud\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "PointCloudView.h" },
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data within a PointCloud cannot be accessed directly. It must be accessed via a PointCloudView. A view encapsualtes the concept of reading from and modifying data in a PointCloud.\nThe general usage pattern is to create a PointCloud, Create a view onto the PointCloud using the CreateView Method and then configure the view to extract the information\nyou want from the point cloud. As many views as required can be made on a PointCloud" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudView_Statics::NewProp_ViewGuid_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The View Guid is the unique identifier for this PointCloudView. It is used to name the internal database views and keep track of them */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The View Guid is the unique identifier for this PointCloudView. It is used to name the internal database views and keep track of them" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPointCloudView_Statics::NewProp_ViewGuid = { "ViewGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPointCloudView, ViewGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudView_Statics::NewProp_ViewGuid_MetaData), Z_Construct_UClass_UPointCloudView_Statics::NewProp_ViewGuid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudView_Statics::NewProp_PointCloud_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A pointer to the point cloud this view refers to */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A pointer to the point cloud this view refers to" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPointCloudView_Statics::NewProp_PointCloud = { "PointCloud", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPointCloudView, PointCloud), Z_Construct_UClass_UPointCloudImpl_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudView_Statics::NewProp_PointCloud_MetaData), Z_Construct_UClass_UPointCloudView_Statics::NewProp_PointCloud_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudView_Statics::NewProp_ParentView_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A point to the parent view */" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A point to the parent view" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPointCloudView_Statics::NewProp_ParentView = { "ParentView", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPointCloudView, ParentView), Z_Construct_UClass_UPointCloudView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudView_Statics::NewProp_ParentView_MetaData), Z_Construct_UClass_UPointCloudView_Statics::NewProp_ParentView_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPointCloudView_Statics::NewProp_ChildViews_ElementProp = { "ChildViews", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPointCloudView_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudView_Statics::NewProp_ChildViews_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Store a pointer to child views in a UProperty so that they don't get garbage collected while we are executing rules\n" },
#endif
		{ "ModuleRelativePath", "Public/PointCloudView.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Store a pointer to child views in a UProperty so that they don't get garbage collected while we are executing rules" },
#endif
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPointCloudView_Statics::NewProp_ChildViews = { "ChildViews", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPointCloudView, ChildViews), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudView_Statics::NewProp_ChildViews_MetaData), Z_Construct_UClass_UPointCloudView_Statics::NewProp_ChildViews_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPointCloudView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudView_Statics::NewProp_ViewGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudView_Statics::NewProp_PointCloud,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudView_Statics::NewProp_ParentView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudView_Statics::NewProp_ChildViews_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudView_Statics::NewProp_ChildViews,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointCloudView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloudView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPointCloudView_Statics::ClassParams = {
		&UPointCloudView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPointCloudView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudView_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudView_Statics::Class_MetaDataParams), Z_Construct_UClass_UPointCloudView_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudView_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPointCloudView()
	{
		if (!Z_Registration_Info_UClass_UPointCloudView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPointCloudView.OuterSingleton, Z_Construct_UClass_UPointCloudView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPointCloudView.OuterSingleton;
	}
	template<> POINTCLOUD_API UClass* StaticClass<UPointCloudView>()
	{
		return UPointCloudView::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloudView);
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPointCloudView, UPointCloudView::StaticClass, TEXT("UPointCloudView"), &Z_Registration_Info_UClass_UPointCloudView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPointCloudView), 2430917526U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudView_h_4285505972(TEXT("/Script/PointCloud"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_RuleProcessor_Source_PointCloud_Public_PointCloudView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
