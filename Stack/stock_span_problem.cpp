// stock span problem is a variation of nearest greater to left problem

#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[7] = {100, 80, 60, 70 ,60 , 75, 85};
    int n = 7;
   stack<pair<int,int>> s;
    vector<int> v;

    for(int i = 0 ; i < n ; i++){                    // only change is to traverse from left to right
        if(s.size() == 0){
             v.push_back(-1);
        }
        else if(s.size() > 0 && s.top().first > arr[i]){
            v.push_back(s.top().second);
        }
        else if(s.size() > 0 && s.top().first <= arr[i]){
            while(s.size() > 0 && s.top().first <= arr[i]){
                s.pop();
            }
            if(s.size() == 0){
                v.push_back(-1);
            }
            else{
                v.push_back(s.top().second);
            }
        }
            s.push({arr[i],i});
    }

    for (int i = 0; i < v.size() ; i++){
        v[i] = i - v[i];
    }
    
    for (int i = 0; i < n ; i++){
        cout << v[i] << " ";
    }
    return 0;
}