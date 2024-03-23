// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaCaza.h"
#include "Caza01.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ACaza01 : public ANaveEnemigaCaza
{
	GENERATED_BODY()
	
protected:
	//Se llama cuando el juego comienza o cuando se genera
	virtual void BeginPlay() override;

	/*UPROPERTY()
		float VelocidadMovimiento;
	UPROPERTY()
		FVector DireccionMovimiento;*/

public:
	ACaza01();
	//llamar a cada fotograma
	virtual void Tick(float DeltaTime) override;

public:
	virtual void Mover(float DeltaTime);
};
