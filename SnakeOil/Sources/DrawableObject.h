#pragma once

SO_NAMESPACE_BEGIN;


class DrawableObject {
public:
	enum Color {
		Black	= 0,
		Blue	= 1,
		Green	= 2,
		Red		= 4,
		Yellow	= 4 | 2,
		Magenta = 4 | 1,
		Cyan	= 1 | 2,
		White	= 7
	};

	DrawableObject();
	DrawableObject(int x, int y, int bgColor, int textColor, int symbol);
	~DrawableObject();

	int GetX() const;
	void SetX(int x);

	int GetY() const;
	void SetY(int y);

	int GetTextColor() const;
	void SetTextColor(int color);

	int GetBGColor() const;
	void SetBGColor(int color);

	int GetSymbol() const;
	void SetSymbol(int symbol);

private:
	int	m_x;
	int	m_y;
	int	m_bgColor;
	int	m_textColor;
	int	m_symbol;
};

typedef std::vector<DrawableObject> DrawableObjectVector;
SO_NAMESPACE_END;