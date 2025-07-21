#include <algorithm>
#include <iostream>
#include<unordered_map>
using namespace std;

// brute force approach with time complexity o(nlogn) and space complexity 0(1)

bool areAnagrams(string &s1, string &s2) {
    
    if (s1.length() != s2.length()) 
        return false;
    
    // Sort both strings
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    // Compare sorted strings
    return (s1 == s2);
}



class Solution2 {
public:
    bool isAnagram(string s, string t) {
          if (s.length() != t.length()) return false;

        unordered_map<char, int> count;

        for (char c : s) {
            count[c]++;
        }

        for (char c : t) {
            count[c]--;
        }
        for (auto& pair : count) {
            if (pair.second != 0) return false;
        }

        return true;
    }
};



int main() {
    
    string s1 = "geeks";
    string s2 = "kseegsss";
    
	if(areAnagrams(s1, s2)){
	    cout << "true" << endl;
	} 
	else{
	    cout << "false" << endl;
	}
}