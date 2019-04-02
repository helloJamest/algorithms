// Source :https://www.lintcode.com/problem/sqrtx/description
// Author : Jamest
// Date   : 2019-04-02


#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	/**
	* @param x: An integer
	* @return: The sqrt of x
	*/
	int sqrt(int x) {
		// write your code here
		if (x<2) {
			return x;
		}
		int lo = 0;
		int hi = x;
		while (lo <= hi) {
			int mid = lo + ((hi - lo) >> 1);
			if (x / mid >= mid and x / (mid + 1)<(mid + 1)) {
				return mid;
			}
			else if (x / mid<mid) {
				hi = mid - 1;
			}
			else {
				lo = mid + 1;
			}

		}
	}
};











