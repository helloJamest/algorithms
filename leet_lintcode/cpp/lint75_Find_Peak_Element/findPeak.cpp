// Source :https://www.lintcode.com/problem/find-peak-element/description
// Author : Jamest
// Date   : 2019-03-28


#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	/**
	* @param A: An integers array.
	* @return: return any of peek positions.
	*/
	int findPeak(vector<int> &A) {
		// write your code here
		int length = A.size();
		if (length == 0) {
			return -1;
		}
		int lo = 0;
		int hi = length - 1;

		while (lo<hi) {
			int mid = lo + (hi - lo) / 2;
			if (A[mid]<A[mid + 1]) {
				lo = mid + 1;
			}
			else {
				hi = mid;
			}
		}
		return lo;

	}
};