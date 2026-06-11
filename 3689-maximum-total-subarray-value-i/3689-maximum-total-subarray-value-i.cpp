class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int x: nums){
            maxi=max(maxi,x);
            mini=min(mini,x);
        }
        long long sum=maxi-mini;
        return sum*k;
    }
};