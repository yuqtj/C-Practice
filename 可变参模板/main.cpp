// 可变参模板.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "TestCenter.h"

class Sender
{
public:

	void Broadcast(int x, int y)
	{
		BROADCAST_MESSAGE(TestType::LOAD_SCENE, x, y);
	}
};

class Receiver
{
public:
	Receiver()
	{
		MAKE_TEST(TestType::LOAD_SCENE, this, &Receiver::excuteSum);
		MAKE_TEST(TestType::CREATE_EMPTY_SCENE, this, &Receiver::excuteSum1);
		MAKE_TEST(TestType::TRANSFER_STRING, this, &Receiver::excuteSum2);
	}

	void excuteSum(int a, int b)
	{
		std::cout << "sum is " << a + b << std::endl;
	}

	void excuteSum1(int a, int b, float c)
	{
		std::cout << "sum is " << a + b + c << std::endl;
	}

	void excuteSum2(const char* name)
	{
		std::cout << "name is " << name << std::endl;
	}
};

int main()
{
	Receiver re;

	/*Sender sender;
	sender.Broadcast(3, 4);*/

	BROADCAST_MESSAGE(TestType::LOAD_SCENE, 2, 3);
	BROADCAST_MESSAGE(TestType::CREATE_EMPTY_SCENE, 3, 4, 5.3f);
	BROADCAST_MESSAGE(TestType::TRANSFER_STRING, "500");

	while (1)
	{
	}

	return 0;
}
