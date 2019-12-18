#pragma once

#include "StdAfx.h"

SO_NAMESPACE_BEGIN;

class Collidable
{
public:
	struct Coordinates {
		int X;
		int Y;
	};

	virtual void OnCollision(Collidable& collidedObject);
	virtual std::vector<Coordinates> GetCollisionCoords();
};

SO_NAMESPACE_END;
