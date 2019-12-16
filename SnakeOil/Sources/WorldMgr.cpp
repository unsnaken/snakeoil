#include "StdAfx.h"

#include "WorldMgr.h"

SO_NAMESPACE_BEGIN;

WorldMgr::WorldMgr()
	: m_activeWorld(nullptr)
{
}

WorldMgr::~WorldMgr()
{
}

void WorldMgr::Update()
{
	m_activeWorld->Update();
}

void WorldMgr::AddWorld(WorldPtr world)
{
	m_worlds.push_back(world);
}

void WorldMgr::SetActiveWorld(WorldPtr world)
{
	m_activeWorld = world;
}

WorldPtr WorldMgr::GetActiveWorld() const
{
	return m_activeWorld;
}

SO_NAMESPACE_END;