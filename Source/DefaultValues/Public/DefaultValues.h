// Copyright Dream Seed LLC

#pragma once

#include "Modules/ModuleManager.h"

class FDefaultValuesModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
