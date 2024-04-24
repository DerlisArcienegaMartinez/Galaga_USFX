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
	float blindaje;//protege la nave de da�os del player
	float maniobrabilidad;//Evitar obstaculos
	float sistemaDefensa;
	float combustible;//cuanto de combustible tiene la nave

	

public:
	FORCEINLINE float GetCapacidadCargaPeso()const { return capacidadCargaPeso; }
	FORCEINLINE float GetCapacidadCargaVolumen()const { return capacidadCargaVolumen; }
	FORCEINLINE float GetBlindaje()const { return blindaje; }
	FORCEINLINE float GetManibrabilidad()const { return maniobrabilidad; }
	FORCEINLINE float GetSistemaDefensa()const { return sistemaDefensa; }
	FORCEINLINE float GetCombustible()const { return combustible; }
	

	FORCEINLINE void SetCapacidadCarga(float capacidadCarga) { capacidadCargaPeso = capacidadCarga; }
	FORCEINLINE void SetCapacidadCargaVolumen(float capacidadVolumen) { capacidadCargaVolumen = capacidadVolumen; }
	FORCEINLINE void SetBlindaje(float _blindaje) { blindaje = _blindaje; }
	FORCEINLINE void SetManiobrabilidad(float maniobra) { maniobrabilidad = maniobra; }
	FORCEINLINE void SetSistemaDefensa(float defensa) { sistemaDefensa = defensa; }
	FORCEINLINE void SetCombustible(float _combustible) { combustible = _combustible; }
	

public:
	ANaveEnemigaTransporte();

	//LLamar a cada fotograma
	virtual void Tick(float DeltaTime) override;

protected:

	virtual void BeginPlay() override;

protected:
	
	virtual void Mover(float DeltaTime);
	virtual void Cargar();
	virtual void Destruirse(float DeltaTime);
	virtual void Escapar(float DeltaTIme);
	virtual void Atacar(float DeltaTime);
	virtual void RecoleccionRecursos(bool DeltaTime);
	virtual void MantenimientoNaves(bool DeltaTime);
	virtual void TransporteTropas(bool DeltaTime);
	virtual void OperacionRescate(bool DeltaTime);
};
