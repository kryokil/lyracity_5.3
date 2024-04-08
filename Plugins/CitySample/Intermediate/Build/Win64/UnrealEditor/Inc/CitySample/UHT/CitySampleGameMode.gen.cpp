// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Game/CitySampleGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleGameMode() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleGameMode();
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	DEFINE_FUNCTION(ACitySampleGameMode::execUseSandboxIntro)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UseSandboxIntro();
		P_NATIVE_END;
	}
	void ACitySampleGameMode::StaticRegisterNativesACitySampleGameMode()
	{
		UClass* Class = ACitySampleGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UseSandboxIntro", &ACitySampleGameMode::execUseSandboxIntro },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACitySampleGameMode_UseSandboxIntro_Statics
	{
		struct CitySampleGameMode_eventUseSandboxIntro_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACitySampleGameMode_UseSandboxIntro_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CitySampleGameMode_eventUseSandboxIntro_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACitySampleGameMode_UseSandboxIntro_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CitySampleGameMode_eventUseSandboxIntro_Parms), &Z_Construct_UFunction_ACitySampleGameMode_UseSandboxIntro_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleGameMode_UseSandboxIntro_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleGameMode_UseSandboxIntro_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleGameMode_UseSandboxIntro_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sandbox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Checks several variables to determine whether or not to use the fly-in city intro when beginning play */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySampleGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks several variables to determine whether or not to use the fly-in city intro when beginning play" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleGameMode_UseSandboxIntro_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleGameMode, nullptr, "UseSandboxIntro", nullptr, nullptr, Z_Construct_UFunction_ACitySampleGameMode_UseSandboxIntro_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleGameMode_UseSandboxIntro_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleGameMode_UseSandboxIntro_Statics::CitySampleGameMode_eventUseSandboxIntro_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleGameMode_UseSandboxIntro_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleGameMode_UseSandboxIntro_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleGameMode_UseSandboxIntro_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleGameMode_UseSandboxIntro_Statics::CitySampleGameMode_eventUseSandboxIntro_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleGameMode_UseSandboxIntro()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleGameMode_UseSandboxIntro_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACitySampleGameMode);
	UClass* Z_Construct_UClass_ACitySampleGameMode_NoRegister()
	{
		return ACitySampleGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACitySampleGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DataLayersToDisableInPerformanceMode_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayersToDisableInPerformanceMode_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayersToDisableInPerformanceMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSandboxIntro_MetaData[];
#endif
		static void NewProp_bUseSandboxIntro_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSandboxIntro;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACitySampleGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACitySampleGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACitySampleGameMode_UseSandboxIntro, "UseSandboxIntro" }, // 1208806683
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/CitySampleGameMode.h" },
		{ "ModuleRelativePath", "Public/Game/CitySampleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACitySampleGameMode_Statics::NewProp_DataLayersToDisableInPerformanceMode_Inner = { "DataLayersToDisableInPerformanceMode", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleGameMode_Statics::NewProp_DataLayersToDisableInPerformanceMode_MetaData[] = {
		{ "Category", "Data Layer Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of data layers to unload when the performance mode console variable is enabled */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySampleGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of data layers to unload when the performance mode console variable is enabled" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACitySampleGameMode_Statics::NewProp_DataLayersToDisableInPerformanceMode = { "DataLayersToDisableInPerformanceMode", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACitySampleGameMode, DataLayersToDisableInPerformanceMode), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleGameMode_Statics::NewProp_DataLayersToDisableInPerformanceMode_MetaData), Z_Construct_UClass_ACitySampleGameMode_Statics::NewProp_DataLayersToDisableInPerformanceMode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleGameMode_Statics::NewProp_bUseSandboxIntro_MetaData[] = {
		{ "Category", "Sandbox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, this gamemode will attempt to play an intro sequence when beginning play */" },
#endif
		{ "ModuleRelativePath", "Public/Game/CitySampleGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, this gamemode will attempt to play an intro sequence when beginning play" },
#endif
	};
#endif
	void Z_Construct_UClass_ACitySampleGameMode_Statics::NewProp_bUseSandboxIntro_SetBit(void* Obj)
	{
		((ACitySampleGameMode*)Obj)->bUseSandboxIntro = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACitySampleGameMode_Statics::NewProp_bUseSandboxIntro = { "bUseSandboxIntro", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACitySampleGameMode), &Z_Construct_UClass_ACitySampleGameMode_Statics::NewProp_bUseSandboxIntro_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleGameMode_Statics::NewProp_bUseSandboxIntro_MetaData), Z_Construct_UClass_ACitySampleGameMode_Statics::NewProp_bUseSandboxIntro_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACitySampleGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleGameMode_Statics::NewProp_DataLayersToDisableInPerformanceMode_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleGameMode_Statics::NewProp_DataLayersToDisableInPerformanceMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACitySampleGameMode_Statics::NewProp_bUseSandboxIntro,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACitySampleGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACitySampleGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACitySampleGameMode_Statics::ClassParams = {
		&ACitySampleGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACitySampleGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACitySampleGameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleGameMode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACitySampleGameMode()
	{
		if (!Z_Registration_Info_UClass_ACitySampleGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACitySampleGameMode.OuterSingleton, Z_Construct_UClass_ACitySampleGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACitySampleGameMode.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<ACitySampleGameMode>()
	{
		return ACitySampleGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACitySampleGameMode);
	ACitySampleGameMode::~ACitySampleGameMode() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACitySampleGameMode, ACitySampleGameMode::StaticClass, TEXT("ACitySampleGameMode"), &Z_Registration_Info_UClass_ACitySampleGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACitySampleGameMode), 2991091963U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameMode_h_1104618976(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Game_CitySampleGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
