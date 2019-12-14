#pragma once

#include "WorldObject.h"

SO_NAMESPACE_BEGIN;

class World
{
public:
	World();
	~World();

	void Update();

private:
	std::vector<WorldObject> m_worldObjects;
};

typedef std::shared_ptr<World> WorldPtr;

SO_NAMESPACE_END;