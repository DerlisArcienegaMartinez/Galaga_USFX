// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaTransporte : public ANaveEnemiga
{
	GENERATED_BODY()

private:
	float capacidadCargaPeso;
	float capacidadCargaVolumen;

public:
	FORCEINLINE float GetCapacidadCargaPeso()const { return capacidadCargaPeso; }
	FORCEINLINE float GetCapacidadCargaVolumen()const { return capacidadCargaVolumen; }

	FORCEINLINE void SetCapacidadCargaPeso(float capacidadPeso) { capacidadCargaPeso = capacidadPeso; }
	FORCEINLINE void SetCapacidadCargaVolumen(float capacidadVolumen) { capacidadCargaVolumen = capacidadVolumen; }


protected:
	//Se llama cuando el juego comienza o cuando se genera
	virtual void BeginPlay() override;

public:
	ANaveEnemigaTransporte();

	//LLamar a cada fotograma
	virtual void Tick(float DeltaTime) override;

public:
	
	virtual void Mover(float DeltaTime);
	//virtual void Disparar(float DeltaTime);
};
