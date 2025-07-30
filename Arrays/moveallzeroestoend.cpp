#include <iostream>
#include <vector> 
using namespace std;


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> v;
        int count = 0;
        for(int num: nums){
            if(num != 0){
                v.push_back(num);
            }
            else{
                count++;
            }
        }
        for(int i = 0; i < count ; i++){
            v.push_back(0);
        }
         for (int i = 0; i < nums.size(); i++) {
            nums[i] = v[i];
        }
    }
};