// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaNodriza.h"
#include "Nodriza01.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANodriza01 : public ANaveEnemigaNodriza
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
	ANodriza01();
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
