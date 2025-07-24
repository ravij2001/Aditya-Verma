#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {4, 5, 2, 10 ,8};
    int n = 5;
    vector<int> v; 
    stack<int> s;

    for(int i = n - 1 ; i >= 0 ; i--){                    // only change is to traverse from left to right
        if(s.size() == 0){
             v.push_back(-1); 
        }
        else if(s.size() > 0 && s.top() < arr[i]){
            v.push_back(s.top());
        }
        else if(s.size() > 0 && s.top() >= arr[i]){
            while(s.size() > 0 && s.top() >= arr[i]){
                s.pop();
            }
            if(s.size() == 0){
                v.push_back(-1);
            }
            else{
                v.push_back(s.top());
            }
        }
            s.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    for (auto i : v)
        cout << i << " ";
    return 0;
}