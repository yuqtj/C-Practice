#include "pch.h"
#include "ListAlgorithm.h"

ListNode* reverseList(ListNode* head)
{
	if (head == nullptr)
	{
		return nullptr;
	}

	ListNode* preNode = head;
	ListNode* curNode = head->next;
	head->next = nullptr;

	while (curNode != nullptr)
	{
		ListNode* tmpNode = curNode->next;
		curNode->next = preNode;
		preNode = curNode;
		curNode = tmpNode;
	}

	return preNode;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

ListNode* reverseListInRecursion(ListNode* head)
{
	if (head == nullptr)
	{
		return nullptr;
	}

	ListNode* preNode = head;
	ListNode* curNode = head->next;
	head->next = nullptr;
	return recursionFuncList(preNode, curNode);
}

ListNode* recursionFuncList(ListNode* preNode, ListNode* curNode)
{
	if (curNode == nullptr)
	{
		return preNode;
	}

	ListNode* tmpNode = curNode->next;
	curNode->next = preNode;
	return recursionFuncList(curNode, tmpNode);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////