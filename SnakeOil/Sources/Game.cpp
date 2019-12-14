#include "StdAfx.h"

#include "Game.h"

#include "InputMgr.h"
#include "WorldMgr.h"

SO_NAMESPACE_BEGIN;

const time_t kMillisPerFrame = 16;

Game::Game():
	m_isRunning(false)
{
	m_inputMgr.reset(new InputMgr());
	m_worldMgr.reset(new WorldMgr());
	m_render.reset(new Render());

	WorldPtr demo = m_worldMgr->CreateWorld();
	m_worldMgr->SetActiveWorld(demo);
}

Game::~Game()
{
}

void Game::Run()
{
	assert(m_isRunning == false);
	m_isRunning = true;

	int counter = 0;

	while (m_isRunning)
	{
		std::time_t startTime = std::time(nullptr);
		
		// process input
		m_inputMgr->CaptureInput();
		// update game world
		m_worldMgr->Update();
		// render game world
		m_render->Draw();

		std::time_t sleepTime = (startTime + kMillisPerFrame) - std::time(nullptr);
		assert(sleepTime >= 0);
		std::this_thread::sleep_for(std::chrono::milliseconds(sleepTime));
	}
}

void Game::Stop()
{
	assert(m_isRunning == true);
}

SO_NAMESPACE_END;
