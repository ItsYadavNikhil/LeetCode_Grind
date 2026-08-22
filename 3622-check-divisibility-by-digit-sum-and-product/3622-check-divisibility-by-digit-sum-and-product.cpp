class Solution {
public:
    bool checkDivisibility(int n) {
        int n1=n, dsum = 0, dprd = 1;
        while(n1>0){
            int rem = n1%10;
            dsum+=rem;
            dprd*=rem;
            n1/=10;
        }
        return (n%(dsum+dprd) == 0) ? true : false;
    }
};