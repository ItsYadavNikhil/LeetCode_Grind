class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        int l=0, r=nums.size()-1, i=r;
        while(l<=r) {
            int lsq = nums[l]*nums[l], rsq = nums[r]*nums[r];
            if(lsq < rsq) {
                res[i] = rsq;
                i--;
                r--;
            }
            else {
                res[i] = lsq;
                i--;
                l++;
            }
        }
        return res;
    }
};