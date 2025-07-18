#include <string>
using namespace std;


class Solution {
public:
    int countDigit(int n) {
      string str = to_string(n);
       return str.size();
    }
};