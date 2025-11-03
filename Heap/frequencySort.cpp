#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for (int i : nums) mpp[i]++;

        priority_queue<pair<int,int>> maxHeap;
        for (auto i = mpp.begin(); i != mpp.end(); ++i) {
            maxHeap.push({i->second, i->first});
        }

        vector<int> ans;
        while (!maxHeap.empty()) {
            int freq = maxHeap.top().first;
            int ele  = maxHeap.top().second;
            for (int i = 0; i < freq; ++i)
                ans.push_back(ele);
            maxHeap.pop();
        }

        return ans;
    }
};
