#pragma once

/*
	λ��������㷨
*/

// ��2���ݴ�
void displayPow(int x);
bool pow2(int x);

// ���������ж����ƶ��ٸ�1
void displayBitNums(int x);
int bitOneNums(int x);

// ������AתΪB��Ҫ�ı���ٸ�bitλ ---> תΪ A ^ B֮������ж��ٸ�1
void displayConvertBitNums(int A, int B);
int AConvertBBitNums(int A, int B);

// ����������
/*
	x = x ^ y  --- (1)
	y = x ^ y  --- (2)
	x = x ^ y  --- (3)

	����1����x���루2��ʽ���� y = x ^ y = (x ^ y) ^ y = x ^ (y ^ y) = x ^ 0 = x
*/
void swapNum(int& A, int& B);