#pragma once

#include "WorldMgr.h"

#ifdef PDCURESES_ENABLED
#	include <curses.h>
#endif

SO_NAMESPACE_BEGIN;

class Render
{
public:
	Render();
	~Render();

	void Draw();
private:
};

SO_NAMESPACE_END;