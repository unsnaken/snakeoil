
#include "StdAfx.h"

#include "DemoEntityTreat.h"

#include <stdlib.h>

SO_NAMESPACE_BEGIN;

DemoEntityTreat::DemoEntityTreat(int x, int y)
{
	AddLocationCoords(x, y);
	AddShapeToDrowables(x, y);
}

DemoEntityTreat::~DemoEntityTreat()
{
}

void DemoEntityTreat::AddShapeToDrowables(int x, int y)
{
	for (int i = 0; i < 2; ++i)
	{
		DrawableObject obj = DrawableObject(x + i, y, DrawableObject::Blue, DrawableObject::Blue, 'X');
		AddDrawableObject(obj);
	}
}

void DemoEntityTreat::AddLocationCoords(int x, int y)
{
	m_locationCoords.push_back(DemoEntityTreat::Coordinates{ x, y });
}

DemoEntityTreat::Coordinates DemoEntityTreat::GetNextLocationCoords()
{
	int nextVectorPos = std::rand() % m_locationCoords.size();
	return m_locationCoords[nextVectorPos];
}

void DemoEntityTreat::ReSpawn()
{
	DemoEntityTreat::Coordinates nextLocation = GetNextLocationCoords();

	ClearDrawableCollection();
	AddShapeToDrowables(nextLocation.x, nextLocation.y);
}

SO_NAMESPACE_END;