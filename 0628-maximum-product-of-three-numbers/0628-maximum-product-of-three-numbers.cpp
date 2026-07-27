class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size(),p,q;
        sort(nums.begin(),nums.end());
        p=nums[n-1]*nums[n-2]*nums[n-3];
        q=nums[0]*nums[1]*nums[n-1];
        return max(p,q);
    }
};