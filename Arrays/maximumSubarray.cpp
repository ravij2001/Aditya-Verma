#include <iostream>
#include <vector> 
using namespace std;

// using kadane's algorithm time complexity will be o(n) best approach

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sumCounter = 0;
        int maxCounter = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
                    sumCounter = sumCounter + nums[i];
                    maxCounter = max(sumCounter,maxCounter);
                    if(sumCounter < 0){
                        sumCounter = 0;
                    }
            }
        return maxCounter;
    }
};

// using brute force approach time complexity will be o(n^2)

class Solution2 {
public:
    int maxSubArray(vector<int>& nums) {
        int start = nums[0];
        int end = nums.size() - 1;
        int maxi = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
                int count = 0;
            for(int j = i ; j < nums.size(); j++){
                    count = count + nums[j];
                    maxi = max(count,maxi);
            }
        }
        return maxi;
    }
};