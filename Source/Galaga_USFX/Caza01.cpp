// Fill out your copyright notice in the Description page of Project Settings.


#include "Caza01.h"

// Called when the game starts or when spawned
void ACaza01::BeginPlay()
{
	Super::BeginPlay();

}

ACaza01::ACaza01()
{
	VelocidadMovimiento = 100.0f; //Velocidad predeterminada
	DireccionMovimiento = FVector(1.0f, 0.0f, 0.0f); //Determina la direccion donde va la nave eje x

	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
}

void ACaza01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ACaza01::Mover(float DeltaTime)
{
	//Obtener la posicion actual del actor
	FVector posicionActual = GetActorLocation();

	//Calcular el desplazamiento basado en la velocidad y tiempo transcurrido
	FVector Desplazamiento = DireccionMovimiento * VelocidadMovimiento * DeltaTime;
	posicionActual += Desplazamiento;

	SetActorLocation(posicionActual);
}
