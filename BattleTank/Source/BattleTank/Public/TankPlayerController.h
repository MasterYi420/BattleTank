// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" //MUST BE THE LAST INCLUDE

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
	virtual void Tick(float) override;

public:
	ATank * GetControlledTank() const;

	virtual void BeginPlay() override; 
	
private:
	void AimTowardsCrosshair(); //start the tank moving the barrel so the shot would hit where the corss hair intersec the world
};
