#pragma once

#include <iostream>

struct ListNode
{
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(nullptr)
	{

	}
};


ListNode* initList(std::initializer_list<int> values);
void DisplayList(ListNode* head);
