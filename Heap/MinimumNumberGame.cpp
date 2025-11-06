#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> ans;
        priority_queue<int, vector<int>, greater<int>> minHeap;
        
        for (int i : nums) {
            minHeap.push(i);
        }
        
        while (minHeap.size() > 0) {
            int first = minHeap.top(); minHeap.pop();
            int second = minHeap.top(); minHeap.pop();
            
            ans.push_back(second);
            ans.push_back(first);
        }
        return ans;
    }
};
