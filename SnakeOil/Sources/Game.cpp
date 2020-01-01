#include "StdAfx.h"

#include "Game.h"

#include "Collider.h"
#include "InputMgr.h"
#include "WorldMgr.h"

#include "DemoWorld.h"

SO_NAMESPACE_BEGIN;

const time_t kMillisPerFrame = (1000 / FPS_RATE);

Game::Game()
	: m_isRunning(false)
	, m_inputMgr(InputMgr::GetInstance())
{
	m_collider.reset(new Collider());
	m_worldMgr.reset(new WorldMgr());
	m_renderer.reset(new Renderer(FIELD_WEIGHT, FIELD_HEIGHT, DrawableObject::Yellow, DrawableObject::Black));

	std::shared_ptr<DemoWorld> demo = std::make_shared<DemoWorld>();
	m_worldMgr->AddWorld(demo);
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
		m_inputMgr.ProcessInput();
		// update game world
		m_worldMgr->Update();
		// detect and process collisions
		m_collider->Run(m_worldMgr->GetActiveWorld()->GetCollidableObjects());
		// render game world
		m_renderer->Render(m_worldMgr->GetActiveWorld()->GetDrawableObjects());

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
