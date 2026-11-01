class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini = INT_MAX;
        long long sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            mini = min(nums[i], mini);
            sum += nums[i];
        }
        return sum - (mini * nums.size());
    }
};