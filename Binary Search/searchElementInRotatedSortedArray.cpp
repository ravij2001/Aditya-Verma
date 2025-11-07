#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int BinarySearch(vector<int>& nums, int left, int right, int target) {
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return -1; // not found
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n - 1;
        int index = -1;

        // Step 1: Find rotation index (smallest element)
        while (left <= right) {
            if (nums[left] <= nums[right]) { // already sorted
                index = left;
                break;
            }

            int mid = left + (right - left) / 2;
            int prev = (mid - 1 + n) % n;
            int next = (mid + 1) % n;

            if (nums[mid] <= nums[prev] && nums[mid] <= nums[next]) {
                index = mid;
                break;
            }

            if (nums[mid] >= nums[left])
                left = mid + 1;
            else
                right = mid - 1;
        }

        // Step 2: Binary search in two halves
        int ans_left = BinarySearch(nums, 0, index - 1, target);
        int ans_right = BinarySearch(nums, index, n - 1, target);

        if (ans_left != -1)
            return ans_left;
        else
            return ans_right;
    }
};
