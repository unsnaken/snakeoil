#include "StdAfx.h"

#pragma once

#include "DrawableObject.h"

SO_NAMESPACE_BEGIN;

class Renderable {
public:
	virtual DrawableObjectVector GetDrawableObjects() = 0;
};

typedef std::vector<Renderable*> RenderableVector;

SO_NAMESPACE_END;
