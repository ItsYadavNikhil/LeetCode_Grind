class Solution {
public:
    bool isPalindrome(int x) {
        int n = x, rem = 0;
        long rev = 0;
        while(n>0) {
            rem = n % 10;
            rev = rev * 10 + rem;
            n /= 10;
        }
        if (x == rev) return true;
        else return false;
    }
};