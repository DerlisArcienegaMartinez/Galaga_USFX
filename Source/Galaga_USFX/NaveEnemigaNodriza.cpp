// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodriza.h"

void ANaveEnemigaNodriza::BeginPlay()
{
	Super::BeginPlay();
}

ANaveEnemigaNodriza::ANaveEnemigaNodriza()
{
	VelocidadMovimiento = 30.0f; //Velocidad predeterminada
	DireccionMovimiento = FVector(1.0f, 0.0f, 0.0f ); //Determina la direccion donde va la nave eje x
	

	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
}

void ANaveEnemigaNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}


void ANaveEnemigaNodriza::Mover(float DeltaTime)
{
	//Obtener la posicion actual del actor
	FVector posicionActual = GetActorLocation();

	//Calcular el desplazamiento basado en la velocidad y tiempo transcurrido
	FVector Desplazamiento = DireccionMovimiento * VelocidadMovimiento * DeltaTime;
	posicionActual += Desplazamiento;

	SetActorLocation(posicionActual);
}

void ANaveEnemigaNodriza::Destruirse(float DeltaTime)
{
}

void ANaveEnemigaNodriza::Escapar(float DeltaTIme)
{
}

void ANaveEnemigaNodriza::Atacar(float DeltaTime)
{
}

void ANaveEnemigaNodriza::RecoleccionRecursos(bool DeltaTime)
{
}

void ANaveEnemigaNodriza::MantenimientoNaves(bool DeltaTime)
{
}

void ANaveEnemigaNodriza::DespliegueNavesAuxiliares(float DeltaTime)
{
}
