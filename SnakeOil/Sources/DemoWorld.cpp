#include "StdAfx.h"

#include "DemoWorld.h"
#include "DemoEntityRock.h"

SO_NAMESPACE_BEGIN;

DemoWorld::DemoWorld()
{
	DemoEntityRock rock = DemoEntityRock(2, 2, 2);
	AddEntity(rock);
}

DemoWorld::~DemoWorld()
{
}

SO_NAMESPACE_END;