//caza.cpp
// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"


// Called when the game starts or when spawned
void ANaveEnemigaCaza::BeginPlay()
{
	Super::BeginPlay();


	VelocidadMovimiento = 1000.0f; //Velocidad predeterminada
	DireccionMovimiento = FVector(FMath::RandRange(-1000.0f, 1000.0f), FMath::RandRange(-1000.0f, 1000.0f), 0.f).GetSafeNormal(); // Direcci�n inicial aleatoria  //FVector(1.0f, 0.0f, 0.0f); //Determina la direccion donde va la nave eje x

	LimiteDerecho = 1600.0f;
	LimiteInferior = -1600.0f;
	LimiteIzquierdo = -1600.0f;
	LimiteSuperior = 1600.0f;

	/*VelocidadZigzag = 100.0f;
	AmplitudZigzag = 52.0f;*/

	//UbicacionInicial = GetActorLocation();
	//TiempoTranscurrido = 0.f;

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
	//// Genera una direcci�n de movimiento aleatoria
	//FVector DirectionMovimiento = FVector(FMath::FRandRange(-1000.0f, 1000.0f), FMath::FRandRange(-1000.0f, 1000.0f), 0.f).GetSafeNormal();

	//// Aplica la direcci�n de movimiento a la posici�n actual de la nave
	//FVector NewLocation = GetActorLocation() + DirectionMovimiento * 100.f * GetWorld()->DeltaTimeSeconds;

	//// Actualiza la posici�n de la nave
	//SetActorLocation(NewLocation);

// Obtener la posici�n actual del actor
	FVector PosicionActual = GetActorLocation();

	// Calcular el desplazamiento basado en la velocidad y tiempo transcurrido
	FVector Desplazamiento = DireccionMovimiento * VelocidadMovimiento * DeltaTime;
	PosicionActual += Desplazamiento;

	// Verificar los l�mites del escenario y cambiar la direcci�n de movimiento si es necesario
	if (PosicionActual.X < LimiteIzquierdo || PosicionActual.X > LimiteDerecho)
	{
		// Invertir la direcci�n en el eje X para rebotar en la pared izquierda o derecha
		DireccionMovimiento.X *= -1.0f;
	}

	if (PosicionActual.Y < LimiteInferior || PosicionActual.Y > LimiteSuperior)
	{
		// Invertir la direcci�n en el eje Y para rebotar en la pared inferior o superior
		DireccionMovimiento.Y *= -1.0f;
	}

	// Establecer la nueva posici�n del actor
	SetActorLocation(PosicionActual);

}



void ANaveEnemigaCaza::Destruirse(float DeltaTime)
{
}

void ANaveEnemigaCaza::Escapar(float DeltaTIme)
{
}

void ANaveEnemigaCaza::Atacar(float DeltaTime)
{
}





//// Obtener la posici�n actual del actor
//FVector PosicionActual = GetActorLocation();
//
//// Cambiar la direcci�n de movimiento si la nave est� a punto de chocar con una pared
//if (PosicionActual.X < LimiteIzquierdo || PosicionActual.X > LimiteDerecho ||
//	PosicionActual.Y < LimiteInferior || PosicionActual.Y > LimiteSuperior)
//{
//	// Cambiar la direcci�n de movimiento aleatoriamente
//	DireccionMovimiento = FVector(FMath::RandRange(-1000.0f, 1000.0f), FMath::RandRange(-1000.0f, 1000.0f), 0.f).GetSafeNormal();
//}