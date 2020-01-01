#pragma once

#include "World.h"
#include "InputEventListener.h"

SO_NAMESPACE_BEGIN;

class DemoWorld: public World, InputEventListener
{
public:
	DemoWorld();
	~DemoWorld();

	// World
	void Update();

	// InputEventListener
	void OnInputEvent(InputEvent event);

private:
	bool m_isPaused;
};

SO_NAMESPACE_END;