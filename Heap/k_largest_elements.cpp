#include<bits/stdc++.h>
using namespace std;

void KLargestElement(int arr[5],int k,int n){
    priority_queue <int> minHeap;
    for(int i = 0 ; i < n; i++){
        minHeap.push(arr[i]);
        if(minHeap.size() > k){
            minHeap.pop();
        }
    }
    while(minHeap.size() > 0){
        cout<<minHeap.top()<<endl;
        minHeap.pop();
    }
}


int main(){
    int k,n = 5;
    int arr[5] = {1,2,5,4,3};
    cin>>k;
    cout<<"value of k is :"<<k<<endl;
     KLargestElement(arr,k,n);
    return 0;
}  