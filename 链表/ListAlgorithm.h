#pragma once

#include "ListTest.h"

/*
	链表反转

	输入: 1->2->3->4->5->NULL
	输出: 5->4->3->2->1->NULL
*/

// 迭代式
ListNode* reverseList(ListNode* head);

// 递归式
ListNode* recursionFuncList(ListNode* preNode, ListNode* curNode);
// 入口
ListNode* reverseListInRecursion(ListNode* head);