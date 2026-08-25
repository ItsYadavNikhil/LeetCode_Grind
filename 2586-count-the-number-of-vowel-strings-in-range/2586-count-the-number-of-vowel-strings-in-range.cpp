class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int c=0;
        for(int i=left;i<=right;i++){
            string s = words[i];
            int r = s.size()-1;
            if((s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u') && (s[r] == 'a' || s[r] == 'e' || s[r] == 'i' || s[r] == 'o' || s[r] == 'u')) {
                c++;
            }
        }
        return c;
    }
};