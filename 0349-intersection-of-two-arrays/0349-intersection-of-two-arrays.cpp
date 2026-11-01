class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for(int i : nums1) {
            mp[i]++;
        }
        for(int i : nums2) {
            if(mp.count(i) > 0) {
                mp.erase(i);
                ans.push_back(i);
            }
        }
        return ans;
    }
};