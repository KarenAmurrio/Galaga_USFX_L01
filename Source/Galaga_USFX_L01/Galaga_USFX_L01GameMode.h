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


};



