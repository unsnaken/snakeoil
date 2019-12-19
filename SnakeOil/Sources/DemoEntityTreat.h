#pragma once

#include "WorldEntity.h"

SO_NAMESPACE_BEGIN;

class DemoEntityTreat : public WorldEntity
{
public:
	DemoEntityTreat(int x, int y);
	~DemoEntityTreat();

	void Update() {};

	// DemoEntityTreat
	void ReSpawn();
};

SO_NAMESPACE_END;