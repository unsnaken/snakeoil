#pragma once

SO_NAMESPACE_BEGIN;

template <typename T>
class Singleton
{
public:
	static T& GetInstance()
	{
		static T instance;
		return instance;
	}

	Singleton(const Singleton&) = delete;
	Singleton operator=(const Singleton&) = delete;

protected:
	Singleton() {}
	~Singleton() {}
};

SO_NAMESPACE_END;