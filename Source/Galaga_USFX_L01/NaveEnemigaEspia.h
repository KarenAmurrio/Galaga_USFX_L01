// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaEspia.generated.h"


UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaEspia : public ANaveEnemiga
{
	GENERATED_BODY()
	
protected:
	int capacidadInvisibilidad;
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();

public:
	ANaveEnemigaEspia();
	void activarCamuflaje();
	void recopilarInformacion();

	FORCEINLINE int GetCapacidadInvisibilidad() const { return capacidadInvisibilidad; }
	FORCEINLINE void SetCapacidadInvisibilidad(int _capacidadInvisibilidad) { capacidadInvisibilidad = _capacidadInvisibilidad; }

};
