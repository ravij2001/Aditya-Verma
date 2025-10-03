#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int num1 = nums[i];  // no stoi needed
                int num2 = nums[j];

                if (num1 + num2 == k) {
                    return {i, j};   // return indices as vector
                }
            }
        }
        return {}; // return empty vector if no pair found
    }
};