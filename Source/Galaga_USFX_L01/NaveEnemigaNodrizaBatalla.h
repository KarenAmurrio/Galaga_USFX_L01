// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaNodrizaBatalla.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaNodrizaBatalla : public ANaveEnemigaNodriza
{
	GENERATED_BODY()
	
protected:
	int cantidadDrones;

public:
	ANaveEnemigaNodrizaBatalla();
	void desplegarDronesCombate();
	void recuperarDronesDaniados();


	FORCEINLINE int GetCantidadDrones() const { return cantidadDrones; }
	FORCEINLINE void SetCantidadDrones(int _cantidadDrones) { cantidadDrones = _cantidadDrones; }

protected:
	virtual void Mover();
	virtual void Destruirse();
	virtual void Escapar();

};
