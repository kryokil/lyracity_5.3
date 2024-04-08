// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficFieldComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSTRAFFIC_MassTrafficFieldComponent_generated_h
#error "MassTrafficFieldComponent.generated.h already included, missing '#pragma once' in MassTrafficFieldComponent.h"
#endif
#define MASSTRAFFIC_MassTrafficFieldComponent_generated_h

#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_29_SPARSE_DATA
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_29_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_29_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_29_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficFieldComponent(); \
	friend struct Z_Construct_UClass_UMassTrafficFieldComponent_Statics; \
public: \
	DECLARE_CLASS(UMassTrafficFieldComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassTraffic"), NO_API) \
	DECLARE_SERIALIZER(UMassTrafficFieldComponent)


#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassTrafficFieldComponent(UMassTrafficFieldComponent&&); \
	NO_API UMassTrafficFieldComponent(const UMassTrafficFieldComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficFieldComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficFieldComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassTrafficFieldComponent) \
	NO_API virtual ~UMassTrafficFieldComponent();


#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_26_PROLOG
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_29_SPARSE_DATA \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_29_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_29_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_29_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_29_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSTRAFFIC_API UClass* StaticClass<class UMassTrafficFieldComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h


#define FOREACH_ENUM_EMASSTRAFFICFIELDINCLUSIONMODE(op) \
	op(EMassTrafficFieldInclusionMode::Lanes) \
	op(EMassTrafficFieldInclusionMode::VehiclesOnLanes) 

enum class EMassTrafficFieldInclusionMode : uint8;
template<> struct TIsUEnumClass<EMassTrafficFieldInclusionMode> { enum { Value = true }; };
template<> MASSTRAFFIC_API UEnum* StaticEnum<EMassTrafficFieldInclusionMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
