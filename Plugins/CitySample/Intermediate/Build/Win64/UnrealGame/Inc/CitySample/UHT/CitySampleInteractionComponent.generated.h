// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/CitySampleInteractionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class ICitySampleInteractorInterface;
#ifdef CITYSAMPLE_CitySampleInteractionComponent_generated_h
#error "CitySampleInteractionComponent.generated.h already included, missing '#pragma once' in CitySampleInteractionComponent.h"
#endif
#define CITYSAMPLE_CitySampleInteractionComponent_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractionComponent_h_12_DELEGATE \
CITYSAMPLE_API void FOnInteract_DelegateWrapper(const FMulticastScriptDelegate& OnInteract, TScriptInterface<ICitySampleInteractorInterface> const& InteractingChar);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractionComponent_h_22_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractionComponent_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractionComponent_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractionComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool K2_CanInteractWith_Implementation(TScriptInterface<ICitySampleInteractorInterface> const& Interactor) const; \
 \
	DECLARE_FUNCTION(execTeleportPawnToSafePlace); \
	DECLARE_FUNCTION(execGetInteractable); \
	DECLARE_FUNCTION(execSetInteractable); \
	DECLARE_FUNCTION(execGetPromptText); \
	DECLARE_FUNCTION(execK2_CanInteractWith); \
	DECLARE_FUNCTION(execFinishInteraction); \
	DECLARE_FUNCTION(execAbortInteraction);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractionComponent_h_22_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractionComponent_h_22_CALLBACK_WRAPPERS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractionComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCitySampleInteractionComponent(); \
	friend struct Z_Construct_UClass_UCitySampleInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UCitySampleInteractionComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UCitySampleInteractionComponent)


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractionComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCitySampleInteractionComponent(UCitySampleInteractionComponent&&); \
	NO_API UCitySampleInteractionComponent(const UCitySampleInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCitySampleInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySampleInteractionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCitySampleInteractionComponent) \
	NO_API virtual ~UCitySampleInteractionComponent();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractionComponent_h_19_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractionComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractionComponent_h_22_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractionComponent_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractionComponent_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractionComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractionComponent_h_22_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractionComponent_h_22_CALLBACK_WRAPPERS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractionComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractionComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class UCitySampleInteractionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleInteractionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
