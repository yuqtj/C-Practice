#include "pch.h"
#include "SetTest.h"
#include <iostream>


void displaySet(std::set<int>& mySet)
{
	std::cout << "Set is: ";
	for (auto iter : mySet)
	{
		std::cout << iter << " ";
	}
	std::cout << std::endl;
}

void displaySet(std::set<SetOpNum>& mySet)
{
	std::cout << "Set is: ";
	for (auto iter : mySet)
	{
		std::cout << iter.studentID << " ";
	}
	std::cout << std::endl;
}

void setTest()
{
	std::set<int> mySet;
	mySet.insert(2);
	mySet.insert(3);
	mySet.insert(6);
	mySet.insert(5);
	mySet.insert(8);
	mySet.insert(8);
	mySet.insert(8);
	mySet.insert(8);
	mySet.insert(1);
	// 自动排序和去重
	displaySet(mySet);


	std::set<SetOpNum> studentSet;
	studentSet.insert({ 5, 3, "haha" });
	studentSet.insert({ 2, 3, "hoho" });
	studentSet.insert({ 5, 3, "enen" });
	studentSet.insert({ 7, 3, "lolo" });
	studentSet.insert({ 10, 3, "yiyi" });
	studentSet.insert({ 5, 3, "haha" });
	displaySet(studentSet);
}

