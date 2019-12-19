
#include "StdAfx.h"

#include "DemoEntityTreat.h"

SO_NAMESPACE_BEGIN;

DemoEntityTreat::DemoEntityTreat(int x, int y)
{
	for (int i = 0; i < 2; ++i)
	{
		DrawableObject obj = DrawableObject(x + i, y, DrawableObject::Blue, DrawableObject::Blue, 'X');
		AddDrawableObject(obj);
	}
}

DemoEntityTreat::~DemoEntityTreat()
{
}

void DemoEntityTreat::ReSpawn()
{
	DrawableObjectVector& drawables = GetDrawableCollection();
	// TODO: make interface in Drawables for these
	drawables.clear();
	// TBD...
}

SO_NAMESPACE_END;