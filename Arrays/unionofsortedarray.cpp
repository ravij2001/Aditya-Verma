#include <iostream>
#include <vector> 
#include <set>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        set<int> unique;
        vector<int> ans;
        for(int num: nums1){
            unique.insert(num);
        }
        for(int num: nums2){
            unique.insert(num);
        }
        for(int num: unique){
            ans.push_back(num);
        }
        return ans;
    }
};