// MacroC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


/*
	关于宏的基本使用
	引自： http://www.cnblogs.com/youthlion/archive/2012/02/04/2338265.html
*/

// # 转字符串
#define TO_STRING(X) #X

// ##连接两个符号
#define LINK_NAME(X, Y) X##Y
#define INT_32 int

// 变参宏
#define LOG(format, ...) printf(format, __VA_ARGS__)

// 打印宏。当宏嵌套宏时，最里面的宏会被先展开，但如果是#或##的宏是例外
#define TO_MACRO_STRING(X) TO_STRING(X)

int main()
{
	// 转字符串
	std::cout << TO_STRING(test TO_STRING) << std::endl;

	// ##连接两个符号 
	// INT_32 num;
	LINK_NAME(INT_, 32) num;

	// 变参宏
	LOG("%s ... %d\n", "test LOG macro", 0);

	// 打印宏
	std::cout << TO_MACRO_STRING(LOG("%s ... %d\n", "test LOG macro", 0)) << std::endl;

    while (1)
    {
    }
}