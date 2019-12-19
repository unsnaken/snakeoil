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

	virtual void OnCollision(Collidable* collidedObject) = 0;
	virtual std::vector<Coordinates> GetCollisionCoords() = 0;
};

SO_NAMESPACE_END;
