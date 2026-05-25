class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return find(nums,goal) - find(nums,goal-1);
    }
    int find(vector<int>& arr, int target){
        int count = 0, sum = 0;
        int left = 0, right = 0;
        while(right < arr.size()){
            sum += arr[right];
            while (left <= right && sum > target) {
                sum -= arr[left]; left++;
            }
            count += (right - left + 1);
            right++;
        }
        return count;
    }
};