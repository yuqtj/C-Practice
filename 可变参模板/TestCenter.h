#pragma once

#include "FuncPtr.h"

#include <map>
#include <vector>

#define MAKE_TEST(TYPE, OBJECT, FUNC_NAME) \
	TestCenter::Instance()->RegisterTestEvent(TYPE, TO_STRING(TYPE), OBJECT, FUNC_NAME)

#define BROADCAST_MESSAGE(TYPE, ...) \
	TestCenter::Instance()->BroadcastMessage(TYPE, __VA_ARGS__)

class TestCenter
{
public:
	static TestCenter* Instance();
	~TestCenter();

	template<class Result, class Class, typename ...ARGS>
	void RegisterTestEvent(TestType type, const char* enumName, Class *object, Result(Class::*func)(ARGS...))
	{
		m_testEvent[type] = new ObjectFunctionPointer<Class, Result(Class::*)(ARGS...), ARGS...>(type, object, func);
	}

	template<typename ...ARGS>
	void BroadcastMessage(TestType type, ARGS... args)
	{
		auto iter = m_testEvent.find(type);
		if (iter != m_testEvent.end())
		{
			auto func = iter->second;
			func->run(ParameterARGS<ARGS...>(args ...));
		}
	}

private:
	std::map<TestType, ObjectFunctionBase*> m_testEvent;
};

