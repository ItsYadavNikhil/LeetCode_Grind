class Solution {
public:
    string reverseWords(string s) {
        while(true) {
            if(s[0] == ' ') s.erase(0,1);
            if(s[s.size()-1] == ' ') s.erase(s.size()-1,1);
            if(s[0] != ' ' && s[s.size()-1] != ' ') break;
        }
        //reversing whole
        int l = 0, h = s.size()-1;
        while (l < h) {
            char temp = s[l];
            s[l] = s[h];
            s[h] = temp;
            l++;h--;
        }
        //reversing words
        int st = 0;
        for(int i = 0; i < s.size(); i++) {
            if(i>0) {
                if(s[i] == ' ' && s[i-1] == ' ') {
                    s.erase(i,1);
                    i--;
                    continue;
                }
            }
            if(i == s.size()-1) reverse(s.begin()+st,s.begin()+i+1);
            else if(s[i] == ' ') {
                reverse(s.begin()+st,s.begin()+i);st=i+1;
            }
        }
        return s;
    }
};