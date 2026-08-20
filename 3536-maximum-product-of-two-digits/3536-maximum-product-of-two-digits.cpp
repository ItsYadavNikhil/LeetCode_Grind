class Solution {
public:
    int maxProduct(int n) {
        int maxi=0,smaxi=0;
        while(n>0) {
            int num = n%10;
            if(num > maxi) {
                smaxi = maxi;
                maxi = num;
            } else if(num > smaxi && num <= maxi ) {
                smaxi = num;
            }
            n/=10;
        }
        return (maxi*smaxi);
    }
};