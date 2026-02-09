#pragma once

#include "CoreMinimal.h"
#include "FGSkySphere.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AlwaysAuroraFunctionLibrary.generated.h"

UCLASS()
class ALWAYSAURORA_API UAlwaysAuroraFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION( BlueprintPure, Category = "AlwaysAurora" )
	static FName GetWeatherStateName(const FWeatherChanceEntry& State);
	
	UFUNCTION( BlueprintCallable, Category = "AlwaysAurora" )
	static int32 FindWeatherStateByName(const AFGSkySphere* SkySphere, const FName EntryName);
	
	UFUNCTION( BlueprintCallable, Category = "AlwaysAurora" )
	static void SetLockWeatherState(AFGSkySphere* SkySphere, const bool Locked);
};
