// Source : https://www.lintcode.com/problem/linked-list-cycle-ii/description
// Author : Jamest
// Date   : 2019-04-04


#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	/*
	* @param nums: a list of integers
	* @return: find a  majority number
	*/
	int majorityNumber(vector<int> &nums) {
		// write your code here
		int majorityNum = 0;
		int count = 0;
		for (auto num : nums) {
			if (num == majorityNum) {
				count++;
			}

			else if (count == 0) {
				majorityNum = num;
				count = 1;
			}
			else {
				count--;
			}
		}
		return majorityNum;
	}
};