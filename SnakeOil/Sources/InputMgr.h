#pragma once

#include "InputDevice.h"

SO_NAMESPACE_BEGIN;

class InputMgr
{
public:
	InputMgr();
	~InputMgr();

	void CaptureInput();

private:
	typedef std::shared_ptr<InputDevice> InputDevicePtr;

	InputDevicePtr					m_currentDevice;
	std::vector<InputDevicePtr>		m_devices;

	std::map<Button, ButtonState>	m_buttonStates;
};

SO_NAMESPACE_END;