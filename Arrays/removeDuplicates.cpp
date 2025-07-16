#include <set>
#include <iostream>
#include <vector> 
#include <algorithm> 

using namespace std;

// time complexity : o(n) and space complexity is 0(n)

//  using set method we can also solve this using two pointer technique

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> uniqueNums(nums.begin(), nums.end()); // removes duplicates
          // Copy unique values back into nums
        int i = 0;
        for (int val : uniqueNums) {
            nums[i++] = val;
        }

        return uniqueNums.size(); 
    }
};