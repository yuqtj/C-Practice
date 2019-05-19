#include "pch.h"
#include "VectorTest.h"

#include <iostream>
#include <algorithm>

void displayVectorSize(const std::vector<int>& v)
{
	std::cout << "vector size is " << v.size() << std::endl;
	std::cout << "vector capacity is " << v.capacity() << std::endl;
	std::cout << std::endl;
}

void displayVector(const std::vector<int>& v, bool isReverse)
{
	if (isReverse)
	{
		std::cout << "current vector is: ";
		// 迭代器，crbegin = const reverse random access iterator
		for (auto it = v.crbegin(); it != v.crend(); ++it)
		{
			std::cout << *it << " ";
		}
		std::cout << std::endl;
	}
	else
	{
		std::cout << "current vector is: ";
		// 迭代器，cbegin = const random access iterator
		for (auto it = v.cbegin(); it != v.cend(); ++it)
		{
			std::cout << *it << " ";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
}

void vectorTest()
{
	std::vector<int> v = { 10, 20 };
	// 末尾插入
	v.push_back(30);
	displayVectorSize(v);

	// 插入pos中，对vector循环遍历时插入某些元素，
	for (auto iter = v.begin(); iter != v.end(); ++iter)
	{
		if (*iter % 2 == 0)
		{
			// 迭代器可能会因为vector扩容导致失效，所以每插入之后需要通过Insert对迭代器进行更新，insert返回当前插入的迭代器位置
			iter = v.insert(++iter, 1000);
		}
	}
	std::cout << "每个偶数都插入一个1000：";
	displayVector(v);

	std::cout << "排序后：";
	std::sort(v.begin(), v.end());
	displayVector(v);

	// 循环时删除元素同理
	for (auto iter = v.begin(); iter != v.end();)
	{
		if (*iter == 1000)
		{
			// 删除元素也会导致迭代器失效，所以需要赋予erase的迭代器，erase返回删除元素的下一个元素迭代器，此时就不需要++iter了
			iter = v.erase(iter);
		}
		else
		{
			++iter;
		}
	}
	std::cout << "删除所有的1000元素：";
	displayVector(v);

	// 显式指定预留空间大小，从而避免内存的重新分配
	v.reserve(50);
	displayVectorSize(v);

	// 缩减容量
	v.shrink_to_fit();
	displayVectorSize(v);

	// 查
	v[0];
	//v.at(5);


	displayVector(v, true);

	// 这种初始化方法会频繁调用T的构造函数，效率较低
	std::vector<int> v1(100);
}
