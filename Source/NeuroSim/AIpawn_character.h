	// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "UObject/ObjectMacros.h"
#include <string>
#include <iostream>
#include <thread>
#include "AIpawn_character.generated.h"

UCLASS()
class NEUROSIM_API AAIpawn_character : public APawn
{
	GENERATED_BODY()


public:
	// Sets default values for this pawn's properties
	AAIpawn_character();
	float foodLevel;
	float hydrationLevel;
	float energyLevel;
	FString needsToManipulate;
	float amount; //this var could be used in many different occasions

	UFUNCTION(BlueprintCallable, Category = "Needs manipulation")
	void decrementNeeds();
	UFUNCTION(BlueprintCallable, Category = "Needs manipulation")
	void refillNeeds(FString needsToManipulate, float amount); //this func will be modifying individual needs based on certain events defined in BPs

	FString dominantEmotion; //var that holds the most intensive emotion in a character instance
	int emotionQuotient; //emotion categorization var (the value of this var will range from <-1; 1>, where minus are the negative emotions and plus are the positive ones; zero is a neutral)
	// 0 = neutral; happiness = <1; 5>;
protected:
	// Called when the game starts or when spawned 
	virtual void BeginPlay() override;

	FVector CurrentActorLocation;

	//static mesh component pointer
	UPROPERTY(EditAnywhere, Category = "Components") //this sets values for different UE4-native properties (description, category, etc.)
	UStaticMeshComponent* Mesh;
	UPROPERTY(EditAnywhere, Category = "Components")
	UCameraComponent*  Camera;
	//UPROPERTY(EditAnywhere, Category = "Components")
	//UBoxComponent* Collider;

	//UFUNCTION()
	//void OnColliderBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	//FString dominantEmotion[6] = { "fear", "shock", "happiness", "love", "sadness", "neutral" };


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};