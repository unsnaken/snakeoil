#include "StdAfx.h"

#include "WorldObject.h"

SO_NAMESPACE_BEGIN;

WorldObject::WorldObject()
{
}

WorldObject::~WorldObject()
{
}
 
DrawableObject WorldObject::GetDrawableObject()
{
    return DrawableObject();
}

void WorldObject::Update()
{
}


SO_NAMESPACE_END;
