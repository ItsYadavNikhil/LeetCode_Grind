class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> mp;
        for(const char& ch : s) {
            mp[ch]++;
        }
        for(const char& ch : t) {
            auto it = mp.find(ch);
            if (it == mp.end()){
                return ch;
            } else {
                if (--(it->second) == 0) {
                    mp.erase(it);
                }
            }
        }
        return ' ';
    }
};