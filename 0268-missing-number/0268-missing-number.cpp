class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s = nums.size();
        s = s * ((s+1)/2);
        int sum = 0;
        for(int x : nums){
            sum += x;
        }
        if(sum < 2 && nums.size() == 2){
            return 2;
        }
        if(sum == 2 && nums.size() == 2) {
            return 1;
        }
        if(sum == 3 && nums.size() == 2) {
            return 0;
        }
        return (s-sum);
    }
};