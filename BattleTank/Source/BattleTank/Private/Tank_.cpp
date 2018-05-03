// Fill out your copyright notice in the Description page of Project Settings.

#include "Tank_.h"


// Sets default values
ATank_::ATank_()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATank_::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATank_::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATank_::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

