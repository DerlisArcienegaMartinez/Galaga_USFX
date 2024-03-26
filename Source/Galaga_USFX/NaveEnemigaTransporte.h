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
	float blindaje;//protege la nave de daños del player
	float velocidad;
	float maniobrabilidad;//Evitar obstaculos
	float sistemaDefensa;
	float combustible;//cuanto de combustible tiene la nave
	float velocidadEscape;//evitar ataques

public:
	FORCEINLINE float GetCapacidadCargaPeso()const { return capacidadCargaPeso; }
	FORCEINLINE float GetCapacidadCargaVolumen()const { return capacidadCargaVolumen; }
	FORCEINLINE float GetBlindaje()const { return blindaje; }
	FORCEINLINE float GetVelocidad()const { return velocidad; }
	FORCEINLINE float GetManibrabilidad()const { return maniobrabilidad; }
	FORCEINLINE float GetSistemaDefensa()const { return sistemaDefensa; }
	FORCEINLINE float GetCombustible()const { return combustible; }
	FORCEINLINE float GetVelocidadEscape()const { return velocidadEscape; }

	FORCEINLINE void SetCapacidadCarga(float capacidadCarga) { capacidadCargaPeso = capacidadCarga; }
	FORCEINLINE void SetCapacidadCargaVolumen(float capacidadVolumen) { capacidadCargaVolumen = capacidadVolumen; }
	FORCEINLINE void SetBlindaje(float _blindaje) { blindaje = _blindaje; }
	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetManiobrabilidad(float maniobra) { maniobrabilidad = maniobra; }
	FORCEINLINE void SetSistemaDefensa(float defensa) { sistemaDefensa = defensa; }
	FORCEINLINE void SetCombustible(float _combustible) { combustible = _combustible; }
	FORCEINLINE void SetVelocidadEscape(float escape) { velocidadEscape = escape; }

public: 
	float dimensionCargaOcupada;
	float dimensionCargaDisponible;

public:
	ANaveEnemigaTransporte();

	//LLamar a cada fotograma
	virtual void Tick(float DeltaTime) override;

protected:
	
	virtual void Mover(float DeltaTime);
	virtual void Cargar(float dimesionCarga, float pesoCarga);
	virtual void Destruirse(float DeltaTime);
	virtual void Escapar(float DeltaTIme);
	virtual void Atacar(float DeltaTime);
	virtual void RecoleccionRecursos(bool DeltaTime);
	virtual void MantenimientoNaves(bool DeltaTime);
	virtual void TransporteTropas(bool DeltaTime);
	virtual void OperacionRescate(bool DeltaTime);
};
