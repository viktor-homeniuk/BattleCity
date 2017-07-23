// Viktor Gomeniuk : https://github.com/vgomeniuk

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TrackComponent.generated.h"


UCLASS(meta = (BlueprintSpawnableComponent), ClassGroup = (TankMesh))
class BATTLECITY_API UTrackComponent : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Input")
	void SetThrottle(float Throttle);

protected:
	UPROPERTY(EditDefaultsOnly, meta = (Category="Setup", DisplayName="Max Movement Force (Newtons)"))
	float TrackMax = 20000000.0f;

private:
	UTrackComponent();
	void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction);

};
