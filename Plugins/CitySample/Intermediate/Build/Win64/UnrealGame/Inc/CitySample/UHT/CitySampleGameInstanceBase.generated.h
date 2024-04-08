// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/CitySampleGameInstanceBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCitySampleSaveGame;
#ifdef CITYSAMPLE_CitySampleGameInstanceBase_generated_h
#error "CitySampleGameInstanceBase.generated.h already included, missing '#pragma once' in CitySampleGameInstanceBase.h"
#endif
#define CITYSAMPLE_CitySampleGameInstanceBase_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameInstanceBase_h_12_DELEGATE \
CITYSAMPLE_API void FCitySampleOnSaveGameLoaded_DelegateWrapper(const FMulticastScriptDelegate& CitySampleOnSaveGameLoaded, const UCitySampleSaveGame* LoadedSaveGame);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameInstanceBase_h_17_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameInstanceBase_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameInstanceBase_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameInstanceBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetNaniteVisualization); \
	DECLARE_FUNCTION(execSetNaniteVisualization); \
	DECLARE_FUNCTION(execGetCurrentNaniteVisualization); \
	DECLARE_FUNCTION(execSetRumbleEnabled); \
	DECLARE_FUNCTION(execGetRumbleEnabled); \
	DECLARE_FUNCTION(execSetLookSensitivity); \
	DECLARE_FUNCTION(execGetLookSensitivity); \
	DECLARE_FUNCTION(execSetInvertedAxes); \
	DECLARE_FUNCTION(execGetInvertedAxes); \
	DECLARE_FUNCTION(execClearCitySampleSaveData); \
	DECLARE_FUNCTION(execIsSaveGameLoaded); \
	DECLARE_FUNCTION(execSaveCitySampleGameData); \
	DECLARE_FUNCTION(execK2Node_LoadCitySampleSaveGame); \
	DECLARE_FUNCTION(execGetSaveGame);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameInstanceBase_h_17_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameInstanceBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCitySampleGameInstanceBase(); \
	friend struct Z_Construct_UClass_UCitySampleGameInstanceBase_Statics; \
public: \
	DECLARE_CLASS(UCitySampleGameInstanceBase, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UCitySampleGameInstanceBase)


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameInstanceBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCitySampleGameInstanceBase(UCitySampleGameInstanceBase&&); \
	NO_API UCitySampleGameInstanceBase(const UCitySampleGameInstanceBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCitySampleGameInstanceBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySampleGameInstanceBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCitySampleGameInstanceBase) \
	NO_API virtual ~UCitySampleGameInstanceBase();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameInstanceBase_h_14_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameInstanceBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameInstanceBase_h_17_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameInstanceBase_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameInstanceBase_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameInstanceBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameInstanceBase_h_17_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameInstanceBase_h_17_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameInstanceBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class UCitySampleGameInstanceBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameInstanceBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
