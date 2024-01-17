// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tower.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATower : public ABasePawn
{
	GENERATED_BODY()

private:
	class ATank*	Tank;
	FTimerHandle	FireRateTimerHandle;
	float			FireRate = 2.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	float	LockOnRange;

protected:
	virtual void	BeginPlay() override;

public:
	virtual void	Tick(float DeltaTime) override;
	void			CheckFireCondition();
	bool			InFireRange();
};
