#include <bits/stdc++.h>
using namespace std;

 class MinStack {
private:
    stack<int>s;
    int minElement = INT_MAX;
public:
    MinStack() {}
    void push(int val) {
        if(s.size() == 0){
            s.push(val);
            minElement = val;
        }
        else {
            if(val >= minElement){
            s.push(val);
            }
            else if(val < minElement){
                s.push(2*val - minElement);
            }
        }
    }
    void pop() {
        if(s.size() == 0){
        return;
        }
        else {
            if(s.top() >= minElement){
            s.pop();
            }
            else if(s.top() < minElement){
                minElement = 2*minElement - s.top();
                s.pop();
            }
        }
        
    }
    
    int top() {
         if(s.size() == 0){
        return -1;
        }
        else {
            if(s.top() >= minElement)
            return s.top();
            else
                return minElement;
        }
    }
    
    int getMin() {
        if(s.size() == 0){
            return -1;
        }
        return minElement;
    }
};