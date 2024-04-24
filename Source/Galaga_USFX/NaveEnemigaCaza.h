// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "Particles/ParticleSystem.h"
#include "NaveEnemigaCaza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()

private:
	int cantidadMisiles;
	float tamanioNave;
	int cantidadMuniciones;
	

public:

	FORCEINLINE int GetCantidadMisiles()const { return cantidadMisiles; }
	FORCEINLINE float GetTamanioNave()const { return tamanioNave; }
	FORCEINLINE int GetCantidadMuniciones()const { return cantidadMuniciones; }
	

	FORCEINLINE void SetCantidadMisiles(int _cantidadMisiles) { cantidadMisiles = _cantidadMisiles; }
	FORCEINLINE void SetTamanioNave(float _tamanioNave) { tamanioNave = _tamanioNave; }
	FORCEINLINE void SetCantidadMuniciones(int _cantidadMuniciones) { cantidadMuniciones = _cantidadMuniciones; }
	

protected:
	//Se llama cuando el juego comienza o cuando se genera
	virtual void BeginPlay() override;

public:
	ANaveEnemigaCaza();

	//llamar a cada fotograma
	virtual void Tick(float DeltaTime) override;

private:

	//SPAWNEAR LA CLASE BOMBA
	UPROPERTY(EditAnywhere, Category = "Bomba")
		TSubclassOf<class ABomba> BombaClass;//creacion de la subclase BombaClass
	float IntervaloLanzarBombaMin;
	float IntervaloLanzarBombaMax;
	float TiempoUltimoLanzamiento;
	float TiempoProximoLanzamiento;
		
public:
	//FUNCIONES DE LA BOMBA
		void SoltarBomba();
		void SetupBombaClass();

public:
	UPROPERTY()
	float LimiteIzquierdo;
	float LimiteDerecho;
	float LimiteInferior;
	float LimiteSuperior;
    virtual void RecibirDanio(float Cantidad);

protected:
	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void Escapar(float DeltaTIme);
	virtual void Disparar();	


};
