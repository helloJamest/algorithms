// Source : https://www.lintcode.com/problem/find-minimum-in-rotated-sorted-array/description
// Author : Jamest
// Date   : 2019-03-30


#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
	/**
	* @param nums: a rotated sorted array
	* @return: the minimum number in the array
	*/
	int findMin(vector<int> &nums) {
		// write your code here
		int lo = 0;
		int hi = nums.size() - 1;
		if (nums[lo]<nums[hi]) {
			return nums[lo];
		}

		while (lo<hi - 1) {
			int  mid = lo + ((hi - lo) >> 1);
			if (nums[mid]<nums[lo]) {
				hi = mid;
			}
			else if (nums[mid] > nums[hi]) {
				lo = mid;
			}
		}
		return nums[hi];
	}
};









