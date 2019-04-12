// Source : https://www.lintcode.com/problem/longest-consecutive-sequence/description
// Author : Jamest
// Date   : 2019-04-12


#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	/**
	* @param num: A list of integers
	* @return: An integer
	*/
	int longestConsecutive(vector<int> &num) {
		// write your code here
		int res = 0;
		unordered_set<int> s(num.begin(), num.end());
		for (int n : num) {
			if (!s.count(n)) continue;
			s.erase(n);
			int pre = n - 1, next = n + 1;
			while (s.count(pre)) s.erase(pre--);
			while (s.count(next)) s.erase(next++);
			res = max(res, next - pre - 1);
		}
		return res;
	}
};