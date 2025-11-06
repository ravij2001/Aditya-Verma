#include<bits/stdc++.h>
using namespace std;

 int binarysearchdescending(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = (left + right) / 2; 
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return -1; // not found
    }

int main(){
        vector<int> nums =  {5,4,3,2,1};
        int target = 2;
       int ans = binarysearchdescending(nums,target);
        cout<<"ans: "<<ans;
        return 0;
}