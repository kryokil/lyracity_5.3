// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Game/CitySamplePlayerController.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySamplePlayerController() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySamplePlayerCameraManager_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySamplePlayerController();
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySamplePlayerController_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleControlsOverlayInterface_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleInteractionComponent_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleInteractorInterface_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UCitySampleUIComponent_NoRegister();
	CITYSAMPLE_API UClass* Z_Construct_UClass_UPhotoModeComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	DEFINE_FUNCTION(ACitySamplePlayerController::execCheckIfSafeToEndCameraTransition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckIfSafeToEndCameraTransition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySamplePlayerController::execUpdateSpawnTransformForLeavingDrone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSpawnTransformForLeavingDrone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySamplePlayerController::execUpdateSpawnTransformForEnteringDrone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSpawnTransformForEnteringDrone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySamplePlayerController::execTryToInteractWithRelevantInteraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryToInteractWithRelevantInteraction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySamplePlayerController::execHandleLongDistanceCameraTransition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleLongDistanceCameraTransition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySamplePlayerController::execToggleOptionsMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ToggleOptionsMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySamplePlayerController::execRemovePawnInputContext)
	{
		P_GET_OBJECT(APawn,Z_Param_ToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePawnInputContext(Z_Param_ToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySamplePlayerController::execAddPawnInputContext)
	{
		P_GET_OBJECT(APawn,Z_Param_ToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPawnInputContext(Z_Param_ToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySamplePlayerController::execRemoveInputContext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveInputContext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySamplePlayerController::execAddInputContext)
	{
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddInputContext(Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySamplePlayerController::execCanPerformInteractions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPerformInteractions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySamplePlayerController::execSetCanPerformInteractions)
	{
		P_GET_UBOOL(Z_Param_bNewCanPerformInteractions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanPerformInteractions(Z_Param_bNewCanPerformInteractions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySamplePlayerController::execGetCameraTransitionLevelStreamDistance2D)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCameraTransitionLevelStreamDistance2D();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySamplePlayerController::execSetCurrentPlayerVehicle)
	{
		P_GET_OBJECT(AActor,Z_Param_NewPlayerVehicle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentPlayerVehicle(Z_Param_NewPlayerVehicle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySamplePlayerController::execGetCitySampleCameraManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACitySamplePlayerCameraManager**)Z_Param__Result=P_THIS->GetCitySampleCameraManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySamplePlayerController::execGetCurrentPlayerVehicle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetCurrentPlayerVehicle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySamplePlayerController::execGetPhotoModeComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPhotoModeComponent**)Z_Param__Result=P_THIS->GetPhotoModeComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACitySamplePlayerController::execGetCitySampleUIComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCitySampleUIComponent**)Z_Param__Result=P_THIS->GetCitySampleUIComponent();
		P_NATIVE_END;
	}
	static FName NAME_ACitySamplePlayerController_SpawnNewPawnLeavingPhotoMode = FName(TEXT("SpawnNewPawnLeavingPhotoMode"));
	void ACitySamplePlayerController::SpawnNewPawnLeavingPhotoMode()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACitySamplePlayerController_SpawnNewPawnLeavingPhotoMode),NULL);
	}
	void ACitySamplePlayerController::StaticRegisterNativesACitySamplePlayerController()
	{
		UClass* Class = ACitySamplePlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddInputContext", &ACitySamplePlayerController::execAddInputContext },
			{ "AddPawnInputContext", &ACitySamplePlayerController::execAddPawnInputContext },
			{ "CanPerformInteractions", &ACitySamplePlayerController::execCanPerformInteractions },
			{ "CheckIfSafeToEndCameraTransition", &ACitySamplePlayerController::execCheckIfSafeToEndCameraTransition },
			{ "GetCameraTransitionLevelStreamDistance2D", &ACitySamplePlayerController::execGetCameraTransitionLevelStreamDistance2D },
			{ "GetCitySampleCameraManager", &ACitySamplePlayerController::execGetCitySampleCameraManager },
			{ "GetCitySampleUIComponent", &ACitySamplePlayerController::execGetCitySampleUIComponent },
			{ "GetCurrentPlayerVehicle", &ACitySamplePlayerController::execGetCurrentPlayerVehicle },
			{ "GetPhotoModeComponent", &ACitySamplePlayerController::execGetPhotoModeComponent },
			{ "HandleLongDistanceCameraTransition", &ACitySamplePlayerController::execHandleLongDistanceCameraTransition },
			{ "RemoveInputContext", &ACitySamplePlayerController::execRemoveInputContext },
			{ "RemovePawnInputContext", &ACitySamplePlayerController::execRemovePawnInputContext },
			{ "SetCanPerformInteractions", &ACitySamplePlayerController::execSetCanPerformInteractions },
			{ "SetCurrentPlayerVehicle", &ACitySamplePlayerController::execSetCurrentPlayerVehicle },
			{ "ToggleOptionsMenu", &ACitySamplePlayerController::execToggleOptionsMenu },
			{ "TryToInteractWithRelevantInteraction", &ACitySamplePlayerController::execTryToInteractWithRelevantInteraction },
			{ "UpdateSpawnTransformForEnteringDrone", &ACitySamplePlayerController::execUpdateSpawnTransformForEnteringDrone },
			{ "UpdateSpawnTransformForLeavingDrone", &ACitySamplePlayerController::execUpdateSpawnTransformForLeavingDrone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACitySamplePlayerController_AddInputContext_Statics
	{
		struct CitySamplePlayerController_eventAddInputContext_Parms
		{
			bool bForce;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForce_MetaData[];
#endif
		static void NewProp_bForce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySamplePlayerController_AddInputContext_Statics::NewProp_bForce_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ACitySamplePlayerController_AddInputContext_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((CitySamplePlayerController_eventAddInputContext_Parms*)Obj)->bForce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACitySamplePlayerController_AddInputContext_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySamplePlayerController_eventAddInputContext_Parms), &Z_Construct_UFunction_ACitySamplePlayerController_AddInputContext_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_AddInputContext_Statics::NewProp_bForce_MetaData), Z_Construct_UFunction_ACitySamplePlayerController_AddInputContext_Statics::NewProp_bForce_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySamplePlayerController_AddInputContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySamplePlayerController_AddInputContext_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySamplePlayerController_AddInputContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Activates the PlayerController's referenced Input Mapping Context */" },
#endif
		{ "CPP_Default_bForce", "false" },
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Activates the PlayerController's referenced Input Mapping Context" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayerController_AddInputContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayerController, nullptr, "AddInputContext", nullptr, nullptr, Z_Construct_UFunction_ACitySamplePlayerController_AddInputContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_AddInputContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySamplePlayerController_AddInputContext_Statics::CitySamplePlayerController_eventAddInputContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_AddInputContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayerController_AddInputContext_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_AddInputContext_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySamplePlayerController_AddInputContext_Statics::CitySamplePlayerController_eventAddInputContext_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySamplePlayerController_AddInputContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayerController_AddInputContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySamplePlayerController_AddPawnInputContext_Statics
	{
		struct CitySamplePlayerController_eventAddPawnInputContext_Parms
		{
			APawn* ToAdd;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToAdd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACitySamplePlayerController_AddPawnInputContext_Statics::NewProp_ToAdd = { "ToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePlayerController_eventAddPawnInputContext_Parms, ToAdd), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySamplePlayerController_AddPawnInputContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySamplePlayerController_AddPawnInputContext_Statics::NewProp_ToAdd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySamplePlayerController_AddPawnInputContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attempts to activate the input context mapping of the pawn that is passed in */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempts to activate the input context mapping of the pawn that is passed in" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayerController_AddPawnInputContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayerController, nullptr, "AddPawnInputContext", nullptr, nullptr, Z_Construct_UFunction_ACitySamplePlayerController_AddPawnInputContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_AddPawnInputContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySamplePlayerController_AddPawnInputContext_Statics::CitySamplePlayerController_eventAddPawnInputContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_AddPawnInputContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayerController_AddPawnInputContext_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_AddPawnInputContext_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySamplePlayerController_AddPawnInputContext_Statics::CitySamplePlayerController_eventAddPawnInputContext_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySamplePlayerController_AddPawnInputContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayerController_AddPawnInputContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySamplePlayerController_CanPerformInteractions_Statics
	{
		struct CitySamplePlayerController_eventCanPerformInteractions_Parms
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
	void Z_Construct_UFunction_ACitySamplePlayerController_CanPerformInteractions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySamplePlayerController_eventCanPerformInteractions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACitySamplePlayerController_CanPerformInteractions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySamplePlayerController_eventCanPerformInteractions_Parms), &Z_Construct_UFunction_ACitySamplePlayerController_CanPerformInteractions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySamplePlayerController_CanPerformInteractions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySamplePlayerController_CanPerformInteractions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySamplePlayerController_CanPerformInteractions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayerController_CanPerformInteractions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayerController, nullptr, "CanPerformInteractions", nullptr, nullptr, Z_Construct_UFunction_ACitySamplePlayerController_CanPerformInteractions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_CanPerformInteractions_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySamplePlayerController_CanPerformInteractions_Statics::CitySamplePlayerController_eventCanPerformInteractions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_CanPerformInteractions_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayerController_CanPerformInteractions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_CanPerformInteractions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySamplePlayerController_CanPerformInteractions_Statics::CitySamplePlayerController_eventCanPerformInteractions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySamplePlayerController_CanPerformInteractions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayerController_CanPerformInteractions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySamplePlayerController_CheckIfSafeToEndCameraTransition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySamplePlayerController_CheckIfSafeToEndCameraTransition_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Check if world streaming is complete so that we can end a camera transition */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if world streaming is complete so that we can end a camera transition" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayerController_CheckIfSafeToEndCameraTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayerController, nullptr, "CheckIfSafeToEndCameraTransition", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_CheckIfSafeToEndCameraTransition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayerController_CheckIfSafeToEndCameraTransition_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACitySamplePlayerController_CheckIfSafeToEndCameraTransition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayerController_CheckIfSafeToEndCameraTransition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySamplePlayerController_GetCameraTransitionLevelStreamDistance2D_Statics
	{
		struct CitySamplePlayerController_eventGetCameraTransitionLevelStreamDistance2D_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySamplePlayerController_GetCameraTransitionLevelStreamDistance2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePlayerController_eventGetCameraTransitionLevelStreamDistance2D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySamplePlayerController_GetCameraTransitionLevelStreamDistance2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySamplePlayerController_GetCameraTransitionLevelStreamDistance2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySamplePlayerController_GetCameraTransitionLevelStreamDistance2D_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayerController_GetCameraTransitionLevelStreamDistance2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayerController, nullptr, "GetCameraTransitionLevelStreamDistance2D", nullptr, nullptr, Z_Construct_UFunction_ACitySamplePlayerController_GetCameraTransitionLevelStreamDistance2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_GetCameraTransitionLevelStreamDistance2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySamplePlayerController_GetCameraTransitionLevelStreamDistance2D_Statics::CitySamplePlayerController_eventGetCameraTransitionLevelStreamDistance2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_GetCameraTransitionLevelStreamDistance2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayerController_GetCameraTransitionLevelStreamDistance2D_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_GetCameraTransitionLevelStreamDistance2D_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySamplePlayerController_GetCameraTransitionLevelStreamDistance2D_Statics::CitySamplePlayerController_eventGetCameraTransitionLevelStreamDistance2D_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySamplePlayerController_GetCameraTransitionLevelStreamDistance2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayerController_GetCameraTransitionLevelStreamDistance2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleCameraManager_Statics
	{
		struct CitySamplePlayerController_eventGetCitySampleCameraManager_Parms
		{
			ACitySamplePlayerCameraManager* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleCameraManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePlayerController_eventGetCitySampleCameraManager_Parms, ReturnValue), Z_Construct_UClass_ACitySamplePlayerCameraManager_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleCameraManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleCameraManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleCameraManager_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attempts to return the PlayerController's camera manager casted as a CitySampleCameraManager */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempts to return the PlayerController's camera manager casted as a CitySampleCameraManager" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleCameraManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayerController, nullptr, "GetCitySampleCameraManager", nullptr, nullptr, Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleCameraManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleCameraManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleCameraManager_Statics::CitySamplePlayerController_eventGetCitySampleCameraManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleCameraManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleCameraManager_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleCameraManager_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleCameraManager_Statics::CitySamplePlayerController_eventGetCitySampleCameraManager_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleCameraManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleCameraManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleUIComponent_Statics
	{
		struct CitySamplePlayerController_eventGetCitySampleUIComponent_Parms
		{
			UCitySampleUIComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleUIComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleUIComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePlayerController_eventGetCitySampleUIComponent_Parms, ReturnValue), Z_Construct_UClass_UCitySampleUIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleUIComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleUIComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleUIComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleUIComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleUIComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End ICitySampleControlsOverlayInterface Interface\n" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleUIComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayerController, nullptr, "GetCitySampleUIComponent", nullptr, nullptr, Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleUIComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleUIComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleUIComponent_Statics::CitySamplePlayerController_eventGetCitySampleUIComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleUIComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleUIComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleUIComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleUIComponent_Statics::CitySamplePlayerController_eventGetCitySampleUIComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleUIComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleUIComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySamplePlayerController_GetCurrentPlayerVehicle_Statics
	{
		struct CitySamplePlayerController_eventGetCurrentPlayerVehicle_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACitySamplePlayerController_GetCurrentPlayerVehicle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePlayerController_eventGetCurrentPlayerVehicle_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySamplePlayerController_GetCurrentPlayerVehicle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySamplePlayerController_GetCurrentPlayerVehicle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySamplePlayerController_GetCurrentPlayerVehicle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayerController_GetCurrentPlayerVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayerController, nullptr, "GetCurrentPlayerVehicle", nullptr, nullptr, Z_Construct_UFunction_ACitySamplePlayerController_GetCurrentPlayerVehicle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_GetCurrentPlayerVehicle_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySamplePlayerController_GetCurrentPlayerVehicle_Statics::CitySamplePlayerController_eventGetCurrentPlayerVehicle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_GetCurrentPlayerVehicle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayerController_GetCurrentPlayerVehicle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_GetCurrentPlayerVehicle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySamplePlayerController_GetCurrentPlayerVehicle_Statics::CitySamplePlayerController_eventGetCurrentPlayerVehicle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySamplePlayerController_GetCurrentPlayerVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayerController_GetCurrentPlayerVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySamplePlayerController_GetPhotoModeComponent_Statics
	{
		struct CitySamplePlayerController_eventGetPhotoModeComponent_Parms
		{
			UPhotoModeComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySamplePlayerController_GetPhotoModeComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACitySamplePlayerController_GetPhotoModeComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePlayerController_eventGetPhotoModeComponent_Parms, ReturnValue), Z_Construct_UClass_UPhotoModeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_GetPhotoModeComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ACitySamplePlayerController_GetPhotoModeComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySamplePlayerController_GetPhotoModeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySamplePlayerController_GetPhotoModeComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySamplePlayerController_GetPhotoModeComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayerController_GetPhotoModeComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayerController, nullptr, "GetPhotoModeComponent", nullptr, nullptr, Z_Construct_UFunction_ACitySamplePlayerController_GetPhotoModeComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_GetPhotoModeComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySamplePlayerController_GetPhotoModeComponent_Statics::CitySamplePlayerController_eventGetPhotoModeComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_GetPhotoModeComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayerController_GetPhotoModeComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_GetPhotoModeComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySamplePlayerController_GetPhotoModeComponent_Statics::CitySamplePlayerController_eventGetPhotoModeComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySamplePlayerController_GetPhotoModeComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayerController_GetPhotoModeComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySamplePlayerController_HandleLongDistanceCameraTransition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySamplePlayerController_HandleLongDistanceCameraTransition_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Requests that the camera manager begin a fade to black, alongside triggering a streaming pause to give the new area time to stream */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests that the camera manager begin a fade to black, alongside triggering a streaming pause to give the new area time to stream" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayerController_HandleLongDistanceCameraTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayerController, nullptr, "HandleLongDistanceCameraTransition", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_HandleLongDistanceCameraTransition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayerController_HandleLongDistanceCameraTransition_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACitySamplePlayerController_HandleLongDistanceCameraTransition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayerController_HandleLongDistanceCameraTransition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySamplePlayerController_RemoveInputContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySamplePlayerController_RemoveInputContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Deactivates the PlayerController's referenced Input Mapping Context */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deactivates the PlayerController's referenced Input Mapping Context" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayerController_RemoveInputContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayerController, nullptr, "RemoveInputContext", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_RemoveInputContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayerController_RemoveInputContext_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACitySamplePlayerController_RemoveInputContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayerController_RemoveInputContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySamplePlayerController_RemovePawnInputContext_Statics
	{
		struct CitySamplePlayerController_eventRemovePawnInputContext_Parms
		{
			APawn* ToRemove;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACitySamplePlayerController_RemovePawnInputContext_Statics::NewProp_ToRemove = { "ToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePlayerController_eventRemovePawnInputContext_Parms, ToRemove), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySamplePlayerController_RemovePawnInputContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySamplePlayerController_RemovePawnInputContext_Statics::NewProp_ToRemove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySamplePlayerController_RemovePawnInputContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attempts to remove the input context mapping of the pawn that is passed in */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempts to remove the input context mapping of the pawn that is passed in" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayerController_RemovePawnInputContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayerController, nullptr, "RemovePawnInputContext", nullptr, nullptr, Z_Construct_UFunction_ACitySamplePlayerController_RemovePawnInputContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_RemovePawnInputContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySamplePlayerController_RemovePawnInputContext_Statics::CitySamplePlayerController_eventRemovePawnInputContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_RemovePawnInputContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayerController_RemovePawnInputContext_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_RemovePawnInputContext_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySamplePlayerController_RemovePawnInputContext_Statics::CitySamplePlayerController_eventRemovePawnInputContext_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySamplePlayerController_RemovePawnInputContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayerController_RemovePawnInputContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySamplePlayerController_SetCanPerformInteractions_Statics
	{
		struct CitySamplePlayerController_eventSetCanPerformInteractions_Parms
		{
			bool bNewCanPerformInteractions;
		};
		static void NewProp_bNewCanPerformInteractions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewCanPerformInteractions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACitySamplePlayerController_SetCanPerformInteractions_Statics::NewProp_bNewCanPerformInteractions_SetBit(void* Obj)
	{
		((CitySamplePlayerController_eventSetCanPerformInteractions_Parms*)Obj)->bNewCanPerformInteractions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACitySamplePlayerController_SetCanPerformInteractions_Statics::NewProp_bNewCanPerformInteractions = { "bNewCanPerformInteractions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySamplePlayerController_eventSetCanPerformInteractions_Parms), &Z_Construct_UFunction_ACitySamplePlayerController_SetCanPerformInteractions_Statics::NewProp_bNewCanPerformInteractions_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySamplePlayerController_SetCanPerformInteractions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySamplePlayerController_SetCanPerformInteractions_Statics::NewProp_bNewCanPerformInteractions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySamplePlayerController_SetCanPerformInteractions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayerController_SetCanPerformInteractions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayerController, nullptr, "SetCanPerformInteractions", nullptr, nullptr, Z_Construct_UFunction_ACitySamplePlayerController_SetCanPerformInteractions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_SetCanPerformInteractions_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySamplePlayerController_SetCanPerformInteractions_Statics::CitySamplePlayerController_eventSetCanPerformInteractions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_SetCanPerformInteractions_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayerController_SetCanPerformInteractions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_SetCanPerformInteractions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySamplePlayerController_SetCanPerformInteractions_Statics::CitySamplePlayerController_eventSetCanPerformInteractions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySamplePlayerController_SetCanPerformInteractions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayerController_SetCanPerformInteractions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySamplePlayerController_SetCurrentPlayerVehicle_Statics
	{
		struct CitySamplePlayerController_eventSetCurrentPlayerVehicle_Parms
		{
			AActor* NewPlayerVehicle;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPlayerVehicle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACitySamplePlayerController_SetCurrentPlayerVehicle_Statics::NewProp_NewPlayerVehicle = { "NewPlayerVehicle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySamplePlayerController_eventSetCurrentPlayerVehicle_Parms, NewPlayerVehicle), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySamplePlayerController_SetCurrentPlayerVehicle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySamplePlayerController_SetCurrentPlayerVehicle_Statics::NewProp_NewPlayerVehicle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySamplePlayerController_SetCurrentPlayerVehicle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Caches reference to current player vehicle, and also acquires a vehicle mass handle from the Mass Actor Subsystem */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Caches reference to current player vehicle, and also acquires a vehicle mass handle from the Mass Actor Subsystem" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayerController_SetCurrentPlayerVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayerController, nullptr, "SetCurrentPlayerVehicle", nullptr, nullptr, Z_Construct_UFunction_ACitySamplePlayerController_SetCurrentPlayerVehicle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_SetCurrentPlayerVehicle_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySamplePlayerController_SetCurrentPlayerVehicle_Statics::CitySamplePlayerController_eventSetCurrentPlayerVehicle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_SetCurrentPlayerVehicle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayerController_SetCurrentPlayerVehicle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_SetCurrentPlayerVehicle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySamplePlayerController_SetCurrentPlayerVehicle_Statics::CitySamplePlayerController_eventSetCurrentPlayerVehicle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySamplePlayerController_SetCurrentPlayerVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayerController_SetCurrentPlayerVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySamplePlayerController_SpawnNewPawnLeavingPhotoMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySamplePlayerController_SpawnNewPawnLeavingPhotoMode_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called by the Photo Mode Component when there is no valid pawn to repossess upon exiting Photo Mode */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called by the Photo Mode Component when there is no valid pawn to repossess upon exiting Photo Mode" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayerController_SpawnNewPawnLeavingPhotoMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayerController, nullptr, "SpawnNewPawnLeavingPhotoMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_SpawnNewPawnLeavingPhotoMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayerController_SpawnNewPawnLeavingPhotoMode_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACitySamplePlayerController_SpawnNewPawnLeavingPhotoMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayerController_SpawnNewPawnLeavingPhotoMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySamplePlayerController_ToggleOptionsMenu_Statics
	{
		struct CitySamplePlayerController_eventToggleOptionsMenu_Parms
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
	void Z_Construct_UFunction_ACitySamplePlayerController_ToggleOptionsMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySamplePlayerController_eventToggleOptionsMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACitySamplePlayerController_ToggleOptionsMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySamplePlayerController_eventToggleOptionsMenu_Parms), &Z_Construct_UFunction_ACitySamplePlayerController_ToggleOptionsMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySamplePlayerController_ToggleOptionsMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySamplePlayerController_ToggleOptionsMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySamplePlayerController_ToggleOptionsMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pause" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Toggles the in-game options menu on and off while adjusting the appropriate input contexts */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggles the in-game options menu on and off while adjusting the appropriate input contexts" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayerController_ToggleOptionsMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayerController, nullptr, "ToggleOptionsMenu", nullptr, nullptr, Z_Construct_UFunction_ACitySamplePlayerController_ToggleOptionsMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_ToggleOptionsMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySamplePlayerController_ToggleOptionsMenu_Statics::CitySamplePlayerController_eventToggleOptionsMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_ToggleOptionsMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayerController_ToggleOptionsMenu_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_ToggleOptionsMenu_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySamplePlayerController_ToggleOptionsMenu_Statics::CitySamplePlayerController_eventToggleOptionsMenu_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySamplePlayerController_ToggleOptionsMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayerController_ToggleOptionsMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySamplePlayerController_TryToInteractWithRelevantInteraction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySamplePlayerController_TryToInteractWithRelevantInteraction_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attempts to interact with the current visible interaction component */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempts to interact with the current visible interaction component" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayerController_TryToInteractWithRelevantInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayerController, nullptr, "TryToInteractWithRelevantInteraction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_TryToInteractWithRelevantInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayerController_TryToInteractWithRelevantInteraction_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACitySamplePlayerController_TryToInteractWithRelevantInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayerController_TryToInteractWithRelevantInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySamplePlayerController_UpdateSpawnTransformForEnteringDrone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySamplePlayerController_UpdateSpawnTransformForEnteringDrone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Determines spawn location for drone pawn when toggling drone mode on */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines spawn location for drone pawn when toggling drone mode on" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayerController_UpdateSpawnTransformForEnteringDrone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayerController, nullptr, "UpdateSpawnTransformForEnteringDrone", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_UpdateSpawnTransformForEnteringDrone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayerController_UpdateSpawnTransformForEnteringDrone_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACitySamplePlayerController_UpdateSpawnTransformForEnteringDrone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayerController_UpdateSpawnTransformForEnteringDrone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACitySamplePlayerController_UpdateSpawnTransformForLeavingDrone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySamplePlayerController_UpdateSpawnTransformForLeavingDrone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Determines spawn location for character pawn when toggling drone mode off */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines spawn location for character pawn when toggling drone mode off" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySamplePlayerController_UpdateSpawnTransformForLeavingDrone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySamplePlayerController, nullptr, "UpdateSpawnTransformForLeavingDrone", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySamplePlayerController_UpdateSpawnTransformForLeavingDrone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySamplePlayerController_UpdateSpawnTransformForLeavingDrone_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACitySamplePlayerController_UpdateSpawnTransformForLeavingDrone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySamplePlayerController_UpdateSpawnTransformForLeavingDrone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACitySamplePlayerController);
	UClass* Z_Construct_UClass_ACitySamplePlayerController_NoRegister()
	{
		return ACitySamplePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ACitySamplePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DroneToggleSpawnTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DroneToggleSpawnTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DronePawnClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DronePawnClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaleInteractionRadius_MetaData[];
#endif
		static void NewProp_bScaleInteractionRadius_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleInteractionRadius;
		static const UECodeGen_Private::FTextPropertyParams NewProp_InputActionDescriptions_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputActionDescriptions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputActionDescriptions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InputActionDescriptions;
		static const UECodeGen_Private::FTextPropertyParams NewProp_InputKeyDescriptionOverrides_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputKeyDescriptionOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputKeyDescriptionOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InputKeyDescriptionOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CitySampleUIComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CitySampleUIComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhotoModeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PhotoModeComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPlayerVehicle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentPlayerVehicle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanPerformInteractions_MetaData[];
#endif
		static void NewProp_bCanPerformInteractions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanPerformInteractions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentVisibleInteractionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentVisibleInteractionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInteractionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentInteractionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraPenetratingFadeToBlackTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraPenetratingFadeToBlackTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraPenetratingFadeFromBlackDelayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraPenetratingFadeFromBlackDelayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraPenetratingFadeFromBlackTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraPenetratingFadeFromBlackTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraTransitionLevelStreamDistance2D_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraTransitionLevelStreamDistance2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraTransitionWPQueryDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraTransitionWPQueryDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputMappingPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToggleOptionsMenuAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToggleOptionsMenuAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToggleOptionsMenuUIAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToggleOptionsMenuUIAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToggleOptionsMenuReleaseAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToggleOptionsMenuReleaseAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACitySamplePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACitySamplePlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACitySamplePlayerController_AddInputContext, "AddInputContext" }, // 2697176748
		{ &Z_Construct_UFunction_ACitySamplePlayerController_AddPawnInputContext, "AddPawnInputContext" }, // 2601394379
		{ &Z_Construct_UFunction_ACitySamplePlayerController_CanPerformInteractions, "CanPerformInteractions" }, // 2173930921
		{ &Z_Construct_UFunction_ACitySamplePlayerController_CheckIfSafeToEndCameraTransition, "CheckIfSafeToEndCameraTransition" }, // 3066105165
		{ &Z_Construct_UFunction_ACitySamplePlayerController_GetCameraTransitionLevelStreamDistance2D, "GetCameraTransitionLevelStreamDistance2D" }, // 839942151
		{ &Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleCameraManager, "GetCitySampleCameraManager" }, // 919392022
		{ &Z_Construct_UFunction_ACitySamplePlayerController_GetCitySampleUIComponent, "GetCitySampleUIComponent" }, // 4104611332
		{ &Z_Construct_UFunction_ACitySamplePlayerController_GetCurrentPlayerVehicle, "GetCurrentPlayerVehicle" }, // 2602045221
		{ &Z_Construct_UFunction_ACitySamplePlayerController_GetPhotoModeComponent, "GetPhotoModeComponent" }, // 740368271
		{ &Z_Construct_UFunction_ACitySamplePlayerController_HandleLongDistanceCameraTransition, "HandleLongDistanceCameraTransition" }, // 3810947091
		{ &Z_Construct_UFunction_ACitySamplePlayerController_RemoveInputContext, "RemoveInputContext" }, // 2076816658
		{ &Z_Construct_UFunction_ACitySamplePlayerController_RemovePawnInputContext, "RemovePawnInputContext" }, // 3879699629
		{ &Z_Construct_UFunction_ACitySamplePlayerController_SetCanPerformInteractions, "SetCanPerformInteractions" }, // 965136750
		{ &Z_Construct_UFunction_ACitySamplePlayerController_SetCurrentPlayerVehicle, "SetCurrentPlayerVehicle" }, // 463962760
		{ &Z_Construct_UFunction_ACitySamplePlayerController_SpawnNewPawnLeavingPhotoMode, "SpawnNewPawnLeavingPhotoMode" }, // 2327573859
		{ &Z_Construct_UFunction_ACitySamplePlayerController_ToggleOptionsMenu, "ToggleOptionsMenu" }, // 76147077
		{ &Z_Construct_UFunction_ACitySamplePlayerController_TryToInteractWithRelevantInteraction, "TryToInteractWithRelevantInteraction" }, // 461065878
		{ &Z_Construct_UFunction_ACitySamplePlayerController_UpdateSpawnTransformForEnteringDrone, "UpdateSpawnTransformForEnteringDrone" }, // 3962730015
		{ &Z_Construct_UFunction_ACitySamplePlayerController_UpdateSpawnTransformForLeavingDrone, "UpdateSpawnTransformForLeavingDrone" }, // 1018276729
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Player Controller implementation specialized for City Sample needs\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Game/CitySamplePlayerController.h" },
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player Controller implementation specialized for City Sample needs" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_DroneToggleSpawnTransform_MetaData[] = {
		{ "Category", "CitySamplePlayerController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Transform where drone pawn will be spawned when toggling drone mode on */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transform where drone pawn will be spawned when toggling drone mode on" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_DroneToggleSpawnTransform = { "DroneToggleSpawnTransform", nullptr, (EPropertyFlags)0x0020080000002004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayerController, DroneToggleSpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_DroneToggleSpawnTransform_MetaData), Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_DroneToggleSpawnTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_DronePawnClass_MetaData[] = {
		{ "Category", "Drone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn class to spawn when toggling drone mode on */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn class to spawn when toggling drone mode on" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_DronePawnClass = { "DronePawnClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayerController, DronePawnClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_DronePawnClass_MetaData), Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_DronePawnClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InteractionRadius_MetaData[] = {
		{ "Category", "CitySamplePlayerController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The radius within which interactions will be queried. Relative to Root Component transform. */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The radius within which interactions will be queried. Relative to Root Component transform." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InteractionRadius = { "InteractionRadius", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayerController, InteractionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InteractionRadius_MetaData), Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InteractionRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_bScaleInteractionRadius_MetaData[] = {
		{ "Category", "CitySamplePlayerController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When true, we will apply the scale of the Root Component for the Player Controller to the Interaction Radius. */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true, we will apply the scale of the Root Component for the Player Controller to the Interaction Radius." },
#endif
	};
#endif
	void Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_bScaleInteractionRadius_SetBit(void* Obj)
	{
		((ACitySamplePlayerController*)Obj)->bScaleInteractionRadius = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_bScaleInteractionRadius = { "bScaleInteractionRadius", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACitySamplePlayerController), &Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_bScaleInteractionRadius_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_bScaleInteractionRadius_MetaData), Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_bScaleInteractionRadius_MetaData) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InputActionDescriptions_ValueProp = { "InputActionDescriptions", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InputActionDescriptions_Key_KeyProp = { "InputActionDescriptions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InputActionDescriptions_MetaData[] = {
		{ "Category", "Controls Overlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mapping of player controller relevant InputActions to their string description for the controls overlay UI. */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mapping of player controller relevant InputActions to their string description for the controls overlay UI." },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InputActionDescriptions = { "InputActionDescriptions", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayerController, InputActionDescriptions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InputActionDescriptions_MetaData), Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InputActionDescriptions_MetaData) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InputKeyDescriptionOverrides_ValueProp = { "InputKeyDescriptionOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InputKeyDescriptionOverrides_Key_KeyProp = { "InputKeyDescriptionOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InputKeyDescriptionOverrides_MetaData[] = {
		{ "Category", "Controls Overlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mapping of player controller relevant input keys to their string description for the controls overlay UI. */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mapping of player controller relevant input keys to their string description for the controls overlay UI." },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InputKeyDescriptionOverrides = { "InputKeyDescriptionOverrides", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayerController, InputKeyDescriptionOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InputKeyDescriptionOverrides_MetaData), Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InputKeyDescriptionOverrides_MetaData) }; // 46000949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CitySampleUIComponent_MetaData[] = {
		{ "Category", "CitySample UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to owned CitySampleUIComponent */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to owned CitySampleUIComponent" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CitySampleUIComponent = { "CitySampleUIComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayerController, CitySampleUIComponent), Z_Construct_UClass_UCitySampleUIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CitySampleUIComponent_MetaData), Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CitySampleUIComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_PhotoModeComponent_MetaData[] = {
		{ "Category", "Photo Mode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to owned PhotoModeComponent */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to owned PhotoModeComponent" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_PhotoModeComponent = { "PhotoModeComponent", nullptr, (EPropertyFlags)0x00400000000a2009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayerController, PhotoModeComponent), Z_Construct_UClass_UPhotoModeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_PhotoModeComponent_MetaData), Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_PhotoModeComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CurrentPlayerVehicle_MetaData[] = {
		{ "Category", "Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to vehicle the player is currently driving */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to vehicle the player is currently driving" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CurrentPlayerVehicle = { "CurrentPlayerVehicle", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayerController, CurrentPlayerVehicle), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CurrentPlayerVehicle_MetaData), Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CurrentPlayerVehicle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_bCanPerformInteractions_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If false the player cannot initiate any interactions with interaction components */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If false the player cannot initiate any interactions with interaction components" },
#endif
	};
#endif
	void Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_bCanPerformInteractions_SetBit(void* Obj)
	{
		((ACitySamplePlayerController*)Obj)->bCanPerformInteractions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_bCanPerformInteractions = { "bCanPerformInteractions", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACitySamplePlayerController), &Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_bCanPerformInteractions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_bCanPerformInteractions_MetaData), Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_bCanPerformInteractions_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CurrentVisibleInteractionComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current interaction component that corresponds with the interaction prompt, and is the interaction that will be processed if an interaction is attempted */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current interaction component that corresponds with the interaction prompt, and is the interaction that will be processed if an interaction is attempted" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CurrentVisibleInteractionComponent = { "CurrentVisibleInteractionComponent", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayerController, CurrentVisibleInteractionComponent), Z_Construct_UClass_UCitySampleInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CurrentVisibleInteractionComponent_MetaData), Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CurrentVisibleInteractionComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CurrentInteractionComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference for interaction component that the player controller is currently interacting with */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference for interaction component that the player controller is currently interacting with" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CurrentInteractionComponent = { "CurrentInteractionComponent", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayerController, CurrentInteractionComponent), Z_Construct_UClass_UCitySampleInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CurrentInteractionComponent_MetaData), Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CurrentInteractionComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CameraPenetratingFadeToBlackTime_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Amount of time it takes the camera to fade to black when fade transition is triggered */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount of time it takes the camera to fade to black when fade transition is triggered" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CameraPenetratingFadeToBlackTime = { "CameraPenetratingFadeToBlackTime", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayerController, CameraPenetratingFadeToBlackTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CameraPenetratingFadeToBlackTime_MetaData), Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CameraPenetratingFadeToBlackTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CameraPenetratingFadeFromBlackDelayTime_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Amount of time spent on a black screen before the fade from black is triggered */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount of time spent on a black screen before the fade from black is triggered" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CameraPenetratingFadeFromBlackDelayTime = { "CameraPenetratingFadeFromBlackDelayTime", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayerController, CameraPenetratingFadeFromBlackDelayTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CameraPenetratingFadeFromBlackDelayTime_MetaData), Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CameraPenetratingFadeFromBlackDelayTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CameraPenetratingFadeFromBlackTime_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Amount of time it takes the camera to fade from black when fade transition is triggered */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount of time it takes the camera to fade from black when fade transition is triggered" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CameraPenetratingFadeFromBlackTime = { "CameraPenetratingFadeFromBlackTime", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayerController, CameraPenetratingFadeFromBlackTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CameraPenetratingFadeFromBlackTime_MetaData), Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CameraPenetratingFadeFromBlackTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CameraTransitionLevelStreamDistance2D_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Distance needed to trigger a long distance camera transition */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance needed to trigger a long distance camera transition" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CameraTransitionLevelStreamDistance2D = { "CameraTransitionLevelStreamDistance2D", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayerController, CameraTransitionLevelStreamDistance2D), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CameraTransitionLevelStreamDistance2D_MetaData), Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CameraTransitionLevelStreamDistance2D_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CameraTransitionWPQueryDistance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Query distance used when determining if world partition streaming has completed during long distance camera transitions */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query distance used when determining if world partition streaming has completed during long distance camera transitions" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CameraTransitionWPQueryDistance = { "CameraTransitionWPQueryDistance", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayerController, CameraTransitionWPQueryDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CameraTransitionWPQueryDistance_MetaData), Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CameraTransitionWPQueryDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping and Input ACtions that the Player Controller relies on */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping and Input ACtions that the Player Controller relies on" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InputMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InputMappingPriority_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InputMappingPriority = { "InputMappingPriority", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayerController, InputMappingPriority), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InputMappingPriority_MetaData), Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InputMappingPriority_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_ToggleOptionsMenuAction_MetaData[] = {
		{ "Category", "Input|Actions" },
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_ToggleOptionsMenuAction = { "ToggleOptionsMenuAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayerController, ToggleOptionsMenuAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_ToggleOptionsMenuAction_MetaData), Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_ToggleOptionsMenuAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_ToggleOptionsMenuUIAction_MetaData[] = {
		{ "Category", "Input|Actions" },
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_ToggleOptionsMenuUIAction = { "ToggleOptionsMenuUIAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayerController, ToggleOptionsMenuUIAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_ToggleOptionsMenuUIAction_MetaData), Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_ToggleOptionsMenuUIAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_ToggleOptionsMenuReleaseAction_MetaData[] = {
		{ "Category", "Input|Actions" },
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_ToggleOptionsMenuReleaseAction = { "ToggleOptionsMenuReleaseAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayerController, ToggleOptionsMenuReleaseAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_ToggleOptionsMenuReleaseAction_MetaData), Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_ToggleOptionsMenuReleaseAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InteractAction_MetaData[] = {
		{ "Category", "Input|Actions" },
		{ "ModuleRelativePath", "Public/Game/CitySamplePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySamplePlayerController, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InteractAction_MetaData), Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InteractAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACitySamplePlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_DroneToggleSpawnTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_DronePawnClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InteractionRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_bScaleInteractionRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InputActionDescriptions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InputActionDescriptions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InputActionDescriptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InputKeyDescriptionOverrides_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InputKeyDescriptionOverrides_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InputKeyDescriptionOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CitySampleUIComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_PhotoModeComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CurrentPlayerVehicle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_bCanPerformInteractions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CurrentVisibleInteractionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CurrentInteractionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CameraPenetratingFadeToBlackTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CameraPenetratingFadeFromBlackDelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CameraPenetratingFadeFromBlackTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CameraTransitionLevelStreamDistance2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_CameraTransitionWPQueryDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InputMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InputMappingPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_ToggleOptionsMenuAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_ToggleOptionsMenuUIAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_ToggleOptionsMenuReleaseAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySamplePlayerController_Statics::NewProp_InteractAction,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACitySamplePlayerController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCitySampleControlsOverlayInterface_NoRegister, (int32)VTABLE_OFFSET(ACitySamplePlayerController, ICitySampleControlsOverlayInterface), false },  // 598373316
			{ Z_Construct_UClass_UCitySampleInteractorInterface_NoRegister, (int32)VTABLE_OFFSET(ACitySamplePlayerController, ICitySampleInteractorInterface), false },  // 2090101731
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACitySamplePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACitySamplePlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACitySamplePlayerController_Statics::ClassParams = {
		&ACitySamplePlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACitySamplePlayerController_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACitySamplePlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySamplePlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACitySamplePlayerController()
	{
		if (!Z_Registration_Info_UClass_ACitySamplePlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACitySamplePlayerController.OuterSingleton, Z_Construct_UClass_ACitySamplePlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACitySamplePlayerController.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<ACitySamplePlayerController>()
	{
		return ACitySamplePlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACitySamplePlayerController);
	ACitySamplePlayerController::~ACitySamplePlayerController() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySamplePlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySamplePlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACitySamplePlayerController, ACitySamplePlayerController::StaticClass, TEXT("ACitySamplePlayerController"), &Z_Registration_Info_UClass_ACitySamplePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACitySamplePlayerController), 58249865U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySamplePlayerController_h_4112146279(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySamplePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySamplePlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
