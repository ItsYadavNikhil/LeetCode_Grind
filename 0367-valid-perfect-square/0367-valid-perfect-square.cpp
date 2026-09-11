class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 2) return true;
        int sqrt = 0, left = 0, right = num/2;
        while(left<=right) {
            int mid = left + (right - left)/2;
            if(mid <= num/mid) {
                sqrt = mid;
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        if(sqrt*sqrt == num) return true;
        else return false;
    }
};