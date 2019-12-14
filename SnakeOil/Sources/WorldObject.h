#pragma once

#include "Renderable.h"

SO_NAMESPACE_BEGIN;

class WorldObject: public Renderable
{
public:
	WorldObject();
	~WorldObject();

	// Renderable 
	virtual DrawableObject GetDrawableObject();

	// WorldObject
	void Update();

private:
	DrawableObject m_drawableObject;
};

SO_NAMESPACE_END;