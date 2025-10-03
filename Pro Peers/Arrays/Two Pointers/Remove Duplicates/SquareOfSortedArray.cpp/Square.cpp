#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> squaresOfASortedArray(vector<int>& nums) {
        vector<int> s;
        for(int i: nums){
            s.push_back(i*i);
        }
        sort(s.begin(),s.end());
        return s;
    }
};