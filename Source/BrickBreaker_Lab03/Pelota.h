// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pelota.generated.h"

UCLASS()
class BRICKBREAKER_LAB03_API APelota : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APelota();
	//Componente Root
	UPROPERTY(EditAnywhere)
		USceneComponent* DefaulSceneComponent;

	//Malla de Pelota
	UPROPERTY(EditAnywhere, Category = "Componente Pelota")
		class UStaticMeshComponent* PelotaMesh;

	float Peso;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
