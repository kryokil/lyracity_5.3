// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/NiagaraDataInterfaceCitySampleSensorGrid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceCitySampleSensorGrid() {}
// Cross Module References
	CITYSAMPLESENSORGRID_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid();
	CITYSAMPLESENSORGRID_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	UPackage* Z_Construct_UPackage__Script_CitySampleSensorGrid();
// End Cross Module References
	void UNiagaraDataInterfaceCitySampleSensorGrid::StaticRegisterNativesUNiagaraDataInterfaceCitySampleSensorGrid()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceCitySampleSensorGrid);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_NoRegister()
	{
		return UNiagaraDataInterfaceCitySampleSensorGrid::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SensorCountPerSide_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SensorCountPerSide;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalSensorAccuracy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalSensorAccuracy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalSensorRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalSensorRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserChannelCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserChannelCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySampleSensorGrid,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Data Interface allowing spatial queries on 3d particles uniquely projected onto a 2d grid */" },
#endif
		{ "DisplayName", "CitySample Sensor Grid" },
		{ "IncludePath", "NiagaraDataInterfaceCitySampleSensorGrid.h" },
		{ "ModuleRelativePath", "Private/NiagaraDataInterfaceCitySampleSensorGrid.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data Interface allowing spatial queries on 3d particles uniquely projected onto a 2d grid" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::NewProp_SensorCountPerSide_MetaData[] = {
		{ "Category", "Sensors" },
		{ "ModuleRelativePath", "Private/NiagaraDataInterfaceCitySampleSensorGrid.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::NewProp_SensorCountPerSide = { "SensorCountPerSide", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceCitySampleSensorGrid, SensorCountPerSide), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::NewProp_SensorCountPerSide_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::NewProp_SensorCountPerSide_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::NewProp_GlobalSensorAccuracy_MetaData[] = {
		{ "Category", "Sensors" },
		{ "ModuleRelativePath", "Private/NiagaraDataInterfaceCitySampleSensorGrid.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::NewProp_GlobalSensorAccuracy = { "GlobalSensorAccuracy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceCitySampleSensorGrid, GlobalSensorAccuracy), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::NewProp_GlobalSensorAccuracy_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::NewProp_GlobalSensorAccuracy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::NewProp_GlobalSensorRange_MetaData[] = {
		{ "Category", "Sensors" },
		{ "ModuleRelativePath", "Private/NiagaraDataInterfaceCitySampleSensorGrid.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::NewProp_GlobalSensorRange = { "GlobalSensorRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceCitySampleSensorGrid, GlobalSensorRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::NewProp_GlobalSensorRange_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::NewProp_GlobalSensorRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::NewProp_UserChannelCount_MetaData[] = {
		{ "Category", "User Data" },
		{ "ModuleRelativePath", "Private/NiagaraDataInterfaceCitySampleSensorGrid.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::NewProp_UserChannelCount = { "UserChannelCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceCitySampleSensorGrid, UserChannelCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::NewProp_UserChannelCount_MetaData), Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::NewProp_UserChannelCount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::NewProp_SensorCountPerSide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::NewProp_GlobalSensorAccuracy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::NewProp_GlobalSensorRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::NewProp_UserChannelCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceCitySampleSensorGrid>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::ClassParams = {
		&UNiagaraDataInterfaceCitySampleSensorGrid::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceCitySampleSensorGrid.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceCitySampleSensorGrid.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceCitySampleSensorGrid.OuterSingleton;
	}
	template<> CITYSAMPLESENSORGRID_API UClass* StaticClass<UNiagaraDataInterfaceCitySampleSensorGrid>()
	{
		return UNiagaraDataInterfaceCitySampleSensorGrid::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceCitySampleSensorGrid);
	UNiagaraDataInterfaceCitySampleSensorGrid::~UNiagaraDataInterfaceCitySampleSensorGrid() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleSensorGrid_Source_CitySampleSensorGrid_Private_NiagaraDataInterfaceCitySampleSensorGrid_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleSensorGrid_Source_CitySampleSensorGrid_Private_NiagaraDataInterfaceCitySampleSensorGrid_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceCitySampleSensorGrid, UNiagaraDataInterfaceCitySampleSensorGrid::StaticClass, TEXT("UNiagaraDataInterfaceCitySampleSensorGrid"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceCitySampleSensorGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceCitySampleSensorGrid), 2805424977U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleSensorGrid_Source_CitySampleSensorGrid_Private_NiagaraDataInterfaceCitySampleSensorGrid_h_3523952523(TEXT("/Script/CitySampleSensorGrid"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleSensorGrid_Source_CitySampleSensorGrid_Private_NiagaraDataInterfaceCitySampleSensorGrid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySampleSensorGrid_Source_CitySampleSensorGrid_Private_NiagaraDataInterfaceCitySampleSensorGrid_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
