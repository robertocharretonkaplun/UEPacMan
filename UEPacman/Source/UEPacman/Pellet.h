// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pellet.generated.h"

class USoundCue;

UENUM(BlueprintType)
enum class PelletType : uint8 {
	NORMAL = 0,
	SPECIAL = 1,
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPelletEatenEvent, PelletType, pelletType);

UCLASS()
class UEPACMAN_API APellet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APellet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Eat();

	UPROPERTY(EditAnywhere)
		PelletType pelletType = PelletType::NORMAL;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
			FPelletEatenEvent pelletEatenEvent;

private:
	UPROPERTY(EditAnywhere)
		USoundCue* eatSound;
};
