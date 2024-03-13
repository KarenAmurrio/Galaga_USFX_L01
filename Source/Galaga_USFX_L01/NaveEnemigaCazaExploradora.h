// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaExploradora.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaCazaExploradora : public ANaveEnemigaCaza
{
	GENERATED_BODY()
	
protected:
    ANaveEnemigaCazaExploradora();
    float rangoExploracion;

public:

    void explorarSistemasEstelares();
    void mapearAsteroides();
    FORCEINLINE int GetRangoExploracion() const { return rangoExploracion; }
    FORCEINLINE void SetRangoExploracion(int _rangoExploracion) { rangoExploracion = _rangoExploracion; }

protected:
    virtual void Mover();
    virtual void Disparar();
    virtual void Destruirse();
    virtual void Escapar();

};
