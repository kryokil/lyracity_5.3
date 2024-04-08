// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/CitySampleDrivingUI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
enum class ECitySampleSpeedUnits : uint8;
struct FCitySampleDrivingState;
struct FCitySampleDrivingStateDescription;
#ifdef CITYSAMPLE_CitySampleDrivingUI_generated_h
#error "CitySampleDrivingUI.generated.h already included, missing '#pragma once' in CitySampleDrivingUI.h"
#endif
#define CITYSAMPLE_CitySampleDrivingUI_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCitySampleDrivingStateDescription_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CITYSAMPLE_API UScriptStruct* StaticStruct<struct FCitySampleDrivingStateDescription>();

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_52_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_52_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_52_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFloatToDescriptionFormat); \
	DECLARE_FUNCTION(execGetTopSpeedRatio); \
	DECLARE_FUNCTION(execSetSpeedUnits); \
	DECLARE_FUNCTION(execGetSpeedUnits); \
	DECLARE_FUNCTION(execResetDrivingStateDescription); \
	DECLARE_FUNCTION(execUpdateDrivingStateDescription); \
	DECLARE_FUNCTION(execGetDrivingStateDescription);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_52_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_52_CALLBACK_WRAPPERS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCitySampleDrivingUI(); \
	friend struct Z_Construct_UClass_UCitySampleDrivingUI_Statics; \
public: \
	DECLARE_CLASS(UCitySampleDrivingUI, UCitySamplePanel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UCitySampleDrivingUI)


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_52_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCitySampleDrivingUI(UCitySampleDrivingUI&&); \
	NO_API UCitySampleDrivingUI(const UCitySampleDrivingUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCitySampleDrivingUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySampleDrivingUI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCitySampleDrivingUI) \
	NO_API virtual ~UCitySampleDrivingUI();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_49_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_52_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_52_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_52_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_52_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_52_CALLBACK_WRAPPERS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_52_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class UCitySampleDrivingUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleDrivingUI_h


#define FOREACH_ENUM_ECITYSAMPLESPEEDUNITS(op) \
	op(ECitySampleSpeedUnits::MilesPerHour) \
	op(ECitySampleSpeedUnits::KilometersPerHour) \
	op(ECitySampleSpeedUnits::MetersPerSecond) 

enum class ECitySampleSpeedUnits : uint8;
template<> struct TIsUEnumClass<ECitySampleSpeedUnits> { enum { Value = true }; };
template<> CITYSAMPLE_API UEnum* StaticEnum<ECitySampleSpeedUnits>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
