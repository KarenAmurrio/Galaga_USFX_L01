// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "NaveEnemiga.h"

AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();
}

void AGalaga_USFX_L01GameMode::BeginPlay()
{

	Super::BeginPlay();

	FVector ubicacionNave01 = FVector(-1000.0f, 500.0f, 250.0f);
	FVector ubicacionNave02 = FVector(-600.0f, -600.0f, 250.0f);
	FVector ubicacionNave03 = FVector(-1200.0f, 700.0f, 250.0f);
	FVector ubicacionNave04 = FVector(-700.0f, -400.0f, 250.0f);
	FVector ubicacionNave05 = FVector(-1300.0f, 800.0f, 250.0f);
	FVector ubicacionNave06 = FVector(-800.0f, -500.0f, 250.0f);
	FVector ubicacionNave07 = FVector(-1400.0f, 600.0f, 250.0f);
	FVector ubicacionNave08 = FVector(-900.0f, -300.0f, 250.0f);
	FVector ubicacionNave09 = FVector(-1600.0f, 400.0f, 250.0f);
	FVector ubicacionNave10 = FVector(-1500.0f, -700.0f, 250.0f);

	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		NaveEnemigaTransporte01 = World->SpawnActor<ANaveEnemigaTransporteMercancia>(ubicacionNave01, rotacionNave);
		NaveEnemigaTransporte02 = World->SpawnActor<ANaveEnemigaTransporteSuministros>(ubicacionNave02, rotacionNave);
		NaveEnemigaCaza01 = World->SpawnActor<ANaveEnemigaCazaExploradora>(ubicacionNave03, rotacionNave);
		NaveEnemigaCaza02 = World->SpawnActor<ANaveEnemigaCazaInterceptor>(ubicacionNave04, rotacionNave);
		NaveEnemigaEspia01 = World->SpawnActor<ANaveEnemigaEspiaInfiltradora>(ubicacionNave05, rotacionNave);
		NaveEnemigaEspia02 = World->SpawnActor<ANaveEnemigaEspiaSabotaje>(ubicacionNave06, rotacionNave);
		NaveEnemigaNodriza01 = World->SpawnActor<ANaveEnemigaNodrizaBatalla>(ubicacionNave07, rotacionNave);
		NaveEnemigaNodriza02 = World->SpawnActor<ANaveEnemigaNodrizaExploracion>(ubicacionNave08, rotacionNave);
		NaveEnemigoReabastecimiento01 = World->SpawnActor<ANaveEnemigaReabastecimientoBalas>(ubicacionNave09, rotacionNave);
		NaveEnemigaReabastecimiento02  = World->SpawnActor<ANaveEnemigaReabastecimientoGas>(ubicacionNave10, rotacionNave);
	}


}

