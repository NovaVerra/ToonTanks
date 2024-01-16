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

	APlayerController*	PlayerController;

protected:
	virtual void	BeginPlay() override;

public:
	ATank();
	virtual void	Tick(float DeltaTime) override;

	void	MoveTank(float Value);
	void	TurnTank(float Value);

	virtual void	SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
