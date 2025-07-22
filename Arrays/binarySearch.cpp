#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// time complexity for binary search is o(logn) which is good compared to linear search
class Solution{
public:
    int linearSearch(vector<int> &nums, int target)
    {
        int low = 0, high = nums.size() - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
           return -1;
    }
};