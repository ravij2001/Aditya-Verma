#include<bits/stdc++.h>
using namespace std;

void KClosestElements(int arr[5],int k,int x,int n){
    priority_queue <pair<int,int>> maxHeap;
    for(int i = 0 ; i < n; i++){
        maxHeap.push({abs(arr[i] - x),arr[i]});
        if(maxHeap.size() > k){
            maxHeap.pop();
        }
    }
    while(maxHeap.size() > 0){
        cout<<maxHeap.top().second<<" "<<endl;
        maxHeap.pop();
    }
}


int main(){
    int k,x,n = 5;
    int arr[5] = {4,2,3,1,10};
    cin>>k;
    cout<<"value of k is :"<<k<<endl;
    cin>>x;
    cout<<"value of x is :"<<x<<endl;
     KClosestElements(arr,k,x,n);
    return 0;
}  