#include "StdAfx.h"

#include "DrawableObject.h"

SO_NAMESPACE_BEGIN;

DrawableObject::DrawableObject()
	: m_x(0)
	, m_y(0)
	, m_color(DrawableObject::White)
	, m_symbol('o')
{
}

DrawableObject::~DrawableObject()
{
}

int DrawableObject::GetX() const
{
	return m_x;
}

void DrawableObject::SetX(int x)
{
	m_x = x;
}

int DrawableObject::GetY() const
{
	return m_y;
}

void DrawableObject::SetY(int y)
{
	m_y = y;
}

DrawableObject::Color DrawableObject::GetColor() const
{
	return m_color;
}

void DrawableObject::SetColor(DrawableObject::Color color)
{
	m_color = color;
}

int DrawableObject::GetSymbol() const
{
	return m_symbol;
}

void DrawableObject::SetSymbol(int symbol)
{
	m_symbol = symbol;
}

SO_NAMESPACE_END;
