// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaEspiaSabotaje.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaEspiaSabotaje : public ANaveEnemigaEspia
{
	GENERATED_BODY()
	
protected:
	int capacidadSabotaje;

public:
	ANaveEnemigaEspiaSabotaje();
	void sabotearSistemasEnemigos();
	void generarDesinformacion();

	FORCEINLINE int GetCapacidadSabotaje() const { return capacidadSabotaje; }
	FORCEINLINE void SetCapacidadSabotaje(int _capacidadSabotaje) { capacidadSabotaje = _capacidadSabotaje; }

protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
};
