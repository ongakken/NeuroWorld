#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "enum_emotions__pf3257930707.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
class UStaticMeshComponent;
class ABP_positiveLocations_C__pf852780320;
class ABP_negativeLocations_C__pf852780320;
class AActor;
#include "AIpawnxcharacter__pfG2149493765.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Controllers/AI/AIpawn-character.AIpawn-character_C", OverrideNativeName="AIpawn-character_C"))
class AAIpawnxcharacter_C__pfG2149493765 : public ACharacter
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="body"))
	UStaticMeshComponent* bpv__body__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Current Mood", Category="Default", MultiLine="true", OverrideNativeName="currentMood"))
	FString bpv__currentMood__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta=(DisplayName="Energy", Category="Default", MultiLine="true", ClampMin="0", ClampMax="100.000", ExposeOnSpawn="true", OverrideNativeName="energy"))
	float bpv__energy__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta=(DisplayName="Hydration", Category="Default", MultiLine="true", ClampMin="0", ClampMax="100.000", ExposeOnSpawn="true", OverrideNativeName="hydration"))
	float bpv__hydration__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta=(DisplayName="Food", Category="Default", MultiLine="true", ClampMax="100.000", ClampMin="0", ExposeOnSpawn="true", OverrideNativeName="food"))
	float bpv__food__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta=(DisplayName="Dominant Emotion", Category="Default", MultiLine="true", OverrideNativeName="dominantEmotion"))
	E__enum_emotions__pf bpv__dominantEmotion__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Positive Emotion", Category="Default", MultiLine="true", OverrideNativeName="positiveEmotion"))
	bool bpv__positiveEmotion__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Positive Locations", Category="Default", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="positiveLocations"))
	TArray<ABP_positiveLocations_C__pf852780320*> bpv__positiveLocations__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Negative Locations", Category="Default", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="negativeLocations"))
	TArray<ABP_negativeLocations_C__pf852780320*> bpv__negativeLocations__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable1"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetOverlappingActors_OverlappingActors"))
	TArray<AActor*> b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_FilterArray_FilteredArray"))
	TArray<AActor*> b0l__CallFunc_FilterArray_FilteredArray__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable2"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable1"))
	bool b0l__Temp_bool_IsClosed_Variable1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable2"))
	bool b0l__Temp_bool_IsClosed_Variable2__pf;
	AAIpawnxcharacter_C__pfG2149493765(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_AIpawn-character_0"))
	void bpf__ExecuteUbergraph_AIpawnxcharacter__pfG_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_AIpawn-character_1"))
	void bpf__ExecuteUbergraph_AIpawnxcharacter__pfG_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
public:
};
