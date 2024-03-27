// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"
#include "Galaga_USFX_L01Projectile.h"
#include "Galaga_USFX_L01GameMode.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "ProyectilEnemy.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);
	PrimaryActorTick.bCanEverTick = true;

	FireRate = 2.0f;
	bCanFire = true;
}

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
	Disparar();
}


void ANaveEnemigaCaza::Mover(float DeltaTime)
{
	velocidad = 1.50; //0.75
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));

}

void ANaveEnemigaCaza::Disparar()
{
    FVector SpawnLocation = GetActorLocation() +GetActorForwardVector();

   

	if (bCanFire == true)
	{
		 UWorld* World = GetWorld();
    if (World)
    {
        AProyectilEnemy* NewProjectile = World->SpawnActor<AProyectilEnemy>(SpawnLocation, FRotator::ZeroRotator);
    }
		World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ANaveEnemigaCaza::ShotTimerExpired, FireRate);
		bCanFire = false;
		// If we are pressing fire stick in a direction
		
	}
}

void ANaveEnemigaCaza::ShotTimerExpired()
{
	bCanFire = true;
}