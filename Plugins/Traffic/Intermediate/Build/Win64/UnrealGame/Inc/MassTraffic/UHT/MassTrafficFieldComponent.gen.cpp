// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficFieldComponent.h"
#include "ZoneGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficFieldComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFieldComponent();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFieldComponent_NoRegister();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFieldOperationBase_NoRegister();
	MASSTRAFFIC_API UEnum* Z_Construct_UEnum_MassTraffic_EMassTrafficFieldInclusionMode();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagFilter();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassTrafficFieldInclusionMode;
	static UEnum* EMassTrafficFieldInclusionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMassTrafficFieldInclusionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMassTrafficFieldInclusionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassTraffic_EMassTrafficFieldInclusionMode, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("EMassTrafficFieldInclusionMode"));
		}
		return Z_Registration_Info_UEnum_EMassTrafficFieldInclusionMode.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UEnum* StaticEnum<EMassTrafficFieldInclusionMode>()
	{
		return EMassTrafficFieldInclusionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MassTraffic_EMassTrafficFieldInclusionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MassTraffic_EMassTrafficFieldInclusionMode_Statics::Enumerators[] = {
		{ "EMassTrafficFieldInclusionMode::Lanes", (int64)EMassTrafficFieldInclusionMode::Lanes },
		{ "EMassTrafficFieldInclusionMode::VehiclesOnLanes", (int64)EMassTrafficFieldInclusionMode::VehiclesOnLanes },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MassTraffic_EMassTrafficFieldInclusionMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Lanes.Comment", "// The cheapest / simplest inclusion method which includes all vehicles on lanes whose zone is overlapped by the field \n" },
		{ "Lanes.Name", "EMassTrafficFieldInclusionMode::Lanes" },
		{ "Lanes.ToolTip", "The cheapest / simplest inclusion method which includes all vehicles on lanes whose zone is overlapped by the field" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldComponent.h" },
		{ "VehiclesOnLanes.Comment", "// Starts with Lanes inclusion and further pre-filters the vehicles on each lane by testing the transform location\n" },
		{ "VehiclesOnLanes.Name", "EMassTrafficFieldInclusionMode::VehiclesOnLanes" },
		{ "VehiclesOnLanes.ToolTip", "Starts with Lanes inclusion and further pre-filters the vehicles on each lane by testing the transform location" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassTraffic_EMassTrafficFieldInclusionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MassTraffic,
		nullptr,
		"EMassTrafficFieldInclusionMode",
		"EMassTrafficFieldInclusionMode",
		Z_Construct_UEnum_MassTraffic_EMassTrafficFieldInclusionMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_EMassTrafficFieldInclusionMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_EMassTrafficFieldInclusionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassTraffic_EMassTrafficFieldInclusionMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MassTraffic_EMassTrafficFieldInclusionMode()
	{
		if (!Z_Registration_Info_UEnum_EMassTrafficFieldInclusionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassTrafficFieldInclusionMode.InnerSingleton, Z_Construct_UEnum_MassTraffic_EMassTrafficFieldInclusionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMassTrafficFieldInclusionMode.InnerSingleton;
	}
	void UMassTrafficFieldComponent::StaticRegisterNativesUMassTrafficFieldComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficFieldComponent);
	UClass* Z_Construct_UClass_UMassTrafficFieldComponent_NoRegister()
	{
		return UMassTrafficFieldComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficFieldComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InclusionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InclusionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InclusionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaneTagFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaneTagFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operations_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Operations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Operations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficFieldComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficFieldComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object HLOD Lighting VirtualTexture Collision TextureStreaming Mobile Physics Tags AssetUserData Activation Cooking Navigation Input Trigger VirtualTexture" },
		{ "IncludePath", "MassTrafficFieldComponent.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Field" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UMassTrafficFieldComponent*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMassTrafficFieldComponent), &Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_bEnabled_MetaData), Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_bEnabled_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_InclusionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_InclusionMode_MetaData[] = {
		{ "Category", "Field" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_InclusionMode = { "InclusionMode", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficFieldComponent, InclusionMode), Z_Construct_UEnum_MassTraffic_EMassTrafficFieldInclusionMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_InclusionMode_MetaData), Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_InclusionMode_MetaData) }; // 4208733145
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Extent_MetaData[] = {
		{ "Category", "Field" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficFieldComponent, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Extent_MetaData), Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Extent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_LaneTagFilter_MetaData[] = {
		{ "Category", "Field" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_LaneTagFilter = { "LaneTagFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficFieldComponent, LaneTagFilter), Z_Construct_UScriptStruct_FZoneGraphTagFilter, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_LaneTagFilter_MetaData), Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_LaneTagFilter_MetaData) }; // 968421072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Operations_Inner_MetaData[] = {
		{ "BaseStruct", "/Script/MassTraffic.MassTrafficFieldOperationBase" },
		{ "Category", "Field" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Operations_Inner = { "Operations", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMassTrafficFieldOperationBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Operations_Inner_MetaData), Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Operations_Inner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Operations_MetaData[] = {
		{ "BaseStruct", "/Script/MassTraffic.MassTrafficFieldOperationBase" },
		{ "Category", "Field" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Operations = { "Operations", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficFieldComponent, Operations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Operations_MetaData), Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Operations_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficFieldComponent, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Color_MetaData), Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Color_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficFieldComponent, Alpha), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Alpha_MetaData), Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Alpha_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficFieldComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_InclusionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_InclusionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Extent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_LaneTagFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Operations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Operations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficFieldComponent_Statics::NewProp_Alpha,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficFieldComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficFieldComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficFieldComponent_Statics::ClassParams = {
		&UMassTrafficFieldComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassTrafficFieldComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficFieldComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMassTrafficFieldComponent()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficFieldComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficFieldComponent.OuterSingleton, Z_Construct_UClass_UMassTrafficFieldComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficFieldComponent.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficFieldComponent>()
	{
		return UMassTrafficFieldComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficFieldComponent);
	UMassTrafficFieldComponent::~UMassTrafficFieldComponent() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_Statics::EnumInfo[] = {
		{ EMassTrafficFieldInclusionMode_StaticEnum, TEXT("EMassTrafficFieldInclusionMode"), &Z_Registration_Info_UEnum_EMassTrafficFieldInclusionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4208733145U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficFieldComponent, UMassTrafficFieldComponent::StaticClass, TEXT("UMassTrafficFieldComponent"), &Z_Registration_Info_UClass_UMassTrafficFieldComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficFieldComponent), 347054448U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_3962680922(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
