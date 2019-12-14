#pragma once

SO_NAMESPACE_BEGIN;

class DrawableObject {
public:
	DrawableObject();
	~DrawableObject();

	enum Color {
		White	= 0,
		Red		= 1,
		Green	= 2,
		Blue	= 3,
	};

	int GetX() const;
	void SetX(int x);

	int GetY() const;
	void SetY(int y);

	Color GetColor() const;
	void SetColor(Color color);

	int GetSymbol() const;
	void SetSymbol(int symbol);

private:
	int m_x;
	int m_y;
	Color m_color;
	int m_symbol;
};

SO_NAMESPACE_END;