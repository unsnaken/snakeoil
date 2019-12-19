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
	void AddEntity(WorldEntityPtr entity);
	virtual void Update();

	std::vector<Collidable*> GetCollidableObjects();

private:
	std::vector<WorldEntityPtr> m_worldEntities;
};

typedef std::shared_ptr<World> WorldPtr;

SO_NAMESPACE_END;