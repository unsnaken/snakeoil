#include "StdAfx.h"

#include "InputDeviceKeyboard.h"

#include "windows.h"

SO_NAMESPACE_BEGIN;

ButtonState InputDeviceKeyboard::GetKeyState(Button buttonName) {
	int buttonCode = VK_UP;

	switch (buttonName) {
	case Button::Up:
			buttonCode = VK_UP;
			break;
	case Button::Down:
			buttonCode = VK_DOWN;
			break;
	case Button::Left:
			buttonCode = VK_LEFT;
			break;
	case Button::Right:
			buttonCode = VK_RIGHT;
			break;
	}

	short buttonState = ::GetKeyState(buttonCode);
	if (buttonState == WM_KEYUP || buttonState == WM_SYSKEYUP) {
		return ButtonState::Up;
	}
	return ButtonState::Down;
}

SO_NAMESPACE_END;