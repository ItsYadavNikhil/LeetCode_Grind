class Solution {
public:
    int reverse(int num) {
        int rev = 0;
        while(num!=0) {
            if(rev > INT_MAX/10 || rev < INT_MIN/10) return 0;
            int rem = num%10;
            rev = rev*10+rem;
            num /= 10;
        }
        return rev;
    }
};