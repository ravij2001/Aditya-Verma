#include <set>
#include <iostream>
#include <vector> 
#include <algorithm> 

using namespace std;

// time complexity : o(n) and space complexity is 0(n)

    set<int> removeDuplicates(vector<int>& nums) {
        set<int> uniqueNums; // removes duplicates
          for(int num : nums){
            if(uniqueNums.count(num))
                continue;
            uniqueNums.insert(num);    
          }
          return uniqueNums;
        }

int main(){
    vector<int> nums = {1,2,3,3,4,4,4,1};
    set<int> ans = removeDuplicates(nums);
    for(int a : ans){
        cout<<a<<" ";
    }
    return 0;
}