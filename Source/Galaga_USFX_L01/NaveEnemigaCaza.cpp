// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"
#include "Galaga_USFX_L01Projectile.h"
#include "Galaga_USFX_L01GameMode.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "ProyectilEnemy.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);
	PrimaryActorTick.bCanEverTick = true;
	FireRate = 5.0f;
	bCanFire = true;
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("score: %d"), score));
}

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
	Disparar();

}


void ANaveEnemigaCaza::Mover(float DeltaTime)
{
	velocidad = 5.0; //0.75

	if (band==1)
	{
		SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y + velocidad, GetActorLocation().Z));
		if (GetActorLocation().Y >= posicionY + 300)
		{
			band = 0;
		}
	}
	else if (band == 0)
	{
		SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y - velocidad, GetActorLocation().Z));
		if (GetActorLocation().Y <= posicionY - 300)
		{
			band = 1;
		}

	}

}

void ANaveEnemigaCaza::Disparar()
{
    FVector SpawnLocation = GetActorLocation() + -(GetActorForwardVector() * 1);

   

	if (bCanFire == true)
	{
		GetWorld()->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ANaveEnemigaCaza::ShotTimerExpired, FireRate,false);
        AProyectilEnemy* NewProjectile = GetWorld()->SpawnActor<AProyectilEnemy>(SpawnLocation, FRotator::ZeroRotator);
		bCanFire = false;
	}
}

void ANaveEnemigaCaza::BeginPlay()
{
	Super::BeginPlay();

	posicionY = GetActorLocation().Y;

}

void ANaveEnemigaCaza::ShotTimerExpired()
{
	bCanFire = true;
}