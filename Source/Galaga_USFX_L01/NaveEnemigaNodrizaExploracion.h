// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaNodrizaExploracion.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaNodrizaExploracion : public ANaveEnemigaNodriza
{
	GENERATED_BODY()
	
protected:
	int capacidadExploradores;

public:
	ANaveEnemigaNodrizaExploracion();
	void lanzarSondasExploracion();
	void recuperarSondas();


	FORCEINLINE int GetCapacidadExploradores() const { return capacidadExploradores; }
	FORCEINLINE void SetCapacidadExploradores(int _capacidadExploradores) { capacidadExploradores = _capacidadExploradores; }

protected:
	virtual void Mover();
	virtual void Destruirse();
	virtual void Escapar();

};
