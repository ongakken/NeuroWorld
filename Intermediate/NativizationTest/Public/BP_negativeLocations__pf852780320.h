#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/TriggerBox.h"
#include "BP_negativeLocations__pf852780320.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/BP/area-classes/BP_negativeLocations.BP_negativeLocations_C", OverrideNativeName="BP_negativeLocations_C"))
class ABP_negativeLocations_C__pf852780320 : public ATriggerBox
{
public:
	GENERATED_BODY()
	ABP_negativeLocations_C__pf852780320(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
