#include "StdAfx.h"

#include "InputMgr.h"

#include "DemoWorld.h"
#include "DemoEntityRock.h"
#include "DemoEntityTreat.h"
#include "DemoEntitySnake.h"

#include <stdlib.h>

SO_NAMESPACE_BEGIN;

DemoWorld::DemoWorld()
	: m_isPaused(false)
{
	//std::shared_ptr<DemoEntityRock> rock = std::make_shared<DemoEntityRock>(20, 5);
	//AddEntity(rock);

	std::shared_ptr<DemoEntityTreat> treat = std::make_shared<DemoEntityTreat>(35, 5);
	treat->AddLocationCoords(20, 10);
	treat->AddLocationCoords(30, 18);
	treat->AddLocationCoords(5, 2);
	AddEntity(treat);

	std::shared_ptr<DemoEntitySnake> snake = std::make_shared<DemoEntitySnake>(24, 5, 4, DrawableObject::Green, 10);
	AddEntity(snake);

	InputMgr::GetInstance().AddEventListener(this);
}

DemoWorld::~DemoWorld()
{
}

void DemoWorld::Update()
{
	if (m_isPaused)
	{
		return;
	}

	World::Update();
}

void DemoWorld::OnInputEvent(InputEvent event)
{
	if (event.GetButton() == Button::Space && event.GetState() == ButtonState::Up)
	{
		m_isPaused = !m_isPaused;
		return;
	}

	if (event.GetButton() == Button::Esc && event.GetState() == ButtonState::Up)
	{
		exit(0);
	}
}


SO_NAMESPACE_END;