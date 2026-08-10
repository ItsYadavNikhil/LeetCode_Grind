// First Approach  -  Not Optimal
// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {
//         vector<int> ans;
//         unordered_set<int> st(nums.begin(), nums.end());
//         for(int i = 1; i <= nums.size(); i++){
//             if(st.find(i) == st.end()){
//                 ans.push_back(i);
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int ind=abs(nums[i])-1;
            if(nums[ind]>0)nums[ind]=-nums[ind];
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)ans.push_back(i+1);
        }
        return ans;
    }
};