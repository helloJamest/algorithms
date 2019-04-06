// Source :https://www.lintcode.com/problem/classical-binary-search/description
// Author : Jamest
// Date   : 2019-03-27


#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	/**
	* @param nums: An integer array sorted in ascending order
	* @param target: An integer
	* @return: An integer
	*/

	int findPosition(vector<int> &nums, int target) {
		int length = nums.size();
		if (length == 0) {
			return -1;
		}
		int lo = 0;
		int hi = length - 1;
		int mid = 0;
		while (lo <= hi) {
			mid = lo + (hi - lo) / 2;
			if (nums[mid] == target) {
				return mid;
			}
			else if (nums[mid]<target) {
				lo = mid + 1;
			}
			else {
				hi = mid - 1;
			}
		}
		return -1;
	}
};











