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
		// ��������crbegin = const reverse random access iterator
		for (auto it = v.crbegin(); it != v.crend(); ++it)
		{
			std::cout << *it << " ";
		}
		std::cout << std::endl;
	}
	else
	{
		std::cout << "current vector is: ";
		// ��������cbegin = const random access iterator
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
	// ĩβ����
	v.push_back(30);
	displayVectorSize(v);

	// ����pos�У���vectorѭ������ʱ����ĳЩԪ�أ�
	for (auto iter = v.begin(); iter != v.end(); ++iter)
	{
		if (*iter % 2 == 0)
		{
			// ���������ܻ���Ϊvector���ݵ���ʧЧ������ÿ����֮����Ҫͨ��Insert�Ե��������и��£�insert���ص�ǰ����ĵ�����λ��
			iter = v.insert(++iter, 1000);
		}
	}
	std::cout << "ÿ��ż��������һ��1000��";
	displayVector(v);

	std::cout << "�����";
	std::sort(v.begin(), v.end());
	displayVector(v);

	// ѭ��ʱɾ��Ԫ��ͬ��
	for (auto iter = v.begin(); iter != v.end();)
	{
		if (*iter == 1000)
		{
			// ɾ��Ԫ��Ҳ�ᵼ�µ�����ʧЧ��������Ҫ����erase�ĵ�������erase����ɾ��Ԫ�ص���һ��Ԫ�ص���������ʱ�Ͳ���Ҫ++iter��
			iter = v.erase(iter);
		}
		else
		{
			++iter;
		}
	}
	std::cout << "ɾ�����е�1000Ԫ�أ�";
	displayVector(v);

	// ��ʽָ��Ԥ���ռ��С���Ӷ������ڴ�����·���
	v.reserve(50);
	displayVectorSize(v);

	// ��������
	v.shrink_to_fit();
	displayVectorSize(v);

	// ��
	v[0];
	//v.at(5);


	displayVector(v, true);

	// ���ֳ�ʼ��������Ƶ������T�Ĺ��캯����Ч�ʽϵ�
	std::vector<int> v1(100);
}
