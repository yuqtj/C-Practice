#pragma once

#include <vector>

/*
	vector���쳣��֧�ֶȺܵͣ��ܶ�ʱ�򲻻��׳��쳣����push_back��pop_back��remove��swap�ȣ�
	����VS������Ϊvector����˺ܶ���쳣���������������С�
*/

// ��ʾvector size��capacity
void displayVectorSize(const std::vector<int>& v);
void displayVector(const std::vector<int>& v, bool isReverse = false);

void vectorTest();