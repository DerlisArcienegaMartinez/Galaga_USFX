// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"

class UstaticMeshComponent;

UCLASS(ABSTRACT)
class GALAGA_USFX_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* mallaNaveEnemiga;

protected:

    FString nombre;
	FString tipoNave;
	FVector posicion;
	FVector direccionMovimiento;

	float energia;
	float velocidad;
	float velocidadMovimiento;
	float resistencia;
	float experiencia;
	float tiempoDisparo;
	float danoProducido;
	float valorDestruccion;


	




public:
	// Metodos accesores
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE float GetResistencia() const { return resistencia; }
	FORCEINLINE float GetDanoProducido() const { return danoProducido; }
	FORCEINLINE float GetValorDestruccion() const { return valorDestruccion; }
	FORCEINLINE float GetTiempoDisparo() const { return tiempoDisparo; }
	FORCEINLINE float GetExperiencia() const { return experiencia; }
	FORCEINLINE float GetEnergia() const { return energia; }
	FORCEINLINE FString GetNombre() const { return nombre; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }
	FORCEINLINE FString GetTipoNave() const { return tipoNave; }
	FORCEINLINE float GetVelocidadMovimiento() const { return velocidadMovimiento; }
	FORCEINLINE FVector GetDireccionMovimiento() const { return direccionMovimiento; }


	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetResistencia(float _resistencia) { resistencia = _resistencia; }
	FORCEINLINE void SetValorDestruccion(float _valorDestruccion) { valorDestruccion = _valorDestruccion; }
	FORCEINLINE void SetDanoProducido(float _danoProducido) { danoProducido = _danoProducido; }
	FORCEINLINE void SetTiempoDisparo(float _tiempoDisparo) { tiempoDisparo = _tiempoDisparo; }
	FORCEINLINE void SetExperiencia(float _experiencia) { experiencia = _experiencia; }
	FORCEINLINE void SetEnergia(float _energia) { energia = _energia; }
	FORCEINLINE void SetNombre(FString _nombre) { nombre = _nombre; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }
	FORCEINLINE void SetTipoNave(FString _tipoNave) { tipoNave = _tipoNave; }
	FORCEINLINE void SetVelocidadMovimiento(float VelocidadMovimiento) { velocidadMovimiento = VelocidadMovimiento; }
	FORCEINLINE void SetDireccionMovimiento(FVector DireccionMovimiento) { direccionMovimiento = DireccionMovimiento; }


	
public:	
	// Sets default values for this actor's properties
	ANaveEnemiga();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	void Mover(float DeltaTime) PURE_VIRTUAL(ANaveEnemiga::Mover);
	void Destruirse(float DeltaTime) PURE_VIRTUAL(ANaveEnemiga::Destruirse);
	void Escapar(float DeltaTime) PURE_VIRTUAL(ANaveEnemiga::Escapar);
	void Disparar(float DeltaTime) PURE_VIRTUAL(ANaveEnemiga::Disparar);
	void RecibirDanio(float Cantidad) PURE_VIRTUAL(ANaveEnemiga::RecibirDanio);
};
