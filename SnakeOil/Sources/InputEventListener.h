#pragma once

#include "InputEvent.h"

SO_NAMESPACE_BEGIN;

class InputEventListener
{
public:
	virtual void OnInputEvent(InputEvent event) = 0;
};

SO_NAMESPACE_END;