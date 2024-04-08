// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficTrailerSimulationTrait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficTrailerSimulationTrait() {}
// Cross Module References
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassSharedFragment();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficTrailerSimulationTrait();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficTrailerSimulationTrait_NoRegister();
	MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings();
	MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficTrailerConstraintSettings;
class UScriptStruct* FMassTrafficTrailerConstraintSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficTrailerConstraintSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficTrailerConstraintSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficTrailerConstraintSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficTrailerConstraintSettings.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficTrailerConstraintSettings>()
{
	return FMassTrafficTrailerConstraintSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MountPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableCollision_MetaData[];
#endif
		static void NewProp_bDisableCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularSwing1Limit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularSwing1Limit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularSwing2Limit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularSwing2Limit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficTrailerSimulationTrait.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficTrailerConstraintSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::NewProp_MountPoint_MetaData[] = {
		{ "Category", "MassTrafficTrailerConstraintSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The relative location to constrain the trailer & vehicle to. Effectively the trailers pivot point.\n\x09 *\n\x09 * Note: To simplify calculations, we require the trailer and vehicle to be set up in the same shared space so this\n\x09 * location can be common to both.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficTrailerSimulationTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The relative location to constrain the trailer & vehicle to. Effectively the trailers pivot point.\n\nNote: To simplify calculations, we require the trailer and vehicle to be set up in the same shared space so this\nlocation can be common to both." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::NewProp_MountPoint = { "MountPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficTrailerConstraintSettings, MountPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::NewProp_MountPoint_MetaData), Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::NewProp_MountPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::NewProp_bDisableCollision_MetaData[] = {
		{ "Category", "MassTrafficTrailerConstraintSettings" },
		{ "ModuleRelativePath", "Public/MassTrafficTrailerSimulationTrait.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::NewProp_bDisableCollision_SetBit(void* Obj)
	{
		((FMassTrafficTrailerConstraintSettings*)Obj)->bDisableCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::NewProp_bDisableCollision = { "bDisableCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficTrailerConstraintSettings), &Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::NewProp_bDisableCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::NewProp_bDisableCollision_MetaData), Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::NewProp_bDisableCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::NewProp_AngularSwing1Limit_MetaData[] = {
		{ "Category", "MassTrafficTrailerConstraintSettings" },
		{ "ModuleRelativePath", "Public/MassTrafficTrailerSimulationTrait.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::NewProp_AngularSwing1Limit = { "AngularSwing1Limit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficTrailerConstraintSettings, AngularSwing1Limit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::NewProp_AngularSwing1Limit_MetaData), Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::NewProp_AngularSwing1Limit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::NewProp_AngularSwing2Limit_MetaData[] = {
		{ "Category", "MassTrafficTrailerConstraintSettings" },
		{ "ModuleRelativePath", "Public/MassTrafficTrailerSimulationTrait.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::NewProp_AngularSwing2Limit = { "AngularSwing2Limit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficTrailerConstraintSettings, AngularSwing2Limit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::NewProp_AngularSwing2Limit_MetaData), Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::NewProp_AngularSwing2Limit_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::NewProp_MountPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::NewProp_bDisableCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::NewProp_AngularSwing1Limit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::NewProp_AngularSwing2Limit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
		nullptr,
		&NewStructOps,
		"MassTrafficTrailerConstraintSettings",
		Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::PropPointers),
		sizeof(FMassTrafficTrailerConstraintSettings),
		alignof(FMassTrafficTrailerConstraintSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MassTrafficTrailerConstraintSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficTrailerConstraintSettings.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassTrafficTrailerConstraintSettings.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassTrafficTrailerSimulationParameters>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FMassTrafficTrailerSimulationParameters cannot be polymorphic unless super FMassSharedFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficTrailerSimulationParameters;
class UScriptStruct* FMassTrafficTrailerSimulationParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficTrailerSimulationParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficTrailerSimulationParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficTrailerSimulationParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficTrailerSimulationParameters.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficTrailerSimulationParameters>()
{
	return FMassTrafficTrailerSimulationParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstraintSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RearAxleX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RearAxleX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsVehicleTemplateActor_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PhysicsVehicleTemplateActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficTrailerSimulationTrait.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficTrailerSimulationParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters_Statics::NewProp_ConstraintSettings_MetaData[] = {
		{ "Category", "Constraint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The constraint settings to use for both MassTraffic simple physics constraints and UPhysicsContraintComponent's\n\x09 * used to constrain High LOD actors\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficTrailerSimulationTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The constraint settings to use for both MassTraffic simple physics constraints and UPhysicsContraintComponent's\nused to constrain High LOD actors" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters_Statics::NewProp_ConstraintSettings = { "ConstraintSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficTrailerSimulationParameters, ConstraintSettings), Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters_Statics::NewProp_ConstraintSettings_MetaData), Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters_Statics::NewProp_ConstraintSettings_MetaData) }; // 3364001348
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters_Statics::NewProp_RearAxleX_MetaData[] = {
		{ "Category", "Dimensions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Negative distance along X from vehicle origin to rear axel (i.e back half of wheelbase) */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficTrailerSimulationTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Negative distance along X from vehicle origin to rear axel (i.e back half of wheelbase)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters_Statics::NewProp_RearAxleX = { "RearAxleX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficTrailerSimulationParameters, RearAxleX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters_Statics::NewProp_RearAxleX_MetaData), Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters_Statics::NewProp_RearAxleX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters_Statics::NewProp_PhysicsVehicleTemplateActor_MetaData[] = {
		{ "Category", "Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Actor class of this agent when spawned in high resolution */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficTrailerSimulationTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor class of this agent when spawned in high resolution" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters_Statics::NewProp_PhysicsVehicleTemplateActor = { "PhysicsVehicleTemplateActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficTrailerSimulationParameters, PhysicsVehicleTemplateActor), Z_Construct_UClass_UClass, Z_Construct_UClass_AWheeledVehiclePawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters_Statics::NewProp_PhysicsVehicleTemplateActor_MetaData), Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters_Statics::NewProp_PhysicsVehicleTemplateActor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters_Statics::NewProp_ConstraintSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters_Statics::NewProp_RearAxleX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters_Statics::NewProp_PhysicsVehicleTemplateActor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
		Z_Construct_UScriptStruct_FMassSharedFragment,
		&NewStructOps,
		"MassTrafficTrailerSimulationParameters",
		Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters_Statics::PropPointers),
		sizeof(FMassTrafficTrailerSimulationParameters),
		alignof(FMassTrafficTrailerSimulationParameters),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_MassTrafficTrailerSimulationParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficTrailerSimulationParameters.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassTrafficTrailerSimulationParameters.InnerSingleton;
	}
	void UMassTrafficTrailerSimulationTrait::StaticRegisterNativesUMassTrafficTrailerSimulationTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficTrailerSimulationTrait);
	UClass* Z_Construct_UClass_UMassTrafficTrailerSimulationTrait_NoRegister()
	{
		return UMassTrafficTrailerSimulationTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficTrailerSimulationTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficTrailerSimulationTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerSimulationTrait_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficTrailerSimulationTrait_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Trailer Simulation" },
		{ "IncludePath", "MassTrafficTrailerSimulationTrait.h" },
		{ "ModuleRelativePath", "Public/MassTrafficTrailerSimulationTrait.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficTrailerSimulationTrait_Statics::NewProp_Params_MetaData[] = {
		{ "Category", "Mass Traffic" },
		{ "ModuleRelativePath", "Public/MassTrafficTrailerSimulationTrait.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficTrailerSimulationTrait_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficTrailerSimulationTrait, Params), Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerSimulationTrait_Statics::NewProp_Params_MetaData), Z_Construct_UClass_UMassTrafficTrailerSimulationTrait_Statics::NewProp_Params_MetaData) }; // 1374793467
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficTrailerSimulationTrait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficTrailerSimulationTrait_Statics::NewProp_Params,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficTrailerSimulationTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficTrailerSimulationTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficTrailerSimulationTrait_Statics::ClassParams = {
		&UMassTrafficTrailerSimulationTrait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassTrafficTrailerSimulationTrait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerSimulationTrait_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerSimulationTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficTrailerSimulationTrait_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerSimulationTrait_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMassTrafficTrailerSimulationTrait()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficTrailerSimulationTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficTrailerSimulationTrait.OuterSingleton, Z_Construct_UClass_UMassTrafficTrailerSimulationTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficTrailerSimulationTrait.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficTrailerSimulationTrait>()
	{
		return UMassTrafficTrailerSimulationTrait::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficTrailerSimulationTrait);
	UMassTrafficTrailerSimulationTrait::~UMassTrafficTrailerSimulationTrait() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerSimulationTrait_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerSimulationTrait_h_Statics::ScriptStructInfo[] = {
		{ FMassTrafficTrailerConstraintSettings::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficTrailerConstraintSettings_Statics::NewStructOps, TEXT("MassTrafficTrailerConstraintSettings"), &Z_Registration_Info_UScriptStruct_MassTrafficTrailerConstraintSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficTrailerConstraintSettings), 3364001348U) },
		{ FMassTrafficTrailerSimulationParameters::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficTrailerSimulationParameters_Statics::NewStructOps, TEXT("MassTrafficTrailerSimulationParameters"), &Z_Registration_Info_UScriptStruct_MassTrafficTrailerSimulationParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficTrailerSimulationParameters), 1374793467U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerSimulationTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficTrailerSimulationTrait, UMassTrafficTrailerSimulationTrait::StaticClass, TEXT("UMassTrafficTrailerSimulationTrait"), &Z_Registration_Info_UClass_UMassTrafficTrailerSimulationTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficTrailerSimulationTrait), 2390789359U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerSimulationTrait_h_252232369(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerSimulationTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerSimulationTrait_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerSimulationTrait_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerSimulationTrait_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
