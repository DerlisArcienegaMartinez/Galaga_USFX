// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaNodriza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaNodriza : public ANaveEnemiga
{
	GENERATED_BODY()
	
private: 
	float tamanioNave;
	int cantidadNavesAlmacenados;
	int cantidadNavesExpulsados;
	int tiempoRecargaNaves;
	float vel;
	float resistenciaDanio;

public:
	FORCEINLINE float GetTamanioNave()const { return tamanioNave; }
	FORCEINLINE int GetCantidadNavesAlmacenados()const { return cantidadNavesAlmacenados; }
	FORCEINLINE int GetCantidadNavesExpulsados()const { return cantidadNavesExpulsados; }
	FORCEINLINE int GetTiempoRecargaNaves()const { return tiempoRecargaNaves; }
	FORCEINLINE float GetVel()const { return vel; }
	FORCEINLINE float GetResistenciaDanio()const { return resistenciaDanio; }

	FORCEINLINE void SetTamanioNave(float _tamanioNave) { tamanioNave = _tamanioNave; }
	FORCEINLINE void SetCantidadNavesAlmacenados(int _navesAlmacenados) { cantidadNavesAlmacenados = _navesAlmacenados; }
	FORCEINLINE void SetCantidadNavesExpulsados(int _navesExpulsados) { cantidadNavesExpulsados = _navesExpulsados; }
	FORCEINLINE void SetTiempoRecargaNaves(int _recargaNaves) { tiempoRecargaNaves = _recargaNaves; }
	FORCEINLINE void SetVel(float _vel) { vel = _vel; }
	FORCEINLINE void SetResistenciaDanio(float _resistenciaDanio) { resistenciaDanio = _resistenciaDanio; }
};
