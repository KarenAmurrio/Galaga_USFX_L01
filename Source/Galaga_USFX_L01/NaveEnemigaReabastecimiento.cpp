// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaReabastecimiento.h"

void ANaveEnemigaReabastecimiento::Mover(float DeltaTime)
{
	velocidad = 1.20; //0.75
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));

}

void ANaveEnemigaReabastecimiento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaReabastecimiento::Destruirse()
{
}

void ANaveEnemigaReabastecimiento::Escapar()
{
}

ANaveEnemigaReabastecimiento::ANaveEnemigaReabastecimiento()
{

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaReabastecimiento::reabastecer()
{
}

void ANaveEnemigaReabastecimiento::reparar()
{
}
