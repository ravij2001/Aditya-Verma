#include <iostream>
using namespace std;

void reverseArray(int arr[], int n){
    for(int i = 0; i < n/2 ; i++){
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    for(int i = 0; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}


// time complexity for reverse is o(n^2) 
int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    reverseArray(arr,8);
    return 0;
}