// Source :https://www.lintcode.com/problem/first-position-of-target/description
// Author : Jamest
// Date   : 2019-03-29


#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	/**
	* @param nums: The integer array.
	* @param target: Target to find.
	* @return: The first position of target. Position starts from 0.
	*/
	int binarySearch(vector<int> &nums, int target) {
		// write your code here
		int lo = 0;
		int hi = nums.size() - 1;
		while (lo <= hi) {
			int mid = lo + ((hi - lo) >> 1);
			if (target <= nums[mid]) {
				hi = mid - 1;
			}
			else {
				lo = mid + 1;
			}
		}
		int res = nums[hi + 1] == target ? hi + 1 : -1;
		return res;

	}
};










