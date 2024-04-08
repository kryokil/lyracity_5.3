// Copyright Epic Games, Inc. All Rights Reserved.


#include "WorldAudioDataClusterActor.h"
#include "SoundscapeSubsystem.h"
#include "SoundscapeSettings.h"
#include "WorldAudioDataSubsystem.h"
#include "WorldAudioDataSystem.h"
#include "WorldAudioDataSettings.h"
#include "DrawDebugHelpers.h"


void UWorldAudioReverbDataCollection::AddReverbDataPoint(const FVector DataLocation, const float DataValue)
{
	const uint32 LocationHash = Generate2DLocationHash(DataLocation);

	if(FWorldAudioReverbData* ReverbData = DataCollection.Find(LocationHash))
	{
		UpdateCellData(ReverbData, DataValue);
	}
	else
	{
		FWorldAudioReverbData NewData;

		UpdateCellData(&NewData, DataValue);

		DataCollection.Add(LocationHash, NewData);
	}
}

uint8 UWorldAudioReverbDataCollection::EvaluateDataAtLocation(const FVector Location)
{
	const uint32 LocationHash = Generate2DLocationHash(Location);

	if (const FWorldAudioReverbData* ReverbData = DataCollection.Find(LocationHash))
	{
		return ReverbData->DataCellAverage;
	}

	return 0;
}

uint8 UWorldAudioReverbDataCollection::EvaluateDataAtLocation(const FVector Location, uint8& OutWeighting)
{
	const uint32 LocationHash = Generate2DLocationHash(Location);

//	UE_LOG(LogWorldAudioDataSystem, Display, TEXT("HashIndex %d"), LocationHash);

	if (const FWorldAudioReverbData* ReverbData = DataCollection.Find(LocationHash))
	{
		OutWeighting = ReverbData->DataCellWeighting;
		return ReverbData->DataCellAverage;
	}

	OutWeighting = 0.0f;
	return 0.0f;
}

void UWorldAudioReverbDataCollection::ClearDataCollection()
{
	DataCollection.Empty();
}

uint32 UWorldAudioReverbDataCollection::Generate2DLocationHash(const FVector Location)
{
	// Const parameters
	constexpr float MaximumGridWidth = 2000000.0f;
	constexpr float CellSize = 500.0f;

	// Calculated consts
	constexpr float HalfMaxGridWidth = MaximumGridWidth * 0.5;
	constexpr float CellConversionFactor = 1.0f / CellSize;
	constexpr float GridCellWidth = MaximumGridWidth * CellConversionFactor;

	// Hashes
	const uint32 XHash = FMath::FloorToInt(FMath::Clamp((Location.X + HalfMaxGridWidth),0.0f, MaximumGridWidth) * CellConversionFactor);
	const uint32 YHash = FMath::FloorToInt(FMath::Clamp((Location.Y + HalfMaxGridWidth), 0.0f, MaximumGridWidth) * CellConversionFactor) * FMath::FloorToInt(GridCellWidth);

	return XHash + YHash;
}

void UWorldAudioReverbDataCollection::UpdateCellData(FWorldAudioReverbData* DataToUpdate, const float IncomingValue)
{
	if(DataToUpdate)
	{
		const float ReverbScalar = 15.0f;

		// const float CurrentAverage = DataToUpdate->DataCellAverage;
		// DataToUpdate->DataCellAverage = ((CurrentAverage * DataToUpdate->DataCellWeighting) + (IncomingValue * ReverbScalar)) / (DataToUpdate->DataCellWeighting + 1.0f);
		// DataToUpdate->DataCellWeighting++;
		const float CurrentAverage = DataToUpdate->DataCellAverage;
		DataToUpdate->DataCellAverage = FMath::FloorToInt(((CurrentAverage * DataToUpdate->DataCellWeighting) + (FMath::Pow(IncomingValue, 0.25f) * ReverbScalar)) / (DataToUpdate->DataCellWeighting + 1.0f));
		DataToUpdate->DataCellWeighting++;
		// const float CurrentAverage = DataToUpdate->DataCellAverage;
		// DataToUpdate->DataCellAverage = FMath::FloorToInt(FMath::Max((IncomingValue * ReverbScalar), DataToUpdate->DataCellAverage));
		// DataToUpdate->DataCellWeighting++;
	}
}

// Sets default values
AWorldAudioDataClusterActor::AWorldAudioDataClusterActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AWorldAudioDataClusterActor::InitializeActor()
{
	SoundscapeColorPointHashMapCollection = NewObject<USoundscapeColorPointHashMapCollection>(this);
	SoundscapeColorPointHashMapCollection->InitializeCollection();

	ReverbCollection = NewObject<UWorldAudioReverbDataCollection>(this);
}

#if WITH_EDITOR
void AWorldAudioDataClusterActor::GenerateSummary()
{
	// Init Data Summary:
	if (const USoundscapeSettings* ProjectSettings = GetDefault<USoundscapeSettings>())
	{
		// Hash Cell Width for LOD1
		ClusterActorDataSummary.LOD1ColorPointHashWidth = FMath::Max(ProjectSettings->LOD1ColorPointHashWidth, 1.0f);

		// Hash Cell LOD1 Max Distance
		ClusterActorDataSummary.LOD1ColorPointHashDistance = FMath::Max(ProjectSettings->LOD1ColorPointHashDistance, 1.0f);

		// Hash Cell Width for LOD2
		ClusterActorDataSummary.LOD2ColorPointHashWidth = FMath::Max(ProjectSettings->LOD2ColorPointHashWidth, 1.0f);

		// Hash Cell LOD2 Max Distance
		ClusterActorDataSummary.LOD2ColorPointHashDistance = FMath::Max(ProjectSettings->LOD2ColorPointHashDistance, 1.0f);

		// Hash Cell Width for LOD3
		ClusterActorDataSummary.LOD3ColorPointHashWidth = FMath::Max(ProjectSettings->LOD3ColorPointHashWidth, 1.0f);

		// Hash Cell Density
		SoundscapeColorPointHashMapCollection->CalculateTotalColorPointDensity(ClusterActorDataSummary.LOD1DensityTotals, ESoundscapeLOD::LOD1);
		SoundscapeColorPointHashMapCollection->CalculateTotalColorPointDensity(ClusterActorDataSummary.LOD2DensityTotals, ESoundscapeLOD::LOD2);
		SoundscapeColorPointHashMapCollection->CalculateTotalColorPointDensity(ClusterActorDataSummary.LOD3DensityTotals, ESoundscapeLOD::LOD3);

	}
}
#endif

// Called when the game starts or when spawned
void AWorldAudioDataClusterActor::BeginPlay()
{
	Super::BeginPlay();

	if (const UWorld* World = GetWorld())
	{
		if (const UGameInstance* GameInstance = World->GetGameInstance())
		{
			USoundscapeSubsystem* SoundscapeSubsystem = GameInstance->GetSubsystem<USoundscapeSubsystem>();
			UWorldAudioDataSubsystem* WorldAudioDataSubsystem = GameInstance->GetSubsystem<UWorldAudioDataSubsystem>();
			
			if (ensureMsgf(SoundscapeSubsystem, TEXT("WorldAudioDataClusterActor beginning to play before SoundscapeSubsystem Game Instance Subsystem has initialized.")))
			{
				if (SoundscapeColorPointHashMapCollection)
				{
					SoundscapeSubsystem->AddColorPointHashMapCollection(SoundscapeColorPointHashMapCollection);
				}

			}
			else
			{
				bRetryToSendSoundscapeData = true;
			}
			// TODO: Deal with it

			if(ContinuousSoundSystemVectorCollections.IsEmpty() == false)
			{
				if (ensureMsgf(WorldAudioDataSubsystem, TEXT("WorldAudioDataClusterActor beginning to play before WorldAudioDataSubsystem Game Instance Subsystem has initialized.")))
				{
					WorldAudioDataSubsystem->AddContinuousSoundSystemVectorCollection(ContinuousSoundSystemVectorCollections);
					WorldAudioDataSubsystem->AddReverbDataCollection(ReverbCollection);
				}
				else
				{
					bRetryToSendWorldAudioData = true;
				}
			}
		}
	}
}

void AWorldAudioDataClusterActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (const UWorld* World = GetWorld())
	{
		if (const UGameInstance* GameInstance = World->GetGameInstance())
		{
			if (USoundscapeSubsystem* SoundscapeSubsystem = GameInstance->GetSubsystem<USoundscapeSubsystem>())
			{
				if (SoundscapeColorPointHashMapCollection)
				{
					SoundscapeSubsystem->RemoveColorPointHashMapCollection(SoundscapeColorPointHashMapCollection);
				}
			}
		}
	}
}

void AWorldAudioDataClusterActor::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if(bRetryToSendSoundscapeData || bRetryToSendWorldAudioData)
	{
		if (const UWorld* World = GetWorld())
		{
			if (const UGameInstance* GameInstance = World->GetGameInstance())
			{
				if(bRetryToSendSoundscapeData)
				{
					USoundscapeSubsystem* SoundscapeSubsystem = GameInstance->GetSubsystem<USoundscapeSubsystem>();

					if (ensureMsgf(SoundscapeSubsystem, TEXT("WorldAudioDataClusterActor beginning to play before SoundscapeSubsystem Game Instance Subsystem has initialized.")))
					{
						if (SoundscapeColorPointHashMapCollection)
						{
							SoundscapeSubsystem->AddColorPointHashMapCollection(SoundscapeColorPointHashMapCollection);

							bRetryToSendSoundscapeData = false;
						}

					}
					else
					{
						bRetryToSendSoundscapeData = true;
					}

				}
			
				if(bRetryToSendWorldAudioData)
				{
					UWorldAudioDataSubsystem* WorldAudioDataSubsystem = GameInstance->GetSubsystem<UWorldAudioDataSubsystem>();

					if (ContinuousSoundSystemVectorCollections.IsEmpty() == false)
					{
						if (ensureMsgf(WorldAudioDataSubsystem, TEXT("WorldAudioDataClusterActor beginning to play before WorldAudioDataSubsystem Game Instance Subsystem has initialized.")))
						{
							WorldAudioDataSubsystem->AddContinuousSoundSystemVectorCollection(ContinuousSoundSystemVectorCollections);
							WorldAudioDataSubsystem->AddReverbDataCollection(ReverbCollection);

							bRetryToSendWorldAudioData = false;
						}
						else
						{
							bRetryToSendWorldAudioData = true;
						}
					}
				}

			}
		}

	}
	else
	{
		SetActorTickEnabled(false);
	}
}

