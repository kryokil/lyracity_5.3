// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficBubble.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSTRAFFIC_MassTrafficBubble_generated_h
#error "MassTrafficBubble.generated.h already included, missing '#pragma once' in MassTrafficBubble.h"
#endif
#define MASSTRAFFIC_MassTrafficBubble_generated_h

#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTrafficClientBubbleSerializer_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMassClientBubbleSerializerBase Super; \
	UE_NET_DECLARE_FASTARRAY(FTrafficClientBubbleSerializer, Traffic, );


template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<struct FTrafficClientBubbleSerializer>();

#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h_80_SPARSE_DATA
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h_80_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h_80_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h_80_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h_80_ACCESSORS
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATrafficClientBubbleInfo(); \
	friend struct Z_Construct_UClass_ATrafficClientBubbleInfo_Statics; \
public: \
	DECLARE_CLASS(ATrafficClientBubbleInfo, AMassClientBubbleInfoBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassTraffic"), NO_API) \
	DECLARE_SERIALIZER(ATrafficClientBubbleInfo) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TrafficSerializer=NETFIELD_REP_START, \
		NETFIELD_REP_END=TrafficSerializer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h_80_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrafficClientBubbleInfo(ATrafficClientBubbleInfo&&); \
	NO_API ATrafficClientBubbleInfo(const ATrafficClientBubbleInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrafficClientBubbleInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrafficClientBubbleInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATrafficClientBubbleInfo) \
	NO_API virtual ~ATrafficClientBubbleInfo();


#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h_77_PROLOG
#define FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h_80_SPARSE_DATA \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h_80_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h_80_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h_80_ACCESSORS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h_80_INCLASS_NO_PURE_DECLS \
	FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSTRAFFIC_API UClass* StaticClass<class ATrafficClientBubbleInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
