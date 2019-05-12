#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include <string>
#include <iostream>
#include "Camera/CameraComponent.h"
#include "Components/AudioComponent.h"
#include "AIpawn_characterDefault.generated.h"

UCLASS(BlueprintType, Blueprintable, meta = (BlueprintSpawnableComponent))
class NEUROSIM_API AAIpawn_characterDefault : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAIpawn_characterDefault();
	UPROPERTY(EditAnywhere, Category = "Core AI logic")
		FString positiveLocations[999]; //a garbage collecting method should be implemented [forgetting things]
	UPROPERTY(EditAnywhere, Category = "Core AI logic")
		FString negativeLocations[999]; //a garbage collecting method should be implemented [forgetting things]
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Needs")
		float foodLevel = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Needs")
		float hydrationLevel = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Needs")
		float energyLevel = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aux")
		int auxInt_pos = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aux")
		int auxInt_neg = 0;

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		UStaticMeshComponent* body;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		UCameraComponent* Camera;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		UAudioComponent* mouthOutput;

	UFUNCTION(BlueprintCallable, Category = "Core AI logic")
		void AIsenseDecision(int sense, FSoftClassPath detectedColliderClass, FSoftObjectPath detectedColliderInstance, FSoftClassPath detectedCharacterClass, FSoftObjectPath detectedCharacterInstance); //to be finished, gotta figure out how to reference individual class instances in the world and get their identifiers to here
	UFUNCTION(BlueprintCallable, Category = "Core AI logic")
		void locationDecision(FString colliderInstance); //this func will decide whether to return to a certain place and how probable that is based on the emotion(s) experienced there
	UFUNCTION(BlueprintCallable, Category = "'Needs' manipulation")
		void decrementNeeds();
	UFUNCTION(BlueprintCallable, Category = "'Needs' manipulation")
		void refillNeeds(FString needsToManipulate, float amount); //this func will be modifying individual needs based on certain events defined in BPs
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emotions")
		FString dominantEmotion; //var that holds the most intensive emotion in a character instance
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Emotions")
		int emotionQuotient; //emotion categorization var (the value of this var will range from <-1; 1>, where minus are the negative emotions and plus are the positive ones; zero is a neutral)

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//UPROPERTY(EditAnywhere, Category = "Components")
	//UCameraComponent* Camera;

	//FString dominantEmotion[6] = { "fear", "shock", "happiness", "love", "sadness", "neutral" };

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
