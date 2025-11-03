#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap;
        for(int i = 0; i < stones.size() ; i++){
            maxHeap.push(stones[i]);
        }
        while(maxHeap.size() > 1){
            int heaviestStone = maxHeap.top();
            maxHeap.pop();
            int secondHeaviestStone = maxHeap.top();
            maxHeap.pop();  
            maxHeap.push(heaviestStone - secondHeaviestStone);
        }
    return maxHeap.top();        

    }
};
