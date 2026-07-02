class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0,h = nums.size()-1;
        if(target<=nums[l]) return 0;
        if(target==nums[h]) return nums.size()-1;
        if(target>nums[h]) return nums.size();
        while(l<=h){
            int mid = (h+l)/2;
            if(nums[mid] == target) return mid;
            if(target<nums[mid]) h = mid;
            if(target>nums[mid]) l = mid;
            if(h-l == 1) return l+1;
            
        }
        return l;
    }
};