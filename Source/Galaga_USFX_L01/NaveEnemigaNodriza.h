// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaNodriza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaNodriza : public ANaveEnemiga
{
	GENERATED_BODY()
	
protected:
	int capacidadNavesPequenas;

	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();

public:
	ANaveEnemigaNodriza();
	void desplegarNaves();
	void recogerNaves();

	FORCEINLINE int GetCapacidadNavesPequenas() const { return capacidadNavesPequenas; }
	FORCEINLINE void SetCapacidadNavesPequenas(int _capacidadNavesPequenas) { capacidadNavesPequenas = _capacidadNavesPequenas; }
};
