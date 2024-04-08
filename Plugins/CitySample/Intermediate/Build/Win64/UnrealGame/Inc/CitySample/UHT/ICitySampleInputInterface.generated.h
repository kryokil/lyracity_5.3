// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Util/ICitySampleInputInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IEnhancedInputSubsystemInterface;
#ifdef CITYSAMPLE_ICitySampleInputInterface_generated_h
#error "ICitySampleInputInterface.generated.h already included, missing '#pragma once' in ICitySampleInputInterface.h"
#endif
#define CITYSAMPLE_ICitySampleInputInterface_generated_h

#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_ICitySampleInputInterface_h_31_SPARSE_DATA
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_ICitySampleInputInterface_h_31_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_ICitySampleInputInterface_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_ICitySampleInputInterface_h_31_RPC_WRAPPERS \
	virtual void RemoveInputContext_Implementation(TScriptInterface<IEnhancedInputSubsystemInterface> const& SubsystemInterface) {}; \
	virtual void AddInputContext_Implementation(TScriptInterface<IEnhancedInputSubsystemInterface> const& SubsystemInterface) {}; \
 \
	DECLARE_FUNCTION(execRemoveInputContext); \
	DECLARE_FUNCTION(execAddInputContext);


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_ICitySampleInputInterface_h_31_ACCESSORS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_ICitySampleInputInterface_h_31_CALLBACK_WRAPPERS
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_ICitySampleInputInterface_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCitySampleInputInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCitySampleInputInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCitySampleInputInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCitySampleInputInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCitySampleInputInterface(UCitySampleInputInterface&&); \
	NO_API UCitySampleInputInterface(const UCitySampleInputInterface&); \
public: \
	NO_API virtual ~UCitySampleInputInterface();


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_ICitySampleInputInterface_h_31_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCitySampleInputInterface(); \
	friend struct Z_Construct_UClass_UCitySampleInputInterface_Statics; \
public: \
	DECLARE_CLASS(UCitySampleInputInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CitySample"), NO_API) \
	DECLARE_SERIALIZER(UCitySampleInputInterface)


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_ICitySampleInputInterface_h_31_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_ICitySampleInputInterface_h_31_GENERATED_UINTERFACE_BODY() \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_ICitySampleInputInterface_h_31_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_ICitySampleInputInterface_h_31_INCLASS_IINTERFACE \
protected: \
	virtual ~ICitySampleInputInterface() {} \
public: \
	typedef UCitySampleInputInterface UClassType; \
	typedef ICitySampleInputInterface ThisClass; \
	static void Execute_AddInputContext(UObject* O, TScriptInterface<IEnhancedInputSubsystemInterface> const& SubsystemInterface); \
	static void Execute_RemoveInputContext(UObject* O, TScriptInterface<IEnhancedInputSubsystemInterface> const& SubsystemInterface); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_ICitySampleInputInterface_h_28_PROLOG
#define FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_ICitySampleInputInterface_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_ICitySampleInputInterface_h_31_SPARSE_DATA \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_ICitySampleInputInterface_h_31_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_ICitySampleInputInterface_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_ICitySampleInputInterface_h_31_RPC_WRAPPERS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_ICitySampleInputInterface_h_31_ACCESSORS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_ICitySampleInputInterface_h_31_CALLBACK_WRAPPERS \
	FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_ICitySampleInputInterface_h_31_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CITYSAMPLE_API UClass* StaticClass<class UCitySampleInputInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Util_ICitySampleInputInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
