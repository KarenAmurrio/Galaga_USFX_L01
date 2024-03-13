// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaEspiaInfiltradora.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaEspiaInfiltradora : public ANaveEnemigaEspia
{
	GENERATED_BODY()
	
protected:
	int capacidadCamuflaje;

public:
	ANaveEnemigaEspiaInfiltradora();
	void infiltrarseEnBasesEnemigas();
	void obtenerInformacionClasificada();

	FORCEINLINE int GetCapacidadCamuflaje() const { return capacidadCamuflaje; }
	FORCEINLINE void SetCapacidadCamuflaje(int _capacidadCamuflaje) { capacidadCamuflaje = _capacidadCamuflaje; }

protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();

};
