class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            return intersect(nums2, nums1);
        }
        unordered_map<int, int> mp;
        for (int i : nums1) {
            mp[i]++;
        }
        vector<int> ans;
        ans.reserve(nums1.size());
        for (int i : nums2) {
            auto it = mp.find(i);
            if (it != mp.end()) {
                ans.push_back(i);
                if (--it->second == 0) {
                    mp.erase(it);
                }
                if (mp.empty()) {
                    break;
                }
            }
        }
        return ans;
    }
};