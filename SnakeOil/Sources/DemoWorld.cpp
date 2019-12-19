#include "StdAfx.h"

#include "DemoWorld.h"
#include "DemoEntityRock.h"
#include "DemoEntitySnake.h"

SO_NAMESPACE_BEGIN;

DemoWorld::DemoWorld()
{
	std::shared_ptr<DemoEntityRock> rock0 = std::make_shared<DemoEntityRock>(20, 5);
	AddEntity(rock0);

	std::shared_ptr<DemoEntitySnake> snake = std::make_shared<DemoEntitySnake>(24, 5, 4, DrawableObject::Green, 10);
	AddEntity(snake);
}

DemoWorld::~DemoWorld()
{
}

void DemoWorld::Update()
{
	return World::Update();
}

SO_NAMESPACE_END;