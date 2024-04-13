// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodriza.h"

void ANaveEnemigaNodriza::BeginPlay()
{
	Super::BeginPlay();

    //LIMITES DEL ESCENARIO
    LimiteDerecho = 1870.0f;         //Y
    LimiteInferior = -1950.0f;      //-X
    LimiteIzquierdo = -1870.0f;     //-Y
    LimiteSuperior = 1950.0f;        //X

	velocidad = 200.0f;
    direccion = FVector(-1.0f, 0.0f, 0.0f);
}

ANaveEnemigaNodriza::ANaveEnemigaNodriza()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/ImageToStl_com_jim+nichols+ufo+1.ImageToStl_com_jim+nichols+ufo+1'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
}

void ANaveEnemigaNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}


void ANaveEnemigaNodriza::Mover(float DeltaTime)
{

    FVector PosicionActual = GetActorLocation();  // Obtener la posición actual del actor

/* CALCULAR EL DESPLAZAMIENTO BASADO EN LA VELOCIDAD Y TIEMPO TRANSCURRIDO */
    FVector Desplazamiento = direccion*velocidad* DeltaTime;
    PosicionActual += Desplazamiento;

    /* VERIFICAR LOS LIMITES DEL ESCENARIO Y CAMBIAR LA DIRECCION DE MOVIMIENTO SI ES NECESARIO */
    if (PosicionActual.X < LimiteInferior || PosicionActual.X > LimiteSuperior)
    {
        direccion.X *= -1.0f;   // Invertir la dirección en el eje X para rebotar en la pared izquierda o derecha
    }
    if (PosicionActual.Y < LimiteIzquierdo || PosicionActual.Y > LimiteDerecho)
    {
        direccion.Y *= -1.0f;   // Invertir la dirección en el eje Y para rebotar en la pared inferior o superior
    }

    SetActorLocation(PosicionActual);   // Establecer la nueva posición del actor
}

void ANaveEnemigaNodriza::Destruirse(float DeltaTime)
{
}

void ANaveEnemigaNodriza::Escapar(float DeltaTIme)
{
}

void ANaveEnemigaNodriza::Disparar(float DeltaTime)
{
}

void ANaveEnemigaNodriza::RecibirDanio(float Cantidad)
{
}

void ANaveEnemigaNodriza::RecoleccionRecursos(bool DeltaTime)
{
}

void ANaveEnemigaNodriza::MantenimientoNaves(bool DeltaTime)
{
}

void ANaveEnemigaNodriza::DespliegueNavesAuxiliares(float DeltaTime)
{
}

