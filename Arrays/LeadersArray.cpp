#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// time complexity 0(n^2) and space complexity 0(n)


class Solution
{
public:
    vector<int> leaders(vector<int> &nums)
    {
        vector<int> lead;
        for (int i = 0; i < nums.size(); i++)
        {
            bool isLeader = true;
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] <= nums[j])
                {
                    isLeader = false;
                    break;
                }
            }
            if (isLeader)
            {
                lead.push_back(nums[i]);
            }
        }
        return lead;
    }
};