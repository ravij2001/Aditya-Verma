#include<bits/stdc++.h>
using namespace std;

int KthLargestElement(int arr[5],int k,int n){
     priority_queue <int, vector<int>, greater<int>> minHeap; 
    for(int i = 0 ; i < n; i++){
        minHeap.push(arr[i]);
        if(minHeap.size() > k){
            minHeap.pop();
        }
    }
    return minHeap.top();
}


int main(){
    int k,n = 5;
    int arr[5] = {1,2,5,4,3};
    cin>>k;
    cout<<"value of k is :"<<k<<endl;
    
int result = KthLargestElement(arr,k,n);
cout<<result;
    return 0;
}  