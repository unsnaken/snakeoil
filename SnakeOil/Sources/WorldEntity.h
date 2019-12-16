#pragma once

#include "Renderable.h"

SO_NAMESPACE_BEGIN;

class WorldEntity: public Renderable
{
public:
	WorldEntity();
	~WorldEntity();

	// Renderable 
	virtual DrawableObjectVector GetDrawableObjects();

	// WorldEntity
	void AddDrawableObject(DrawableObject object);

	void Update();

private:
	DrawableObjectVector m_drawableObjects;
};

SO_NAMESPACE_END;