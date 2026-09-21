class Solution {
    public int maximumWealth(int[][] accounts) {
        int maxi = 0;
        for(int i = 0; i<accounts.length; i++) {
            int curr=0;
            for(int j = 0; j<accounts[i].length; j++) {
                curr=curr+accounts[i][j];
            }
            maxi = Math.max(curr,maxi);
        }
        return maxi;
    }
}