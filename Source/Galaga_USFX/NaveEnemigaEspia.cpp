// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspia.h"

void ANaveEnemigaEspia::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemigaEspia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);

}

ANaveEnemigaEspia::ANaveEnemigaEspia()
{

	velocidadMovimiento = 105.0f;
	direccionMovimiento = FVector(1.0f, 0.0f, 0.0f);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
}


void ANaveEnemigaEspia::Mover(float DeltaTime)
{
	// Obtiene la posición actual del actor
	FVector PosicionActual = GetActorLocation();

	// Genera nuevas coordenadas X e Y aleatorias
	/*float NuevaX = FMath::RandRange(-1000.0f, 1000.0f) * (DeltaTime / 1000.0f);
	float NuevaY = FMath::RandRange(-1000.0f, 1000.0f) * (DeltaTime / 1000.0f);
	float NuevaZ = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime;

	// Crea un nuevo vector de posición con las coordenadas aleatorias y la misma Z que la posición actual
	FVector NuevaPosicion = FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z);

	// Establece la nueva posición del actor
	SetActorLocation(NuevaPosicion);*/



	//Calcular el desplazamiento basado en la velocidad y tiempo transcurrido
	FVector Desplazamiento = direccionMovimiento * velocidadMovimiento * DeltaTime;
	PosicionActual += Desplazamiento;

	SetActorLocation(PosicionActual);
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
