#pragma once

#include "InputEnums.h"

SO_NAMESPACE_BEGIN;

class InputEvent
{
public:
	InputEvent(Button button, ButtonState state);

	Button GetButton() const;
	ButtonState GetState() const;

private:
	Button		m_button;
	ButtonState	m_buttonState;
};

SO_NAMESPACE_END;
