#include<bits/stdc++.h>
using namespace std;

int KthSmallestElement(int arr[5],int k,int n){
    priority_queue <int> maxHeap;
    for(int i = 0 ; i < n; i++){
        maxHeap.push(arr[i]);
        if(maxHeap.size() > k){
            maxHeap.pop();
        }
    }
    return maxHeap.top();
}


int main(){
    int k,n = 5;
    int arr[5] = {1,2,5,4,3};
    cin>>k;
    cout<<"value of k is :"<<k<<endl;
    
int result = KthSmallestElement(arr,k,n);
cout<<result;
    return 0;
}  