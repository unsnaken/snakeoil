#include "StdAfx.h"

#include "Collider.h"

SO_NAMESPACE_BEGIN;

Collider::Collider()
{
}

Collider::~Collider()
{
}

void Collider::Run(std::vector<Collidable&> collidables)
{
	for (auto outerIt = collidables.begin(); outerIt != collidables.end(); ++outerIt)
	{
		for (auto innerIt = collidables.begin(); innerIt != collidables.end(); ++innerIt)
		{
			bool isIntersected = TestCoordsIntersection(innerIt->GetCollisionCoords(), outerIt->GetCollisionCoords());
			if (isIntersected)
			{
				innerIt->OnCollision(*outerIt);
				outerIt->OnCollision(*innerIt);
			}
		}
	}
}

bool Collider::TestCoordsIntersection(CoordsVector coordsA, CoordsVector coordsB)
{
	for (auto aIt = coordsA.begin(); aIt != coordsA.end(); ++aIt)
	{
		for (auto bIt = coordsB.begin(); bIt != coordsB.end(); ++bIt)
		{
			if ((aIt->X == bIt->X) && (aIt->Y == bIt->Y))
			{
				return true;
			}
		}
	}
	return false;
}

SO_NAMESPACE_END;
