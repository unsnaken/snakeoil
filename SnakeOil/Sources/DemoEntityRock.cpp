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

	for (int i = 0; i < size; ++i)
	{
		DrawableObject obj1 = DrawableObject(x, y + i, DrawableObject::Red, DrawableObject::Red, 'X');
		DrawableObject obj2 = DrawableObject(x+1, y + i, DrawableObject::Red, DrawableObject::Red, 'X');

		AddDrawableObject(obj1);
		AddDrawableObject(obj2);

	}

}

DemoEntityRock::~DemoEntityRock()
{
}

SO_NAMESPACE_END;