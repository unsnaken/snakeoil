#pragma once

#include "WorldMgr.h"

#ifdef PDCURESES_ENABLED
#	include <curses.h>
#endif

SO_NAMESPACE_BEGIN;

class Renderer
{
public:
	Renderer(int windowWidth, int windowHeight, int bgColor, int textColor);
	~Renderer();

	void Render(DrawableObjectVector drawables);

private:
	void DrawObject(const DrawableObject& drawable);

	WINDOW* m_window;
};

SO_NAMESPACE_END;