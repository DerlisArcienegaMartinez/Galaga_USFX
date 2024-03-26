// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaReabastecimiento.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaReabastecimiento : public ANaveEnemiga
{
	GENERATED_BODY()

private:
	int autonomia; // cantidad de combustible propio de la nave para transportarse;
	int blindaje;
	int capacidadCombustible; //cantidad de combustible que puede transportar
	float velocidadTransferencia; //velocidad para transferir combustible
	bool transferenciaCombustible; //indica si la nave esta equipada para transferir combustible a otas naves
	bool maniobra;
	int tripulacion; //cantidad de naves que puede reabastecer

public:
	FORCEINLINE int GetAutonomia()const { return autonomia; }
	FORCEINLINE int GetBlindaje()const { return blindaje; }
	FORCEINLINE int GetCapacidadCombustible()const { return capacidadCombustible; }
	FORCEINLINE float GetVelocidadTransferencia()const { return velocidadTransferencia; }
	FORCEINLINE bool GetTransferenciaCombustible()const { return transferenciaCombustible; }
	FORCEINLINE bool GetManiobra()const { return maniobra; }
	FORCEINLINE int GetTripulacion()const { return tripulacion; }

	FORCEINLINE void SetAutonomia(int _autonomia) { autonomia = _autonomia; }
	FORCEINLINE void SetBlindaje(int _blindaje) { blindaje = _blindaje; }
	FORCEINLINE void SetCapacidadCombustible(int combustible) { capacidadCombustible = combustible; }
	FORCEINLINE void SetVelocidadTransferencia(float transferencia) { velocidadTransferencia = transferencia; }
	FORCEINLINE void SetTransferenciaCombustible(bool _transfCombustible) { transferenciaCombustible = _transfCombustible; }
	FORCEINLINE void SetManiobra(bool _maniobra) { maniobra = _maniobra; }
	FORCEINLINE void SetTripulacion(int _tripulacion) { tripulacion = _tripulacion; }

protected:
	//Se llama cuando el juego comienza o cuando se genera
	virtual void BeginPlay() override;

public:
	ANaveEnemigaReabastecimiento();
	//LLamar a cada fotograma
	virtual void Tick(float DeltaTime) override;

public:
	virtual void Mover(float DeltaTime);
	virtual void Destruirse(float DeltaTime);
	virtual void Escapar(float DeltaTIme);
	virtual void Atacar(float DeltaTime);
	virtual void ReabastecimientoVuelo(bool DeltaTime);
};

