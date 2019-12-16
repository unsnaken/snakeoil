#include "StdAfx.h"

#include "Renderer.h"

#include <windows.h>

SO_NAMESPACE_BEGIN;

static const int kWindowColorPairId	= 1;
static const int kDynColorPairId	= 100;

Renderer::Renderer(int windowWidth, int windowHeight, int bgColor, int textColor)
{
	// Initialization of the pdcureses
	initscr();
	cbreak();

	curs_set(0);
	start_color();
	//init_pair(1, COLOR_RED, COLOR_GREEN);
	//attron(COLOR_PAIR(1));
	//mvaddch(2, 3, 'X');
	//mvaddch(2, 4, 'X');

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
	for (auto it = drawables.begin(); it != drawables.end(); ++it)
	{
		init_pair(kDynColorPairId, it->GetTextColor(), it->GetBGColor());
		wattron(m_window, COLOR_PAIR(kDynColorPairId));
		mvwaddch(m_window, it->GetY(), it->GetX(), it->GetSymbol());
	}
	wrefresh(m_window);
}

void DrawObject(const DrawableObject& drawable)
{

}


SO_NAMESPACE_END;