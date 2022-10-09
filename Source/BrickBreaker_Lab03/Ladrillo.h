// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ladrillo.generated.h"

UCLASS()
class BRICKBREAKER_LAB03_API ALadrillo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALadrillo();

	//Componente Root
	UPROPERTY(EditAnywhere)
		USceneComponent* DefaulSceneRoot;
	//Malla para el Ladrillo
	UPROPERTY(EditAnywhere, Category = "Componente Ladrillo")
		class UStaticMeshComponent* LadrilloMesh;

	//Nombre del Ladrillo
	FString NombreLadrillo;
private:
	FString color;
	float tamano;
	float forma;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FString getColor() { return color; }


};
