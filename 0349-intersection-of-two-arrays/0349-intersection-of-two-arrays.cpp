class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            return intersection(nums2, nums1);
        }
        unordered_set<int> st(nums1.begin(), nums1.end());
        vector<int> ans;
        for (int i : nums2) {
            if (st.erase(i)) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};