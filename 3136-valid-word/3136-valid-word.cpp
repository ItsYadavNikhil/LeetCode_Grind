class Solution {
public:
    bool isValid(string word) {
        if(word.size()<3) return false;
        string vowel = "aeiouAEIOU";
        bool vflag = false, cflag = false;
        for (unsigned char c : word) {
            if (!isalnum(c)) {
                return false;
            }
            if(vowel.find(c) != string::npos) vflag = true;
            else if(isalpha(c)) cflag = true;
        }
        return (vflag && cflag);
    }
};