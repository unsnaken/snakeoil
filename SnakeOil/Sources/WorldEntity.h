#pragma once

#include "Collidable.h"
#include "Renderable.h"

SO_NAMESPACE_BEGIN;

class WorldEntity: public Collidable, Renderable
{
public:
	WorldEntity();
	~WorldEntity();

	// Renderable 
	virtual DrawableObjectVector GetDrawableObjects();

	// Collidable
	virtual void OnCollision(Collidable& collidedObject);
	virtual std::vector<Coordinates> GetCollisionCoords();

	// WorldEntity
	void AddDrawableObject(DrawableObject object);

	void Update();

private:
	DrawableObjectVector m_drawableObjects;
};

SO_NAMESPACE_END;