#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {1, 3, 2, 4};
    int n = 5;
    vector<int> v; 
    stack<int> s;

    for(int i = 0 ; i < n - 1 ; i++){                    // only change is to traverse from left to right
        if(s.size() == 0){
             v.push_back(-1);
        }
        else if(s.size() > 0 && s.top() > arr[i]){
            v.push_back(s.top());
        }
        else if(s.size() > 0 && s.top() <= arr[i]){
            while(s.size() > 0 && s.top() <= arr[i]){
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
    for (auto i : v)
        cout << i << " ";
    return 0;
}