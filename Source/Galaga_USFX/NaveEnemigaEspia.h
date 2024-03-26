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
	int tiempoAutodestruccion;
	float tamanioNave;
	float velocidad;
	bool autodestruccion;
	bool maniobrabilidad;
	bool capacidadHackeo;
	bool camuflaje;
	
public:
	FORCEINLINE int GetTiempoAutodestruccion()const { return tiempoAutodestruccion; }
	FORCEINLINE float GetTamanioNave()const { return tamanioNave; }
	FORCEINLINE float GetVelocidad()const { return velocidad; }
	FORCEINLINE bool GetAutodestruccion()const { return autodestruccion; }
	FORCEINLINE bool GetManiobrabilidad()const { return maniobrabilidad; }
	FORCEINLINE bool GetCapacidadHackeo()const { return capacidadHackeo; }
	FORCEINLINE bool GetCamuflaje()const { return camuflaje; }

	FORCEINLINE void SetTiempoAutodestruccion(int _tiempoDestruccion) { tiempoAutodestruccion = _tiempoDestruccion; }
	FORCEINLINE void SetTamanioNave(float tamanio) { tamanioNave = tamanio; }
	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetAutodestruccion(bool _autodestruccion) { autodestruccion = _autodestruccion; }
	FORCEINLINE void SetManiobrabilidad(bool _maniobrabilidad) { maniobrabilidad = _maniobrabilidad; }
	FORCEINLINE void SetCapacidadHackeo(bool hackeo) { capacidadHackeo = hackeo; }
	FORCEINLINE void SetCamuflaje(bool _camuflaje) { camuflaje = _camuflaje; }

protected:
	//Se llama cuando el juego comienza o cuando se genera
	virtual void BeginPlay() override;

	UPROPERTY()
		float velocidadMovimiento;
	UPROPERTY()
		FVector direccionMovimiento;
public:
	ANaveEnemigaEspia();
	//llamar a cada fotograma
	virtual void Tick(float DeltaTime) override;

public:
	virtual void Mover(float DeltaTime);
	virtual void Destruirse(float DeltaTime);
	virtual void Escapar(float DeltaTIme);
	virtual void Atacar(float DeltaTime);
};
