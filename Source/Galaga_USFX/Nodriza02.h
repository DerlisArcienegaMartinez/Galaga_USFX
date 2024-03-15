// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaNodriza.h"
#include "Nodriza02.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANodriza02 : public ANaveEnemigaNodriza
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
	ANodriza02();
	//llamar a cada fotograma
	virtual void Tick(float DeltaTime) override;

public:
	virtual void Mover(float DeltaTime);

private:
	float tiempo;
	float velocidad;
	float ancho;
	float MovementSpeed;
};
