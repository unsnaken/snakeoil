#pragma once

#include "Collidable.h"
#include "Renderable.h"

SO_NAMESPACE_BEGIN;

class WorldEntity: public Collidable, public Renderable
{
public:
	WorldEntity();
	~WorldEntity();

	// Renderable 
	virtual DrawableObjectVector GetDrawableObjects();

	// Collidable
	virtual void OnCollision(Collidable& collidedObject) {};
	virtual std::vector<Coordinates> GetCollisionCoords();

	// WorldEntity
	void AddDrawableObject(DrawableObject object);
	DrawableObjectVector& GetDrawableCollection(); // TODO: get rid of this method since it alsmot duplicates GetDrawableObjects

	virtual void Update() = 0;

private:
	DrawableObjectVector m_drawableObjects;
};

typedef std::shared_ptr<WorldEntity> WorldEntityPtr;

SO_NAMESPACE_END;