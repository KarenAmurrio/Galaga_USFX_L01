// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Score.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AScore : public AActor
{
	GENERATED_BODY()
	
private:
	//atributo
	int score;

public:	
	// Sets default values for this actor's properties
	AScore();

	//metodos
	void incrementar();
	void reiniciar();


	//Metodos Accesorios
	FORCEINLINE int GetScore() const { return score; }

	FORCEINLINE void SetScore(int _score) { score = _score; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
