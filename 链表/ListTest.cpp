#include "pch.h"
#include "ListTest.h"



ListNode* initList(std::initializer_list<int> values)
{
	if (values.size() == 0)
	{
		return nullptr;
	}

	ListNode* head = new ListNode(-1);
	ListNode* tmpNode = head;
	for (auto var : values)
	{
		ListNode* newNode = new ListNode(var);
		tmpNode->next = newNode;
		tmpNode = newNode;
	}
	tmpNode->next = nullptr;

	ListNode* newHead = head->next;
	delete head;
	return newHead;
}

void DisplayList(ListNode* head)
{
	ListNode* tmp = head;
	std::cout << "current list is : ";
	while (tmp != nullptr)
	{
		std::cout << tmp->val << " ";
		tmp = tmp->next;
	}

	std::cout << std::endl;
}
