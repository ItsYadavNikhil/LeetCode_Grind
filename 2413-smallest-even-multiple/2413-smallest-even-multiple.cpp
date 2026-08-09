class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2 == 0) return n;
        int a = n;
        while(true) {
            a += n;
            if(a%2 == 0) break;
        }
        return a;
    }
};