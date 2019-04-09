// Source : https://www.lintcode.com/problem/sort-integers-ii/description
// Author : Jamest
// Date   : 2019-04-09


#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	/**
	* @param A: an integer array
	* @return: nothing
	*/
	void sortIntegers2(vector<int> &A) {
		// write your code here
		int lo = 0, hi = A.size() - 1;
		sort(A, lo, hi);

	}
	void sort(vector<int> &A, int lo, int hi) {
		if (lo >= hi) {
			return;
		}
		int j = partition(A, lo, hi);
		sort(A, lo, j - 1);
		sort(A, j + 1, hi);

	}

	int partition(vector<int> &A, int lo, int hi) {
		int v = A[lo];
		int i = lo + 1, j = hi;
		while (true) {
			while (i<hi && A[i] <= v) {
				i++;
			}
			while (j>lo && A[j] >= v) {
				j--;
			}
			if (i >= j) {
				break;
			}
			int temp = A[j];
			A[j] = A[i];
			A[i] = temp;
		}

		int temp = A[j];
		A[j] = A[lo];
		A[lo] = temp;
		return j;

	}



};