// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/CitySamplePanel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACitySamplePlayerController;
class UCitySamplePanel;
class UCitySampleUIComponent;
class UPanelWidget;
class UUMGSequencePlayer;
enum class ECitySampleControlsFlavor : uint8;
enum class ECitySamplePanelInput : uint8;
#ifdef CITYSAMPLE_CitySamplePanel_generated_h
#error "CitySamplePanel.generated.h already included, missing '#pragma once' in CitySamplePanel.h"
#endif
#define CITYSAMPLE_CitySamplePanel_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCitySamplePanelTransitionState_Statics; \
	CITYSAMPLE_API static class UScriptStruct* StaticStruct();


template<> CITYSAMPLE_API UScriptStruct* StaticStruct<struct FCitySamplePanelTransitionState>();

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_53_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_53_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_53_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasControlsFlavor); \
	DECLARE_FUNCTION(execSetControlsFlavor); \
	DECLARE_FUNCTION(execGetControlsFlavor); \
	DECLARE_FUNCTION(execGetOwningCitySampleUIComponent); \
	DECLARE_FUNCTION(execGetOwningCitySamplePlayer); \
	DECLARE_FUNCTION(execIsHidingAllPanels); \
	DECLARE_FUNCTION(execSetAllPanelsHidden); \
	DECLARE_FUNCTION(execGetActivePanel); \
	DECLARE_FUNCTION(execGetChildPanels); \
	DECLARE_FUNCTION(execGetParentPanel); \
	DECLARE_FUNCTION(execRemoveChildPanelChecked); \
	DECLARE_FUNCTION(execRemoveChildPanel); \
	DECLARE_FUNCTION(execAddChildPanel); \
	DECLARE_FUNCTION(execCreateChildPanel); \
	DECLARE_FUNCTION(execUpdatePanel);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_53_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_53_CALLBACK_WRAPPERS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCitySamplePanel(); \
	friend struct Z_Construct_UClass_UCitySamplePanel_Statics; \
public: \
	DECLARE_CLASS(UCitySamplePanel, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UCitySamplePanel)


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCitySamplePanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCitySamplePanel(UCitySamplePanel&&); \
	NO_API UCitySamplePanel(const UCitySamplePanel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCitySamplePanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySamplePanel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCitySamplePanel) \
	NO_API virtual ~UCitySamplePanel();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_50_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_53_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_53_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_53_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_53_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_53_CALLBACK_WRAPPERS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_53_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class UCitySamplePanel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySamplePanel_h


#define FOREACH_ENUM_ECITYSAMPLEPANELINPUT(op) \
	op(ECitySamplePanelInput::None) \
	op(ECitySamplePanelInput::Up) \
	op(ECitySamplePanelInput::Down) \
	op(ECitySamplePanelInput::Left) \
	op(ECitySamplePanelInput::Right) \
	op(ECitySamplePanelInput::TogglePrev) \
	op(ECitySamplePanelInput::ToggleNext) \
	op(ECitySamplePanelInput::Confirm) \
	op(ECitySamplePanelInput::Reset) 

enum class ECitySamplePanelInput : uint8;
template<> struct TIsUEnumClass<ECitySamplePanelInput> { enum { Value = true }; };
template<> CITYSAMPLE_API UEnum* StaticEnum<ECitySamplePanelInput>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
