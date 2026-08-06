class Solution {
public:
    int smallestNumber(int n, int t) {
        int p,pre=n;
        while(true){
            p = 1;
            while(n>0){
                int rem = n % 10;
                p*=rem;
                n=n/10;
            }
            cout<<p<<" "<<pre;
            if(p%t == 0) return pre;
            else{
                n=++pre;
            }
        }
        return 1;
    }
};