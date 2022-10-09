// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ladrillo.h"
#include "LadrilloAlienigena.generated.h"

/**
 * 
 */
UCLASS()
class BRICKBREAKER_LAB03_API ALadrilloAlienigena : public ALadrillo
{
	GENERATED_BODY()

private:
	bool tipomovimiento;
	bool invisibilidad;

public:
	bool getTipomovimiento() { return tipomovimiento; }
	void setTipomovimiento(bool _tipomovimiento) { tipomovimiento = _tipomovimiento; }

	bool getInvisibilidad() { return invisibilidad; }
	void setInvisibilidad(bool _invisibilidad) { invisibilidad = _invisibilidad; }

	ALadrilloAlienigena();
};
