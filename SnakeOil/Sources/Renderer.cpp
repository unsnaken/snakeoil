#include "StdAfx.h"

#include "Renderer.h"

SO_NAMESPACE_BEGIN;

static const int kWindowColorPairId	= 1;

Renderer::Renderer(int windowWidth, int windowHeight, int bgColor, int textColor)
{
	// Initialization of the pdcureses
	initscr();
	cbreak();

	curs_set(0);
	start_color();

	// Initialization of the window
	int startY = (LINES - windowHeight) / 2;
	int startX = (COLS - windowWidth) / 2;
	m_window = newwin(windowHeight, windowWidth, startY, startX);
	init_pair(kWindowColorPairId, textColor, bgColor);
	wbkgd(m_window, COLOR_PAIR(kWindowColorPairId));

}

Renderer::~Renderer()
{
	// Destroying of the window
	delwin(m_window);

	// Destroying of the pdcureses
	endwin();
}

void Renderer::Render(DrawableObjectVector drawables)
{
	wclear(m_window);
	int colorPairID = 100; // TODO: fix this bulshit with colors
	for (auto it = drawables.begin(); it != drawables.end(); ++it)
	{
		init_pair(colorPairID, it->GetTextColor(), it->GetBGColor());
		wattron(m_window, COLOR_PAIR(colorPairID));
		mvwaddch(m_window, it->GetY(), it->GetX(), it->GetSymbol());
		++colorPairID;
	}
	// TODO: handle windows resizing and redraw field
	wrefresh(m_window);
}

void DrawObject(const DrawableObject& drawable)
{

}


SO_NAMESPACE_END;