#pragma once

#include <vector>

/*
	vector对异常的支持度很低，很多时候不会抛出异常，如push_back、pop_back、remove、swap等，
	不过VS编译器为vector添加了很多的异常处理，几乎覆盖所有。
*/

// 显示vector size、capacity
void displayVectorSize(const std::vector<int>& v);
void displayVector(const std::vector<int>& v, bool isReverse = false);

void vectorTest();