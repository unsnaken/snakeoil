#include "StdAfx.h"

#include "World.h"

SO_NAMESPACE_BEGIN;

World::World()
{
}


World::~World()
{
}

void World::Update()
{
	for (auto it = m_worldObjects.begin(); it != m_worldObjects.end(); ++it)
	{
		it->Update();
	}
}

SO_NAMESPACE_END;