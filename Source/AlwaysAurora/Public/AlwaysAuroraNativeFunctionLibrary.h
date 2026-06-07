#pragma once

#include "CoreMinimal.h"
#include "FGSkySphere.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AlwaysAuroraNativeFunctionLibrary.generated.h"

UCLASS()
class ALWAYSAURORA_API UAlwaysAuroraNativeFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category="AlwaysAurora")
	static void SetLockWeatherState(AFGSkySphere* SkySphere, bool Locked);

};
