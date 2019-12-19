#pragma once

#include "WorldEntity.h"

SO_NAMESPACE_BEGIN;

class DemoEntitySnake: public WorldEntity
{
public:
	DemoEntitySnake(int startX, int startY, int size, int color, int velocity);
	~DemoEntitySnake();

	void OnCollision(Collidable* collidedObject);
	virtual void Update();

	// DemoEntitySnake
	void SetColor(int color);
	int GetColor() const;
	void IncreaseSize(int value);
	void DecreaseSize(int value);

	void Run();
	void Stop();

private:
	enum class Direction
	{
		Top		= 0,
		Bottom	= 1,
		Left	= 2,
		Right	= 3,
	};

	bool		m_isRunning;
	int			m_size;
	int			m_color;
	int			m_velocity;
	int			m_frameCounter; // TODO: move to global context
	Direction	m_currentDirection;
};

SO_NAMESPACE_END;

