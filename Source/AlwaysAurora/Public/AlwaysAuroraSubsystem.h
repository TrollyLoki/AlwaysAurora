#pragma once

#include "CoreMinimal.h"
#include "FGWeatherReaction.h"
#include "Subsystem/ModSubsystem.h"
#include "AlwaysAuroraSubsystem.generated.h"

UCLASS(Abstract, Blueprintable)
class ALWAYSAURORA_API AAlwaysAuroraSubsystem : public AModSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, Category="AlwaysAurora")
	void NewWeatherRolled(AFGSkySphere* SkySphere);

};
