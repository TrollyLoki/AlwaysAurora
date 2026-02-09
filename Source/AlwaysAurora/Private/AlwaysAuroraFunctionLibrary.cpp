#include "AlwaysAuroraFunctionLibrary.h"

#include "FGSkySphere.h"

FName UAlwaysAuroraFunctionLibrary::GetWeatherStateName(const FWeatherChanceEntry& State)
{
	return State.EntryName;
}

int32 UAlwaysAuroraFunctionLibrary::FindWeatherStateByName(const AFGSkySphere* SkySphere, const FName EntryName)
{
	for (auto It = SkySphere->mWeatherStateList.CreateConstIterator(); It; ++It)
	{
		if (It->EntryName == EntryName)
		{
			return It.GetIndex();
		}
	}
	return -1;
}

void UAlwaysAuroraFunctionLibrary::SetLockWeatherState(AFGSkySphere* SkySphere, const bool Locked)
{
	SkySphere->bLockWeatherState = Locked;
}