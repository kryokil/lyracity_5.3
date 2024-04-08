// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/CitySampleUIComponentInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCitySamplePanel;
class UCitySampleUIComponent;
#ifdef CITYSAMPLE_CitySampleUIComponentInterface_generated_h
#error "CitySampleUIComponentInterface.generated.h already included, missing '#pragma once' in CitySampleUIComponentInterface.h"
#endif
#define CITYSAMPLE_CitySampleUIComponentInterface_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponentInterface_h_18_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponentInterface_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponentInterface_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponentInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveOverlay); \
	DECLARE_FUNCTION(execAddOverlay);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponentInterface_h_18_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponentInterface_h_18_CALLBACK_WRAPPERS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponentInterface_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CITYSAMPLE_API UCitySampleUIComponentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CITYSAMPLE_API UCitySampleUIComponentInterface(UCitySampleUIComponentInterface&&); \
	CITYSAMPLE_API UCitySampleUIComponentInterface(const UCitySampleUIComponentInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CITYSAMPLE_API, UCitySampleUIComponentInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySampleUIComponentInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCitySampleUIComponentInterface) \
	CITYSAMPLE_API virtual ~UCitySampleUIComponentInterface();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponentInterface_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCitySampleUIComponentInterface(); \
	friend struct Z_Construct_UClass_UCitySampleUIComponentInterface_Statics; \
public: \
	DECLARE_CLASS(UCitySampleUIComponentInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CitySample"), CITYSAMPLE_API) \
	DECLARE_SERIALIZER(UCitySampleUIComponentInterface)


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponentInterface_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponentInterface_h_18_GENERATED_UINTERFACE_BODY() \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponentInterface_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponentInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICitySampleUIComponentInterface() {} \
public: \
	typedef UCitySampleUIComponentInterface UClassType; \
	typedef ICitySampleUIComponentInterface ThisClass; \
	static UCitySamplePanel* Execute_AddOverlay(UObject* O, UCitySampleUIComponent* CitySampleUI, bool bSkipAnimation); \
	static void Execute_RemoveOverlay(UObject* O, UCitySampleUIComponent* CitySampleUI, bool bSkipAnimation); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponentInterface_h_15_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponentInterface_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponentInterface_h_18_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponentInterface_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponentInterface_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponentInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponentInterface_h_18_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponentInterface_h_18_CALLBACK_WRAPPERS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponentInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class UCitySampleUIComponentInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_UI_CitySampleUIComponentInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
