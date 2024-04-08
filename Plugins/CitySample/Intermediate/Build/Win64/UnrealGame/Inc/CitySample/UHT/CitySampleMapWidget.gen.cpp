// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/UI/CitySampleMapWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleMapWidget() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleMapWidget();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleMapWidget_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySamplePanel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	DEFINE_FUNCTION(UCitySampleMapWidget::execIsMapPositionWithinBounds)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_MapPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMapPositionWithinBounds(Z_Param_Out_MapPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleMapWidget::execSetPlayerMapPositionFromWorld)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerMapPositionFromWorld(Z_Param_Out_WorldLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleMapWidget::execSetPlayerMapRotation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MapRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerMapRotation(Z_Param_MapRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleMapWidget::execSetPlayerMapPosition)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_MapPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerMapPosition(Z_Param_Out_MapPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleMapWidget::execIsPlayerHidden)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayerHidden();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleMapWidget::execHidePlayer)
	{
		P_GET_UBOOL(Z_Param_bShouldHidePlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HidePlayer(Z_Param_bShouldHidePlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleMapWidget::execIsMapHidden)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMapHidden();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleMapWidget::execHideMap)
	{
		P_GET_UBOOL(Z_Param_bShouldHideMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideMap(Z_Param_bShouldHideMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleMapWidget::execUpdateMap)
	{
		P_GET_UBOOL(Z_Param_bCaptureScene);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMap(Z_Param_bCaptureScene);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleMapWidget::execSetMapTextureRenderTarget)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMapTextureRenderTarget(Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleMapWidget::execSetMapTextureFromSceneCapture)
	{
		P_GET_OBJECT(USceneCaptureComponent2D,Z_Param_SceneCapture2D);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMapTextureFromSceneCapture(Z_Param_SceneCapture2D);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleMapWidget::execSetMapTexture)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMapTexture(Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCitySampleMapWidget::execCaptureWorldMapToTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CaptureWorldMapToTexture();
		P_NATIVE_END;
	}
	struct CitySampleMapWidget_eventOnHideMap_Parms
	{
		bool bShouldHideMap;
	};
	struct CitySampleMapWidget_eventOnHidePlayer_Parms
	{
		bool bShouldHidePlayer;
	};
	struct CitySampleMapWidget_eventOnSetMapPosition_Parms
	{
		FVector2D Position;
	};
	struct CitySampleMapWidget_eventOnSetMapSize_Parms
	{
		FVector2D Size;
	};
	struct CitySampleMapWidget_eventOnSetPlayerMapPosition_Parms
	{
		FVector2D ScreenPosition;
	};
	struct CitySampleMapWidget_eventOnSetPlayerMapRotation_Parms
	{
		float ScreenRotation;
	};
	static FName NAME_UCitySampleMapWidget_OnHideMap = FName(TEXT("OnHideMap"));
	void UCitySampleMapWidget::OnHideMap(bool bShouldHideMap)
	{
		CitySampleMapWidget_eventOnHideMap_Parms Parms;
		Parms.bShouldHideMap=bShouldHideMap ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCitySampleMapWidget_OnHideMap),&Parms);
	}
	static FName NAME_UCitySampleMapWidget_OnHidePlayer = FName(TEXT("OnHidePlayer"));
	void UCitySampleMapWidget::OnHidePlayer(bool bShouldHidePlayer)
	{
		CitySampleMapWidget_eventOnHidePlayer_Parms Parms;
		Parms.bShouldHidePlayer=bShouldHidePlayer ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCitySampleMapWidget_OnHidePlayer),&Parms);
	}
	static FName NAME_UCitySampleMapWidget_OnSetMapPosition = FName(TEXT("OnSetMapPosition"));
	void UCitySampleMapWidget::OnSetMapPosition(FVector2D const& Position)
	{
		CitySampleMapWidget_eventOnSetMapPosition_Parms Parms;
		Parms.Position=Position;
		ProcessEvent(FindFunctionChecked(NAME_UCitySampleMapWidget_OnSetMapPosition),&Parms);
	}
	static FName NAME_UCitySampleMapWidget_OnSetMapSize = FName(TEXT("OnSetMapSize"));
	void UCitySampleMapWidget::OnSetMapSize(FVector2D const& Size)
	{
		CitySampleMapWidget_eventOnSetMapSize_Parms Parms;
		Parms.Size=Size;
		ProcessEvent(FindFunctionChecked(NAME_UCitySampleMapWidget_OnSetMapSize),&Parms);
	}
	static FName NAME_UCitySampleMapWidget_OnSetPlayerMapPosition = FName(TEXT("OnSetPlayerMapPosition"));
	void UCitySampleMapWidget::OnSetPlayerMapPosition(FVector2D const& ScreenPosition)
	{
		CitySampleMapWidget_eventOnSetPlayerMapPosition_Parms Parms;
		Parms.ScreenPosition=ScreenPosition;
		ProcessEvent(FindFunctionChecked(NAME_UCitySampleMapWidget_OnSetPlayerMapPosition),&Parms);
	}
	static FName NAME_UCitySampleMapWidget_OnSetPlayerMapRotation = FName(TEXT("OnSetPlayerMapRotation"));
	void UCitySampleMapWidget::OnSetPlayerMapRotation(const float ScreenRotation)
	{
		CitySampleMapWidget_eventOnSetPlayerMapRotation_Parms Parms;
		Parms.ScreenRotation=ScreenRotation;
		ProcessEvent(FindFunctionChecked(NAME_UCitySampleMapWidget_OnSetPlayerMapRotation),&Parms);
	}
	void UCitySampleMapWidget::StaticRegisterNativesUCitySampleMapWidget()
	{
		UClass* Class = UCitySampleMapWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CaptureWorldMapToTexture", &UCitySampleMapWidget::execCaptureWorldMapToTexture },
			{ "HideMap", &UCitySampleMapWidget::execHideMap },
			{ "HidePlayer", &UCitySampleMapWidget::execHidePlayer },
			{ "IsMapHidden", &UCitySampleMapWidget::execIsMapHidden },
			{ "IsMapPositionWithinBounds", &UCitySampleMapWidget::execIsMapPositionWithinBounds },
			{ "IsPlayerHidden", &UCitySampleMapWidget::execIsPlayerHidden },
			{ "SetMapTexture", &UCitySampleMapWidget::execSetMapTexture },
			{ "SetMapTextureFromSceneCapture", &UCitySampleMapWidget::execSetMapTextureFromSceneCapture },
			{ "SetMapTextureRenderTarget", &UCitySampleMapWidget::execSetMapTextureRenderTarget },
			{ "SetPlayerMapPosition", &UCitySampleMapWidget::execSetPlayerMapPosition },
			{ "SetPlayerMapPositionFromWorld", &UCitySampleMapWidget::execSetPlayerMapPositionFromWorld },
			{ "SetPlayerMapRotation", &UCitySampleMapWidget::execSetPlayerMapRotation },
			{ "UpdateMap", &UCitySampleMapWidget::execUpdateMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCitySampleMapWidget_CaptureWorldMapToTexture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_CaptureWorldMapToTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Captures the scene of the cached world map scene capture, if applicable. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Captures the scene of the cached world map scene capture, if applicable." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMapWidget_CaptureWorldMapToTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMapWidget, nullptr, "CaptureWorldMapToTexture", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_CaptureWorldMapToTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleMapWidget_CaptureWorldMapToTexture_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCitySampleMapWidget_CaptureWorldMapToTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMapWidget_CaptureWorldMapToTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleMapWidget_HideMap_Statics
	{
		struct CitySampleMapWidget_eventHideMap_Parms
		{
			bool bShouldHideMap;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldHideMap_MetaData[];
#endif
		static void NewProp_bShouldHideMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldHideMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_HideMap_Statics::NewProp_bShouldHideMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCitySampleMapWidget_HideMap_Statics::NewProp_bShouldHideMap_SetBit(void* Obj)
	{
		((CitySampleMapWidget_eventHideMap_Parms*)Obj)->bShouldHideMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleMapWidget_HideMap_Statics::NewProp_bShouldHideMap = { "bShouldHideMap", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleMapWidget_eventHideMap_Parms), &Z_Construct_UFunction_UCitySampleMapWidget_HideMap_Statics::NewProp_bShouldHideMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_HideMap_Statics::NewProp_bShouldHideMap_MetaData), Z_Construct_UFunction_UCitySampleMapWidget_HideMap_Statics::NewProp_bShouldHideMap_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMapWidget_HideMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMapWidget_HideMap_Statics::NewProp_bShouldHideMap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_HideMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets whether the map should be hidden. */" },
#endif
		{ "CPP_Default_bShouldHideMap", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether the map should be hidden." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMapWidget_HideMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMapWidget, nullptr, "HideMap", nullptr, nullptr, Z_Construct_UFunction_UCitySampleMapWidget_HideMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_HideMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleMapWidget_HideMap_Statics::CitySampleMapWidget_eventHideMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_HideMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleMapWidget_HideMap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_HideMap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleMapWidget_HideMap_Statics::CitySampleMapWidget_eventHideMap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleMapWidget_HideMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMapWidget_HideMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleMapWidget_HidePlayer_Statics
	{
		struct CitySampleMapWidget_eventHidePlayer_Parms
		{
			bool bShouldHidePlayer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldHidePlayer_MetaData[];
#endif
		static void NewProp_bShouldHidePlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldHidePlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_HidePlayer_Statics::NewProp_bShouldHidePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCitySampleMapWidget_HidePlayer_Statics::NewProp_bShouldHidePlayer_SetBit(void* Obj)
	{
		((CitySampleMapWidget_eventHidePlayer_Parms*)Obj)->bShouldHidePlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleMapWidget_HidePlayer_Statics::NewProp_bShouldHidePlayer = { "bShouldHidePlayer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleMapWidget_eventHidePlayer_Parms), &Z_Construct_UFunction_UCitySampleMapWidget_HidePlayer_Statics::NewProp_bShouldHidePlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_HidePlayer_Statics::NewProp_bShouldHidePlayer_MetaData), Z_Construct_UFunction_UCitySampleMapWidget_HidePlayer_Statics::NewProp_bShouldHidePlayer_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMapWidget_HidePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMapWidget_HidePlayer_Statics::NewProp_bShouldHidePlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_HidePlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets whether the player marker should be hidden. */" },
#endif
		{ "CPP_Default_bShouldHidePlayer", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether the player marker should be hidden." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMapWidget_HidePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMapWidget, nullptr, "HidePlayer", nullptr, nullptr, Z_Construct_UFunction_UCitySampleMapWidget_HidePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_HidePlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleMapWidget_HidePlayer_Statics::CitySampleMapWidget_eventHidePlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_HidePlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleMapWidget_HidePlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_HidePlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleMapWidget_HidePlayer_Statics::CitySampleMapWidget_eventHidePlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleMapWidget_HidePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMapWidget_HidePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleMapWidget_IsMapHidden_Statics
	{
		struct CitySampleMapWidget_eventIsMapHidden_Parms
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
	void Z_Construct_UFunction_UCitySampleMapWidget_IsMapHidden_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleMapWidget_eventIsMapHidden_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleMapWidget_IsMapHidden_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleMapWidget_eventIsMapHidden_Parms), &Z_Construct_UFunction_UCitySampleMapWidget_IsMapHidden_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMapWidget_IsMapHidden_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMapWidget_IsMapHidden_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_IsMapHidden_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the map should be hidden. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the map should be hidden." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMapWidget_IsMapHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMapWidget, nullptr, "IsMapHidden", nullptr, nullptr, Z_Construct_UFunction_UCitySampleMapWidget_IsMapHidden_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_IsMapHidden_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleMapWidget_IsMapHidden_Statics::CitySampleMapWidget_eventIsMapHidden_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_IsMapHidden_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleMapWidget_IsMapHidden_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_IsMapHidden_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleMapWidget_IsMapHidden_Statics::CitySampleMapWidget_eventIsMapHidden_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleMapWidget_IsMapHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMapWidget_IsMapHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleMapWidget_IsMapPositionWithinBounds_Statics
	{
		struct CitySampleMapWidget_eventIsMapPositionWithinBounds_Parms
		{
			FVector2D MapPosition;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MapPosition;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_IsMapPositionWithinBounds_Statics::NewProp_MapPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleMapWidget_IsMapPositionWithinBounds_Statics::NewProp_MapPosition = { "MapPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleMapWidget_eventIsMapPositionWithinBounds_Parms, MapPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_IsMapPositionWithinBounds_Statics::NewProp_MapPosition_MetaData), Z_Construct_UFunction_UCitySampleMapWidget_IsMapPositionWithinBounds_Statics::NewProp_MapPosition_MetaData) };
	void Z_Construct_UFunction_UCitySampleMapWidget_IsMapPositionWithinBounds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleMapWidget_eventIsMapPositionWithinBounds_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleMapWidget_IsMapPositionWithinBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleMapWidget_eventIsMapPositionWithinBounds_Parms), &Z_Construct_UFunction_UCitySampleMapWidget_IsMapPositionWithinBounds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMapWidget_IsMapPositionWithinBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMapWidget_IsMapPositionWithinBounds_Statics::NewProp_MapPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMapWidget_IsMapPositionWithinBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_IsMapPositionWithinBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Checks if the map position (in render target space) is within the render target bounds, includes zoom scaling. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the map position (in render target space) is within the render target bounds, includes zoom scaling." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMapWidget_IsMapPositionWithinBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMapWidget, nullptr, "IsMapPositionWithinBounds", nullptr, nullptr, Z_Construct_UFunction_UCitySampleMapWidget_IsMapPositionWithinBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_IsMapPositionWithinBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleMapWidget_IsMapPositionWithinBounds_Statics::CitySampleMapWidget_eventIsMapPositionWithinBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_IsMapPositionWithinBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleMapWidget_IsMapPositionWithinBounds_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_IsMapPositionWithinBounds_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleMapWidget_IsMapPositionWithinBounds_Statics::CitySampleMapWidget_eventIsMapPositionWithinBounds_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleMapWidget_IsMapPositionWithinBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMapWidget_IsMapPositionWithinBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleMapWidget_IsPlayerHidden_Statics
	{
		struct CitySampleMapWidget_eventIsPlayerHidden_Parms
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
	void Z_Construct_UFunction_UCitySampleMapWidget_IsPlayerHidden_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleMapWidget_eventIsPlayerHidden_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleMapWidget_IsPlayerHidden_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleMapWidget_eventIsPlayerHidden_Parms), &Z_Construct_UFunction_UCitySampleMapWidget_IsPlayerHidden_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMapWidget_IsPlayerHidden_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMapWidget_IsPlayerHidden_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_IsPlayerHidden_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the player marker should be hidden. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the player marker should be hidden." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMapWidget_IsPlayerHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMapWidget, nullptr, "IsPlayerHidden", nullptr, nullptr, Z_Construct_UFunction_UCitySampleMapWidget_IsPlayerHidden_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_IsPlayerHidden_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleMapWidget_IsPlayerHidden_Statics::CitySampleMapWidget_eventIsPlayerHidden_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_IsPlayerHidden_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleMapWidget_IsPlayerHidden_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_IsPlayerHidden_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleMapWidget_IsPlayerHidden_Statics::CitySampleMapWidget_eventIsPlayerHidden_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleMapWidget_IsPlayerHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMapWidget_IsPlayerHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleMapWidget_OnHideMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldHideMap_MetaData[];
#endif
		static void NewProp_bShouldHideMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldHideMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_OnHideMap_Statics::NewProp_bShouldHideMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCitySampleMapWidget_OnHideMap_Statics::NewProp_bShouldHideMap_SetBit(void* Obj)
	{
		((CitySampleMapWidget_eventOnHideMap_Parms*)Obj)->bShouldHideMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleMapWidget_OnHideMap_Statics::NewProp_bShouldHideMap = { "bShouldHideMap", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleMapWidget_eventOnHideMap_Parms), &Z_Construct_UFunction_UCitySampleMapWidget_OnHideMap_Statics::NewProp_bShouldHideMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_OnHideMap_Statics::NewProp_bShouldHideMap_MetaData), Z_Construct_UFunction_UCitySampleMapWidget_OnHideMap_Statics::NewProp_bShouldHideMap_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMapWidget_OnHideMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMapWidget_OnHideMap_Statics::NewProp_bShouldHideMap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_OnHideMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP hook for handling UI updates to the map visibility. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP hook for handling UI updates to the map visibility." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMapWidget_OnHideMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMapWidget, nullptr, "OnHideMap", nullptr, nullptr, Z_Construct_UFunction_UCitySampleMapWidget_OnHideMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_OnHideMap_Statics::PropPointers), sizeof(CitySampleMapWidget_eventOnHideMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_OnHideMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleMapWidget_OnHideMap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_OnHideMap_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySampleMapWidget_eventOnHideMap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleMapWidget_OnHideMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMapWidget_OnHideMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleMapWidget_OnHidePlayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldHidePlayer_MetaData[];
#endif
		static void NewProp_bShouldHidePlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldHidePlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_OnHidePlayer_Statics::NewProp_bShouldHidePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCitySampleMapWidget_OnHidePlayer_Statics::NewProp_bShouldHidePlayer_SetBit(void* Obj)
	{
		((CitySampleMapWidget_eventOnHidePlayer_Parms*)Obj)->bShouldHidePlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleMapWidget_OnHidePlayer_Statics::NewProp_bShouldHidePlayer = { "bShouldHidePlayer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleMapWidget_eventOnHidePlayer_Parms), &Z_Construct_UFunction_UCitySampleMapWidget_OnHidePlayer_Statics::NewProp_bShouldHidePlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_OnHidePlayer_Statics::NewProp_bShouldHidePlayer_MetaData), Z_Construct_UFunction_UCitySampleMapWidget_OnHidePlayer_Statics::NewProp_bShouldHidePlayer_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMapWidget_OnHidePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMapWidget_OnHidePlayer_Statics::NewProp_bShouldHidePlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_OnHidePlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP hook for handling UI updates to player marker visibility. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP hook for handling UI updates to player marker visibility." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMapWidget_OnHidePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMapWidget, nullptr, "OnHidePlayer", nullptr, nullptr, Z_Construct_UFunction_UCitySampleMapWidget_OnHidePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_OnHidePlayer_Statics::PropPointers), sizeof(CitySampleMapWidget_eventOnHidePlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_OnHidePlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleMapWidget_OnHidePlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_OnHidePlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySampleMapWidget_eventOnHidePlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleMapWidget_OnHidePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMapWidget_OnHidePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapPosition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapPosition_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleMapWidget_eventOnSetMapPosition_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapPosition_Statics::NewProp_Position_MetaData), Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapPosition_Statics::NewProp_Position_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapPosition_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP hook for handling UI updates to the map position. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP hook for handling UI updates to the map position." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMapWidget, nullptr, "OnSetMapPosition", nullptr, nullptr, Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapPosition_Statics::PropPointers), sizeof(CitySampleMapWidget_eventOnSetMapPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySampleMapWidget_eventOnSetMapPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapSize_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapSize_Statics::NewProp_Size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleMapWidget_eventOnSetMapSize_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapSize_Statics::NewProp_Size_MetaData), Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapSize_Statics::NewProp_Size_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapSize_Statics::NewProp_Size,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP hook for handling UI updates to the map size. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP hook for handling UI updates to the map size." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMapWidget, nullptr, "OnSetMapSize", nullptr, nullptr, Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapSize_Statics::PropPointers), sizeof(CitySampleMapWidget_eventOnSetMapSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapSize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapSize_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySampleMapWidget_eventOnSetMapSize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapPosition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapPosition_Statics::NewProp_ScreenPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapPosition_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleMapWidget_eventOnSetPlayerMapPosition_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapPosition_Statics::NewProp_ScreenPosition_MetaData), Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapPosition_Statics::NewProp_ScreenPosition_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapPosition_Statics::NewProp_ScreenPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP hook for handling UI updates to the player position on the map. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP hook for handling UI updates to the player position on the map." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMapWidget, nullptr, "OnSetPlayerMapPosition", nullptr, nullptr, Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapPosition_Statics::PropPointers), sizeof(CitySampleMapWidget_eventOnSetPlayerMapPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySampleMapWidget_eventOnSetPlayerMapPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapRotation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenRotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapRotation_Statics::NewProp_ScreenRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapRotation_Statics::NewProp_ScreenRotation = { "ScreenRotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleMapWidget_eventOnSetPlayerMapRotation_Parms, ScreenRotation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapRotation_Statics::NewProp_ScreenRotation_MetaData), Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapRotation_Statics::NewProp_ScreenRotation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapRotation_Statics::NewProp_ScreenRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BP hook for handling UI updates to the player rotation on the map. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP hook for handling UI updates to the player rotation on the map." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMapWidget, nullptr, "OnSetPlayerMapRotation", nullptr, nullptr, Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapRotation_Statics::PropPointers), sizeof(CitySampleMapWidget_eventOnSetPlayerMapRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapRotation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapRotation_Statics::PropPointers) < 2048);
	static_assert(sizeof(CitySampleMapWidget_eventOnSetPlayerMapRotation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleMapWidget_SetMapTexture_Statics
	{
		struct CitySampleMapWidget_eventSetMapTexture_Parms
		{
			const UTexture2D* Texture;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_SetMapTexture_Statics::NewProp_Texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleMapWidget_SetMapTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleMapWidget_eventSetMapTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_SetMapTexture_Statics::NewProp_Texture_MetaData), Z_Construct_UFunction_UCitySampleMapWidget_SetMapTexture_Statics::NewProp_Texture_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMapWidget_SetMapTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMapWidget_SetMapTexture_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_SetMapTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the map image texture directly. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the map image texture directly." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMapWidget_SetMapTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMapWidget, nullptr, "SetMapTexture", nullptr, nullptr, Z_Construct_UFunction_UCitySampleMapWidget_SetMapTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_SetMapTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleMapWidget_SetMapTexture_Statics::CitySampleMapWidget_eventSetMapTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_SetMapTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleMapWidget_SetMapTexture_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_SetMapTexture_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleMapWidget_SetMapTexture_Statics::CitySampleMapWidget_eventSetMapTexture_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleMapWidget_SetMapTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMapWidget_SetMapTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureFromSceneCapture_Statics
	{
		struct CitySampleMapWidget_eventSetMapTextureFromSceneCapture_Parms
		{
			const USceneCaptureComponent2D* SceneCapture2D;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneCapture2D_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneCapture2D;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureFromSceneCapture_Statics::NewProp_SceneCapture2D_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureFromSceneCapture_Statics::NewProp_SceneCapture2D = { "SceneCapture2D", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleMapWidget_eventSetMapTextureFromSceneCapture_Parms, SceneCapture2D), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureFromSceneCapture_Statics::NewProp_SceneCapture2D_MetaData), Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureFromSceneCapture_Statics::NewProp_SceneCapture2D_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureFromSceneCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureFromSceneCapture_Statics::NewProp_SceneCapture2D,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureFromSceneCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the map image texture and updates the cached scene capture component and the view projection matrix. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the map image texture and updates the cached scene capture component and the view projection matrix." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureFromSceneCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMapWidget, nullptr, "SetMapTextureFromSceneCapture", nullptr, nullptr, Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureFromSceneCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureFromSceneCapture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureFromSceneCapture_Statics::CitySampleMapWidget_eventSetMapTextureFromSceneCapture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureFromSceneCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureFromSceneCapture_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureFromSceneCapture_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureFromSceneCapture_Statics::CitySampleMapWidget_eventSetMapTextureFromSceneCapture_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureFromSceneCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureFromSceneCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureRenderTarget_Statics
	{
		struct CitySampleMapWidget_eventSetMapTextureRenderTarget_Parms
		{
			const UTextureRenderTarget2D* Texture;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureRenderTarget_Statics::NewProp_Texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureRenderTarget_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleMapWidget_eventSetMapTextureRenderTarget_Parms, Texture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureRenderTarget_Statics::NewProp_Texture_MetaData), Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureRenderTarget_Statics::NewProp_Texture_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureRenderTarget_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the map image texture from a render target. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the map image texture from a render target." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMapWidget, nullptr, "SetMapTextureRenderTarget", nullptr, nullptr, Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureRenderTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureRenderTarget_Statics::CitySampleMapWidget_eventSetMapTextureRenderTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureRenderTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureRenderTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureRenderTarget_Statics::CitySampleMapWidget_eventSetMapTextureRenderTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPosition_Statics
	{
		struct CitySampleMapWidget_eventSetPlayerMapPosition_Parms
		{
			FVector2D MapPosition;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MapPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPosition_Statics::NewProp_MapPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPosition_Statics::NewProp_MapPosition = { "MapPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleMapWidget_eventSetPlayerMapPosition_Parms, MapPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPosition_Statics::NewProp_MapPosition_MetaData), Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPosition_Statics::NewProp_MapPosition_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPosition_Statics::NewProp_MapPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Sets the current player map position in screen space. \n\x09 * @note\x09Input map position should not include zoom scaling or pan offsets.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the current player map position in screen space.\n@note        Input map position should not include zoom scaling or pan offsets." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMapWidget, nullptr, "SetPlayerMapPosition", nullptr, nullptr, Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPosition_Statics::CitySampleMapWidget_eventSetPlayerMapPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPosition_Statics::CitySampleMapWidget_eventSetPlayerMapPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPositionFromWorld_Statics
	{
		struct CitySampleMapWidget_eventSetPlayerMapPositionFromWorld_Parms
		{
			FVector WorldLocation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPositionFromWorld_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPositionFromWorld_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleMapWidget_eventSetPlayerMapPositionFromWorld_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPositionFromWorld_Statics::NewProp_WorldLocation_MetaData), Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPositionFromWorld_Statics::NewProp_WorldLocation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPositionFromWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPositionFromWorld_Statics::NewProp_WorldLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPositionFromWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the current player map position, projecting the world location into render target (map) space. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the current player map position, projecting the world location into render target (map) space." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPositionFromWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMapWidget, nullptr, "SetPlayerMapPositionFromWorld", nullptr, nullptr, Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPositionFromWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPositionFromWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPositionFromWorld_Statics::CitySampleMapWidget_eventSetPlayerMapPositionFromWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPositionFromWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPositionFromWorld_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPositionFromWorld_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPositionFromWorld_Statics::CitySampleMapWidget_eventSetPlayerMapPositionFromWorld_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPositionFromWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPositionFromWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapRotation_Statics
	{
		struct CitySampleMapWidget_eventSetPlayerMapRotation_Parms
		{
			float MapRotation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapRotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MapRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapRotation_Statics::NewProp_MapRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapRotation_Statics::NewProp_MapRotation = { "MapRotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleMapWidget_eventSetPlayerMapRotation_Parms, MapRotation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapRotation_Statics::NewProp_MapRotation_MetaData), Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapRotation_Statics::NewProp_MapRotation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapRotation_Statics::NewProp_MapRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the current player map rotation in screen space. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the current player map rotation in screen space." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMapWidget, nullptr, "SetPlayerMapRotation", nullptr, nullptr, Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapRotation_Statics::CitySampleMapWidget_eventSetPlayerMapRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapRotation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapRotation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapRotation_Statics::CitySampleMapWidget_eventSetPlayerMapRotation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCitySampleMapWidget_UpdateMap_Statics
	{
		struct CitySampleMapWidget_eventUpdateMap_Parms
		{
			bool bCaptureScene;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureScene_MetaData[];
#endif
		static void NewProp_bCaptureScene_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureScene;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_UpdateMap_Statics::NewProp_bCaptureScene_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCitySampleMapWidget_UpdateMap_Statics::NewProp_bCaptureScene_SetBit(void* Obj)
	{
		((CitySampleMapWidget_eventUpdateMap_Parms*)Obj)->bCaptureScene = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCitySampleMapWidget_UpdateMap_Statics::NewProp_bCaptureScene = { "bCaptureScene", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleMapWidget_eventUpdateMap_Parms), &Z_Construct_UFunction_UCitySampleMapWidget_UpdateMap_Statics::NewProp_bCaptureScene_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_UpdateMap_Statics::NewProp_bCaptureScene_MetaData), Z_Construct_UFunction_UCitySampleMapWidget_UpdateMap_Statics::NewProp_bCaptureScene_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCitySampleMapWidget_UpdateMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCitySampleMapWidget_UpdateMap_Statics::NewProp_bCaptureScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCitySampleMapWidget_UpdateMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Updates the scene capture, map size and visibility, and player position/rotation. */" },
#endif
		{ "CPP_Default_bCaptureScene", "false" },
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates the scene capture, map size and visibility, and player position/rotation." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCitySampleMapWidget_UpdateMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCitySampleMapWidget, nullptr, "UpdateMap", nullptr, nullptr, Z_Construct_UFunction_UCitySampleMapWidget_UpdateMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_UpdateMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCitySampleMapWidget_UpdateMap_Statics::CitySampleMapWidget_eventUpdateMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_UpdateMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCitySampleMapWidget_UpdateMap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCitySampleMapWidget_UpdateMap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCitySampleMapWidget_UpdateMap_Statics::CitySampleMapWidget_eventUpdateMap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCitySampleMapWidget_UpdateMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCitySampleMapWidget_UpdateMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCitySampleMapWidget);
	UClass* Z_Construct_UClass_UCitySampleMapWidget_NoRegister()
	{
		return UCitySampleMapWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCitySampleMapWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MapImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapTextureParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MapTextureParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapTextureOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MapTextureOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHidePlayer_MetaData[];
#endif
		static void NewProp_bHidePlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidePlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideMap_MetaData[];
#endif
		static void NewProp_bHideMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedSceneCaptureComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedSceneCaptureComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapViewProjectionMatrix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MapViewProjectionMatrix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackedPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TrackedPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMapPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerMapPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMapRotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerMapRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCitySampleMapWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCitySamplePanel,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMapWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCitySampleMapWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCitySampleMapWidget_CaptureWorldMapToTexture, "CaptureWorldMapToTexture" }, // 2608698179
		{ &Z_Construct_UFunction_UCitySampleMapWidget_HideMap, "HideMap" }, // 3052370503
		{ &Z_Construct_UFunction_UCitySampleMapWidget_HidePlayer, "HidePlayer" }, // 1298911985
		{ &Z_Construct_UFunction_UCitySampleMapWidget_IsMapHidden, "IsMapHidden" }, // 407744253
		{ &Z_Construct_UFunction_UCitySampleMapWidget_IsMapPositionWithinBounds, "IsMapPositionWithinBounds" }, // 2407385976
		{ &Z_Construct_UFunction_UCitySampleMapWidget_IsPlayerHidden, "IsPlayerHidden" }, // 3566456528
		{ &Z_Construct_UFunction_UCitySampleMapWidget_OnHideMap, "OnHideMap" }, // 1677837586
		{ &Z_Construct_UFunction_UCitySampleMapWidget_OnHidePlayer, "OnHidePlayer" }, // 2228856928
		{ &Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapPosition, "OnSetMapPosition" }, // 925046973
		{ &Z_Construct_UFunction_UCitySampleMapWidget_OnSetMapSize, "OnSetMapSize" }, // 3851749614
		{ &Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapPosition, "OnSetPlayerMapPosition" }, // 2404660389
		{ &Z_Construct_UFunction_UCitySampleMapWidget_OnSetPlayerMapRotation, "OnSetPlayerMapRotation" }, // 4147728476
		{ &Z_Construct_UFunction_UCitySampleMapWidget_SetMapTexture, "SetMapTexture" }, // 2298758582
		{ &Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureFromSceneCapture, "SetMapTextureFromSceneCapture" }, // 1726155692
		{ &Z_Construct_UFunction_UCitySampleMapWidget_SetMapTextureRenderTarget, "SetMapTextureRenderTarget" }, // 1572562781
		{ &Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPosition, "SetPlayerMapPosition" }, // 1715360297
		{ &Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapPositionFromWorld, "SetPlayerMapPositionFromWorld" }, // 1697093945
		{ &Z_Construct_UFunction_UCitySampleMapWidget_SetPlayerMapRotation, "SetPlayerMapRotation" }, // 356211041
		{ &Z_Construct_UFunction_UCitySampleMapWidget_UpdateMap, "UpdateMap" }, // 3686204443
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMapWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleMapWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * CitySample UI base class for a Map widget. Can be used with either a specific texture or a scene capture render target.\n */" },
#endif
		{ "IncludePath", "UI/CitySampleMapWidget.h" },
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CitySample UI base class for a Map widget. Can be used with either a specific texture or a scene capture render target." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_MapImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Map Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The UImage widget whose material is used when setting the scene render target as a texture parameter. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The UImage widget whose material is used when setting the scene render target as a texture parameter." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_MapImage = { "MapImage", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleMapWidget, MapImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_MapImage_MetaData), Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_MapImage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_MapTextureParameterName_MetaData[] = {
		{ "Category", "Map Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the texture parameter on the image material to be set to the scene render target texture. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the texture parameter on the image material to be set to the scene render target texture." },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_MapTextureParameterName = { "MapTextureParameterName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleMapWidget, MapTextureParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_MapTextureParameterName_MetaData), Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_MapTextureParameterName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_MapTextureOpacity_MetaData[] = {
		{ "Category", "Map Widget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the texture parameter on the image material to be set to the scene render target texture. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the texture parameter on the image material to be set to the scene render target texture." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_MapTextureOpacity = { "MapTextureOpacity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleMapWidget, MapTextureOpacity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_MapTextureOpacity_MetaData), Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_MapTextureOpacity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_bHidePlayer_MetaData[] = {
		{ "Category", "Map Widget|Transient" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to hide the player marker, if applicable. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to hide the player marker, if applicable." },
#endif
	};
#endif
	void Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_bHidePlayer_SetBit(void* Obj)
	{
		((UCitySampleMapWidget*)Obj)->bHidePlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_bHidePlayer = { "bHidePlayer", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleMapWidget), &Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_bHidePlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_bHidePlayer_MetaData), Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_bHidePlayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_bHideMap_MetaData[] = {
		{ "Category", "Map Widget|Transient" },
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_bHideMap_SetBit(void* Obj)
	{
		((UCitySampleMapWidget*)Obj)->bHideMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_bHideMap = { "bHideMap", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCitySampleMapWidget), &Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_bHideMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_bHideMap_MetaData), Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_bHideMap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_CachedSceneCaptureComponent_MetaData[] = {
		{ "Category", "Map Widget|Transient" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cached scene capture component that renders the map image texture target. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached scene capture component that renders the map image texture target." },
#endif
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_CachedSceneCaptureComponent = { "CachedSceneCaptureComponent", nullptr, (EPropertyFlags)0x00440000000a2009, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleMapWidget, CachedSceneCaptureComponent), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_CachedSceneCaptureComponent_MetaData), Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_CachedSceneCaptureComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_MapViewProjectionMatrix_MetaData[] = {
		{ "Category", "Map Widget|Transient" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** ViewProjection matrix used to project from world space to render target (map) space, i.e. the player position. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ViewProjection matrix used to project from world space to render target (map) space, i.e. the player position." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_MapViewProjectionMatrix = { "MapViewProjectionMatrix", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleMapWidget, MapViewProjectionMatrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_MapViewProjectionMatrix_MetaData), Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_MapViewProjectionMatrix_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_TrackedPlayer_MetaData[] = {
		{ "Category", "Map Widget|Transient" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The player whose position is represented by the player marker. This is initialized to the PC that owns the map widget. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The player whose position is represented by the player marker. This is initialized to the PC that owns the map widget." },
#endif
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_TrackedPlayer = { "TrackedPlayer", nullptr, (EPropertyFlags)0x0044000000022001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleMapWidget, TrackedPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_TrackedPlayer_MetaData), Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_TrackedPlayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_PlayerMapPosition_MetaData[] = {
		{ "Category", "Map Widget|Transient" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stored position of the player in render target space, a.k.a. where the player is on the map relative to the map center. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stored position of the player in render target space, a.k.a. where the player is on the map relative to the map center." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_PlayerMapPosition = { "PlayerMapPosition", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleMapWidget, PlayerMapPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_PlayerMapPosition_MetaData), Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_PlayerMapPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_PlayerMapRotation_MetaData[] = {
		{ "Category", "Map Widget|Transient" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stored rotation of the player in render target space, a.k.a. direction the player is facing relative to the map. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CitySampleMapWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stored rotation of the player in render target space, a.k.a. direction the player is facing relative to the map." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_PlayerMapRotation = { "PlayerMapRotation", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCitySampleMapWidget, PlayerMapRotation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_PlayerMapRotation_MetaData), Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_PlayerMapRotation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCitySampleMapWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_MapImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_MapTextureParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_MapTextureOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_bHidePlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_bHideMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_CachedSceneCaptureComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_MapViewProjectionMatrix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_TrackedPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_PlayerMapPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCitySampleMapWidget_Statics::NewProp_PlayerMapRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCitySampleMapWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCitySampleMapWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCitySampleMapWidget_Statics::ClassParams = {
		&UCitySampleMapWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCitySampleMapWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMapWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMapWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCitySampleMapWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCitySampleMapWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCitySampleMapWidget()
	{
		if (!Z_Registration_Info_UClass_UCitySampleMapWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCitySampleMapWidget.OuterSingleton, Z_Construct_UClass_UCitySampleMapWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCitySampleMapWidget.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<UCitySampleMapWidget>()
	{
		return UCitySampleMapWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCitySampleMapWidget);
	UCitySampleMapWidget::~UCitySampleMapWidget() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMapWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMapWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCitySampleMapWidget, UCitySampleMapWidget::StaticClass, TEXT("UCitySampleMapWidget"), &Z_Registration_Info_UClass_UCitySampleMapWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCitySampleMapWidget), 1286192124U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMapWidget_h_1972383685(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMapWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMapWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
