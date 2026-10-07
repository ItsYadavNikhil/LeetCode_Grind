class Solution {
public:
    vector<vector<vector<int>>> dp;
    int findMaxForm(vector<string>& strs, int m, int n) {
        dp.resize(strs.size(),vector<vector<int>>(m+1,vector<int>(n+1,-1)));
        return find(strs,0,m,n,strs.size());
    }
    int find(vector<string>& strs,int i,int m,int n,int size) {
        if (i == size) return 0;
        if (dp[i][m][n] != -1) return dp[i][m][n];
        int o = 0, z = 0;
        for (char c : strs[i]) {
            if (c == '1') o++;
            else z++;
        }
        int ans = find(strs,i+1,m,n,size);
        if (m-z<0 || n-o < 0) return ans;
        ans = max(ans,1+find(strs,i+1,m-z,n-o,size));
        return dp[i][m][n] = ans;
    }
};