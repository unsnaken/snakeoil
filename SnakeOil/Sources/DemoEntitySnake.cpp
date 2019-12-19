#include "StdAfx.h"

#include "DemoEntitySnake.h"

#include "DrawableObject.h"
#include "DemoEntityRock.h"
#include "DemoEntityTreat.h"

SO_NAMESPACE_BEGIN;

static const int s_kSnakeMaxSize = 16;
static const int s_kSnakeMinSize = 2;

DemoEntitySnake::DemoEntitySnake(int startX, int startY, int size, int color, int velocity)
	: m_isRunning(true)
	, m_size(size)
	, m_color(color)
	, m_velocity(velocity)
	, m_frameCounter(0)
	, m_currentDirection(Direction::Right)
{
	for (int i = 0; i < size; ++i)
	{
		DrawableObject obj = DrawableObject(startX + i, startY, color, color, 'X');
		AddDrawableObject(obj);
	}
}

DemoEntitySnake::~DemoEntitySnake()
{
}

void DemoEntitySnake::SetColor(int color)
{
	DrawableObjectVector& drawables = GetDrawableCollection();
	for (auto it = drawables.begin(); it != drawables.end(); ++it)
	{
		it->SetBGColor(color);
		it->SetTextColor(color);
	}
	m_color = color;
}

int DemoEntitySnake::GetColor() const
{
	return m_color;
}

void DemoEntitySnake::IncreaseSize(int value)
{
	if ((m_size + value) >= s_kSnakeMaxSize)
	{
		m_size = s_kSnakeMaxSize;
	}
	else
	{
		m_size += value;
	}

	DrawableObjectVector& drawables = GetDrawableCollection();
	DrawableObject theLast = drawables[drawables.size() - 1];

	for (int i = 0; i < value; ++i)
	{
		switch (m_currentDirection)
		{
		case Direction::Top:
			// TBD ..
			break;
		case Direction::Bottom:
			// TBD ..
			break;
		case Direction::Left:
			// TBD ..
			break;
		case Direction::Right:
			DrawableObject obj = DrawableObject(theLast.GetX() + i, theLast.GetY(), m_color, m_color, 'X');
			AddDrawableObject(obj);
			break;
		};
	}

}

void DemoEntitySnake::DecreaseSize(int value)
{
	if ((m_size - value) <= s_kSnakeMinSize)
	{
		m_size = s_kSnakeMinSize;
	}
	else
	{
		m_size -= value;
	}

	// TODO: impelement interfaces for deleting drawables
	DrawableObjectVector& drawables = GetDrawableCollection();
	for (int i = 0; i < value; ++i)
	{
		drawables.pop_back();
	}
}


void DemoEntitySnake::Run()
{
	m_isRunning = true;
}

void DemoEntitySnake::Stop()
{
	m_isRunning = false;
}

void DemoEntitySnake::OnCollision(Collidable* collidedObject)
{
	DemoEntityRock* rock = dynamic_cast<DemoEntityRock*>(collidedObject);
	if (rock != nullptr)
	{
		SetColor(DrawableObject::Black);
		Stop();
		return;
	}

	DemoEntityTreat* treat = dynamic_cast<DemoEntityTreat*>(collidedObject);
	if (treat != nullptr)
	{
		treat->ReSpawn();
		//IncreaseSize(2);
		return;
	}
}

void DemoEntitySnake::Update()
{
	// TODO: fetch field size from the global context
	// TODO: get framecounter from global context or use time instead
	if (m_isRunning)
	{
		if (m_frameCounter % (62 / m_velocity) == 0)
		{
			DrawableObjectVector& drawables = GetDrawableCollection();
			for (auto it = drawables.begin(); it != drawables.end(); ++it)
			{
				switch(m_currentDirection)
				{
				case Direction::Top:
					// TBD ..
					break;
				case Direction::Bottom:
					// TBD ..
					break;
				case Direction::Left:
					// TBD ..
					break;
				case Direction::Right:
					int x = it->GetX();
					if (x >= 40 - 1)
					{
						x = 0;
					}
					it->SetX(x + 1);
					break;
				};

			}
		}

		m_frameCounter++;
	}
}


SO_NAMESPACE_END;