// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/CitySampleGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CITYSAMPLE_CitySampleGameState_generated_h
#error "CitySampleGameState.generated.h already included, missing '#pragma once' in CitySampleGameState.h"
#endif
#define CITYSAMPLE_CitySampleGameState_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameState_h_9_DELEGATE \
CITYSAMPLE_API void FOnSandboxIntroStarted_DelegateWrapper(const FMulticastScriptDelegate& OnSandboxIntroStarted);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameState_h_10_DELEGATE \
CITYSAMPLE_API void FOnSandboxIntroFinished_DelegateWrapper(const FMulticastScriptDelegate& OnSandboxIntroFinished);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameState_h_11_DELEGATE \
CITYSAMPLE_API void FOnTestSequenceStarted_DelegateWrapper(const FMulticastScriptDelegate& OnTestSequenceStarted);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameState_h_12_DELEGATE \
CITYSAMPLE_API void FOnTestSequenceFinished_DelegateWrapper(const FMulticastScriptDelegate& OnTestSequenceFinished);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameState_h_14_DELEGATE \
CITYSAMPLE_API void FOnTriggerDaytime_DelegateWrapper(const FMulticastScriptDelegate& OnTriggerDaytime);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameState_h_15_DELEGATE \
CITYSAMPLE_API void FOnTriggerNighttime_DelegateWrapper(const FMulticastScriptDelegate& OnTriggerNighttime);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameState_h_17_DELEGATE \
CITYSAMPLE_API void FOnEnterPhotomode_DelegateWrapper(const FMulticastScriptDelegate& OnEnterPhotomode);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameState_h_18_DELEGATE \
CITYSAMPLE_API void FOnExitPhotomode_DelegateWrapper(const FMulticastScriptDelegate& OnExitPhotomode);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameState_h_24_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameState_h_24_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameState_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameState_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsTestSequencePlaying); \
	DECLARE_FUNCTION(execStopTestSequence); \
	DECLARE_FUNCTION(execStartTestSequence); \
	DECLARE_FUNCTION(execIsSandboxIntroPlaying); \
	DECLARE_FUNCTION(execStopSandboxIntro); \
	DECLARE_FUNCTION(execStartSandboxIntro);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameState_h_24_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameState_h_24_CALLBACK_WRAPPERS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameState_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACitySampleGameState(); \
	friend struct Z_Construct_UClass_ACitySampleGameState_Statics; \
public: \
	DECLARE_CLASS(ACitySampleGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(ACitySampleGameState)


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameState_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACitySampleGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACitySampleGameState(ACitySampleGameState&&); \
	NO_API ACitySampleGameState(const ACitySampleGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACitySampleGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACitySampleGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACitySampleGameState) \
	NO_API virtual ~ACitySampleGameState();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameState_h_21_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameState_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameState_h_24_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameState_h_24_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameState_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameState_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameState_h_24_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameState_h_24_CALLBACK_WRAPPERS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameState_h_24_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameState_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class ACitySampleGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
