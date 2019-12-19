#pragma once

#include "World.h"

SO_NAMESPACE_BEGIN;

class DemoWorld: public World
{
public:
	DemoWorld();
	~DemoWorld();

	void Update();
};

SO_NAMESPACE_END;