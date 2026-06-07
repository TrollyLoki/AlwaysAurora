#include "AlwaysAuroraSkySphereLibrary.h"

void UAlwaysAuroraSkySphereLibrary::SetLockWeatherState(AFGSkySphere* SkySphere, bool Locked)
{
	SkySphere->bLockWeatherState = Locked;
}

bool UAlwaysAuroraSkySphereLibrary::GetLockWeatherState(AFGSkySphere* SkySphere)
{
	return SkySphere->bLockWeatherState;
}

AFGWeatherReaction* UAlwaysAuroraSkySphereLibrary::GetCurrentWeatherReaction(AFGSkySphere* SkySphere)
{
	return SkySphere->CurrentWeatherReaction;
}

EWeatherInterpState UAlwaysAuroraSkySphereLibrary::GetCurrentWeatherState(AFGSkySphere* SkySphere)
{
	return SkySphere->mCurrentWeatherState;
}
