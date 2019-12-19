#include "StdAfx.h"

#include "WorldEntity.h"

SO_NAMESPACE_BEGIN;

WorldEntity::WorldEntity()
{
}

WorldEntity::~WorldEntity()
{
}

std::vector<WorldEntity::Coordinates> WorldEntity::GetCollisionCoords()
{
    std::vector<WorldEntity::Coordinates> coords;

    for (auto it = m_drawableObjects.begin(); it != m_drawableObjects.end(); ++it)
    {
        coords.push_back(WorldEntity::Coordinates{it->GetX(), it->GetY()});
    }
    return coords;
}

DrawableObjectVector WorldEntity::GetDrawableObjects()
{
    return m_drawableObjects;
}

void WorldEntity::AddDrawableObject(DrawableObject object)
{
    m_drawableObjects.push_back(object);
}

DrawableObjectVector& WorldEntity::GetDrawableCollection()
{
    return m_drawableObjects;
}

void WorldEntity::Update()
{
}


SO_NAMESPACE_END;
