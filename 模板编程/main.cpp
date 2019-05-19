// 模板编程.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "ChooseClass.h"

class A
{
public:
	A() 
	{
		std::cout << "A constructor" << std::endl;
	}

	enum{ UseAClass = true };

	int a;
	int b;
	int c;

private:

};

class B
{
public:
	B()
	{
		std::cout << "B constructor" << std::endl;
	}

	int a;
	int b;

private:


};

int main()
{
	// ChooseClass
	bool useA = true;
	// 不能用useA，因为useA是在运行时才得到的值
	typedef typename TChooseClass<A::UseAClass, typename A, typename B>::Result C;

    std::cout << "Hello World!\n"; 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
