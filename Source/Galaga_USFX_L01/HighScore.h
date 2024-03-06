// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HighScore.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AHighScore : public AActor
{
	GENERATED_BODY()
	
private:
	//atributos
	int highScore;

public:	
	// Sets default values for this actor's properties
	AHighScore();
	//Metodos
	void actualizarScore();
	void resetScore();

	//Metodo Accesorio
	FORCEINLINE int GetHighScore() const { return highScore; }
	FORCEINLINE void SetHighScore(int _highScore) { highScore = _highScore; }


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
