//caza.cpp
// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"


// Called when the game starts or when spawned
void ANaveEnemigaCaza::BeginPlay()
{
	Super::BeginPlay();


	VelocidadMovimiento = 1000.0f; //Velocidad predeterminada
	DireccionMovimiento = FVector(FMath::RandRange(-1000.0f, 1000.0f), FMath::RandRange(-1000.0f, 1000.0f), 0.f).GetSafeNormal(); // Dirección inicial aleatoria  //FVector(1.0f, 0.0f, 0.0f); //Determina la direccion donde va la nave eje x

	LimiteDerecho = 1000.0f;
	LimiteInferior = -1200.0f;
	LimiteIzquierdo = 0.0f;
	LimiteSuperior = 1000.0f;



}

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

	Energia = 10; // Inicializar la energia que tendra la nave

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

	// Calcular el desplazamiento basado en la velocidad y tiempo transcurrido
	FVector Desplazamiento = DireccionMovimiento * VelocidadMovimiento * DeltaTime;
	PosicionActual += Desplazamiento;

	// Verificar los límites del escenario y cambiar la dirección de movimiento si es necesario
	if (PosicionActual.X < LimiteIzquierdo || PosicionActual.X > LimiteDerecho)
	{
		// Invertir la dirección en el eje X para rebotar en la pared izquierda o derecha
		DireccionMovimiento.X *= -1.0f;
	}

	if (PosicionActual.Y < LimiteInferior || PosicionActual.Y > LimiteSuperior)
	{
		// Invertir la dirección en el eje Y para rebotar en la pared inferior o superior
		DireccionMovimiento.Y *= -1.0f;
	}

	// Establecer la nueva posición del actor
	SetActorLocation(PosicionActual);

}

void ANaveEnemigaCaza::Destruirse(float DeltaTime)
{
}



void ANaveEnemigaCaza::RecibirDanio(float Cantidad)
{
	Energia -= Cantidad; // Reducir la energía según la cantidad de daño recibido

	// Verificar si la energía llega a cero o menos
	if (Energia <= 0)
	{
		// La nave ha sido destruida
		Destroy();
	}
}

void ANaveEnemigaCaza::Escapar(float DeltaTIme)
{
}

void ANaveEnemigaCaza::Atacar(float DeltaTime)
{
}




