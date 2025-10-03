#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> arr;  // store value + original index
        for (int i = 0; i < nums.size(); i++) {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end());  // sort by value

        int left = 0, right = arr.size() - 1;
        while (left < right) {
            int sum = arr[left].first + arr[right].first;
            if (sum == target) {
                return {arr[left].second, arr[right].second}; // return original indices
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        return {}; // no solution
    }
};
