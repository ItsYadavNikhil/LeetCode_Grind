class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size(),p,q;
        sort(nums.begin(),nums.end());
        p=(nums[n-1]-1)*(nums[n-2]-1);
        q=(nums[0]-1)*(nums[n-1]-1);
        return max(p,q);
    }
};