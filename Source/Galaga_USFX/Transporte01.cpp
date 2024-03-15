// Fill out your copyright notice in the Description page of Project Settings.


#include "Transporte01.h"

// Called when the game starts or when spawned
void ATransporte01::BeginPlay()
{
	Super::BeginPlay();

}

ATransporte01::ATransporte01()
{
	VelocidadMovimiento = -30.0f; //Velocidad predeterminada
	DireccionMovimiento = FVector(1.0f, 0.0f, 0.0f); //Determina la direccion donde va la nave eje x

	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
}

void ATransporte01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ATransporte01::Mover(float DeltaTime)
{
	//Obtener la posicion actual del actor
	FVector posicionActual = GetActorLocation();

	//Calcular el desplazamiento basado en la velocidad y tiempo transcurrido
	FVector Desplazamiento = DireccionMovimiento * VelocidadMovimiento * DeltaTime;
	posicionActual += Desplazamiento;

	SetActorLocation(posicionActual);
}
