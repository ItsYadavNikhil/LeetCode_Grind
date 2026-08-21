class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> res;
        sort(nums.begin(),nums.end());
        for(int i = nums[0], j = 0; i<=nums.back();i++) {
            if(nums[j]!=i){
                res.push_back(i);
                continue;
            }
            else {
                j++;
            }
        }
        return res;
    }
};