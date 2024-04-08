// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/CitySampleButtonPrompt.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCitySampleButtonPrompt;
enum class ECitySampleControlsFlavor : uint8; struct FCitySampleImageConfig;
enum class ECitySamplePromptTextType : uint8;
struct FCitySampleImageConfig;
struct FCitySampleTextConfig;
#ifdef CITYSAMPLE_CitySampleButtonPrompt_generated_h
#error "CitySampleButtonPrompt.generated.h already included, missing '#pragma once' in CitySampleButtonPrompt.h"
#endif
#define CITYSAMPLE_CitySampleButtonPrompt_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleButtonPrompt_h_12_DELEGATE \
CITYSAMPLE_API void FCitySampleButtonPromptOnPressed_DelegateWrapper(const FMulticastScriptDelegate& CitySampleButtonPromptOnPressed, const UCitySampleButtonPrompt* ButtonPrompt);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleButtonPrompt_h_13_DELEGATE \
CITYSAMPLE_API void FCitySampleButtonPromptOnReleased_DelegateWrapper(const FMulticastScriptDelegate& CitySampleButtonPromptOnReleased, const UCitySampleButtonPrompt* ButtonPrompt);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleButtonPrompt_h_14_DELEGATE \
CITYSAMPLE_API void FCitySampleButtonPromptOnHighlightedEvent_DelegateWrapper(const FMulticastScriptDelegate& CitySampleButtonPromptOnHighlightedEvent, const UCitySampleButtonPrompt* ButtonPrompt, bool bHighlighted);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleButtonPrompt_h_15_DELEGATE \
CITYSAMPLE_API void FCitySampleButtonPromptOnDisabledEvent_DelegateWrapper(const FMulticastScriptDelegate& CitySampleButtonPromptOnDisabledEvent, const UCitySampleButtonPrompt* ButtonPrompt, bool bDisabled);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleButtonPrompt_h_24_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleButtonPrompt_h_24_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleButtonPrompt_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleButtonPrompt_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDisabled); \
	DECLARE_FUNCTION(execIsDisabled); \
	DECLARE_FUNCTION(execSetHighlighted); \
	DECLARE_FUNCTION(execIsHighlighted); \
	DECLARE_FUNCTION(execSetIsPressed); \
	DECLARE_FUNCTION(execReleaseButton); \
	DECLARE_FUNCTION(execPressButton); \
	DECLARE_FUNCTION(execIsPressed); \
	DECLARE_FUNCTION(execConfigureControlsFlavorImages); \
	DECLARE_FUNCTION(execConfigurePromptText); \
	DECLARE_FUNCTION(execConfigureImage); \
	DECLARE_FUNCTION(execGetPromptConfig); \
	DECLARE_FUNCTION(execGetImageConfig);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleButtonPrompt_h_24_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleButtonPrompt_h_24_CALLBACK_WRAPPERS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleButtonPrompt_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCitySampleButtonPrompt(); \
	friend struct Z_Construct_UClass_UCitySampleButtonPrompt_Statics; \
public: \
	DECLARE_CLASS(UCitySampleButtonPrompt, UCitySamplePanel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UCitySampleButtonPrompt)


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleButtonPrompt_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCitySampleButtonPrompt(UCitySampleButtonPrompt&&); \
	NO_API UCitySampleButtonPrompt(const UCitySampleButtonPrompt&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCitySampleButtonPrompt); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySampleButtonPrompt); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCitySampleButtonPrompt) \
	NO_API virtual ~UCitySampleButtonPrompt();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleButtonPrompt_h_21_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleButtonPrompt_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleButtonPrompt_h_24_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleButtonPrompt_h_24_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleButtonPrompt_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleButtonPrompt_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleButtonPrompt_h_24_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleButtonPrompt_h_24_CALLBACK_WRAPPERS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleButtonPrompt_h_24_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleButtonPrompt_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class UCitySampleButtonPrompt>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleButtonPrompt_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
