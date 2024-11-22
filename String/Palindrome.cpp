class Solution {
public:
    bool isPalindrome(int x) {
        int old = x;
        long reverse_number = 0;
        while(x > 0){
            reverse_number = (reverse_number*10) + (x % 10);
            x = x / 10;
        }
        if(reverse_number == old)
            return true;
        else
            return false;    
    }
};