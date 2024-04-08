// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/CitySamplePlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACitySamplePlayerCameraManager;
class APawn;
class UCitySampleUIComponent;
class UPhotoModeComponent;
#ifdef CITYSAMPLE_CitySamplePlayerController_generated_h
#error "CitySamplePlayerController.generated.h already included, missing '#pragma once' in CitySamplePlayerController.h"
#endif
#define CITYSAMPLE_CitySamplePlayerController_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySamplePlayerController_h_33_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySamplePlayerController_h_33_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySamplePlayerController_h_33_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySamplePlayerController_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckIfSafeToEndCameraTransition); \
	DECLARE_FUNCTION(execUpdateSpawnTransformForLeavingDrone); \
	DECLARE_FUNCTION(execUpdateSpawnTransformForEnteringDrone); \
	DECLARE_FUNCTION(execTryToInteractWithRelevantInteraction); \
	DECLARE_FUNCTION(execHandleLongDistanceCameraTransition); \
	DECLARE_FUNCTION(execToggleOptionsMenu); \
	DECLARE_FUNCTION(execRemovePawnInputContext); \
	DECLARE_FUNCTION(execAddPawnInputContext); \
	DECLARE_FUNCTION(execRemoveInputContext); \
	DECLARE_FUNCTION(execAddInputContext); \
	DECLARE_FUNCTION(execCanPerformInteractions); \
	DECLARE_FUNCTION(execSetCanPerformInteractions); \
	DECLARE_FUNCTION(execGetCameraTransitionLevelStreamDistance2D); \
	DECLARE_FUNCTION(execSetCurrentPlayerVehicle); \
	DECLARE_FUNCTION(execGetCitySampleCameraManager); \
	DECLARE_FUNCTION(execGetCurrentPlayerVehicle); \
	DECLARE_FUNCTION(execGetPhotoModeComponent); \
	DECLARE_FUNCTION(execGetCitySampleUIComponent);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySamplePlayerController_h_33_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySamplePlayerController_h_33_CALLBACK_WRAPPERS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySamplePlayerController_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACitySamplePlayerController(); \
	friend struct Z_Construct_UClass_ACitySamplePlayerController_Statics; \
public: \
	DECLARE_CLASS(ACitySamplePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(ACitySamplePlayerController) \
	virtual UObject* _getUObject() const override { return const_cast<ACitySamplePlayerController*>(this); }


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySamplePlayerController_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACitySamplePlayerController(ACitySamplePlayerController&&); \
	NO_API ACitySamplePlayerController(const ACitySamplePlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACitySamplePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACitySamplePlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACitySamplePlayerController) \
	NO_API virtual ~ACitySamplePlayerController();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySamplePlayerController_h_28_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySamplePlayerController_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySamplePlayerController_h_33_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySamplePlayerController_h_33_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySamplePlayerController_h_33_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySamplePlayerController_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySamplePlayerController_h_33_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySamplePlayerController_h_33_CALLBACK_WRAPPERS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySamplePlayerController_h_33_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySamplePlayerController_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class ACitySamplePlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySamplePlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
