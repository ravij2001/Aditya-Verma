#include <iostream>
#include <vector> 
#include <algorithm> 
using namespace std;

// brute force approach with time complexity 0(n) + 0(n) and space complexity 0(n) with temp array using

class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        k = k % nums.size(); 
        int temp[k];
        for(int i = 0; i < k ; i++){
            temp[i] = nums[i];
        }
        for(int i = k; i < nums.size(); i++){
            nums[i - k] = nums[i];
        }
        for(int i =  nums.size() - k; i < nums.size(); i++){
             nums[i] = temp[i - nums.size() + k];
        }
    }
};

class Solution2 {

// this is the optimal solution with 0(n) time complexity and 0(1) space complexity

public:
    void rotateArray(vector<int>& nums, int k) {
        k = k % nums.size(); 
        reverse(nums[0],nums[k]);
        reverse(nums[k],nums[nums.size()]);
        reverse(nums[0],nums[nums.size()]);
    }
};