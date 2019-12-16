#include "StdAfx.h"

#include "DrawableObject.h"

SO_NAMESPACE_BEGIN;

DrawableObject::DrawableObject()
	: m_x(0)
	, m_y(0)
	, m_bgColor(DrawableObject::Black)
	, m_textColor(DrawableObject::White)
	, m_symbol('X')
{
}

DrawableObject::DrawableObject(int x, int y, int bgColor, int textColor, int symbol)
	: m_x(x)
	, m_y(y)
	, m_bgColor(bgColor)
	, m_textColor(textColor)
	, m_symbol(symbol)
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

int DrawableObject::GetTextColor() const
{
	return m_textColor;
}

void DrawableObject::SetTextColor(int color)
{
	m_textColor = color;
}

int DrawableObject::GetBGColor() const
{
	return m_bgColor;
}

void DrawableObject::SetBGColor(int color)
{
	m_bgColor = color;
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
