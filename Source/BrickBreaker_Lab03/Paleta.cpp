// Fill out your copyright notice in the Description page of Project Settings.


#include "Paleta.h"

// Sets default values
APaleta::APaleta()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APaleta::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APaleta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APaleta::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

