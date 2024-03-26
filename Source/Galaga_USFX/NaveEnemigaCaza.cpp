
// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"
#include "Kismet/GameplayStatics.h"


//BEGINPLAY: Se llama cuando comienza el juego o cuando se genera.
void ANaveEnemigaCaza::BeginPlay()
{
	Super::BeginPlay();

//MOVIMIENTOS DE NAVECAZA
	VelocidadMovimiento = 300.0f; //Velocidad predeterminada
	DireccionMovimiento = FVector(FMath::RandRange(-1000.0f, 1000.0f), FMath::RandRange(-1000.0f, 1000.0f), 0.f).GetSafeNormal(); // Dirección inicial aleatoria  //FVector(1.0f, 0.0f, 0.0f); //Determina la direccion donde va la nave eje x

	//LIMITES DEL ESCENARIO
	LimiteDerecho = 1000.0f;
	LimiteInferior = -1200.0f;
	LimiteIzquierdo = 0.0f;
	LimiteSuperior = 1000.0f;
}

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	//MALLA DE LA NAVE
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

	//VIDA DE LA NAVE 
	Energia = 50; // Inicializar la energia que tendra la nave
}


//TICK: Llama a cada fotograma
void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}


//FUNCIONES

void ANaveEnemigaCaza::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();  // Obtener la posición actual del actor

	/* CALCULAR EL DESPLAZAMIENTO BASADO EN LA VELOCIDAD Y TIEMPO TRANSCURRIDO */
	FVector Desplazamiento = DireccionMovimiento * VelocidadMovimiento * DeltaTime;
	PosicionActual += Desplazamiento;

	/* VERIFICAR LOS LIMITES DEL ESCENARIO Y CAMBIAR LA DIRECCION DE MOVIMIENTO SI ES NECESARIO */
	if (PosicionActual.X < LimiteIzquierdo || PosicionActual.X > LimiteDerecho)
	{
		DireccionMovimiento.X *= -1.0f;   // Invertir la dirección en el eje X para rebotar en la pared izquierda o derecha
	}
	if (PosicionActual.Y < LimiteInferior || PosicionActual.Y > LimiteSuperior)
	{
		DireccionMovimiento.Y *= -1.0f;   // Invertir la dirección en el eje Y para rebotar en la pared inferior o superior
	}

	SetActorLocation(PosicionActual);   // Establecer la nueva posición del actor
}

void ANaveEnemigaCaza::Destruirse()
{
}

void ANaveEnemigaCaza::RecibirDanio(float Cantidad)
{
	Energia -= Cantidad;    // Reducir la energía según la cantidad de daño recibido
	
	if (Energia <= 0)        // Verificar si la energía llega a cero o menos
	{
		Destroy();       // La nave ha sido destruida
	}
}

void ANaveEnemigaCaza::Escapar(float DeltaTIme)
{
}

void ANaveEnemigaCaza::Disparar()
{
}




