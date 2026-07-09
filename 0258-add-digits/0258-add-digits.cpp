class Solution {
public:
    int addDigits(int num) {
        int n = num, sum = 0, rem = 0;
        while (true) {
            while (n>0) {
                rem = n % 10;
                sum = sum + rem;
                n /= 10;
            }
            if(sum / 10 == 0) return sum;
            n = sum; sum = 0;
        }
        return sum;
    }
};