class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxi = 0;
        for (int x : nums) maxi = max(maxi,x);
        int l=0, c=0, n=nums.size();
        long long ans = 0;
        for (int r = 0; r < n; r++) {
            if(nums[r] == maxi) c++;
            while (c==k) {
                ans += (n-r);
                if (nums[l]==maxi) c--;
                l++;
            }
        }
        return ans;
    }
};