class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size() == 1) return true;
        bool setbit = false; int prev = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            if(i == nums.size()-1) setbit = true;
            if(nums[i]>=prev) {prev = nums[i];continue;}
            else {setbit = false;break;}
        }
        if(setbit == true) return true;
        prev = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            if(i == nums.size()-1) setbit = true;
            if(nums[i]<=prev) {prev = nums[i];continue;}
            else {setbit = false;break;}
        }
        return setbit;
    }
};