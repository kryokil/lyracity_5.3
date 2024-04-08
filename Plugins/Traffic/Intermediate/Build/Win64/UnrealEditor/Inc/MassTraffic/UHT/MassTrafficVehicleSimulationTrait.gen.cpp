// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficVehicleSimulationTrait.h"
#include "MassSimulationLOD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficVehicleSimulationTrait() {}
// Cross Module References
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassSharedFragment();
	MASSLOD_API UScriptStruct* Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleSimulationTrait();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_NoRegister();
	MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References

static_assert(std::is_polymorphic<FMassTrafficVehicleSimulationParameters>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FMassTrafficVehicleSimulationParameters cannot be polymorphic unless super FMassSharedFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficVehicleSimulationParameters;
class UScriptStruct* FMassTrafficVehicleSimulationParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficVehicleSimulationParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficVehicleSimulationParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficVehicleSimulationParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficVehicleSimulationParameters.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficVehicleSimulationParameters>()
{
	return FMassTrafficVehicleSimulationParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HalfLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HalfWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrontAxleX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrontAxleX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RearAxleX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RearAxleX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRestrictedToTrunkLanesOnly_MetaData[];
#endif
		static void NewProp_bRestrictedToTrunkLanesOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestrictedToTrunkLanesOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsVehicleTemplateActor_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PhysicsVehicleTemplateActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSimulationTrait.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficVehicleSimulationParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_HalfLength_MetaData[] = {
		{ "Category", "Dimensions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Distance from vehicle origin to front most point or rear most point (whichever is greater). Used for vehicle\n\x09 * avoidance collision detection.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSimulationTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance from vehicle origin to front most point or rear most point (whichever is greater). Used for vehicle\navoidance collision detection." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_HalfLength = { "HalfLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficVehicleSimulationParameters, HalfLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_HalfLength_MetaData), Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_HalfLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_HalfWidth_MetaData[] = {
		{ "Category", "Dimensions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Distance from vehicle origin to left most point or right most point (whichever is greater). Used for vehicle\n\x09* avoidance collision detection.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSimulationTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance from vehicle origin to left most point or right most point (whichever is greater). Used for vehicle\navoidance collision detection." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_HalfWidth = { "HalfWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficVehicleSimulationParameters, HalfWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_HalfWidth_MetaData), Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_HalfWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_FrontAxleX_MetaData[] = {
		{ "Category", "Dimensions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Distance along X from vehicle origin to front axel (i.e front half of wheelbase) */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSimulationTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance along X from vehicle origin to front axel (i.e front half of wheelbase)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_FrontAxleX = { "FrontAxleX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficVehicleSimulationParameters, FrontAxleX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_FrontAxleX_MetaData), Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_FrontAxleX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_RearAxleX_MetaData[] = {
		{ "Category", "Dimensions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Negative distance along X from vehicle origin to rear axel (i.e back half of wheelbase) */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSimulationTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Negative distance along X from vehicle origin to rear axel (i.e back half of wheelbase)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_RearAxleX = { "RearAxleX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficVehicleSimulationParameters, RearAxleX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_RearAxleX_MetaData), Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_RearAxleX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_bRestrictedToTrunkLanesOnly_MetaData[] = {
		{ "Category", "Restrictions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If true, this vehicle will only be allowed to drive on lanes matching AMassTrafficCoordinator::TrunkLaneFilter\n\x09 * e.g: to restrict large vehicles to freeways\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSimulationTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, this vehicle will only be allowed to drive on lanes matching AMassTrafficCoordinator::TrunkLaneFilter\ne.g: to restrict large vehicles to freeways" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_bRestrictedToTrunkLanesOnly_SetBit(void* Obj)
	{
		((FMassTrafficVehicleSimulationParameters*)Obj)->bRestrictedToTrunkLanesOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_bRestrictedToTrunkLanesOnly = { "bRestrictedToTrunkLanesOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficVehicleSimulationParameters), &Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_bRestrictedToTrunkLanesOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_bRestrictedToTrunkLanesOnly_MetaData), Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_bRestrictedToTrunkLanesOnly_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_PhysicsVehicleTemplateActor_MetaData[] = {
		{ "Category", "Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Actor class of this agent when spawned in high resolution */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSimulationTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor class of this agent when spawned in high resolution" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_PhysicsVehicleTemplateActor = { "PhysicsVehicleTemplateActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficVehicleSimulationParameters, PhysicsVehicleTemplateActor), Z_Construct_UClass_UClass, Z_Construct_UClass_AWheeledVehiclePawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_PhysicsVehicleTemplateActor_MetaData), Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_PhysicsVehicleTemplateActor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_HalfLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_HalfWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_FrontAxleX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_RearAxleX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_bRestrictedToTrunkLanesOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_PhysicsVehicleTemplateActor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
		Z_Construct_UScriptStruct_FMassSharedFragment,
		&NewStructOps,
		"MassTrafficVehicleSimulationParameters",
		Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::PropPointers),
		sizeof(FMassTrafficVehicleSimulationParameters),
		alignof(FMassTrafficVehicleSimulationParameters),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_MassTrafficVehicleSimulationParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficVehicleSimulationParameters.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassTrafficVehicleSimulationParameters.InnerSingleton;
	}
	void UMassTrafficVehicleSimulationTrait::StaticRegisterNativesUMassTrafficVehicleSimulationTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficVehicleSimulationTrait);
	UClass* Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_NoRegister()
	{
		return UMassTrafficVehicleSimulationTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableTickParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTickParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Traffic Vehicle Simulation" },
		{ "IncludePath", "MassTrafficVehicleSimulationTrait.h" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSimulationTrait.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::NewProp_Params_MetaData[] = {
		{ "Category", "Mass Traffic" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSimulationTrait.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficVehicleSimulationTrait, Params), Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::NewProp_Params_MetaData), Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::NewProp_Params_MetaData) }; // 2066002732
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::NewProp_VariableTickParams_MetaData[] = {
		{ "Category", "Variable Tick" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSimulationTrait.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::NewProp_VariableTickParams = { "VariableTickParams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficVehicleSimulationTrait, VariableTickParams), Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::NewProp_VariableTickParams_MetaData), Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::NewProp_VariableTickParams_MetaData) }; // 4069123418
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::NewProp_VariableTickParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficVehicleSimulationTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::ClassParams = {
		&UMassTrafficVehicleSimulationTrait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMassTrafficVehicleSimulationTrait()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficVehicleSimulationTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVehicleSimulationTrait.OuterSingleton, Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficVehicleSimulationTrait.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficVehicleSimulationTrait>()
	{
		return UMassTrafficVehicleSimulationTrait::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficVehicleSimulationTrait);
	UMassTrafficVehicleSimulationTrait::~UMassTrafficVehicleSimulationTrait() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSimulationTrait_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSimulationTrait_h_Statics::ScriptStructInfo[] = {
		{ FMassTrafficVehicleSimulationParameters::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewStructOps, TEXT("MassTrafficVehicleSimulationParameters"), &Z_Registration_Info_UScriptStruct_MassTrafficVehicleSimulationParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficVehicleSimulationParameters), 2066002732U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSimulationTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficVehicleSimulationTrait, UMassTrafficVehicleSimulationTrait::StaticClass, TEXT("UMassTrafficVehicleSimulationTrait"), &Z_Registration_Info_UClass_UMassTrafficVehicleSimulationTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVehicleSimulationTrait), 3591285239U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSimulationTrait_h_2689496425(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSimulationTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSimulationTrait_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSimulationTrait_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSimulationTrait_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
