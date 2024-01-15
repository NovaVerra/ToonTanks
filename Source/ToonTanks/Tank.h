// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tank.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATank : public ABasePawn
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, Category = "Components")
	class USpringArmComponent*	SpringArmComponent;
 
	UPROPERTY(VisibleAnywhere, Category = "Components")
	class UCameraComponent*		CameraComponent;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float	Speed;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float	TurnRate;

public:
	ATank();

	void	Move(float Value);
	void	Turn(float Value);

	// Called to bind functionality to input
	virtual void	SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
