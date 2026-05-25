class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count = 1, maj=0;
        int n =nums.size();
        if(n==1)return nums[0];
        for(int i = 0; i<n-1;i++){
            if(nums[i]==nums[i+1]){
                count++;
            }
            else{
                count = 1;
            }
            if(count > (n/2)){
                maj = nums[i];
                break;
            }
        }return maj;
    }
};