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

void InputMgr::ProcessInput()
{
	// Save previous Button states
	m_prevButtonStates = m_buttonStates;

	// Capture current Button states
	m_buttonStates[Button::Up]		= m_currentDevice->GetKeyState(Button::Up);
	m_buttonStates[Button::Down]	= m_currentDevice->GetKeyState(Button::Down);
	m_buttonStates[Button::Left]	= m_currentDevice->GetKeyState(Button::Left);
	m_buttonStates[Button::Right]	= m_currentDevice->GetKeyState(Button::Right);
	m_buttonStates[Button::Space]	= m_currentDevice->GetKeyState(Button::Space);
	m_buttonStates[Button::Esc]		= m_currentDevice->GetKeyState(Button::Esc);

	// Find changes and generate events for all listeners
	for (auto prevIt = m_prevButtonStates.begin(); prevIt != m_prevButtonStates.end(); ++prevIt)
	{
		auto currIt = m_buttonStates.find(prevIt->first);
		assert(currIt != m_buttonStates.end());

		if (currIt->second != prevIt->second)
		{
			InputEvent event(currIt->first, currIt->second);

			for (auto listener = m_eventListners.begin(); listener != m_eventListners.end(); ++listener)
			{
				(*listener)->OnInputEvent(event);
			}
		}
	}
}

void InputMgr::AddEventListener(InputEventListener* listener)
{
	m_eventListners.push_back(listener);
}


SO_NAMESPACE_END;