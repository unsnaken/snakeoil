#pragma once

#include "Collider.h"
#include "InputMgr.h"
#include "WorldMgr.h"
#include "Renderer.h"

SO_NAMESPACE_BEGIN;

class Game
{
public:
	Game();
	~Game();

	void Run();
	void Stop();

private:
	bool m_isRunning;

	std::shared_ptr<Collider>	m_collider;
	std::shared_ptr<InputMgr>	m_inputMgr;
	std::shared_ptr<WorldMgr>	m_worldMgr;
	std::shared_ptr<Renderer>	m_renderer;
};

SO_NAMESPACE_END;
