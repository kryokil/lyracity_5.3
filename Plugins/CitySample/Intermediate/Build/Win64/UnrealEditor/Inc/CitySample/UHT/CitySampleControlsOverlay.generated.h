// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/CitySampleControlsOverlay.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UCitySampleButtonPrompt;
class UPlayerInput;
struct FKey; 
#ifdef CITYSAMPLE_CitySampleControlsOverlay_generated_h
#error "CitySampleControlsOverlay.generated.h already included, missing '#pragma once' in CitySampleControlsOverlay.h"
#endif
#define CITYSAMPLE_CitySampleControlsOverlay_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlay_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCitySampleControlsOverlayButtonConfig_Statics; \
	CITYSAMPLE_API static class UScriptStruct* StaticStruct();


template<> CITYSAMPLE_API UScriptStruct* StaticStruct<struct FCitySampleControlsOverlayButtonConfig>();

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlay_h_53_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlay_h_53_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlay_h_53_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlay_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDismissControlsDisplay); \
	DECLARE_FUNCTION(execToggleControlsDisplay); \
	DECLARE_FUNCTION(execHasControls); \
	DECLARE_FUNCTION(execHasKeyboardMouseControls); \
	DECLARE_FUNCTION(execHasGamepadControls); \
	DECLARE_FUNCTION(execIsShowingControls); \
	DECLARE_FUNCTION(execUpdatePressedKeys); \
	DECLARE_FUNCTION(execSetControlsDescription); \
	DECLARE_FUNCTION(execSetControlsDescriptionFor); \
	DECLARE_FUNCTION(execSetControlsDirty);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlay_h_53_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlay_h_53_CALLBACK_WRAPPERS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlay_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCitySampleControlsOverlay(); \
	friend struct Z_Construct_UClass_UCitySampleControlsOverlay_Statics; \
public: \
	DECLARE_CLASS(UCitySampleControlsOverlay, UCitySamplePanel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UCitySampleControlsOverlay)


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlay_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCitySampleControlsOverlay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCitySampleControlsOverlay(UCitySampleControlsOverlay&&); \
	NO_API UCitySampleControlsOverlay(const UCitySampleControlsOverlay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCitySampleControlsOverlay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySampleControlsOverlay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCitySampleControlsOverlay) \
	NO_API virtual ~UCitySampleControlsOverlay();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlay_h_50_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlay_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlay_h_53_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlay_h_53_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlay_h_53_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlay_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlay_h_53_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlay_h_53_CALLBACK_WRAPPERS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlay_h_53_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlay_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class UCitySampleControlsOverlay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
