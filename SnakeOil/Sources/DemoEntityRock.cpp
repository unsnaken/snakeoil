#include "StdAfx.h"

#include "DemoEntityRock.h"

SO_NAMESPACE_BEGIN;

DemoEntityRock::DemoEntityRock(int x, int y, int size)
{
	for (int i = 0; i < size; ++i)
	{
		DrawableObject obj = DrawableObject(x + i, y, DrawableObject::Red, DrawableObject::Red, 'X');
		AddDrawableObject(obj);
	}
}

DemoEntityRock::~DemoEntityRock()
{
}

SO_NAMESPACE_END;