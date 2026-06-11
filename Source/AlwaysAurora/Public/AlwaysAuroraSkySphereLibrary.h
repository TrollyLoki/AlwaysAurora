#pragma once

#include "CoreMinimal.h"
#include "FGSkySphere.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AlwaysAuroraSkySphereLibrary.generated.h"

UCLASS()
class ALWAYSAURORA_API UAlwaysAuroraSkySphereLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category="AlwaysAurora")
	static void SetLockWeatherState(AFGSkySphere* SkySphere, bool Locked);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="AlwaysAurora")
	static bool GetLockWeatherState(AFGSkySphere* SkySphere);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="AlwaysAurora")
	static AFGWeatherReaction* GetCurrentWeatherReaction(AFGSkySphere* SkySphere);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="AlwaysAurora")
	static EWeatherInterpState GetCurrentWeatherState(AFGSkySphere* SkySphere);

	UFUNCTION(BlueprintCallable, Category="AlwaysAurora")
	static void RollNewWeather(AFGSkySphere* SkySphere);

};
