class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;
        int l=0,r=nums.size()-1;
        while(l<=r) {
            int lsq = nums[l]*nums[l], rsq = nums[r]*nums[r];
            if(lsq < rsq) {
                res.insert(res.begin(), rsq);
                r--;
            }
            else {
                res.insert(res.begin(), lsq);
                l++;
            }
        }
        return res;
    }
};