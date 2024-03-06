// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PowerUp.generated.h"

UCLASS()
class GALAGA_USFX_L01_API APowerUp : public AActor
{
	GENERATED_BODY()
	
private:
	// atributos de la clase
	int tipoPowerUp;
	FVector posicion;
	float tiempoPantalla;


public:	
	//Metodos de la clase
	APowerUp();
	void spawn();
	void desaparecer();

	//Getters y Setters 

	FORCEINLINE int GetTipoPowerUp() const { return tipoPowerUp; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }
	FORCEINLINE float GetTiempoPantalla() const { return tiempoPantalla; }

	FORCEINLINE void SetTipoPowerUp(int _tipoPowerUp) { tipoPowerUp = _tipoPowerUp; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }
	FORCEINLINE void SetTiempoPantalla(int _tiempoPantalla) { tiempoPantalla = _tiempoPantalla; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
