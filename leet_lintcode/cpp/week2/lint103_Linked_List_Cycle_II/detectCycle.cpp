// Source : https://www.lintcode.com/problem/linked-list-cycle-ii/description
// Author : Jamest
// Date   : 2019-04-04


#include <iostream>
#include <vector>

using namespace std;

/**
* Definition of singly-linked-list:
* class ListNode {
* public:
*     int val;
*     ListNode *next;
*     ListNode(int val) {
*        this->val = val;
*        this->next = NULL;
*     }
* }
*/

class Solution {
public:
	/**
	* @param head: The first node of linked list.
	* @return: The node where the cycle begins. if there is no cycle, return null
	*/
	ListNode * detectCycle(ListNode * head) {
		// write your code here
		if (!head || !head->next) {
			return NULL;
		}
		ListNode *slow = head;
		ListNode *fast = head;
		while (fast && fast->next) {
			slow = slow->next;
			fast = fast->next->next;
			if (slow == fast) break;
		}
		if (!fast || !fast->next) return NULL;
		slow = head;
		while (slow != fast) {
			slow = slow->next;
			fast = fast->next;
		}
		return slow;
	}
};