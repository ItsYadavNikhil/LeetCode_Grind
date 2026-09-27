class Solution {
public:
    string reversePrefix(string word, char ch) {
        int r;
        for(int i = 0; i<word.size();i++) {
            if(ch == word[i]){
                r = i; break;
            }
            if(i==word.size()-1) return word;
        }
        int l = 0;
        while(l<r) {
            char temp = word[l];
            word[l] = word[r];
            word[r] = temp;
            l++;r--;
        }
        return word;
    }
};