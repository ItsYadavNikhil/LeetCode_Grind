class Solution {
public:
    int pivotInteger(int n) {
        if(n == 1) return 1;
        vector<int> pre(n,0);
        int sum = 0;
        for(int i = 0; i<n; i++) {
            sum+=(i+1);
            pre[i] = sum;
        }
        for(int i = 1; i<n; i++) {
            if(pre[n-1] - pre[i-1] == pre[i]) return i+1;
        }
        return -1;
    }
};