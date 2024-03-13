// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaReabastecimientoGas.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaReabastecimientoGas : public ANaveEnemigaReabastecimiento
{
	GENERATED_BODY()
	
protected:
	int capacidadCombustible;

public:
	ANaveEnemigaReabastecimientoGas();
	void reabastecerCombustible();
	void transferirCombustible();


	FORCEINLINE int GetCapacidadCombustible() const { return capacidadCombustible; }
	FORCEINLINE void SetCapacidadCombustible(int _capacidadCombustible) { capacidadCombustible = _capacidadCombustible; }

protected:
	virtual void Mover();
	virtual void Destruirse();
	virtual void Escapar();

};
