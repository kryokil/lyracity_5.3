// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficFieldOperations.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficFieldOperations() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MASSLOD_API UEnum* Z_Construct_UEnum_MassLOD_EMassLOD();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase_NoRegister();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFieldOperationBase();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFieldOperationBase_NoRegister();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_NoRegister();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_NoRegister();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFrameStartFieldOperationsProcessor();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFrameStartFieldOperationsProcessor_NoRegister();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor_NoRegister();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_NoRegister();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_NoRegister();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficSubsystem_NoRegister();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_NoRegister();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperationProcessor();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperationProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	void UMassTrafficFieldOperationBase::StaticRegisterNativesUMassTrafficFieldOperationBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficFieldOperationBase);
	UClass* Z_Construct_UClass_UMassTrafficFieldOperationBase_NoRegister()
	{
		return UMassTrafficFieldOperationBase::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficFieldOperationBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficFieldOperationBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldOperationBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficFieldOperationBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficFieldOperations.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficFieldOperationBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficFieldOperationBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficFieldOperationBase_Statics::ClassParams = {
		&UMassTrafficFieldOperationBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldOperationBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficFieldOperationBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassTrafficFieldOperationBase()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficFieldOperationBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficFieldOperationBase.OuterSingleton, Z_Construct_UClass_UMassTrafficFieldOperationBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficFieldOperationBase.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficFieldOperationBase>()
	{
		return UMassTrafficFieldOperationBase::StaticClass();
	}
	UMassTrafficFieldOperationBase::UMassTrafficFieldOperationBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficFieldOperationBase);
	UMassTrafficFieldOperationBase::~UMassTrafficFieldOperationBase() {}
	void UMassTrafficBeginPlayFieldOperationBase::StaticRegisterNativesUMassTrafficBeginPlayFieldOperationBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficBeginPlayFieldOperationBase);
	UClass* Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase_NoRegister()
	{
		return UMassTrafficBeginPlayFieldOperationBase::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTrafficFieldOperationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Any field operations subclassing from this will be run automatically on begin play */" },
#endif
		{ "IncludePath", "MassTrafficFieldOperations.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Any field operations subclassing from this will be run automatically on begin play" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficBeginPlayFieldOperationBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase_Statics::ClassParams = {
		&UMassTrafficBeginPlayFieldOperationBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficBeginPlayFieldOperationBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficBeginPlayFieldOperationBase.OuterSingleton, Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficBeginPlayFieldOperationBase.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficBeginPlayFieldOperationBase>()
	{
		return UMassTrafficBeginPlayFieldOperationBase::StaticClass();
	}
	UMassTrafficBeginPlayFieldOperationBase::UMassTrafficBeginPlayFieldOperationBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficBeginPlayFieldOperationBase);
	UMassTrafficBeginPlayFieldOperationBase::~UMassTrafficBeginPlayFieldOperationBase() {}
	void UMassTrafficFieldOperationsProcessorBase::StaticRegisterNativesUMassTrafficFieldOperationsProcessorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficFieldOperationsProcessorBase);
	UClass* Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_NoRegister()
	{
		return UMassTrafficFieldOperationsProcessorBase::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Operation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedMassTrafficSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedMassTrafficSubsystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficFieldOperations.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "Operations" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficFieldOperationsProcessorBase, Operation), Z_Construct_UClass_UClass, Z_Construct_UClass_UMassTrafficFieldOperationBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::NewProp_Operation_MetaData), Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::NewProp_Operation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::NewProp_CachedMassTrafficSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::NewProp_CachedMassTrafficSubsystem = { "CachedMassTrafficSubsystem", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficFieldOperationsProcessorBase, CachedMassTrafficSubsystem), Z_Construct_UClass_UMassTrafficSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::NewProp_CachedMassTrafficSubsystem_MetaData), Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::NewProp_CachedMassTrafficSubsystem_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::NewProp_CachedMassTrafficSubsystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficFieldOperationsProcessorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::ClassParams = {
		&UMassTrafficFieldOperationsProcessorBase::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::PropPointers),
		0,
		0x401030A7u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficFieldOperationsProcessorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficFieldOperationsProcessorBase.OuterSingleton, Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficFieldOperationsProcessorBase.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficFieldOperationsProcessorBase>()
	{
		return UMassTrafficFieldOperationsProcessorBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficFieldOperationsProcessorBase);
	UMassTrafficFieldOperationsProcessorBase::~UMassTrafficFieldOperationsProcessorBase() {}
	void UMassTrafficForceTrafficVehicleViewerLODFieldOperation::StaticRegisterNativesUMassTrafficForceTrafficVehicleViewerLODFieldOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficForceTrafficVehicleViewerLODFieldOperation);
	UClass* Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_NoRegister()
	{
		return UMassTrafficForceTrafficVehicleViewerLODFieldOperation::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LOD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTrafficFieldOperationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Force Traffic Vehicle Viewer LOD" },
		{ "IncludePath", "MassTrafficFieldOperations.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::NewProp_LOD_MetaData[] = {
		{ "Category", "Operation" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficForceTrafficVehicleViewerLODFieldOperation, LOD), Z_Construct_UEnum_MassLOD_EMassLOD, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::NewProp_LOD_MetaData), Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::NewProp_LOD_MetaData) }; // 4019635699
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::NewProp_LOD,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficForceTrafficVehicleViewerLODFieldOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::ClassParams = {
		&UMassTrafficForceTrafficVehicleViewerLODFieldOperation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation.OuterSingleton, Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficForceTrafficVehicleViewerLODFieldOperation>()
	{
		return UMassTrafficForceTrafficVehicleViewerLODFieldOperation::StaticClass();
	}
	UMassTrafficForceTrafficVehicleViewerLODFieldOperation::UMassTrafficForceTrafficVehicleViewerLODFieldOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficForceTrafficVehicleViewerLODFieldOperation);
	UMassTrafficForceTrafficVehicleViewerLODFieldOperation::~UMassTrafficForceTrafficVehicleViewerLODFieldOperation() {}
	void UMassTrafficSetLaneSpeedLimitFieldOperation::StaticRegisterNativesUMassTrafficSetLaneSpeedLimitFieldOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficSetLaneSpeedLimitFieldOperation);
	UClass* Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_NoRegister()
	{
		return UMassTrafficSetLaneSpeedLimitFieldOperation::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedLimitMPH_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedLimitMPH;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Set Lane Speed Limit" },
		{ "IncludePath", "MassTrafficFieldOperations.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::NewProp_SpeedLimitMPH_MetaData[] = {
		{ "Category", "Operation" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::NewProp_SpeedLimitMPH = { "SpeedLimitMPH", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSetLaneSpeedLimitFieldOperation, SpeedLimitMPH), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::NewProp_SpeedLimitMPH_MetaData), Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::NewProp_SpeedLimitMPH_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::NewProp_SpeedLimitMPH,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficSetLaneSpeedLimitFieldOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::ClassParams = {
		&UMassTrafficSetLaneSpeedLimitFieldOperation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation.OuterSingleton, Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficSetLaneSpeedLimitFieldOperation>()
	{
		return UMassTrafficSetLaneSpeedLimitFieldOperation::StaticClass();
	}
	UMassTrafficSetLaneSpeedLimitFieldOperation::UMassTrafficSetLaneSpeedLimitFieldOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficSetLaneSpeedLimitFieldOperation);
	UMassTrafficSetLaneSpeedLimitFieldOperation::~UMassTrafficSetLaneSpeedLimitFieldOperation() {}
	void UMassTrafficVisualLoggingFieldOperation::StaticRegisterNativesUMassTrafficVisualLoggingFieldOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficVisualLoggingFieldOperation);
	UClass* Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_NoRegister()
	{
		return UMassTrafficVisualLoggingFieldOperation::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisLog_MetaData[];
#endif
		static void NewProp_bVisLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisLog;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTrafficFieldOperationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Visual Logging" },
		{ "IncludePath", "MassTrafficFieldOperations.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::NewProp_bVisLog_MetaData[] = {
		{ "Category", "Operation" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
#endif
	void Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::NewProp_bVisLog_SetBit(void* Obj)
	{
		((UMassTrafficVisualLoggingFieldOperation*)Obj)->bVisLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::NewProp_bVisLog = { "bVisLog", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMassTrafficVisualLoggingFieldOperation), &Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::NewProp_bVisLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::NewProp_bVisLog_MetaData), Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::NewProp_bVisLog_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::NewProp_bVisLog,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficVisualLoggingFieldOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::ClassParams = {
		&UMassTrafficVisualLoggingFieldOperation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficVisualLoggingFieldOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVisualLoggingFieldOperation.OuterSingleton, Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficVisualLoggingFieldOperation.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficVisualLoggingFieldOperation>()
	{
		return UMassTrafficVisualLoggingFieldOperation::StaticClass();
	}
	UMassTrafficVisualLoggingFieldOperation::UMassTrafficVisualLoggingFieldOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficVisualLoggingFieldOperation);
	UMassTrafficVisualLoggingFieldOperation::~UMassTrafficVisualLoggingFieldOperation() {}
	void UMassTrafficRetimeIntersectionPeriodsFieldOperation::StaticRegisterNativesUMassTrafficRetimeIntersectionPeriodsFieldOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficRetimeIntersectionPeriodsFieldOperation);
	UClass* Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_NoRegister()
	{
		return UMassTrafficRetimeIntersectionPeriodsFieldOperation::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehiclesOnlyPeriodDurationMult_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VehiclesOnlyPeriodDurationMult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PedestriansOnlyPeriodDurationMult_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PedestriansOnlyPeriodDurationMult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleAndPedestrianPeriodDurationMult_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VehicleAndPedestrianPeriodDurationMult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyPeriodDurationMult_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EmptyPeriodDurationMult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTrafficFieldOperationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Re-Time Intersection Periods" },
		{ "IncludePath", "MassTrafficFieldOperations.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::NewProp_VehiclesOnlyPeriodDurationMult_MetaData[] = {
		{ "Category", "Operation" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::NewProp_VehiclesOnlyPeriodDurationMult = { "VehiclesOnlyPeriodDurationMult", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficRetimeIntersectionPeriodsFieldOperation, VehiclesOnlyPeriodDurationMult), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::NewProp_VehiclesOnlyPeriodDurationMult_MetaData), Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::NewProp_VehiclesOnlyPeriodDurationMult_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::NewProp_PedestriansOnlyPeriodDurationMult_MetaData[] = {
		{ "Category", "Operation" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::NewProp_PedestriansOnlyPeriodDurationMult = { "PedestriansOnlyPeriodDurationMult", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficRetimeIntersectionPeriodsFieldOperation, PedestriansOnlyPeriodDurationMult), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::NewProp_PedestriansOnlyPeriodDurationMult_MetaData), Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::NewProp_PedestriansOnlyPeriodDurationMult_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::NewProp_VehicleAndPedestrianPeriodDurationMult_MetaData[] = {
		{ "Category", "Operation" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::NewProp_VehicleAndPedestrianPeriodDurationMult = { "VehicleAndPedestrianPeriodDurationMult", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficRetimeIntersectionPeriodsFieldOperation, VehicleAndPedestrianPeriodDurationMult), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::NewProp_VehicleAndPedestrianPeriodDurationMult_MetaData), Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::NewProp_VehicleAndPedestrianPeriodDurationMult_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::NewProp_EmptyPeriodDurationMult_MetaData[] = {
		{ "Category", "Operation" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::NewProp_EmptyPeriodDurationMult = { "EmptyPeriodDurationMult", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficRetimeIntersectionPeriodsFieldOperation, EmptyPeriodDurationMult), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::NewProp_EmptyPeriodDurationMult_MetaData), Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::NewProp_EmptyPeriodDurationMult_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::NewProp_VehiclesOnlyPeriodDurationMult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::NewProp_PedestriansOnlyPeriodDurationMult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::NewProp_VehicleAndPedestrianPeriodDurationMult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::NewProp_EmptyPeriodDurationMult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficRetimeIntersectionPeriodsFieldOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::ClassParams = {
		&UMassTrafficRetimeIntersectionPeriodsFieldOperation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation.OuterSingleton, Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficRetimeIntersectionPeriodsFieldOperation>()
	{
		return UMassTrafficRetimeIntersectionPeriodsFieldOperation::StaticClass();
	}
	UMassTrafficRetimeIntersectionPeriodsFieldOperation::UMassTrafficRetimeIntersectionPeriodsFieldOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficRetimeIntersectionPeriodsFieldOperation);
	UMassTrafficRetimeIntersectionPeriodsFieldOperation::~UMassTrafficRetimeIntersectionPeriodsFieldOperation() {}
	void UMassTrafficVisualLoggingFieldOperationProcessor::StaticRegisterNativesUMassTrafficVisualLoggingFieldOperationProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficVisualLoggingFieldOperationProcessor);
	UClass* Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperationProcessor_NoRegister()
	{
		return UMassTrafficVisualLoggingFieldOperationProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperationProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperationProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperationProcessor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperationProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficFieldOperations.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperationProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficVisualLoggingFieldOperationProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperationProcessor_Statics::ClassParams = {
		&UMassTrafficVisualLoggingFieldOperationProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x401030A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperationProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperationProcessor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperationProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficVisualLoggingFieldOperationProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVisualLoggingFieldOperationProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperationProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficVisualLoggingFieldOperationProcessor.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficVisualLoggingFieldOperationProcessor>()
	{
		return UMassTrafficVisualLoggingFieldOperationProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficVisualLoggingFieldOperationProcessor);
	UMassTrafficVisualLoggingFieldOperationProcessor::~UMassTrafficVisualLoggingFieldOperationProcessor() {}
	void UMassTrafficFrameStartFieldOperationsProcessor::StaticRegisterNativesUMassTrafficFrameStartFieldOperationsProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficFrameStartFieldOperationsProcessor);
	UClass* Z_Construct_UClass_UMassTrafficFrameStartFieldOperationsProcessor_NoRegister()
	{
		return UMassTrafficFrameStartFieldOperationsProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficFrameStartFieldOperationsProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficFrameStartFieldOperationsProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFrameStartFieldOperationsProcessor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficFrameStartFieldOperationsProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficFieldOperations.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficFrameStartFieldOperationsProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficFrameStartFieldOperationsProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficFrameStartFieldOperationsProcessor_Statics::ClassParams = {
		&UMassTrafficFrameStartFieldOperationsProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x401030A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFrameStartFieldOperationsProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficFrameStartFieldOperationsProcessor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassTrafficFrameStartFieldOperationsProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficFrameStartFieldOperationsProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficFrameStartFieldOperationsProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficFrameStartFieldOperationsProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficFrameStartFieldOperationsProcessor.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficFrameStartFieldOperationsProcessor>()
	{
		return UMassTrafficFrameStartFieldOperationsProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficFrameStartFieldOperationsProcessor);
	UMassTrafficFrameStartFieldOperationsProcessor::~UMassTrafficFrameStartFieldOperationsProcessor() {}
	void UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor::StaticRegisterNativesUMassTrafficPostCalcVisualizationLODFieldOperationsProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor);
	UClass* Z_Construct_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor_NoRegister()
	{
		return UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficFieldOperations.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor_Statics::ClassParams = {
		&UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x401030A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor>()
	{
		return UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor);
	UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor::~UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldOperations_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldOperations_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficFieldOperationBase, UMassTrafficFieldOperationBase::StaticClass, TEXT("UMassTrafficFieldOperationBase"), &Z_Registration_Info_UClass_UMassTrafficFieldOperationBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficFieldOperationBase), 3147861964U) },
		{ Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase, UMassTrafficBeginPlayFieldOperationBase::StaticClass, TEXT("UMassTrafficBeginPlayFieldOperationBase"), &Z_Registration_Info_UClass_UMassTrafficBeginPlayFieldOperationBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficBeginPlayFieldOperationBase), 3687506195U) },
		{ Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase, UMassTrafficFieldOperationsProcessorBase::StaticClass, TEXT("UMassTrafficFieldOperationsProcessorBase"), &Z_Registration_Info_UClass_UMassTrafficFieldOperationsProcessorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficFieldOperationsProcessorBase), 1858840563U) },
		{ Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation, UMassTrafficForceTrafficVehicleViewerLODFieldOperation::StaticClass, TEXT("UMassTrafficForceTrafficVehicleViewerLODFieldOperation"), &Z_Registration_Info_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficForceTrafficVehicleViewerLODFieldOperation), 4144164128U) },
		{ Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation, UMassTrafficSetLaneSpeedLimitFieldOperation::StaticClass, TEXT("UMassTrafficSetLaneSpeedLimitFieldOperation"), &Z_Registration_Info_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficSetLaneSpeedLimitFieldOperation), 872032428U) },
		{ Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation, UMassTrafficVisualLoggingFieldOperation::StaticClass, TEXT("UMassTrafficVisualLoggingFieldOperation"), &Z_Registration_Info_UClass_UMassTrafficVisualLoggingFieldOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVisualLoggingFieldOperation), 1055774591U) },
		{ Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation, UMassTrafficRetimeIntersectionPeriodsFieldOperation::StaticClass, TEXT("UMassTrafficRetimeIntersectionPeriodsFieldOperation"), &Z_Registration_Info_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficRetimeIntersectionPeriodsFieldOperation), 3593113536U) },
		{ Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperationProcessor, UMassTrafficVisualLoggingFieldOperationProcessor::StaticClass, TEXT("UMassTrafficVisualLoggingFieldOperationProcessor"), &Z_Registration_Info_UClass_UMassTrafficVisualLoggingFieldOperationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVisualLoggingFieldOperationProcessor), 4175286714U) },
		{ Z_Construct_UClass_UMassTrafficFrameStartFieldOperationsProcessor, UMassTrafficFrameStartFieldOperationsProcessor::StaticClass, TEXT("UMassTrafficFrameStartFieldOperationsProcessor"), &Z_Registration_Info_UClass_UMassTrafficFrameStartFieldOperationsProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficFrameStartFieldOperationsProcessor), 1358988952U) },
		{ Z_Construct_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor, UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor::StaticClass, TEXT("UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor"), &Z_Registration_Info_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor), 2222076811U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldOperations_h_525514783(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldOperations_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldOperations_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
