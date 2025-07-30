#include <iostream>
#include <vector> 
#include <set>
using namespace std;


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> seen;
        for (int num : nums) {
            if (seen.count(num)) return num;
            seen.insert(num);
        }
        return -1;
    }
};