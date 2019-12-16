#pragma once

#include "World.h"

SO_NAMESPACE_BEGIN;

class WorldMgr
{
public:
	WorldMgr();
	~WorldMgr();

	void Update();

	void AddWorld(WorldPtr world);

	void SetActiveWorld(WorldPtr world);
	WorldPtr GetActiveWorld() const;

private:
	std::vector<WorldPtr>	m_worlds;
	WorldPtr				m_activeWorld;
};

SO_NAMESPACE_END;