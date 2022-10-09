// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsula.h"
#include "Ladrilo_Bionico.generated.h"

/**
 * 
 */
UCLASS()
class BRICKBREAKER_LAB03_API ALadrilo_Bionico : public ACapsula
{
	GENERATED_BODY()
	
public:
	FString NumeroDeArticulaciones;
	bool TipoMovimiento = false;
	ALadrilo_Bionico();
};
