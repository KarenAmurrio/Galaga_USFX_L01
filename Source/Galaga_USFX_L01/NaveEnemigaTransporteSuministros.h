// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaTransporteSuministros.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaTransporteSuministros : public ANaveEnemigaTransporte
{
	GENERATED_BODY()
	
protected:
	int capacidadSuministros;

public:
	ANaveEnemigaTransporteSuministros();
	void cargarSuministros();
	void descargarSuministros();

	FORCEINLINE int GetCapacidadSuministros() const { return capacidadSuministros; }
	FORCEINLINE void SetCapacidadSuministros(int _capacidadSuministros) { capacidadSuministros = _capacidadSuministros; }

protected:
	virtual void Mover();
	virtual void Destruirse();
	virtual void Escapar();

};
