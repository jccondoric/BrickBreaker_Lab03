// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ladrillo.h"
#include "LadrilloMetalico.generated.h"

/**
 * 
 */
UCLASS()
class BRICKBREAKER_LAB03_API ALadrilloMetalico : public ALadrillo
{
	GENERATED_BODY()

private:
	FString tipometal;
	float peso;


public:

	FString getTipoMetal() { return tipometal; }
	void setTipoMetal(FString _tipometal) { tipometal = _tipometal; }

	float getPeso() { return peso; }
	void setPeso(float _peso) { peso = _peso; }

	ALadrilloMetalico();
};
