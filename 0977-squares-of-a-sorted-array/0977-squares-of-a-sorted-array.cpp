class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;
        int l=0,r=nums.size()-1;
        while(l<=r) {
            if(nums[l]*nums[l] < nums[r]*nums[r]) {
                res.insert(res.begin(), nums[r]*nums[r]);
                r--;
            }
            else {
                res.insert(res.begin(), nums[l]*nums[l]);
                l++;
            }
        }
        return res;
    }
};