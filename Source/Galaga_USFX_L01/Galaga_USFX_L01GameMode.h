// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaExploradora.h"
#include "NaveEnemigaCazaInterceptor.h"
#include "NaveEnemigaTransporteMercancia.h"
#include "NaveEnemigaTransporteSuministros.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaEspiaInfiltradora.h"
#include "NaveEnemigaEspiaSabotaje.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaNodrizaBatalla.h"
#include "NaveEnemigaNodrizaExploracion.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaReabastecimientoBalas.h"
#include "NaveEnemigaReabastecimientoGas.h"
#include "NaveEnemigaTransporteMercancia.h"
#include "NaveEnemigaTransporteSuministros.h"
#include "Galaga_USFX_L01GameMode.generated.h"

class ANaveEnemiga;

UCLASS(MinimalAPI)
class AGalaga_USFX_L01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_L01GameMode();

public:
	ANaveEnemigaTransporteMercancia* NaveEnemigaTransporte01;
	ANaveEnemigaTransporteSuministros* NaveEnemigaTransporte02;
	ANaveEnemigaCazaExploradora* NaveEnemigaCaza01;
	ANaveEnemigaCazaInterceptor* NaveEnemigaCaza02;
	ANaveEnemigaEspiaInfiltradora* NaveEnemigaEspia01;
	ANaveEnemigaEspiaSabotaje* NaveEnemigaEspia02;
	ANaveEnemigaNodrizaBatalla* NaveEnemigaNodriza01;
	ANaveEnemigaNodrizaExploracion* NaveEnemigaNodriza02;
	ANaveEnemigaReabastecimientoBalas* NaveEnemigoReabastecimiento01;
	ANaveEnemigaReabastecimientoGas* NaveEnemigaReabastecimiento02;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	TArray<ANaveEnemiga*> TANavesEnemigas;
	TArray<ANaveEnemigaCaza* > TANavesEnemigasCaza;
	TArray<ANaveEnemigaTransporte* > TANavesEnemigasTransporte;
	TArray<ANaveEnemigaEspia* > TANavesEnemigasEspia;
	TArray<ANaveEnemigaNodriza* > TANavesEnemigasNodriza;
	TArray<ANaveEnemigaReabastecimiento* > TANavesEnemigasReabastecimiento;

private:
	int TiempoTranscurrido;

public:
	int score;
	int POWER_UP_DOUBLE_SHOT_ID;
public:
	virtual void Tick(float DeltaTime) override;


public:

	FVector ubicacionInicioNavesEnemigasCaza = FVector(1000.0f, -800.0f, 200.0f);
	FVector ubicacionInicioNavesEnemigasTransporte = FVector(100.0f, -800.0f, 250.0f);
	FVector ubicacionInicioNavesEnemigasEspia = FVector(200.0f, -800.0f, 250.0f);
	FVector ubicacionInicioNavesEnemigasReabastecimiento = FVector(400.0f, -500.0f, 250.0f);
	FVector ubicacionInicioNavesEnemigasNodriza = FVector(600.0f, -500.0f, 250.0f);

	FORCEINLINE FVector GetUbicacionInicioNavesEnemigasCaza() const{return ubicacionInicioNavesEnemigasCaza;}
	FORCEINLINE FVector GetUbicacionInicioNavesEnemigasTransporte() const { return ubicacionInicioNavesEnemigasTransporte; }
	FORCEINLINE FVector GetUbicacionInicioNavesEnemigasEspia() const { return ubicacionInicioNavesEnemigasEspia; }
	FORCEINLINE FVector GetUbicacionInicioNavesEnemigasReabastecimiento() const { return ubicacionInicioNavesEnemigasReabastecimiento; }
	FORCEINLINE FVector GetUbicacionInicioNavesEnemigasNodriza() const { return ubicacionInicioNavesEnemigasNodriza; }


	FString powerUp;
	//MAP TEXTO
	TMap<int, FString>TMapPowerUp;


	FORCEINLINE bool GetPowerUpStatus(int PowerUpID) const
	{
		const bool* Status = PowerUpStatusMap.Find(PowerUpID);
		return (Status != nullptr) ? *Status : false;
	}



private:
	// Mapa para almacenar el estado de los power-ups
	TMap<int, bool> PowerUpStatusMap;

};



