class Solution {
public:
    bool isPalindrome(string s) {
        
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
        return std::tolower(c);
        });
        for (int i = 0; i < s.size(); ) { 
            char ch = s[i];
            if (ch >= 'a' && ch <= 'z' || isdigit(ch)) {
                i++; 
            } else {
              s.erase(i, 1); 
            }
        }
        string s1 = s;
        reverse(s.begin(),s.end());
        cout << s;
        cout << s1;
        return s == s1 ? true : false;
    }
};