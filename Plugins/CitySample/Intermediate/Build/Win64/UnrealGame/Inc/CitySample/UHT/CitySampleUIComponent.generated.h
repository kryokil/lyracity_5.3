// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/CitySampleUIComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACitySamplePlayerController;
class APawn;
class UCitySampleControlsOverlay;
class UCitySampleInteractionComponent;
class UCitySampleMenu;
class UCitySamplePanel;
class UCitySampleUIComponent;
class UUserWidget;
enum class ECitySampleControlsFlavor : uint8;
enum class ECitySamplePanelInput : uint8;
#ifdef CITYSAMPLE_CitySampleUIComponent_generated_h
#error "CitySampleUIComponent.generated.h already included, missing '#pragma once' in CitySampleUIComponent.h"
#endif
#define CITYSAMPLE_CitySampleUIComponent_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponent_h_21_DELEGATE \
CITYSAMPLE_API void FCitySampleOnOptionsMenuOpen_DelegateWrapper(const FMulticastScriptDelegate& CitySampleOnOptionsMenuOpen, const UCitySampleUIComponent* CitySampleUI, const UCitySampleMenu* OptionsMenu);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponent_h_22_DELEGATE \
CITYSAMPLE_API void FCitySampleOnOptionsMenuClose_DelegateWrapper(const FMulticastScriptDelegate& CitySampleOnOptionsMenuClose, const UCitySampleUIComponent* CitySampleUI, const UCitySampleMenu* OptionsMenu);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponent_h_23_DELEGATE \
CITYSAMPLE_API void FCitySampleOnHideUI_DelegateWrapper(const FMulticastScriptDelegate& CitySampleOnHideUI, bool IsHiding);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponent_h_32_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponent_h_32_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponent_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetControlsFlavor); \
	DECLARE_FUNCTION(execGetControlsFlavor); \
	DECLARE_FUNCTION(execRemoveInteractionPrompt); \
	DECLARE_FUNCTION(execAddInteractionPrompt); \
	DECLARE_FUNCTION(execIsInteractPromptActive); \
	DECLARE_FUNCTION(execRequestControlsOverlayUpdate); \
	DECLARE_FUNCTION(execRemoveControlsOverlay); \
	DECLARE_FUNCTION(execAddControlsOverlay); \
	DECLARE_FUNCTION(execIsControlsOverlayActive); \
	DECLARE_FUNCTION(execSetOptionsMenuActive); \
	DECLARE_FUNCTION(execSetOptionsMenuEnabled); \
	DECLARE_FUNCTION(execIsOptionsMenuActive); \
	DECLARE_FUNCTION(execProcessInputAxis2D); \
	DECLARE_FUNCTION(execProcessInputAxis1D); \
	DECLARE_FUNCTION(execProcessInputBool); \
	DECLARE_FUNCTION(execGetInteractionPrompt); \
	DECLARE_FUNCTION(execGetControlsOverlay); \
	DECLARE_FUNCTION(execGetOptionsMenu); \
	DECLARE_FUNCTION(execGetBasePanel); \
	DECLARE_FUNCTION(execIsHidingUI); \
	DECLARE_FUNCTION(execHideUI); \
	DECLARE_FUNCTION(execUpdateUI);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponent_h_32_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponent_h_32_CALLBACK_WRAPPERS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCitySampleUIComponent(); \
	friend struct Z_Construct_UClass_UCitySampleUIComponent_Statics; \
public: \
	DECLARE_CLASS(UCitySampleUIComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UCitySampleUIComponent)


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCitySampleUIComponent(UCitySampleUIComponent&&); \
	NO_API UCitySampleUIComponent(const UCitySampleUIComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCitySampleUIComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySampleUIComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCitySampleUIComponent) \
	NO_API virtual ~UCitySampleUIComponent();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponent_h_29_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponent_h_32_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponent_h_32_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponent_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponent_h_32_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponent_h_32_CALLBACK_WRAPPERS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponent_h_32_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class UCitySampleUIComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
