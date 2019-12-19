#pragma once

#include "WorldEntity.h"

SO_NAMESPACE_BEGIN;

class DemoEntitySnake: public WorldEntity
{
public:
	DemoEntitySnake(int startX, int startY, int size, int color, int velocity);
	~DemoEntitySnake();

	void OnCollision(Collidable& collidedObject);
	virtual void Update();

	// DemoEntitySnake
	void SetColor(int color);
	int GetColor() const;

	void Run();
	void Stop();

private:
	bool	m_isRunning;
	int		m_size;
	int		m_color;
	int		m_velocity;
	int		m_frameCounter; // TODO: move to global context
};

SO_NAMESPACE_END;

