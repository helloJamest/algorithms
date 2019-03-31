// Source :https://www.lintcode.com/problem/first-bad-version/description
// Author : Jamest
// Date   : 2019-03-30


#include <iostream>
#include <vector>

using namespace std;

/**
* class SVNRepo {
*     public:
*     static bool isBadVersion(int k);
* }
* you can use SVNRepo::isBadVersion(k) to judge whether
* the kth code version is bad or not.
*/
class Solution {
public:
	/**
	* @param n: An integer
	* @return: An integer which is the first bad version.
	*/
	int findFirstBadVersion(int n) {
		// write your code here
		int lo = 1;
		int hi = n;
		while (lo<hi) {
			int mid = lo + ((hi - lo) >> 1);
			if (SVNRepo::isBadVersion(mid)) {
				hi = mid;
			}
			else {
				lo = mid + 1;
			}
		}
		return lo;
	}
};










