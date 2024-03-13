// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaReabastecimientoBalas.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaReabastecimientoBalas : public ANaveEnemigaReabastecimiento
{
	GENERATED_BODY()
	
protected:
	int capacidadMunicion;

public:
	ANaveEnemigaReabastecimientoBalas();
	void reabastecerMuniciones();
	void distribuirMuniciones();


	FORCEINLINE int GetCapacidadMunicion() const { return capacidadMunicion; }
	FORCEINLINE void SetCapacidadMunicion(int _capacidadMunicion) { capacidadMunicion = _capacidadMunicion; }

protected:
	virtual void Mover();
	virtual void Destruirse();
	virtual void Escapar();

};
