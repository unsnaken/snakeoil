#include "StdAfx.h"

#include "World.h"

SO_NAMESPACE_BEGIN;

World::World()
{
}


World::~World()
{
}

DrawableObjectVector World::GetDrawableObjects()
{
	DrawableObjectVector result;

	for (auto it = m_worldEntities.begin(); it != m_worldEntities.end(); ++it)
	{
		DrawableObjectVector drawables = it->GetDrawableObjects();
		result.insert(result.end(), drawables.begin(), drawables.end());
	}

	return result;
}


void World::AddEntity(WorldEntity entity)
{
	m_worldEntities.push_back(entity);
}

std::vector<Collidable&> World::GetCollidableObjects()
{
	std::vector<Collidable&> result;
	result.insert(result.begin(), m_worldEntities.begin(), m_worldEntities.end());

	return result;
}


void World::Update()
{
	for (auto it = m_worldEntities.begin(); it != m_worldEntities.end(); ++it)
	{
		it->Update();
	}
}

SO_NAMESPACE_END;