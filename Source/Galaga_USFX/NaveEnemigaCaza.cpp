//caza.cpp
// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"
#include "Galaga_USFXProjectile.h"

// Called when the game starts or when spawned
void ANaveEnemigaCaza::BeginPlay()
{
	Super::BeginPlay();


	VelocidadMovimiento = 1000.0f; //Velocidad predeterminada
	DireccionMovimiento = FVector(FMath::RandRange(-1000.0f, 1000.0f), FMath::RandRange(-1000.0f, 1000.0f), 0.f).GetSafeNormal(); // Dirección inicial aleatoria  //FVector(1.0f, 0.0f, 0.0f); //Determina la direccion donde va la nave eje x

	LimiteDerecho = 1600.0f;
	LimiteInferior = -1600.0f;
	LimiteIzquierdo = -1600.0f;
	LimiteSuperior = 1600.0f;



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

	// Obtener la posición actual del actor
	FVector PosicionActual = GetActorLocation();

	// Cambiar la dirección de movimiento si la nave está a punto de chocar con una pared
	if (PosicionActual.X < LimiteIzquierdo || PosicionActual.X > LimiteDerecho ||
		PosicionActual.Y < LimiteInferior || PosicionActual.Y > LimiteSuperior)
	{
		// Cambiar la dirección de movimiento aleatoriamente
		DireccionMovimiento = FVector(FMath::RandRange(-1000.0f, 1000.0f), FMath::RandRange(-1000.0f, 1000.0f), 0.f).GetSafeNormal();
	}