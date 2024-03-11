// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"

// Called when the game starts or when spawned
void ANaveEnemigaCaza::BeginPlay()
{
	Super::BeginPlay();

}

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

}

// Called every frame
void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaCaza::Mover(float DeltaTime)
{
	// Obtiene la posici�n actual del actor
	FVector PosicionActual = GetActorLocation();

	// Genera nuevas coordenadas X e Y aleatorias
	float NuevaX = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime;
	float NuevaY = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime;

	// Crea un nuevo vector de posici�n con las coordenadas aleatorias y la misma Z que la posici�n actual
	FVector NuevaPosicion = FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z);

	// Establece la nueva posici�n del actor
	SetActorLocation(NuevaPosicion);
}

// void ANaveEnemigaCaza::MoverAleatoriamente(float DeltaTime)
// {
// 	// Obtiene la posici�n actual del actor
// 	FVector PosicionActual = GetActorLocation();

// 	// Genera nuevas coordenadas X e Y aleatorias
// 	float NuevaX = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime;
// 	float NuevaY = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime;

// 	// Crea un nuevo vector de posici�n con las coordenadas aleatorias y la misma Z que la posici�n actual
// 	FVector NuevaPosicion = FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z);

// 	// Establece la nueva posici�n del actor
// 	SetActorLocation(NuevaPosicion);
// }