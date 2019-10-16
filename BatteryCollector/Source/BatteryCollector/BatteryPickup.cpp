// Fill out your copyright notice in the Description page of Project Settings.


#include "BatteryPickup.h"

// Set default values
ABatteryPickup::ABatteryPickup() 
{
	GetMesh()->SetSimulatePhysics(true);

	//the base power lvl of battery
	BatteryPower = 150.f;
}

void ABatteryPickup::WasCollected_Implementation()
{
	// Call base pickup behavior
	Super::WasCollected_Implementation();

	// Destroy the battery pickup
	Destroy();
}

// Return power lvl of battery
float ABatteryPickup::GetPower()
{
	return this->BatteryPower;
}


