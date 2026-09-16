class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> map;
        for(int i : nums) {
            map[i]++;
        }
        for(auto it : map) {
            if(it.second == 2) ans.push_back(it.first);
        }
        for(int i = 1; i <= nums.size(); i++) {
            if(map.find(i) == map.end()) ans.push_back(i);
        }
        return ans;
    }
};