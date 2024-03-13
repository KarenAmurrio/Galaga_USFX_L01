// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaTransporteMercancia.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaTransporteMercancia : public ANaveEnemigaTransporte
{
	GENERATED_BODY()
	
protected:
	int capacidadMercancias;

public:
	ANaveEnemigaTransporteMercancia();
	void cargarMercancias();
	void descargarMercancias();


	FORCEINLINE int GetCapacidadMercancias() const { return capacidadMercancias; }
	FORCEINLINE void SetCapacidadMercancias(int _capacidadMercancias) { capacidadMercancias = _capacidadMercancias; }

protected:
	virtual void Mover();
	virtual void Destruirse();
	virtual void Escapar();

};
