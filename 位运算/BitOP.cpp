#include "pch.h"
#include "BitOP.h"

#include <iostream>

void displayPow(int x)
{
	std::cout << x;
	pow2(x) ? std::cout << "是2的幂" : std::cout << "不是2的幂";
	std::cout << std::endl;
}

bool pow2(int x)
{
	// 2的幂x必大于0
	if (x < 0)
	{
		return false;
	}

	return !(x & (x - 1));
}

void displayBitNums(int x)
{
	std::cout << x;
	std::cout << "位数有" << bitOneNums(x) << "个1" << std::endl;
}

int bitOneNums(int x)
{
	if (x == 0)
	{
		return 0;
	}

	return bitOneNums(x & (x - 1)) + 1;
}

void displayConvertBitNums(int A, int B)
{
	std::cout << A << "转为" << B << "需要改变" << AConvertBBitNums(A, B) << "个bits" << std::endl;
}

int AConvertBBitNums(int A, int B)
{
	return bitOneNums(A ^ B);
}

void swapNum(int& A, int& B)
{
	std::cout << "交换之前: A是" << A << ", B是" << B << std::endl;

	A = A ^ B;
	B = A ^ B;
	A = A ^ B;

	std::cout << "交换之后: A是" << A << ", B是" << B << std::endl;
}
