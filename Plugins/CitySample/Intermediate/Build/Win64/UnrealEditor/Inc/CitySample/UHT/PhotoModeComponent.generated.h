// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/PhotoModeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACitySampleVehicleBase;
class APawn;
class UDrivableVehicleComponent;
enum class EPhotoModeState : uint8;
struct FPhotoModeSettings;
#ifdef CITYSAMPLE_PhotoModeComponent_generated_h
#error "PhotoModeComponent.generated.h already included, missing '#pragma once' in PhotoModeComponent.h"
#endif
#define CITYSAMPLE_PhotoModeComponent_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_15_DELEGATE \
CITYSAMPLE_API void FOnPhotoModeActivated_DelegateWrapper(const FMulticastScriptDelegate& OnPhotoModeActivated);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhotoModeSettings_Statics; \
	CITYSAMPLE_API static class UScriptStruct* StaticStruct();


template<> CITYSAMPLE_API UScriptStruct* StaticStruct<struct FPhotoModeSettings>();

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_62_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_62_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_62_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnVehicleDriverExit); \
	DECLARE_FUNCTION(execShouldTriggerFadeOut); \
	DECLARE_FUNCTION(execGetCachedPlayerPawn); \
	DECLARE_FUNCTION(execGetPhotoModeSettings); \
	DECLARE_FUNCTION(execSetManualFocusDistance); \
	DECLARE_FUNCTION(execSetManualExposureBias); \
	DECLARE_FUNCTION(execSetFocusDistanceAdjustment); \
	DECLARE_FUNCTION(execSetCurrentAperture); \
	DECLARE_FUNCTION(execSetCurrentFocalLength); \
	DECLARE_FUNCTION(execSetUseAutoFocus); \
	DECLARE_FUNCTION(execSaveCurrentSettingsAsDefault); \
	DECLARE_FUNCTION(execDisableAutoFocus); \
	DECLARE_FUNCTION(execEnableAutoFocus); \
	DECLARE_FUNCTION(execRemovePhotomodeInputContext); \
	DECLARE_FUNCTION(execAddPhotomodeInputContext); \
	DECLARE_FUNCTION(execDeactivatePhotoMode); \
	DECLARE_FUNCTION(execActivatePhotoMode); \
	DECLARE_FUNCTION(execGetPhotoModeState);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_62_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_62_CALLBACK_WRAPPERS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhotoModeComponent(); \
	friend struct Z_Construct_UClass_UPhotoModeComponent_Statics; \
public: \
	DECLARE_CLASS(UPhotoModeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UPhotoModeComponent)


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_62_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhotoModeComponent(UPhotoModeComponent&&); \
	NO_API UPhotoModeComponent(const UPhotoModeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhotoModeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhotoModeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPhotoModeComponent) \
	NO_API virtual ~UPhotoModeComponent();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_59_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_62_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_62_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_62_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_62_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_62_CALLBACK_WRAPPERS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_62_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class UPhotoModeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Camera_PhotoModeComponent_h


#define FOREACH_ENUM_EPHOTOMODESTATE(op) \
	op(EPhotoModeState::NotActive) \
	op(EPhotoModeState::Pending) \
	op(EPhotoModeState::Active) 

enum class EPhotoModeState : uint8;
template<> struct TIsUEnumClass<EPhotoModeState> { enum { Value = true }; };
template<> CITYSAMPLE_API UEnum* StaticEnum<EPhotoModeState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
