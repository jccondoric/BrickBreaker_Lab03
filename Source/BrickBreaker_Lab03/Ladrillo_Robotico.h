// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ladrillo.h"
#include "Ladrillo_Robotico.generated.h"

/**
 * 
 */
UCLASS()
class BRICKBREAKER_LAB03_API ALadrillo_Robotico : public ALadrillo
{
	GENERATED_BODY()

public:
	ALadrillo_Robotico();
	
	float sensores;
	bool efectos;
};
