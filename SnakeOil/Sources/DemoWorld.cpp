#include "StdAfx.h"

#include "DemoWorld.h"
#include "DemoEntityRock.h"
#include "DemoEntityTreat.h"
#include "DemoEntitySnake.h"

SO_NAMESPACE_BEGIN;

DemoWorld::DemoWorld()
{
	std::shared_ptr<DemoEntityRock> rock = std::make_shared<DemoEntityRock>(20, 5);
	AddEntity(rock);

	std::shared_ptr<DemoEntityTreat> treat = std::make_shared<DemoEntityTreat>(35, 5);
	AddEntity(treat);

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