// Source : https://www.lintcode.com/problem/reverse-linked-list/description
// Author : Jamest
// Date   : 2019-04-03


#include <iostream>
#include <vector>

using namespace std;

/**
* Definition of singly-linked-list:
*
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
	* @param head: n
	* @return: The new head of reversed linked list.
	*/
	ListNode * reverse(ListNode * head) {
		// write your code here
		ListNode *pre = NULL;
		ListNode *reverse_head = NULL;
		while (head != NULL) {
			ListNode *nextNode = head->next;
			head->next = pre;
			if (nextNode == NULL) {
				reverse_head = head;
			}
			pre = head;
			head = nextNode;
		}
		return reverse_head;

	}
};