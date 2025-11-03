#include<bits/stdc++.h>
using namespace std;

vector<int> kSortedArray(int arr[5],int k,int n){
     priority_queue <int, vector<int>, greater<int>> minHeap; 
     vector<int> ans;
    for(int i = 0 ; i < n; i++){
        minHeap.push(arr[i]);
        if(minHeap.size() > k){
            ans.push_back(minHeap.top());
            minHeap.pop();
        }
    }

       while (!minHeap.empty()) {
        ans.push_back(minHeap.top());
        minHeap.pop();
    }

    
    return ans;
}


int main(){
    int k = 2,n = 5;
    int arr[5] = {1,2,5,4,3};
    
vector<int> result = kSortedArray(arr,k,n);
for(int i : result){
    cout<<i<<" ";
}
    return 0;
}  