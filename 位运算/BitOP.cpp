#include "pch.h"
#include "BitOP.h"

#include <iostream>

void displayPow(int x)
{
	std::cout << x;
	pow2(x) ? std::cout << "��2����" : std::cout << "����2����";
	std::cout << std::endl;
}

bool pow2(int x)
{
	// 2����x�ش���0
	if (x < 0)
	{
		return false;
	}

	return !(x & (x - 1));
}

void displayBitNums(int x)
{
	std::cout << x;
	std::cout << "λ����" << bitOneNums(x) << "��1" << std::endl;
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
	std::cout << A << "תΪ" << B << "��Ҫ�ı�" << AConvertBBitNums(A, B) << "��bits" << std::endl;
}

int AConvertBBitNums(int A, int B)
{
	return bitOneNums(A ^ B);
}

void swapNum(int& A, int& B)
{
	std::cout << "����֮ǰ: A��" << A << ", B��" << B << std::endl;

	A = A ^ B;
	B = A ^ B;
	A = A ^ B;

	std::cout << "����֮��: A��" << A << ", B��" << B << std::endl;
}
