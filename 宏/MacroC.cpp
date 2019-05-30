// MacroC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


/*
	���ں�Ļ���ʹ��
	���ԣ� http://www.cnblogs.com/youthlion/archive/2012/02/04/2338265.html
*/

// # ת�ַ���
#define TO_STRING(X) #X

// ##������������
#define LINK_NAME(X, Y) X##Y
#define INT_32 int

// ��κ�
#define LOG(format, ...) printf(format, __VA_ARGS__)

// ��ӡ�ꡣ����Ƕ�׺�ʱ��������ĺ�ᱻ��չ�����������#��##�ĺ�������
#define TO_MACRO_STRING(X) TO_STRING(X)

int main()
{
	// ת�ַ���
	std::cout << TO_STRING(test TO_STRING) << std::endl;

	// ##������������ 
	// INT_32 num;
	LINK_NAME(INT_, 32) num;

	// ��κ�
	LOG("%s ... %d\n", "test LOG macro", 0);

	// ��ӡ��
	std::cout << TO_MACRO_STRING(LOG("%s ... %d\n", "test LOG macro", 0)) << std::endl;

    while (1)
    {
    }
}