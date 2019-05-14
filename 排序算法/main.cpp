// 排序算法.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>

#include "SortTool.h"

void DisplayArray(std::vector<int> array)
{
	std::cout << "array is : ";

	for (int i = 0; i < array.size(); i++)
	{
		std::cout << array[i] << " ";
	}

	std::cout << std::endl;
}

int main()
{
	std::vector<int> array = { 2, 26, 25, 21, 13, 5, 36, 2 };

	//bubbleSort(array, array.size());
	//quickSort(array, 0, array.size() - 1);
	headSort(array, array.size());
	
	DisplayArray(array);

	while (1)
	{
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
