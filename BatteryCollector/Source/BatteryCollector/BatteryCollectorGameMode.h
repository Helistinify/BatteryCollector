// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BatteryCollectorGameMode.generated.h"

// enum to store the game state
UENUM(BlueprintType)
enum class EBAtteryPlayState : uint8 {
	EPlaying,
	EGameOver,
	EWon,
	EUknown
};


UCLASS(minimalapi)
class ABatteryCollectorGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABatteryCollectorGameMode();

	virtual void Tick(float DeltaTime) override;

	// Return the power neeeded to win
	UFUNCTION(BlueprintPure, Category = "Power")
		float GetPowerToWin() const;

	virtual void BeginPlay() override;

	// Getter and setter for CurrentState
	UFUNCTION(BlueprintPure, Category = "Power")
	EBAtteryPlayState GetCurrentState() const;

	UFUNCTION(BlueprintCallable, Category = "Power")
	void SetCurrentState(EBAtteryPlayState newstate);

protected:
	// The rate at which the cahracter loses power
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
		float DecayRate;

	// Power needed to win
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
		float  PowerToWin;

	// The widget class to use for our HUD screen
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "HUD", Meta = (BlueprintProtected = "true"))
	TSubclassOf<class UUserWidget> HUDWidgetClass;

	// instance of the HUD
	UPROPERTY()
	class UUserWidget* CurrentWidget;

private:
	// Keeps track of our current playstate
	EBAtteryPlayState CurrentState;

	TArray<class ASpawnVolume*> SpawnVolumeActors;

	void HandleNewState(EBAtteryPlayState newstate);
};
