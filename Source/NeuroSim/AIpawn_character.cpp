#include "AIpawn_character.h"
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <Engine.h>
#include "Classes/Components/StaticMeshComponent.h"
#include "Classes/Components/BoxComponent.h"
#include "Classes/Camera/CameraComponent.h"
#include "Camera/CameraComponent.h"

using namespace std;


// Sets default values
AAIpawn_character::AAIpawn_character()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh"); //defining a new component (subobject) for the current actor
	/* Camera = CreateDefaultSubobject<UCameraComponent>("Camera"); //defining a primary camera that will provide an exclusive look on this actor
	Camera->SetRelativeLocation(FVector(-500.f, 0.f, 0.f));
	Camera->SetupAttachment(Mesh); */
	
}

void AAIpawn_character::decrementNeeds()
{
		foodLevel = foodLevel - 0.1f;
		energyLevel = energyLevel - 0.2f;
		hydrationLevel = hydrationLevel - 0.5f;
}

void AAIpawn_character::refillNeeds(FString needsToManipulate, float amount) {
	//refill 'needs' based on the string input (which 'need' to refill) and by how much

	if (needsToManipulate == "food") {
		if (foodLevel <= 100) {
			foodLevel += amount;
		}
		else {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("I'm full")));
		}
	}
	else if (needsToManipulate == "energy") {
		if (energyLevel <= 100) {
			energyLevel += amount;
		}
		else {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("I'm energized")));
		}
	}
	else if (needsToManipulate == "hydration") {
		if (hydrationLevel <= 100) {
			hydrationLevel += amount;
		}
		else {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("I'm hydrated")));
		}
	}
}

// Called when the game starts or when spawned
		void AAIpawn_character::BeginPlay() {
			Super::BeginPlay();
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("running ...")));

		}

// Called every frame
void AAIpawn_character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	CurrentActorLocation = GetActorLocation();
}

// Called to bind functionality to input
void AAIpawn_character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}