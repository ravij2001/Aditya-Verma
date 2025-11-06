
#include<bits/stdc++.h>
using namespace std;


 int ConnectRopesToMinimizeCost(vector<int>& A)  {
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (int i : A) {
        minHeap.push(i);
    }

    int totalCost = 0;
    while (minHeap.size() > 1) {
        int first = minHeap.top(); minHeap.pop();
        int second = minHeap.top(); minHeap.pop();

        int current = first + second;
        totalCost += current;          // ✅ accumulate total
        minHeap.push(current);
    }
    return totalCost;
}
