// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaEspia.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaEspia : public ANaveEnemiga
{
	GENERATED_BODY()

private:
	int tiempoDestruccion;

public:
	FORCEINLINE int GetTiempoDestruccion()const { return tiempoDestruccion; }

	FORCEINLINE void SetTiempoDestruccion(int _tiempoDestruccion) { tiempoDestruccion = _tiempoDestruccion; }



protected:
	//Se llama cuando el juego comienza o cuando se genera
	virtual void BeginPlay() override;

public:
	ANaveEnemigaEspia();
	//llamar a cada fotograma
	virtual void Tick(float DeltaTime) override;

public:
	virtual void Mover(float DeltaTime);
	//virtual void Disparar();
	
};
