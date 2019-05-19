#pragma once

/*
	位运算相关算法
*/

// 求2的幂次
void displayPow(int x);
bool pow2(int x);

// 计算整数中二进制多少个1
void displayBitNums(int x);
int bitOneNums(int x);

// 将整数A转为B需要改变多少个bit位 ---> 转为 A ^ B之后的数有多少个1
void displayConvertBitNums(int A, int B);
int AConvertBBitNums(int A, int B);

// 交换两个数
/*
	x = x ^ y  --- (1)
	y = x ^ y  --- (2)
	x = x ^ y  --- (3)

	将（1）中x代入（2）式，得 y = x ^ y = (x ^ y) ^ y = x ^ (y ^ y) = x ^ 0 = x
*/
void swapNum(int& A, int& B);