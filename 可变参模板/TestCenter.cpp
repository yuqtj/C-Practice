#include "pch.h"
#include "TestCenter.h"

TestCenter* TestCenter::Instance()
{
	static TestCenter instance;
	return &instance;
}

TestCenter::~TestCenter()
{
}
