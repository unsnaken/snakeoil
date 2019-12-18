#include "StdAfx.h"

#include "WorldEntity.h"

SO_NAMESPACE_BEGIN;

WorldEntity::WorldEntity()
{
}

WorldEntity::~WorldEntity()
{
}
 
void WorldEntity::OnCollision(Collidable& collidedObject)
{
}

std::vector<WorldEntity::Coordinates> WorldEntity::GetCollisionCoords()
{
    for (auto it = m_drawableObjects.begin(); it != m_drawableObjects.end(); ++it)
    {
        ;
    }
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
