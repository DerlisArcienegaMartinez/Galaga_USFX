
// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"
#include "Kismet/GameplayStatics.h"
#include"Bomba.h"


//BEGINPLAY: Se llama cuando comienza el juego o cuando se genera.
void ANaveEnemigaCaza::BeginPlay()
{
	Super::BeginPlay();

//MOVIMIENTOS DE NAVE CAZA
	VelocidadMovimiento = 300.0f; //Velocidad predeterminada
	DireccionMovimiento = FVector(0.0f, 1.0f, 0.0f);

	//LIMITES DEL ESCENARIO
	LimiteDerecho = 1870.0f;         //Y
	LimiteInferior = -1950.0f;      //-X
	LimiteIzquierdo = -1870.0f;     //-Y
	LimiteSuperior = 1950.0f;        //X

	SetupBombaClass(); //configura el primer tiempo de lanzamiento de la bomba al inicio del juego.	
}

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	//MALLA DE LA NAVE
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/model.model'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

	BombaClass = ABomba::StaticClass(); //inicializa la propiedad BombaClass con la clase estática y lo llama constantemente

	//VIDA DE LA NAVE 
	Energia = 0; // Inicializar la energia que tendra la nave

	//intervalo de tiempo entre cada bomba(en segundos)
	IntervaloLanzarBombaMin = 3.0f;
	IntervaloLanzarBombaMax = 7.0f;
	TiempoUltimoLanzamiento = 0.0f;
}

//TICK: Llama a cada fotograma
void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);

	// Verificar si es el momento de lanzar una bomba
	TiempoUltimoLanzamiento += DeltaTime;
	if (TiempoUltimoLanzamiento >= TiempoProximoLanzamiento)
	{
		SoltarBomba();
		SetupBombaClass();
	}
}


//FUNCIONES

void ANaveEnemigaCaza::Mover(float DeltaTime)
{

	FVector PosicionActual = GetActorLocation();  // Obtener la posición actual del actor

	/* CALCULAR EL DESPLAZAMIENTO BASADO EN LA VELOCIDAD Y TIEMPO TRANSCURRIDO */
	FVector Desplazamiento = DireccionMovimiento * VelocidadMovimiento * DeltaTime;
	PosicionActual += Desplazamiento;

	/* VERIFICAR LOS LIMITES DEL ESCENARIO Y CAMBIAR LA DIRECCION DE MOVIMIENTO SI ES NECESARIO */
	if (PosicionActual.X < LimiteInferior || PosicionActual.X > LimiteSuperior)
	{
		DireccionMovimiento.X *= -1.0f;   // Invertir la dirección en el eje X para rebotar en la pared izquierda o derecha
	}
	if (PosicionActual.Y < LimiteIzquierdo || PosicionActual.Y > LimiteDerecho)
	{
		DireccionMovimiento.Y *= -1.0f;   // Invertir la dirección en el eje Y para rebotar en la pared inferior o superior
	}

	SetActorLocation(PosicionActual);   // Establecer la nueva posición del actor

}

void ANaveEnemigaCaza::Destruirse()
{
}

void ANaveEnemigaCaza::SoltarBomba()
{
	if (BombaClass)
	{
		// Obtener la ubicación de la nave enemiga para soltar la bomba
		FVector SpawnLocation = GetActorLocation();

		// Spawnea la bomba
		ABomba* Bomba = GetWorld()->SpawnActor<ABomba>(BombaClass, SpawnLocation, FRotator::ZeroRotator);

		if (Bomba)
		{
			// Configurar la velocidad de la bomba
			Bomba->SetVelocidadBomba(400.0f);
		}
	}
	
}


void ANaveEnemigaCaza::SetupBombaClass()
{
	
	// Generar un nuevo intervalo aleatorio
	float NuevoIntervalo = FMath::RandRange(IntervaloLanzarBombaMin, IntervaloLanzarBombaMax);

	// Configurar el próximo tiempo de lanzamiento
	TiempoProximoLanzamiento = TiempoUltimoLanzamiento + NuevoIntervalo;
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




