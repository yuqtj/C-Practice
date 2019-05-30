// 类型推断.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
    // auto和template的推导机制基本一致，为了方便这边用auto举例子
	int i = 0;
	const int ci = 1;
	const int& ri = i;
	int iNums[32];

	/*
		auto为值类型时，相当于拷贝一个对象，数据不会影响到源头，所以不会对const、reference有额外处理
	*/

	// int testI
	auto testI = i;
	// int testCi
	auto testCi = ci;
	// 消除const、& ----> int testRi
	auto testRi = ri;
	testRi = 2;
	// int* testIs
	auto testIs = iNums;


	/*
		auto为指针、引用类型时，就会携带const、reference信息
	*/

	// int testRI
	auto& testRI = i;
	// const int& testRCI
	auto& testRCI = ci;
	// const int& testRCRI，虽然本身有&，但不会叠加ri身上的&变成右值引用
	auto& testRCRI = ri;
	// int (&testRIs)[32]
	auto& testRIs = iNums;
	// 编译出错，不能接受右值
	//auto& testRCR = 10;


	/*
		auto为右值时，如果输入的是左值，则为左值。如果输入为右值，则为右值
	*/

	// int& testRRI
	auto&& testRRI = i;
	// const int& testRRCI
	auto&& testRRCI = ci;
	// const int& testRRCRI
	auto&& testRRCRI = ri;
	// int&& testRRRI
	auto&& testRRRI = 10;
	
}
