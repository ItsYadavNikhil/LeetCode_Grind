class Solution {
public:
    bool rotateString(string s, string goal) {
        for (int i = 0; i < s.length(); i++) {
            s = s + s[0];
            s.erase(0,1);
            if(s == goal) return true;
        }
        return false;
    }
};