class Solution {
public:
    bool detectCapitalUse(string word) {
        int ts = 0;
        for(int i = 0; i<word.size(); i++) {
            if(isupper(word[i])) { 
                ts++;
            } 
        }
        if(ts==word.size() || ts == 0 || (isupper(word[0]) && ts==1)) return true;
        return false;
    }
};