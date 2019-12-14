#include "StdAfx.h"

#include "InputMgr.h"

#include "InputDeviceKeyboard.h"

SO_NAMESPACE_BEGIN;

InputMgr::InputMgr()
{
	auto keyboardDevice = std::make_shared<InputDeviceKeyboard>();
	m_devices.push_back(keyboardDevice);

	m_currentDevice = keyboardDevice;
}

InputMgr::~InputMgr()
{
}

void InputMgr::CaptureInput()
{
	m_buttonStates[Button::Up]		= m_currentDevice->GetKeyState(Button::Up);
	m_buttonStates[Button::Down]	= m_currentDevice->GetKeyState(Button::Down);
	m_buttonStates[Button::Left]	= m_currentDevice->GetKeyState(Button::Left);
	m_buttonStates[Button::Right]	= m_currentDevice->GetKeyState(Button::Right);
}

SO_NAMESPACE_END;