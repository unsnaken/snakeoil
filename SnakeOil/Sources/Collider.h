#pragma once

#include "Collidable.h"

SO_NAMESPACE_BEGIN;

class Collider
{
public:
	Collider();
	~Collider();

	void Run(std::vector<Collidable&> collidables);

private:
	typedef std::vector<Collidable::Coordinates&> CoordsVector;

	bool TestCoordsIntersection(CoordsVector coordsA, CoordsVector coordsB);
};

SO_NAMESPACE_END;

