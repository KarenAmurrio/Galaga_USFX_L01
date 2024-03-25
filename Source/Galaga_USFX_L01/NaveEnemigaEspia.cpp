// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspia.h"

ANaveEnemigaEspia::ANaveEnemigaEspia()
{

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaEspia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}


void ANaveEnemigaEspia::activarCamuflaje()
{
}

void ANaveEnemigaEspia::recopilarInformacion()
{
}

void ANaveEnemigaEspia::Mover(float DeltaTime)
{
	velocidad = 1.80; //0.75
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));
}

void ANaveEnemigaEspia::Disparar()
{
}

void ANaveEnemigaEspia::Destruirse()
{
}

void ANaveEnemigaEspia::Escapar()
{
}
