// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySample/Public/Vehicles/CitySampleMassVehicleBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySampleMassVehicleBase() {}
// Cross Module References
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleMassVehicleBase();
	CITYSAMPLE_API UClass* Z_Construct_UClass_ACitySampleMassVehicleBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassActorPoolableInterface_NoRegister();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CitySample();
// End Cross Module References
	DEFINE_FUNCTION(ACitySampleMassVehicleBase::execApplyWheelMotionBlurNative)
	{
		P_GET_TARRAY_REF(UMaterialInstanceDynamic*,Z_Param_Out_MotionBlurMIDs);
		P_GET_OBJECT(UMassTrafficVehicleComponent,Z_Param_MassTrafficVehicleComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelMotionBlurNumSpokes);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WheelMotionBlurStartBlurSpeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WheelMotionBlurMin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WheelMotionBlurMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyWheelMotionBlurNative(Z_Param_Out_MotionBlurMIDs,Z_Param_MassTrafficVehicleComponent,Z_Param_WheelMotionBlurNumSpokes,Z_Param_WheelMotionBlurStartBlurSpeed,Z_Param_WheelMotionBlurMin,Z_Param_WheelMotionBlurMax);
		P_NATIVE_END;
	}
	void ACitySampleMassVehicleBase::StaticRegisterNativesACitySampleMassVehicleBase()
	{
		UClass* Class = ACitySampleMassVehicleBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyWheelMotionBlurNative", &ACitySampleMassVehicleBase::execApplyWheelMotionBlurNative },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics
	{
		struct CitySampleMassVehicleBase_eventApplyWheelMotionBlurNative_Parms
		{
			TArray<UMaterialInstanceDynamic*> MotionBlurMIDs;
			UMassTrafficVehicleComponent* MassTrafficVehicleComponent;
			int32 WheelMotionBlurNumSpokes;
			float WheelMotionBlurStartBlurSpeed;
			float WheelMotionBlurMin;
			float WheelMotionBlurMax;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionBlurMIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionBlurMIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MotionBlurMIDs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MassTrafficVehicleComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MassTrafficVehicleComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_WheelMotionBlurNumSpokes;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelMotionBlurStartBlurSpeed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelMotionBlurMin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelMotionBlurMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::NewProp_MotionBlurMIDs_Inner = { "MotionBlurMIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::NewProp_MotionBlurMIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::NewProp_MotionBlurMIDs = { "MotionBlurMIDs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleMassVehicleBase_eventApplyWheelMotionBlurNative_Parms, MotionBlurMIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::NewProp_MotionBlurMIDs_MetaData), Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::NewProp_MotionBlurMIDs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::NewProp_MassTrafficVehicleComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::NewProp_MassTrafficVehicleComponent = { "MassTrafficVehicleComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleMassVehicleBase_eventApplyWheelMotionBlurNative_Parms, MassTrafficVehicleComponent), Z_Construct_UClass_UMassTrafficVehicleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::NewProp_MassTrafficVehicleComponent_MetaData), Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::NewProp_MassTrafficVehicleComponent_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::NewProp_WheelMotionBlurNumSpokes = { "WheelMotionBlurNumSpokes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleMassVehicleBase_eventApplyWheelMotionBlurNative_Parms, WheelMotionBlurNumSpokes), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::NewProp_WheelMotionBlurStartBlurSpeed = { "WheelMotionBlurStartBlurSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleMassVehicleBase_eventApplyWheelMotionBlurNative_Parms, WheelMotionBlurStartBlurSpeed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::NewProp_WheelMotionBlurMin = { "WheelMotionBlurMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleMassVehicleBase_eventApplyWheelMotionBlurNative_Parms, WheelMotionBlurMin), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::NewProp_WheelMotionBlurMax = { "WheelMotionBlurMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CitySampleMassVehicleBase_eventApplyWheelMotionBlurNative_Parms, WheelMotionBlurMax), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::NewProp_MotionBlurMIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::NewProp_MotionBlurMIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::NewProp_MassTrafficVehicleComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::NewProp_WheelMotionBlurNumSpokes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::NewProp_WheelMotionBlurStartBlurSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::NewProp_WheelMotionBlurMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::NewProp_WheelMotionBlurMax,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleMassVehicleBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACitySampleMassVehicleBase, nullptr, "ApplyWheelMotionBlurNative", nullptr, nullptr, Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::CitySampleMassVehicleBase_eventApplyWheelMotionBlurNative_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::CitySampleMassVehicleBase_eventApplyWheelMotionBlurNative_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACitySampleMassVehicleBase);
	UClass* Z_Construct_UClass_ACitySampleMassVehicleBase_NoRegister()
	{
		return ACitySampleMassVehicleBase::StaticClass();
	}
	struct Z_Construct_UClass_ACitySampleMassVehicleBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACitySampleMassVehicleBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySample,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleMassVehicleBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACitySampleMassVehicleBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACitySampleMassVehicleBase_ApplyWheelMotionBlurNative, "ApplyWheelMotionBlurNative" }, // 3248879259
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleMassVehicleBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySampleMassVehicleBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Vehicles/CitySampleMassVehicleBase.h" },
		{ "ModuleRelativePath", "Public/Vehicles/CitySampleMassVehicleBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACitySampleMassVehicleBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMassActorPoolableInterface_NoRegister, (int32)VTABLE_OFFSET(ACitySampleMassVehicleBase, IMassActorPoolableInterface), false },  // 3384984153
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleMassVehicleBase_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACitySampleMassVehicleBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACitySampleMassVehicleBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACitySampleMassVehicleBase_Statics::ClassParams = {
		&ACitySampleMassVehicleBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySampleMassVehicleBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ACitySampleMassVehicleBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACitySampleMassVehicleBase()
	{
		if (!Z_Registration_Info_UClass_ACitySampleMassVehicleBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACitySampleMassVehicleBase.OuterSingleton, Z_Construct_UClass_ACitySampleMassVehicleBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACitySampleMassVehicleBase.OuterSingleton;
	}
	template<> CITYSAMPLE_API UClass* StaticClass<ACitySampleMassVehicleBase>()
	{
		return ACitySampleMassVehicleBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACitySampleMassVehicleBase);
	ACitySampleMassVehicleBase::~ACitySampleMassVehicleBase() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleMassVehicleBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleMassVehicleBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACitySampleMassVehicleBase, ACitySampleMassVehicleBase::StaticClass, TEXT("ACitySampleMassVehicleBase"), &Z_Registration_Info_UClass_ACitySampleMassVehicleBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACitySampleMassVehicleBase), 3431301437U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleMassVehicleBase_h_1306056804(TEXT("/Script/CitySample"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleMassVehicleBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_CitySample_Source_CitySample_Public_Vehicles_CitySampleMassVehicleBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
