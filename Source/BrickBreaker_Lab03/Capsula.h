// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Capsula.generated.h"

UCLASS()
class BRICKBREAKER_LAB03_API ACapsula : public AActor
{
	GENERATED_BODY()
	
public:	
	// Constructor
	ACapsula();
	//Componente Root
	UPROPERTY(EditAnywhere)
		USceneComponent* DefaulSceneRoot;
	//Malla para la Capsula
	UPROPERTY(EditAnywhere, Category = "Componente Capsula")
		class UStaticMeshComponent* CapsulaMesh;
	//Nombre de la Capsula
	FString NombreCapsula;
	//Velocidad de la Capsula
	float VelocidadCapsula;

protected:
	//Se llama cuando se inicia el juego o cuando se genera
	virtual void BeginPlay() override;

public:	
	//Se llama a cada fotograma(frame)
	virtual void Tick(float DeltaTime) override;

};
