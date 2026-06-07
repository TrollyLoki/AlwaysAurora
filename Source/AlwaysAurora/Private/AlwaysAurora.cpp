#include "AlwaysAurora.h"

#include "AlwaysAuroraSubsystem.h"
#include "FGSkySphere.h"
#include "Kismet/GameplayStatics.h"
#include "Patching/NativeHookManager.h"

#define LOCTEXT_NAMESPACE "FAlwaysAuroraModule"

void PostRollNewWeather(TObjectPtr<AFGSkySphere> SkySphere)
{
	TObjectPtr<AAlwaysAuroraSubsystem> subsystem = static_cast<AAlwaysAuroraSubsystem*>(UGameplayStatics::GetActorOfClass(SkySphere, AAlwaysAuroraSubsystem::StaticClass()));
	if (subsystem != nullptr)
	{
		subsystem->NewWeatherRolled(SkySphere);
	}
}

void FAlwaysAuroraModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	if (!WITH_EDITOR)
	{
		SUBSCRIBE_METHOD_AFTER(AFGSkySphere::RollNewWeather, &PostRollNewWeather);
	}
}

void FAlwaysAuroraModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FAlwaysAuroraModule, AlwaysAurora)