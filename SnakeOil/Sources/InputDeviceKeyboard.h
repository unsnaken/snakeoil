#pragma once

#include "InputDevice.h"

SO_NAMESPACE_BEGIN;

class InputDeviceKeyboard: public InputDevice {
public:
	virtual ButtonState GetKeyState(Button buttonName);
};

SO_NAMESPACE_END;