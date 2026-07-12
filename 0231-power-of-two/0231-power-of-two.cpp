class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 0) return false;
        double res = log2(n);
        if (floor(res) == ceil(res)) return true;
        else return false;
    }
};