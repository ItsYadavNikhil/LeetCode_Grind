class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int y = n, x = 0;
        while (y<nums.size()) {
            ans.push_back(nums[x]);
            ans.push_back(nums[y]);
            x++;y++;
        }
        return ans;
        
    }
};