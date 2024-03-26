// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodriza.h"

void ANaveEnemigaNodriza::BeginPlay()
{
	Super::BeginPlay();
}

ANaveEnemigaNodriza::ANaveEnemigaNodriza()
{
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
	// Obtiene la posición actual del actor
	FVector PosicionActual = GetActorLocation();

	// Genera nuevas coordenadas X e Y aleatorias
	float NuevaX = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime;
	float NuevaY = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime;

	// Crea un nuevo vector de posición con las coordenadas aleatorias y la misma Z que la posición actual
	FVector NuevaPosicion = FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z);

	// Establece la nueva posición del actor
	SetActorLocation(NuevaPosicion);
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
