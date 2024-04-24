// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporte.h"



ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

}

void ANaveEnemigaTransporte::BeginPlay()
{
	Super::BeginPlay();

	direccionMovimiento = FVector(-1.0f, 0.0, 0.0f);
	velocidadMovimiento = 150.0f;
}

void ANaveEnemigaTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}


void ANaveEnemigaTransporte::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();  // Obtener la posición actual del actor

		/* CALCULAR EL DESPLAZAMIENTO BASADO EN LA VELOCIDAD Y TIEMPO TRANSCURRIDO */
	FVector Desplazamiento = direccionMovimiento * velocidadMovimiento * DeltaTime;
	PosicionActual += Desplazamiento;


	SetActorLocation(PosicionActual);   // Establecer la nueva posición del actor
}

void ANaveEnemigaTransporte::Cargar()
{
}

void ANaveEnemigaTransporte::Destruirse(float DeltaTime)
{
}

void ANaveEnemigaTransporte::Escapar(float DeltaTIme)
{
}

void ANaveEnemigaTransporte::Atacar(float DeltaTime)
{
}

void ANaveEnemigaTransporte::RecoleccionRecursos(bool DeltaTime)
{
}

void ANaveEnemigaTransporte::MantenimientoNaves(bool DeltaTime)
{
}

void ANaveEnemigaTransporte::TransporteTropas(bool DeltaTime)
{
}

void ANaveEnemigaTransporte::OperacionRescate(bool DeltaTime)
{
}

