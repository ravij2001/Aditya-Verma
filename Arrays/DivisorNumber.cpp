#include <iostream>
#include <vector> 
#include <algorithm> 
using namespace std;

class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> div; 
        for(int i = 1; i <= n; i++) {
            if(n % i == 0) {
                div.push_back(i);
            }
        }
        return div;  // ✅ Just return the vector
    }
};
