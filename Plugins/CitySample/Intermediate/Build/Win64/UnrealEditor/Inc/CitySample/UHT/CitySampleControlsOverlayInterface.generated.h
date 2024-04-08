// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/CitySampleControlsOverlayInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputAction; 
struct FKey; 
#ifdef CITYSAMPLE_CitySampleControlsOverlayInterface_generated_h
#error "CitySampleControlsOverlayInterface.generated.h already included, missing '#pragma once' in CitySampleControlsOverlayInterface.h"
#endif
#define CITYSAMPLE_CitySampleControlsOverlayInterface_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlayInterface_h_18_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlayInterface_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlayInterface_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlayInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TMap<FKey,FText> GetInputKeyDescriptionOverrides_Implementation() const { return TMap<FKey,FText>(); }; \
	virtual TMap<UInputAction*,FText> GetInputActionDescriptions_Implementation() const { return TMap<UInputAction*,FText>(); }; \
 \
	DECLARE_FUNCTION(execGetInputKeyDescriptionOverrides); \
	DECLARE_FUNCTION(execGetInputActionDescriptions);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlayInterface_h_18_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlayInterface_h_18_CALLBACK_WRAPPERS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlayInterface_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCitySampleControlsOverlayInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCitySampleControlsOverlayInterface(UCitySampleControlsOverlayInterface&&); \
	NO_API UCitySampleControlsOverlayInterface(const UCitySampleControlsOverlayInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCitySampleControlsOverlayInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySampleControlsOverlayInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCitySampleControlsOverlayInterface) \
	NO_API virtual ~UCitySampleControlsOverlayInterface();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlayInterface_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCitySampleControlsOverlayInterface(); \
	friend struct Z_Construct_UClass_UCitySampleControlsOverlayInterface_Statics; \
public: \
	DECLARE_CLASS(UCitySampleControlsOverlayInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UCitySampleControlsOverlayInterface)


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlayInterface_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlayInterface_h_18_GENERATED_UINTERFACE_BODY() \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlayInterface_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlayInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICitySampleControlsOverlayInterface() {} \
public: \
	typedef UCitySampleControlsOverlayInterface UClassType; \
	typedef ICitySampleControlsOverlayInterface ThisClass; \
	static TMap<UInputAction*,FText> Execute_GetInputActionDescriptions(const UObject* O); \
	static TMap<FKey,FText> Execute_GetInputKeyDescriptionOverrides(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlayInterface_h_15_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlayInterface_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlayInterface_h_18_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlayInterface_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlayInterface_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlayInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlayInterface_h_18_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlayInterface_h_18_CALLBACK_WRAPPERS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlayInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class UCitySampleControlsOverlayInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleControlsOverlayInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
