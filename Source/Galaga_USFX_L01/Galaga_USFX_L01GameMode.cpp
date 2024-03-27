

#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "Engine/Engine.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"

AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();
}

void AGalaga_USFX_L01GameMode::BeginPlay()
{

	Super::BeginPlay();

	FVector ubicacionInicioNavesEnemigasCaza = FVector(-100.0f, -800.0f, 200.0f);
	FVector ubicacionInicioNavesEnemigasTransporte = FVector(100.0f, -800.0f, 250.0f);
	FVector ubicacionInicioNavesEnemigasEspia = FVector(200.0f, -800.0f, 250.0f);
	FVector ubicacionInicioNavesEnemigasReabastecimiento = FVector(400.0f, -500.0f, 250.0f);
	FVector ubicacionInicioNavesEnemigasNodriza = FVector(600.0f, -500.0f, 250.0f);
	/*
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

	*/

	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);


	//Reaparecer
	UWorld* const World = GetWorld();

	
	if (World != nullptr)
	{
		int numeroEnemigo1 = FMath::RandRange(5, 7);
		int numeroEnemigo2 = FMath::RandRange(5, 7);
		int numeroEnemigo3 = FMath::RandRange(5, 7);
		int numeroEnemigo4 = FMath::RandRange(5, 7);
		int numeroEnemigo5 = 30 - (numeroEnemigo1 + numeroEnemigo2 + numeroEnemigo3 + numeroEnemigo4);


		for (int i = 0; i < numeroEnemigo1; i++)
		{
			FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasCaza.X + i, ubicacionInicioNavesEnemigasCaza.Y+i*300, ubicacionInicioNavesEnemigasCaza.Z);
			ANaveEnemigaCaza* NaveEnemigaCazaTemporal = World->SpawnActor<ANaveEnemigaCaza>(PosicionNaveActual, rotacionNave);
			TANavesEnemigasCaza.Push(NaveEnemigaCazaTemporal);
		}
		/*
		for (int i = 0; i < numeroEnemigo2; i++)
		{
			FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasTransporte.X + i, ubicacionInicioNavesEnemigasTransporte.Y + i * 300, ubicacionInicioNavesEnemigasTransporte.Z);
			ANaveEnemigaTransporte* NaveEnemigaTransporteTemporal = World->SpawnActor<ANaveEnemigaTransporte>(PosicionNaveActual, rotacionNave);
			TANavesEnemigasTransporte.Push(NaveEnemigaTransporteTemporal);
		}
		
		for (int i = 0; i < numeroEnemigo3; i++)
		{
			FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasCaza.X + i, ubicacionInicioNavesEnemigasCaza.Y + i * 300, ubicacionInicioNavesEnemigasCaza.Z);
			ANaveEnemigaEspia* NaveEnemigaEspiaTemporal = World->SpawnActor<ANaveEnemigaEspia>(PosicionNaveActual, rotacionNave);
			TANavesEnemigasEspia.Push(NaveEnemigaEspiaTemporal);
		}

		for (int i = 0; i < numeroEnemigo4; i++)
		{
			FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasReabastecimiento.X + i, ubicacionInicioNavesEnemigasReabastecimiento.Y + i * 300, ubicacionInicioNavesEnemigasReabastecimiento.Z);
			ANaveEnemigaReabastecimiento* NaveEnemigaReabastecimientoTemporal = World->SpawnActor<ANaveEnemigaReabastecimiento>(PosicionNaveActual, rotacionNave);
			TANavesEnemigasReabastecimiento.Push(NaveEnemigaReabastecimientoTemporal);

		}

		for (int i = 0; i < numeroEnemigo5; i++)
		{
			FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasNodriza.X + i, ubicacionInicioNavesEnemigasNodriza.Y + i * 300, ubicacionInicioNavesEnemigasNodriza.Z);
			ANaveEnemigaNodriza* NaveEnemigaNodrizaTemporal = World->SpawnActor<ANaveEnemigaNodriza>(PosicionNaveActual, rotacionNave);
			TANavesEnemigasNodriza.Push(NaveEnemigaNodrizaTemporal);

		}
		*/
		// spawn the projectile

		/*
		NaveEnemigaTransporte01 = World->SpawnActor<ANaveEnemigaTransporteMercancia>(ubicacionNave01, rotacionNave);
		NaveEnemigaTransporte02 = World->SpawnActor<ANaveEnemigaTransporteSuministros>(ubicacionNave02, rotacionNave);
		NaveEnemigaCaza01 = World->SpawnActor<ANaveEnemigaCazaExploradora>(ubicacionNave03, rotacionNave);
		NaveEnemigaCaza01->SetVelocidad(-200);
		NaveEnemigaCaza02 = World->SpawnActor<ANaveEnemigaCazaInterceptor>(ubicacionNave04, rotacionNave);
		NaveEnemigaCaza02 -> SetVelocidad(-200);
		NaveEnemigaEspia01 = World->SpawnActor<ANaveEnemigaEspiaInfiltradora>(ubicacionNave05, rotacionNave);
		NaveEnemigaEspia02 = World->SpawnActor<ANaveEnemigaEspiaSabotaje>(ubicacionNave06, rotacionNave);
		NaveEnemigaNodriza01 = World->SpawnActor<ANaveEnemigaNodrizaBatalla>(ubicacionNave07, rotacionNave);
		NaveEnemigaNodriza02 = World->SpawnActor<ANaveEnemigaNodrizaExploracion>(ubicacionNave08, rotacionNave);
		NaveEnemigoReabastecimiento01 = World->SpawnActor<ANaveEnemigaReabastecimientoBalas>(ubicacionNave09, rotacionNave);
		NaveEnemigaReabastecimiento02  = World->SpawnActor<ANaveEnemigaReabastecimientoGas>(ubicacionNave10, rotacionNave); */
	}

	TMapPowerUp.Add(3000, "escudo");
	TMapPowerUp.Add(200, "doble tiro");
	TMapPowerUp.Add(1000, "vida extra");
	TMapPowerUp.Add(1500, "invulnerable");
	TMapPowerUp.Add(500, "velocidad");

	////NUEVO
	PowerUpStatusMap.Add(3000, false);
	PowerUpStatusMap.Add(200, false);
	PowerUpStatusMap.Add(1000, false);
	PowerUpStatusMap.Add(1500, false);
	PowerUpStatusMap.Add(500, false);
}

void AGalaga_USFX_L01GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoTranscurrido++;
	if (TiempoTranscurrido >= 100)
	{
//		int numeroEnemigo = FMath::RandRange(0, 9);
	//	TANavesEnemigas[numeroEnemigo]->PrimaryActorTick.bCanEverTick = false;

	//	TANavesEnemigasCaza[numeroEnemigo]->SetVelocidad(0);

		//SCORE
		score = score + 50;
		TiempoTranscurrido = 0;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("score: %d"), score));

	}
	//IMPRIME POWER UP EN TEXTO
	for (const auto& par : TMapPowerUp) {

		int scoreMap = par.Key;
		FString PowerUp = par.Value;
		if (scoreMap == score) { 

			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("PowerUp: %s"), *PowerUp));		

		}

	}
	//CONVIERTE EN TRUE EL VALOR DEL TMAP
	for (auto& par2 : PowerUpStatusMap)
	{
		int PowerUpScore = par2.Key;
		bool& bPowerUpStatus = par2.Value; // Usamos una referencia para poder modificar el valor original en el TMap

		if (score >= PowerUpScore && !bPowerUpStatus)
		{
			bPowerUpStatus = true;
		//	FString StatusMessage = FString::Printf(TEXT("PowerUp with score %d is now active: %s"), PowerUpScore, bPowerUpStatus ? TEXT("True") : TEXT("False"));
		//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, StatusMessage);
		}
	}

}



