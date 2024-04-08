// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTraffic/Public/MassTrafficIntersectionSpawnDataGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTrafficIntersectionSpawnDataGenerator() {}
// Cross Module References
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_NoRegister();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_NoRegister();
	MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLightTypesDataAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassTraffic();
// End Cross Module References
	void UMassTrafficIntersectionSpawnDataGenerator::StaticRegisterNativesUMassTrafficIntersectionSpawnDataGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassTrafficIntersectionSpawnDataGenerator);
	UClass* Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_NoRegister()
	{
		return UMassTrafficIntersectionSpawnDataGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionEntityConfigIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntersectionEntityConfigIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightTypesData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TrafficLightTypesData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightInstanceData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TrafficLightInstanceData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightSearchDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TrafficLightSearchDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionSideToCrosswalkSearchDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IntersectionSideToCrosswalkSearchDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandardTrafficGoSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StandardTrafficGoSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandardMinimumTrafficGoSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StandardMinimumTrafficGoSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandardCrosswalkGoSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StandardCrosswalkGoSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnidirectionalTrafficStraightRightLeftGoSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnidirectionalTrafficStraightRightLeftGoSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnidirectionalTrafficStraightRightGoSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnidirectionalTrafficStraightRightGoSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BidirectionalTrafficStraightRightGoSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BidirectionalTrafficStraightRightGoSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FreewayIncomingTrafficGoDurationScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FreewayIncomingTrafficGoDurationScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficIntersectionSpawnDataGenerator.h" },
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSpawnDataGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_IntersectionEntityConfigIndex_MetaData[] = {
		{ "Category", "MassTrafficIntersectionSpawnDataGenerator" },
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSpawnDataGenerator.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_IntersectionEntityConfigIndex = { "IntersectionEntityConfigIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficIntersectionSpawnDataGenerator, IntersectionEntityConfigIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_IntersectionEntityConfigIndex_MetaData), Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_IntersectionEntityConfigIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_TrafficLightTypesData_MetaData[] = {
		{ "Category", "Traffic Lights" },
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSpawnDataGenerator.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_TrafficLightTypesData = { "TrafficLightTypesData", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficIntersectionSpawnDataGenerator, TrafficLightTypesData), Z_Construct_UClass_UMassTrafficLightTypesDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_TrafficLightTypesData_MetaData), Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_TrafficLightTypesData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_TrafficLightInstanceData_MetaData[] = {
		{ "Category", "Traffic Lights" },
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSpawnDataGenerator.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_TrafficLightInstanceData = { "TrafficLightInstanceData", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficIntersectionSpawnDataGenerator, TrafficLightInstanceData), Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_TrafficLightInstanceData_MetaData), Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_TrafficLightInstanceData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_TrafficLightSearchDistance_MetaData[] = {
		{ "Category", "Traffic Lights" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * How far away from the start of the left most intersection lane of an intersection side, to look for the traffic light it controls.\n\x09 * Making this too large can end up finding traffic lights in other intersections, when none should be found.\n\x09 * Making this too small can end up not finding any traffic lights.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far away from the start of the left most intersection lane of an intersection side, to look for the traffic light it controls.\nMaking this too large can end up finding traffic lights in other intersections, when none should be found.\nMaking this too small can end up not finding any traffic lights." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_TrafficLightSearchDistance = { "TrafficLightSearchDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficIntersectionSpawnDataGenerator, TrafficLightSearchDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_TrafficLightSearchDistance_MetaData), Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_TrafficLightSearchDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_IntersectionSideToCrosswalkSearchDistance_MetaData[] = {
		{ "Category", "Pedestrians" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Max distance (cm) a crosswalk lane can be from an intersection side point, to be controlled by that intersection side.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max distance (cm) a crosswalk lane can be from an intersection side point, to be controlled by that intersection side." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_IntersectionSideToCrosswalkSearchDistance = { "IntersectionSideToCrosswalkSearchDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficIntersectionSpawnDataGenerator, IntersectionSideToCrosswalkSearchDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_IntersectionSideToCrosswalkSearchDistance_MetaData), Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_IntersectionSideToCrosswalkSearchDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_StandardTrafficGoSeconds_MetaData[] = {
		{ "Category", "Durations|Standard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How many seconds vehicles go (how long a green light lasts) - in most cases. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many seconds vehicles go (how long a green light lasts) - in most cases." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_StandardTrafficGoSeconds = { "StandardTrafficGoSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficIntersectionSpawnDataGenerator, StandardTrafficGoSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_StandardTrafficGoSeconds_MetaData), Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_StandardTrafficGoSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_StandardMinimumTrafficGoSeconds_MetaData[] = {
		{ "Category", "Durations|Standard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How many seconds we should wait for vehicles, to assume a vehicle has entered an intersection. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many seconds we should wait for vehicles, to assume a vehicle has entered an intersection." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_StandardMinimumTrafficGoSeconds = { "StandardMinimumTrafficGoSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficIntersectionSpawnDataGenerator, StandardMinimumTrafficGoSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_StandardMinimumTrafficGoSeconds_MetaData), Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_StandardMinimumTrafficGoSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_StandardCrosswalkGoSeconds_MetaData[] = {
		{ "Category", "Durations|Standard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How many seconds pedestrians go (how long crosswalks are open for arriving pedestrians)- in most cases. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many seconds pedestrians go (how long crosswalks are open for arriving pedestrians)- in most cases." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_StandardCrosswalkGoSeconds = { "StandardCrosswalkGoSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficIntersectionSpawnDataGenerator, StandardCrosswalkGoSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_StandardCrosswalkGoSeconds_MetaData), Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_StandardCrosswalkGoSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_UnidirectionalTrafficStraightRightLeftGoSeconds_MetaData[] = {
		{ "Category", "Durations|FourWay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** In cross-traffic intersections only - how many seconds for vehicles to go (how long a green light lasts) - when coming from one side, and can go straight, right or left. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In cross-traffic intersections only - how many seconds for vehicles to go (how long a green light lasts) - when coming from one side, and can go straight, right or left." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_UnidirectionalTrafficStraightRightLeftGoSeconds = { "UnidirectionalTrafficStraightRightLeftGoSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficIntersectionSpawnDataGenerator, UnidirectionalTrafficStraightRightLeftGoSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_UnidirectionalTrafficStraightRightLeftGoSeconds_MetaData), Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_UnidirectionalTrafficStraightRightLeftGoSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_UnidirectionalTrafficStraightRightGoSeconds_MetaData[] = {
		{ "Category", "Durations|FourWay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** In cross-traffic intersections only - how many seconds for vehicles to go (how long a green light lasts) - when coming from one side, and can go straight or right. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In cross-traffic intersections only - how many seconds for vehicles to go (how long a green light lasts) - when coming from one side, and can go straight or right." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_UnidirectionalTrafficStraightRightGoSeconds = { "UnidirectionalTrafficStraightRightGoSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficIntersectionSpawnDataGenerator, UnidirectionalTrafficStraightRightGoSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_UnidirectionalTrafficStraightRightGoSeconds_MetaData), Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_UnidirectionalTrafficStraightRightGoSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_BidirectionalTrafficStraightRightGoSeconds_MetaData[] = {
		{ "Category", "Durations|FourWay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** In cross-traffic intersections only - how many seconds for vehicles to go (how long a green light lasts) - when coming from two sides at once, and can go straight or right. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In cross-traffic intersections only - how many seconds for vehicles to go (how long a green light lasts) - when coming from two sides at once, and can go straight or right." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_BidirectionalTrafficStraightRightGoSeconds = { "BidirectionalTrafficStraightRightGoSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficIntersectionSpawnDataGenerator, BidirectionalTrafficStraightRightGoSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_BidirectionalTrafficStraightRightGoSeconds_MetaData), Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_BidirectionalTrafficStraightRightGoSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_FreewayIncomingTrafficGoDurationScale_MetaData[] = {
		{ "Category", "Durations|Freeway" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Time scale for how much longer a side of an intersection should stay open if it has inbound lanes from a freeway.\n\x09 * May help drain the freeway, but may also cause more congestion in the city.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time scale for how much longer a side of an intersection should stay open if it has inbound lanes from a freeway.\nMay help drain the freeway, but may also cause more congestion in the city." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_FreewayIncomingTrafficGoDurationScale = { "FreewayIncomingTrafficGoDurationScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficIntersectionSpawnDataGenerator, FreewayIncomingTrafficGoDurationScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_FreewayIncomingTrafficGoDurationScale_MetaData), Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_FreewayIncomingTrafficGoDurationScale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_IntersectionEntityConfigIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_TrafficLightTypesData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_TrafficLightInstanceData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_TrafficLightSearchDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_IntersectionSideToCrosswalkSearchDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_StandardTrafficGoSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_StandardMinimumTrafficGoSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_StandardCrosswalkGoSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_UnidirectionalTrafficStraightRightLeftGoSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_UnidirectionalTrafficStraightRightGoSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_BidirectionalTrafficStraightRightGoSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::NewProp_FreewayIncomingTrafficGoDurationScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficIntersectionSpawnDataGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::ClassParams = {
		&UMassTrafficIntersectionSpawnDataGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator()
	{
		if (!Z_Registration_Info_UClass_UMassTrafficIntersectionSpawnDataGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficIntersectionSpawnDataGenerator.OuterSingleton, Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassTrafficIntersectionSpawnDataGenerator.OuterSingleton;
	}
	template<> MASSTRAFFIC_API UClass* StaticClass<UMassTrafficIntersectionSpawnDataGenerator>()
	{
		return UMassTrafficIntersectionSpawnDataGenerator::StaticClass();
	}
	UMassTrafficIntersectionSpawnDataGenerator::UMassTrafficIntersectionSpawnDataGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassTrafficIntersectionSpawnDataGenerator);
	UMassTrafficIntersectionSpawnDataGenerator::~UMassTrafficIntersectionSpawnDataGenerator() {}
	struct Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionSpawnDataGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionSpawnDataGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficIntersectionSpawnDataGenerator, UMassTrafficIntersectionSpawnDataGenerator::StaticClass, TEXT("UMassTrafficIntersectionSpawnDataGenerator"), &Z_Registration_Info_UClass_UMassTrafficIntersectionSpawnDataGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficIntersectionSpawnDataGenerator), 1935913392U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionSpawnDataGenerator_h_1611732697(TEXT("/Script/MassTraffic"),
		Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionSpawnDataGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_lyracity_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionSpawnDataGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
