#pragma once

#include "WorldEntity.h"

SO_NAMESPACE_BEGIN;

class DemoEntityRock: public WorldEntity
{
public:
	DemoEntityRock(int x, int y, int size);
	~DemoEntityRock();
};

SO_NAMESPACE_END;