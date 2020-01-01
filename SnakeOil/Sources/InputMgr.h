#pragma once

#include "InputDevice.h"
#include "InputEventListener.h"

SO_NAMESPACE_BEGIN;

class InputMgr : public Singleton<InputMgr>
{
friend class Singleton<InputMgr>;

public:
	void ProcessInput();

	void AddEventListener(InputEventListener* listener);

protected:
	InputMgr();
	~InputMgr();

private:
	typedef std::shared_ptr<InputDevice> InputDevicePtr;

	InputDevicePtr						m_currentDevice;
	std::vector<InputDevicePtr>			m_devices;

	std::map<Button, ButtonState>		m_prevButtonStates;
	std::map<Button, ButtonState>		m_buttonStates;

	std::vector<InputEventListener*>	m_eventListners;
};

SO_NAMESPACE_END;