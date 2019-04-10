// Source : https://www.lintcode.com/problem/longest-increasing-subsequence/description
// Author : Jamest
// Date   : 2019-04-10


#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
	/**
	* @param nums: An integer array
	* @return: The length of LIS (longest increasing subsequence)
	*/
	int longestIncreasingSubsequence(vector<int> &nums) {
		// write your code here
		vector<int> dp;
		for (int i = 0; i < nums.size(); ++i) {
			auto it = lower_bound(dp.begin(), dp.end(), nums[i]);
			if (it == dp.end())
				dp.push_back(nums[i]);
			else
				*it = nums[i];
		}
		return dp.size();
	}
};