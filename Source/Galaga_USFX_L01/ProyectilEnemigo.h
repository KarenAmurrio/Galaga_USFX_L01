// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ProyectilEnemigo.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AProyectilEnemigo : public APawn
{
	GENERATED_BODY()

private:
	float velocidad;
	int danio;
	FVector posicion;
public:
	// Sets default values for this pawn's properties
	AProyectilEnemigo();

	void movimiento();
	void impacto();

	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE int GetDanio() const { return danio; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }

	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetDanio(float _danio) { danio = _danio; }
	FORCEINLINE void SetPosicion(float _posicion) { velocidad = _posicion; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
