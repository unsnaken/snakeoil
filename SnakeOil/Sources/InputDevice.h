#pragma once

#include "InputEnums.h"

SO_NAMESPACE_BEGIN;

class InputDevice {
public:
	virtual ButtonState GetKeyState(Button buttonName) = 0;
};

SO_NAMESPACE_END;