#pragma once

#include "WorldEntity.h"

SO_NAMESPACE_BEGIN;

class DemoEntityTreat : public WorldEntity
{
public:
	DemoEntityTreat(int x, int y);
	~DemoEntityTreat();

	void Update() {};

	// DemoEntityTreat
	void ReSpawn();

	void AddLocationCoords(int x, int y);

private:
	struct Coordinates
	{
		int x;
		int y;
	};

	Coordinates GetNextLocationCoords();
	void AddShapeToDrowables(int x, int y);

	std::vector<Coordinates> m_locationCoords;
};

SO_NAMESPACE_END;