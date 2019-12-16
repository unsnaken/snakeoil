#pragma once

#include "WorldEntity.h"

#include "Renderable.h"

SO_NAMESPACE_BEGIN;

class World: public Renderable
{
public:
	World();
	~World();

	// Renderable 
	DrawableObjectVector GetDrawableObjects();

	// World
	void AddEntity(WorldEntity entity);
	void Update();

private:
	std::vector<WorldEntity> m_worldEntities;
};

typedef std::shared_ptr<World> WorldPtr;

SO_NAMESPACE_END;