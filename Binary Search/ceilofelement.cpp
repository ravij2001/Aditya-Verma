/*
Problem: ceil in a sorted array

Time:  O(log n)
Space: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getCeil(const vector<int>& nums, int x) {
        int left = 0, right = (int)nums.size() - 1;
        int res = -1; // when no floor exists
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == x) {
                return nums[mid];          // exact match is the ceil
            } else if (nums[mid] < x) {
                    left = mid + 1;            //  go right
            } else {
                res = nums[mid];           // candidate ceil
                right = mid - 1;           // go left
            }
        }
        return res;
    }
};
