class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            return intersect(nums2, nums1);
        }
        unordered_map<int, int> mp;
        for(int i : nums1) {
            mp[i]++;
        }
        vector<int> ans;
        for(int i : nums2) {
            if(mp.count(i) > 0 && mp[i] > 0) {
                mp[i]--;
                ans.push_back(i);
            }
        }
        return ans;
    }
};