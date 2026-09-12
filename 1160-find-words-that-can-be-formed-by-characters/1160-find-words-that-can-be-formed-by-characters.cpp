class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans = 0;
        unordered_map<char,int> map;
        for(char c : chars) {
            map[c]++;
        }
        for(auto word : words) {
            unordered_map<char,int> temp_map = map;
            bool flag = true;
            for(char c : word) {
                if(temp_map[c] == 0) {
                    flag = false;
                    break;
                }
                temp_map[c]--;
            }
            if(flag) ans+=word.size();;
        }
        return ans;
    }
};