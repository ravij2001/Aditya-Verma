#include <bits/stdc++.h>
using namespace std;

int NumberOfTimesArrayIsRotated(vector<int>& nums) {
    int n = nums.size();
    int left = 0, right = n - 1;

    while (left <= right) {
        // Case: array already sorted → no rotation
        if (nums[left] <= nums[right]) 
            return left;

        int mid = left + (right - left) / 2;
        int prev = (mid - 1 + n) % n;
        int next = (mid + 1) % n;

        // Check if mid is minimum (rotation point)
        if (nums[mid] <= nums[prev] && nums[mid] <= nums[next])
            return mid;

        // Decide which half to search
        if (nums[mid] >= nums[left])
            left = mid + 1;   // left half sorted, move right
        else
            right = mid - 1;  // right half sorted, move left
    }

    return 0; // fallback, though logic ensures return before this
}

int main() {
    vector<int> nums = {3,4,5,1,2};
    int ans = NumberOfTimesArrayIsRotated(nums);
    cout << "Array rotated " << ans << " times\n";
    return 0;
}
