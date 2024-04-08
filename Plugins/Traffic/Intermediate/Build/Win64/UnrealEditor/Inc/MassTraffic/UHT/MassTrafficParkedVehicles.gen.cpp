// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficParkedVehicles.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficParkedVehicles() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_NoRegister();
	MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloud_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTrafficTypedParkingSpaces;
class UScriptStruct* FMassTrafficTypedParkingSpaces::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTrafficTypedParkingSpaces.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTrafficTypedParkingSpaces.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficTypedParkingSpaces"));
	}
	return Z_Registration_Info_UScriptStruct_MassTrafficTypedParkingSpaces.OuterSingleton;
}
template<> MASSTRAFFIC_API UScriptStruct* StaticStruct<FMassTrafficTypedParkingSpaces>()
{
	return FMassTrafficTypedParkingSpaces::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParkingSpaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParkingSpaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParkingSpaces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumParkingSpaces_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumParkingSpaces;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicles.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficTypedParkingSpaces>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "MassTrafficTypedParkingSpaces" },
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicles.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficTypedParkingSpaces, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics::NewProp_ParkingSpaces_Inner = { "ParkingSpaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics::NewProp_ParkingSpaces_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicles.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics::NewProp_ParkingSpaces = { "ParkingSpaces", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficTypedParkingSpaces, ParkingSpaces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics::NewProp_ParkingSpaces_MetaData), Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics::NewProp_ParkingSpaces_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics::NewProp_NumParkingSpaces_MetaData[] = {
		{ "Category", "MassTrafficTypedParkingSpaces" },
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicles.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics::NewProp_NumParkingSpaces = { "NumParkingSpaces", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficTypedParkingSpaces, NumParkingSpaces), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics::NewProp_NumParkingSpaces_MetaData), Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics::NewProp_NumParkingSpaces_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics::NewProp_ParkingSpaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics::NewProp_ParkingSpaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics::NewProp_NumParkingSpaces,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
		nullptr,
		&NewStructOps,
		"MassTrafficTypedParkingSpaces",
		Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics::PropPointers),
		sizeof(FMassTrafficTypedParkingSpaces),
		alignof(FMassTrafficTypedParkingSpaces),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces()
	{
		if (!Z_Registration_Info_UScriptStruct_MassTrafficTypedParkingSpaces.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTrafficTypedParkingSpaces.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassTrafficTypedParkingSpaces.InnerSingleton;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UMassTrafficParkingSpacesDataAsset::execClearParkingSpaces)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearParkingSpaces();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMassTrafficParkingSpacesDataAsset::execPopulateParkingSpacesFromPointCloud)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PopulateParkingSpacesFromPointCloud();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UMassTrafficParkingSpacesDataAsset::StaticRegisterNativesUMassTrafficParkingSpacesDataAsset()
	{
#if WITH_EDITOR
		UClass* Class = UMassTrafficParkingSpacesDataAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearParkingSpaces", &UMassTrafficParkingSpacesDataAsset::execClearParkingSpaces },
			{ "PopulateParkingSpacesFromPointCloud", &UMassTrafficParkingSpacesDataAsset::execPopulateParkingSpacesFromPointCloud },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UMassTrafficParkingSpacesDataAsset_ClearParkingSpaces_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassTrafficParkingSpacesDataAsset_ClearParkingSpaces_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Point Cloud" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clear / reset the ParkingSpaceDetails list */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicles.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear / reset the ParkingSpaceDetails list" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficParkingSpacesDataAsset_ClearParkingSpaces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset, nullptr, "ClearParkingSpaces", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficParkingSpacesDataAsset_ClearParkingSpaces_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficParkingSpacesDataAsset_ClearParkingSpaces_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMassTrafficParkingSpacesDataAsset_ClearParkingSpaces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficParkingSpacesDataAsset_ClearParkingSpaces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UMassTrafficParkingSpacesDataAsset_PopulateParkingSpacesFromPointCloud_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassTrafficParkingSpacesDataAsset_PopulateParkingSpacesFromPointCloud_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Point Cloud" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Populate ParkingSpaces with point transforms from ParkingSpacePointCloud where point \"type\" is \"car\" */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicles.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Populate ParkingSpaces with point transforms from ParkingSpacePointCloud where point \"type\" is \"car\"" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficParkingSpacesDataAsset_PopulateParkingSpacesFromPointCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset, nullptr, "PopulateParkingSpacesFromPointCloud", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficParkingSpacesDataAsset_PopulateParkingSpacesFromPointCloud_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficParkingSpacesDataAsset_PopulateParkingSpacesFromPointCloud_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMassTrafficParkingSpacesDataAsset_PopulateParkingSpacesFromPointCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficParkingSpacesDataAsset_PopulateParkingSpacesFromPointCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficParkingSpacesDataAsset);
	UClass* Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_NoRegister()
	{
		return UMassTrafficParkingSpacesDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TypedParkingSpaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypedParkingSpaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TypedParkingSpaces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumParkingSpaces_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumParkingSpaces;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParkingSpacesPointCloud_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ParkingSpacesPointCloud;
		static const UECodeGen_Private::FNamePropertyParams NewProp_UnrealInstanceToParkingSpaceTypeName_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UnrealInstanceToParkingSpaceTypeName_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnrealInstanceToParkingSpaceTypeName_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_UnrealInstanceToParkingSpaceTypeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultParkingSpaceType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultParkingSpaceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShuffleParkingSpaces_MetaData[];
#endif
		static void NewProp_bShuffleParkingSpaces_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShuffleParkingSpaces;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::DependentSingletons) < 16);
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMassTrafficParkingSpacesDataAsset_ClearParkingSpaces, "ClearParkingSpaces" }, // 2406430100
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMassTrafficParkingSpacesDataAsset_PopulateParkingSpacesFromPointCloud, "PopulateParkingSpacesFromPointCloud" }, // 1669606957
#endif //WITH_EDITOR
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::FuncInfo) < 2048);
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MassTrafficParkedVehicles.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicles.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_TypedParkingSpaces_Inner = { "TypedParkingSpaces", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces, METADATA_PARAMS(0, nullptr) }; // 971550673
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_TypedParkingSpaces_MetaData[] = {
		{ "Category", "Parking Spaces" },
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicles.h" },
		{ "TitleProperty", "Name" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_TypedParkingSpaces = { "TypedParkingSpaces", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficParkingSpacesDataAsset, TypedParkingSpaces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_TypedParkingSpaces_MetaData), Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_TypedParkingSpaces_MetaData) }; // 971550673
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_NumParkingSpaces_MetaData[] = {
		{ "Category", "Parking Spaces" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Total number of parking spaces across all TypedParkingSpaces types */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicles.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Total number of parking spaces across all TypedParkingSpaces types" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_NumParkingSpaces = { "NumParkingSpaces", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficParkingSpacesDataAsset, NumParkingSpaces), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_NumParkingSpaces_MetaData), Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_NumParkingSpaces_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_ParkingSpacesPointCloud_MetaData[] = {
		{ "Category", "Point Cloud" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * RuleProcessor point cloud that contains traffic lights.\n\x09 * IMPORTANT - This should be the same point cloud that is used to generate the city lanes, and has a particular format!\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicles.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RuleProcessor point cloud that contains traffic lights.\nIMPORTANT - This should be the same point cloud that is used to generate the city lanes, and has a particular format!" },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_ParkingSpacesPointCloud = { "ParkingSpacesPointCloud", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficParkingSpacesDataAsset, ParkingSpacesPointCloud), Z_Construct_UClass_UPointCloud_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_ParkingSpacesPointCloud_MetaData), Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_ParkingSpacesPointCloud_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_UnrealInstanceToParkingSpaceTypeName_ValueProp = { "UnrealInstanceToParkingSpaceTypeName", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_UnrealInstanceToParkingSpaceTypeName_Key_KeyProp = { "UnrealInstanceToParkingSpaceTypeName_Key", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_UnrealInstanceToParkingSpaceTypeName_MetaData[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicles.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_UnrealInstanceToParkingSpaceTypeName = { "UnrealInstanceToParkingSpaceTypeName", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficParkingSpacesDataAsset, UnrealInstanceToParkingSpaceTypeName), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_UnrealInstanceToParkingSpaceTypeName_MetaData), Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_UnrealInstanceToParkingSpaceTypeName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_DefaultParkingSpaceType_MetaData[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicles.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_DefaultParkingSpaceType = { "DefaultParkingSpaceType", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficParkingSpacesDataAsset, DefaultParkingSpaceType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_DefaultParkingSpaceType_MetaData), Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_DefaultParkingSpaceType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_bShuffleParkingSpaces_MetaData[] = {
		{ "Category", "Point Cloud" },
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicles.h" },
	};
#endif
	void Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_bShuffleParkingSpaces_SetBit(void* Obj)
	{
		((UMassTrafficParkingSpacesDataAsset*)Obj)->bShuffleParkingSpaces = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_bShuffleParkingSpaces = { "bShuffleParkingSpaces", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMassTrafficParkingSpacesDataAsset), &Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_bShuffleParkingSpaces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_bShuffleParkingSpaces_MetaData), Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_bShuffleParkingSpaces_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_TypedParkingSpaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_TypedParkingSpaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_NumParkingSpaces,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_ParkingSpacesPointCloud,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_UnrealInstanceToParkingSpaceTypeName_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_UnrealInstanceToParkingSpaceTypeName_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_UnrealInstanceToParkingSpaceTypeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_DefaultParkingSpaceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::NewProp_bShuffleParkingSpaces,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficParkingSpacesDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::ClassParams = {
		&UMassTrafficParkingSpacesDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficParkingSpacesDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficParkingSpacesDataAsset.OuterSingleton, Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficParkingSpacesDataAsset.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficParkingSpacesDataAsset>()
	{
		return UMassTrafficParkingSpacesDataAsset::StaticClass();
	}
	UMassTrafficParkingSpacesDataAsset::UMassTrafficParkingSpacesDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficParkingSpacesDataAsset);
	UMassTrafficParkingSpacesDataAsset::~UMassTrafficParkingSpacesDataAsset() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicles_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicles_h_Statics::ScriptStructInfo[] = {
		{ FMassTrafficTypedParkingSpaces::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficTypedParkingSpaces_Statics::NewStructOps, TEXT("MassTrafficTypedParkingSpaces"), &Z_Registration_Info_UScriptStruct_MassTrafficTypedParkingSpaces, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficTypedParkingSpaces), 971550673U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicles_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficParkingSpacesDataAsset, UMassTrafficParkingSpacesDataAsset::StaticClass, TEXT("UMassTrafficParkingSpacesDataAsset"), &Z_Registration_Info_UClass_UMassTrafficParkingSpacesDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficParkingSpacesDataAsset), 2970492345U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicles_h_1686783126(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicles_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicles_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicles_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicles_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
