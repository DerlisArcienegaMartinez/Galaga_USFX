// Fill out your copyright notice in the Description page of Project Settings.


#include "Caza01.h"


// Called when the game starts or when spawned
void ACaza01::BeginPlay()
{
	Super::BeginPlay();
	
	
	direction = FVector(0.0f, -1.0f, 0.0f);
		speed = 200.0f;

	
}

ACaza01::ACaza01()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));

	if (malla.Succeeded())
	{
		mallaNaveEnemiga->SetStaticMesh(malla.Object);
	}

	// Asignar las clases de las naves y las bombas (ajustar seg�n tus clases)
	
}

void ACaza01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);

}

void ACaza01::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();  // Obtener la posici�n actual del actor

	/* CALCULAR EL DESPLAZAMIENTO BASADO EN LA VELOCIDAD Y TIEMPO TRANSCURRIDO */
	FVector Desplazamiento = direction * speed * DeltaTime;
	PosicionActual += Desplazamiento;

	/* VERIFICAR LOS LIMITES DEL ESCENARIO Y CAMBIAR LA DIRECCION DE MOVIMIENTO SI ES NECESARIO */
	if (PosicionActual.X < LimiteInferior || PosicionActual.X > LimiteSuperior)
	{
		direction.X *= -1.0f;   // Invertir la direcci�n en el eje X para rebotar en la pared izquierda o derecha
	}
	if (PosicionActual.Y < LimiteIzquierdo || PosicionActual.Y > LimiteDerecho)
	{
		direction.Y *= -1.0f;   // Invertir la direcci�n en el eje Y para rebotar en la pared inferior o superior
	}

	SetActorLocation(PosicionActual);   // Establecer la nueva posici�n del actor
}







