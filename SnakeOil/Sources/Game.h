#pragma once

#include "InputMgr.h"
#include "WorldMgr.h"
#include "Render.h"

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

	std::shared_ptr<InputMgr>	m_inputMgr;
	std::shared_ptr<WorldMgr>	m_worldMgr;
	std::shared_ptr<Render>		m_render;
};

SO_NAMESPACE_END;
