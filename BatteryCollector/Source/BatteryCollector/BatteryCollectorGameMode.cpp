// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "BatteryCollectorGameMode.h"
#include "BatteryCollectorCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "SpawnVolume.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/PawnMovementComponent.h"

ABatteryCollectorGameMode::ABatteryCollectorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	PrimaryActorTick.bCanEverTick = true;

	//base deacy rate
	DecayRate = 0.01f;
}

float ABatteryCollectorGameMode::GetPowerToWin() const
{
	return PowerToWin;
}

void ABatteryCollectorGameMode::BeginPlay()
{
	Super::BeginPlay();

	// find all SpawnVolume actors
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASpawnVolume::StaticClass(), FoundActors);

	for (auto Actor : FoundActors)
	{
		// Check if current actor is SpawnVolume and add it to array
		ASpawnVolume* SpawnVolumeActor = Cast<ASpawnVolume>(Actor);
		if (SpawnVolumeActor)
		{
			SpawnVolumeActors.AddUnique(SpawnVolumeActor);
		}
	}

	SetCurrentState(EBAtteryPlayState::EUknown);

	// set the score to beat
	ABatteryCollectorCharacter* MyCharacter = Cast<ABatteryCollectorCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (MyCharacter) 
	{
		PowerToWin = (MyCharacter->GetInitialPower()) * 1.25f;
	}

	// Create widget and add it to the viewport
	if (HUDWidgetClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidgetClass);
		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
		}
	}

}

EBAtteryPlayState ABatteryCollectorGameMode::GetCurrentState() const
{
	return CurrentState;
}

void ABatteryCollectorGameMode::SetCurrentState(EBAtteryPlayState newstate) 
{
	CurrentState = newstate;
	HandleNewState(newstate);
}

void ABatteryCollectorGameMode::HandleNewState(EBAtteryPlayState newstate)
{
	switch (newstate)
	{
	//if game is playing
	case EBAtteryPlayState::EPlaying:
	{
		// spawn volume active
		for (ASpawnVolume* Volume : SpawnVolumeActors)
		{
			Volume->SetSpawningActive(true);
		}
	}
	break;
	//if game is won
	case EBAtteryPlayState::EWon:
	{
		// spawn volume inactive
		for (ASpawnVolume* Volume : SpawnVolumeActors)
		{
			Volume->SetSpawningActive(false);
		}
	}
	break;
	//if game is lost
	case EBAtteryPlayState::EGameOver:
	{
		// spawn volume inactive
		for (ASpawnVolume* Volume : SpawnVolumeActors)
		{
			Volume->SetSpawningActive(false);
		}

		// block player input
		APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
		if (PlayerController)
		{
			PlayerController->SetCinematicMode(true, false, false, true, true);
		}

		// ragdoll the character
		ACharacter* MyCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
		if (MyCharacter)
		{
			MyCharacter->GetMesh()->SetSimulatePhysics(true);
			MyCharacter->GetMovementComponent()->MovementState.bCanJump = false;
		}
	}
	break;
	// for debug
	default:
	break;
	}
}


void ABatteryCollectorGameMode::Tick(float DeltaTime)
{
	// Call parents tick first
	Super::Tick(DeltaTime);

	// Check if character is BatteryCollectorCharacter
	ABatteryCollectorCharacter* MyCharacter = Cast<ABatteryCollectorCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));

	if (MyCharacter && GetCurrentState() == EBAtteryPlayState::EPlaying) 
	{
		// if we have more power tan needed to win
		if (MyCharacter->GetCurrentPower() > PowerToWin)
		{
			SetCurrentState(EBAtteryPlayState::EWon);
		}
		// if our character has power
		else if (MyCharacter->GetCurrentPower() > 0) 
		{
			// This decreases the character power based on initial power times decayrate
			// i.e. decayrate is the percentage of initial power that get decreased
			// each second
			MyCharacter->UpdatePower(-DeltaTime * DecayRate * (MyCharacter->GetInitialPower()));
		}
		else {
			SetCurrentState(EBAtteryPlayState::EGameOver);
		}
	}
}
