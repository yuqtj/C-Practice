// ClassInherit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#define OUTPUT(x) std::cout << x << std::endl

class ABase
{
public:
	ABase() { OUTPUT("ABase constructor"); };
	~ABase() { OUTPUT("ABase deconstructor"); };
protected:
	
private:
};

class B
{
public:
	B() { OUTPUT("B constructor"); };
	~B() { OUTPUT("B deconstructor"); };
protected:
	
private:
};

class A : public ABase
{
public:
	A() { OUTPUT("A constructor"); };
	~A() { OUTPUT("A deconstructor"); };

private:
	B b;
};

int main()
{
	// 对象构造顺序：ABase->B->A
	A* a = new A;
	delete a;


	while (1)
	{}
	return 0;
}
