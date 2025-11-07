#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int res1 = -1, res2 = -1;     // initialize properly

        // find first occurrence
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                res1 = mid;
                right = mid - 1; // go left for earlier occurrence
            } 
            else if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        // reset for second search
        left = 0;
        right = nums.size() - 1;

        // find last occurrence
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                res2 = mid;
                left = mid + 1; // go right for later occurrence
            } 
            else if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return {res1, res2};
    }
};
