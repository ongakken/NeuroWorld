#include "AIpawn_characterDefault.h"
#include <iostream>
#include <ostream>
#include <stdio.h>
#include <conio.h>
#include <Engine.h>
#include "Classes/Components/StaticMeshComponent.h"
#include "Classes/Components/BoxComponent.h"
#include "Classes/Camera/CameraComponent.h"
#include "Camera/CameraComponent.h"

using namespace std;

// Sets default values
AAIpawn_characterDefault::AAIpawn_characterDefault()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	body = CreateDefaultSubobject<UStaticMeshComponent>("Mesh"); //defining a new Static Mesh Component (Subobject) for the current Actor
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera"); //defining a primary camera that will provide an exclusive look on this Actor
	Camera->SetRelativeLocation(FVector(-500.f, 0.f, 0.f)); //setting the Camera's relative position to the Actor
	Camera->SetupAttachment(body); //attaching the Camera to the Actor's 'body' Component
	mouthOutput = CreateDefaultSubobject<UAudioComponent>("Mouth Output"); //defining an Audio Component capable of playing .wav audio files
	//mouthOutput->SetSound(); //load audio cue already created in the editor

}

void AAIpawn_characterDefault::refillNeeds(FString needsToManipulate, float amount)
{
	//refill 'needs' based on the string input (which 'need' to refill) and by how much

	if (needsToManipulate == "food")
	{
		if (foodLevel <= 100)
		{
			foodLevel += amount;
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("I'm full")));
		}
	}
	else if (needsToManipulate == "energy")
	{
		if (energyLevel <= 100)
		{
			energyLevel += amount;
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("I'm energized")));
		}
	}
	else if (needsToManipulate == "hydration")
	{
		if (hydrationLevel <= 100)
		{
			hydrationLevel += amount;
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("I'm hydrated")));
		}
	}
}

void AAIpawn_characterDefault::AIsenseDecision(int sense, FSoftClassPath detectedColliderClass, FSoftObjectPath detectedColliderInstance, FSoftClassPath detectedCharacterClass, FSoftObjectPath detectedCharacterInstance) //detecting an Actor Instance and deciding whether to react to it or not and if yes, how exactly
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Actor Instance detected"))); //for debugging purposes, print a message to the screen saying that we indeed have detected an unspecified Actor Instance
	if (sense == 0)
	{
		throw "!!![ 1011.1 ]SimtERROR: Invalid 'sense' identifier!!!";
	}
	else if (sense == 1)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Sight sense has just been used")));
		if (emotionQuotient == 1)
		{
			auxInt_pos++;
			positiveLocations[auxInt_pos] = &detectedColliderInstance;
			
		}
		else if (emotionQuotient == -1)
		{
			auxInt_neg++;
			negativeLocations[auxInt_neg] = &detectedColliderInstance;

		}
		else
		{
			throw "!!![ 1011.2 ]SimtERROR: Emotion Quotient unknown (not a 1 or a -1)!!!";
		}
	}
	else if (sense == 2)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Hearing sense has just been used")));
		cout << &detectedColliderClass;
		if (emotionQuotient == 1)
		{
			auxInt_pos++;
			positiveLocations[auxInt_pos] = &detectedColliderInstance;
		}
		else if (emotionQuotient == -1)
		{
			auxInt_neg++;
			negativeLocations[auxInt_neg] = &detectedColliderInstance;
		}
		else
		{
			throw "!!![ 1011.2 ]SimtERROR: Emotion Quotient unknown (not a 1 or a -1)!!!";
		}
	}

	//'sense' int - if we get a 0, the sense info is n/a; if we get a 1, the sense is sight and if we get a 2 the sense is hearing
	//after getting the 'sense' var, we'll read the 'detectedActorInstance' var and decide how to proceed
}

void AAIpawn_characterDefault::locationDecision(FSoftClassPath detectedColliderClass)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("locationDecision run")));
	if (dominantEmotion == "fear" && detectedColliderClass == "") //to add the appropriate emotion collider class
	{
		emotionQuotient = '-1';
	}
	else if (dominantEmotion == "shock" && detectedColliderClass == "BP_negativeLocation")
	{
		emotionQuotient = '-1';
	}
	else if (dominantEmotion == "love" && detectedColliderClass == "")
	{
		emotionQuotient = '1';
	}
	else if (dominantEmotion == "happiness" && detectedColliderClass == "")
	{
		emotionQuotient = '1';
	}
	else if (dominantEmotion == "sadness" && detectedColliderClass == "")
	{
		emotionQuotient = '-1';
	}
	else if (dominantEmotion == "neutral" && detectedColliderClass == "")
	{
		emotionQuotient = '0';
	}
	//calculate the probability of returning (or not returning) to the location being decided
	//insert the probability value into the behavior tree service used to navigate through the navmesh(navmeshes)
}

void AAIpawn_characterDefault::decrementNeeds()
{
	foodLevel = foodLevel - 0.1f;
	energyLevel = energyLevel - 0.2f;
	hydrationLevel = hydrationLevel - 0.5f;
}

// Called when the game starts or when spawned
void AAIpawn_characterDefault::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("executing C++ AIpawn_char")));
}

// Called every frame
void AAIpawn_characterDefault::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AAIpawn_characterDefault::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}