// Source : https://www.lintcode.com/problem/maximum-subarray/description
// Author : Jamest
// Date   : 2019-04-15


#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	/**
	* @param nums: A list of integers
	* @return: A integer indicate the sum of max subarray
	*/
	int maxSubArray(vector<int> &nums) {
		// write your code here
		if (!nums.size()) {
			return 0;
		}
		int cursum = nums[0], maxsum = nums[0];
		for (vector<int>::size_type i = 1; i<nums.size(); ++i) {
			cursum = max(cursum + nums[i], nums[i]);
			maxsum = max(maxsum, cursum);
		}
		return maxsum;

	}
};
