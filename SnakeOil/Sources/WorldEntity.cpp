#include "StdAfx.h"

#include "WorldEntity.h"

SO_NAMESPACE_BEGIN;

WorldEntity::WorldEntity()
{
}

WorldEntity::~WorldEntity()
{
}
 
DrawableObjectVector WorldEntity::GetDrawableObjects()
{
    return m_drawableObjects;
}

void WorldEntity::AddDrawableObject(DrawableObject object)
{
    m_drawableObjects.push_back(object);
}

void WorldEntity::Update()
{
}


SO_NAMESPACE_END;
