/*
Problem: Floor in a sorted array
Return the largest value <= x. If none exists, return -1.

Time:  O(log n)
Space: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getFloor(const vector<int>& nums, int x) {
        int left = 0, right = (int)nums.size() - 1;
        int res = -1; // when no floor exists
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == x) {
                return nums[mid];          // exact match is the floor
            } else if (nums[mid] < x) {
                res = nums[mid];           // candidate floor
                left = mid + 1;            // try to find a closer (larger) one
            } else {
                right = mid - 1;           // go left
            }
        }
        return res;
    }
};
