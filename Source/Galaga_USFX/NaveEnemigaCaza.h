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
	int cantidadBombas;
	float tamanioNave;
	int Energia;
	int cantidadMuniciones;
	float velocidadNave;

public:

	FORCEINLINE int GetCantidadBombas()const { return cantidadBombas; }
	FORCEINLINE float GetTamanioNave()const { return tamanioNave; }
	FORCEINLINE int GetEnergia()const { return Energia; }
	FORCEINLINE int GetCantidadMuniciones()const { return cantidadMuniciones; }
	FORCEINLINE float GetVelocidadNave()const { return velocidadNave; }

	FORCEINLINE void SetCantidadBombas(int _cantidadBombas) { cantidadBombas = _cantidadBombas; }
	FORCEINLINE void SetTamanioNave(float _tamanioNave) { tamanioNave = _tamanioNave; }
	FORCEINLINE void SetEnergia(int _energia) { Energia = _energia; }
	FORCEINLINE void SetCantidadMuniciones(int _cantidadMuniciones) { cantidadMuniciones = _cantidadMuniciones; }
	FORCEINLINE void SetVelocidadNave(float _velocidadaNave) { velocidadNave = _velocidadaNave; }

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
    float VelocidadMovimiento;
    FVector DireccionMovimiento;
		
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
