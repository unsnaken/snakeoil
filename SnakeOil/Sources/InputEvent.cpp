#include "StdAfx.h"
#include "InputEvent.h"


SO_NAMESPACE_BEGIN;
InputEvent::InputEvent(Button button, ButtonState state)
	: m_button(button)
	, m_buttonState(state)
{
}

Button InputEvent::GetButton() const
{
	return m_button;
}

ButtonState InputEvent::GetState() const
{
	return m_buttonState;
}
SO_NAMESPACE_END;
