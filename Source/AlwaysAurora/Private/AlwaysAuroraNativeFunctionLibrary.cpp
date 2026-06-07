#include "AlwaysAuroraNativeFunctionLibrary.h"

#include "FGSkySphere.h"

void UAlwaysAuroraNativeFunctionLibrary::SetLockWeatherState(AFGSkySphere* SkySphere, const bool Locked)
{
	SkySphere->bLockWeatherState = Locked;
}
