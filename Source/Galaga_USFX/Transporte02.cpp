// Fill out your copyright notice in the Description page of Project Settings.


#include "Transporte02.h"

// Called when the game starts or when spawned
void ATransporte02::BeginPlay()
{
	Super::BeginPlay();

}

ATransporte02::ATransporte02()
{
	VelocidadMovimiento = 100.0f; //Velocidad predeterminada
	DireccionMovimiento = FVector(1.0f, 0.0f, 0.0f); //Determina la direccion donde va la nave eje x

	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
}

void ATransporte02::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ATransporte02::Mover(float DeltaTime)
{
	//Obtener la posicion actual del actor
	FVector posicionActual = GetActorLocation();

	//Calcular el desplazamiento basado en la velocidad y tiempo transcurrido
	FVector Desplazamiento = DireccionMovimiento * VelocidadMovimiento * DeltaTime;
	posicionActual += Desplazamiento;

	SetActorLocation(posicionActual);
}
