// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficVehicleComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficVehicleComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleComponent();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	void UMassTrafficVehicleComponent::StaticRegisterNativesUMassTrafficVehicleComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficVehicleComponent);
	UClass* Z_Construct_UClass_UMassTrafficVehicleComponent_NoRegister()
	{
		return UMassTrafficVehicleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficVehicleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WheelComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WheelComponents;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelAngularVelocities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelAngularVelocities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WheelAngularVelocities;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WheelOffsets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelOffsets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WheelOffsets;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WheelAttachmentRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelAttachmentRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WheelAttachmentRule;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Traffic" },
		{ "IncludePath", "MassTrafficVehicleComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::NewProp_WheelComponents_Inner = { "WheelComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::NewProp_WheelComponents_MetaData[] = {
		{ "Category", "MassTrafficVehicleComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::NewProp_WheelComponents = { "WheelComponents", nullptr, (EPropertyFlags)0x001400800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficVehicleComponent, WheelComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::NewProp_WheelComponents_MetaData), Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::NewProp_WheelComponents_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::NewProp_WheelAngularVelocities_Inner = { "WheelAngularVelocities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::NewProp_WheelAngularVelocities_MetaData[] = {
		{ "Category", "MassTrafficVehicleComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Radians / sec */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radians / sec" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::NewProp_WheelAngularVelocities = { "WheelAngularVelocities", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficVehicleComponent, WheelAngularVelocities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::NewProp_WheelAngularVelocities_MetaData), Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::NewProp_WheelAngularVelocities_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::NewProp_WheelOffsets_Inner = { "WheelOffsets", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::NewProp_WheelOffsets_MetaData[] = {
		{ "Category", "MassTrafficVehicleComponent" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::NewProp_WheelOffsets = { "WheelOffsets", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficVehicleComponent, WheelOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::NewProp_WheelOffsets_MetaData), Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::NewProp_WheelOffsets_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::NewProp_WheelAttachmentRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::NewProp_WheelAttachmentRule_MetaData[] = {
		{ "Category", "MassTrafficVehicleComponent" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::NewProp_WheelAttachmentRule = { "WheelAttachmentRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficVehicleComponent, WheelAttachmentRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::NewProp_WheelAttachmentRule_MetaData), Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::NewProp_WheelAttachmentRule_MetaData) }; // 3672154405
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::NewProp_WheelComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::NewProp_WheelComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::NewProp_WheelAngularVelocities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::NewProp_WheelAngularVelocities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::NewProp_WheelOffsets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::NewProp_WheelOffsets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::NewProp_WheelAttachmentRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::NewProp_WheelAttachmentRule,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficVehicleComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::ClassParams = {
		&UMassTrafficVehicleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMassTrafficVehicleComponent()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficVehicleComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVehicleComponent.OuterSingleton, Z_Construct_UClass_UMassTrafficVehicleComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficVehicleComponent.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficVehicleComponent>()
	{
		return UMassTrafficVehicleComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficVehicleComponent);
	UMassTrafficVehicleComponent::~UMassTrafficVehicleComponent() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficVehicleComponent, UMassTrafficVehicleComponent::StaticClass, TEXT("UMassTrafficVehicleComponent"), &Z_Registration_Info_UClass_UMassTrafficVehicleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVehicleComponent), 3696128096U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleComponent_h_1548826(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
