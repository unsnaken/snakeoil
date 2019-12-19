#include "StdAfx.h"

#include "DemoEntitySnake.h"

#include "DrawableObject.h"

SO_NAMESPACE_BEGIN;

DemoEntitySnake::DemoEntitySnake(int startX, int startY, int size, int color, int velocity)
	: m_isRunning(true)
	, m_size(size)
	, m_color(color)
	, m_velocity(velocity)
	, m_frameCounter(0)
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

void DemoEntitySnake::OnCollision(Collidable& collidedObject)
{
	SetColor(DrawableObject::Black);
	Stop();
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

void DemoEntitySnake::Run()
{
	m_isRunning = true;
}

void DemoEntitySnake::Stop()
{
	m_isRunning = false;
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
				int x = it->GetX();
				if (x >= 40 - 1)
				{
					x = 0;
				}
				it->SetX(x + 1);
			}
		}

		m_frameCounter++;
	}
}


SO_NAMESPACE_END;