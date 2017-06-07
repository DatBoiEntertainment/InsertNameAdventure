// Fill out your copyright notice in the Description page of Project Settings.

#include "Fag_C.h"


// Sets default values
AFag_C::AFag_C()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFag_C::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFag_C::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFag_C::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

