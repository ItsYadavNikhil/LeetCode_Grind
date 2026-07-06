class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr = 0, maxi = INT_MIN;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 1) {
                maxi = max(maxi, curr);
                curr = 0;
                continue;
            }
            curr++;
            maxi = max(maxi, curr);
        }
        return maxi;
    }
};