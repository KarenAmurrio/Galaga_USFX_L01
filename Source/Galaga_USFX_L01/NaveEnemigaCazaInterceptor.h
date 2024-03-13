// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaInterceptor.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaCazaInterceptor : public ANaveEnemigaCaza
{
	GENERATED_BODY()
	
protected:
    float velocidadSupersonica;

public:
    ANaveEnemigaCazaInterceptor();
    void activarPostquemadores();
    void realizarIntercepciones();

    FORCEINLINE int GetVelocidadSupersonica() const { return velocidadSupersonica; }
    FORCEINLINE void SetVelocidadSupersonica(int _velocidadSupersonica) { velocidadSupersonica = _velocidadSupersonica;}

protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();

};
