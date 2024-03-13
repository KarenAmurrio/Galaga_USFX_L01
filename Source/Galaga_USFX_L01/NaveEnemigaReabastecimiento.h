// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaReabastecimiento.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaReabastecimiento : public ANaveEnemiga
{
	GENERATED_BODY()
	
protected:
	int capacidadReabastecimiento;

public:
	ANaveEnemigaReabastecimiento();
	void reabastecer();
	void reparar();



	FORCEINLINE int GetCapacidadReabastecimiento() const { return capacidadReabastecimiento; }
	FORCEINLINE void SetCapacidadReabastecimiento(int _capacidadReabastecimiento) { capacidadReabastecimiento = _capacidadReabastecimiento; }


protected:
	virtual void Mover();
	virtual void Destruirse();
	virtual void Escapar();
};
