#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchinanearlysortedarray(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2; 
            if (nums[mid] == target)
                return mid;
            if (mid > left && nums[mid - 1] == target)
                return mid - 1;
            if (mid < right && nums[mid + 1] == target)
                return mid + 1;
                
            if (nums[mid] < target)
                left = mid + 2;
            else
                right = mid - 2;
        }

        return -1; // not found
    }
};
