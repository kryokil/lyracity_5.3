// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/CitySampleMenu.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCitySampleMenuTabData;
#ifdef CITYSAMPLE_CitySampleMenu_generated_h
#error "CitySampleMenu.generated.h already included, missing '#pragma once' in CitySampleMenu.h"
#endif
#define CITYSAMPLE_CitySampleMenu_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMenu_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCitySampleMenuTabData_Statics; \
	CITYSAMPLE_API static class UScriptStruct* StaticStruct();


template<> CITYSAMPLE_API UScriptStruct* StaticStruct<struct FCitySampleMenuTabData>();

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMenu_h_67_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMenu_h_67_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMenu_h_67_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMenu_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDecrementTab); \
	DECLARE_FUNCTION(execIncrementTab); \
	DECLARE_FUNCTION(execSetTab); \
	DECLARE_FUNCTION(execGetCurrentTabIndex); \
	DECLARE_FUNCTION(execGetCurrentTab);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMenu_h_67_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMenu_h_67_CALLBACK_WRAPPERS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMenu_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCitySampleMenu(); \
	friend struct Z_Construct_UClass_UCitySampleMenu_Statics; \
public: \
	DECLARE_CLASS(UCitySampleMenu, UCitySamplePanel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UCitySampleMenu) \
	virtual UObject* _getUObject() const override { return const_cast<UCitySampleMenu*>(this); }


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMenu_h_67_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCitySampleMenu(UCitySampleMenu&&); \
	NO_API UCitySampleMenu(const UCitySampleMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCitySampleMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySampleMenu); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCitySampleMenu) \
	NO_API virtual ~UCitySampleMenu();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMenu_h_64_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMenu_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMenu_h_67_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMenu_h_67_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMenu_h_67_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMenu_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMenu_h_67_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMenu_h_67_CALLBACK_WRAPPERS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMenu_h_67_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMenu_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class UCitySampleMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
