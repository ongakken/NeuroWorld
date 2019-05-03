// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include <string>
#include <iostream>
#include "AIpawn_characterDefault.generated.h"

UCLASS()
class NEUROSIM_API AAIpawn_characterDefault : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAIpawn_characterDefault();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Needs")
	float foodLevel = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Needs")
	float hydrationLevel = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Needs")
	float energyLevel = 100;

	UFUNCTION(BlueprintCallable, Category = "'Needs' manipulation")
	void decrementNeeds();
	UFUNCTION(BlueprintCallable, Category = "'Needs' manipulation")
	void refillNeeds(FString needsToManipulate, float amount); //this func will be modifying individual needs based on certain events defined in BPs
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emotions")
	FString dominantEmotion; //var that holds the most intensive emotion in a character instance
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emotions")
	int emotionQuotient; //emotion categorization var (the value of this var will range from <-1; 1>, where minus are the negative emotions and plus are the positive ones; zero is a neutral)
	// 0 = neutral; happiness = <1; 5>;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FVector CurrentActorLocation;

	//UPROPERTY(EditAnywhere, Category = "Components")
	//UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, Category = "Components")
	UStaticMeshComponent* body;

	//FString dominantEmotion[6] = { "fear", "shock", "happiness", "love", "sadness", "neutral" };

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
