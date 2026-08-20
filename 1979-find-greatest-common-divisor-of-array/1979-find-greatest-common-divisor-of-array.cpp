class Solution {
public:
    int findGCD(vector<int>& nums) {
        int16_t mini = 1001, maxi = 0;
        for(int16_t i = 0; i<nums.size(); i++) {
            mini = min(mini,int16_t(nums[i]));
            maxi = max(maxi,int16_t(nums[i]));
        }
        return gcd(mini,maxi);
    }
};