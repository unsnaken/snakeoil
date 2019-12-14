#pragma once

SO_NAMESPACE_BEGIN;

enum class ButtonState {
	Up		= 0,
	Down	= 1,
};

enum class Button {
	Up		= 0,
	Down	= 1,
	Left	= 2,
	Right	= 3,
};

class InputDevice {
public:
	virtual ButtonState GetKeyState(Button buttonName) = 0;
};

SO_NAMESPACE_END;