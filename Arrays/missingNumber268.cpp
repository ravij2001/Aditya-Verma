// most optimal solution with time complexity : 0(n) 
// space complexity : 0(1)


#include <iostream>
#include <vector> 
#include <algorithm> 
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum1 = n*(n+1)/2;
        int sum2 = 0;
        for(int i = 0; i < n; i++){
                sum2 = sum2 + nums[i];
        }
        return (sum1 - sum2);
    }
};

// using hashing method
// another solution with time complexity : 0(n) 
// space complexity : 0(n)


int missingNumber(vector<int>& nums) {
    int n = nums.size();

    // Create a hash array (boolean vector) of size n+1
    vector<bool> hash(n + 1, false);

    // Mark the numbers that exist in the input array
    for (int num : nums) {
        hash[num] = true;
    }

    // The index with value false is the missing number
    for (int i = 0; i <= n; ++i) {
        if (!hash[i]) {
            return i;
        }
    }

    return -1; // This should never happen
}