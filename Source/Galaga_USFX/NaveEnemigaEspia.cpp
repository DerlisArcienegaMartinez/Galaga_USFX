// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspia.h"



void ANaveEnemigaEspia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);

}

void ANaveEnemigaEspia::BeginPlay()
{
	Super::BeginPlay();
}

ANaveEnemigaEspia::ANaveEnemigaEspia()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
}


void ANaveEnemigaEspia::Mover(float DeltaTime)
{
	// Obtiene la posición actual del actor
	FVector PosicionActual = GetActorLocation();

	// Genera nuevas coordenadas X e Y aleatorias
	float NuevaX = FMath::RandRange(-1000.0f, 1000.0f) * (DeltaTime / 1000.0f);
	float NuevaY = FMath::RandRange(-1000.0f, 1000.0f) * (DeltaTime / 1000.0f);
	float NuevaZ = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime;

	// Crea un nuevo vector de posición con las coordenadas aleatorias y la misma Z que la posición actual
	FVector NuevaPosicion = FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z + NuevaZ);

	// Establece la nueva posición del actor
	SetActorLocation(NuevaPosicion);
}

void ANaveEnemigaEspia::Destruirse(float DeltaTime)
{
}

void ANaveEnemigaEspia::Escapar(float DeltaTIme)
{
}

void ANaveEnemigaEspia::Atacar(float DeltaTime)
{
}
