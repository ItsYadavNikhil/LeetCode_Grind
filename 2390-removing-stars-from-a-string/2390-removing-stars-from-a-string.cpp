class Solution {
public:
    string removeStars(string s) {
        string st;
        for(int i = 0; i<s.size(); i++) {
            st.push_back(s[i]);
            if(s[i] == '*') {
                st.pop_back();
                st.pop_back();
            }
        }
        // string result = "";
        // while (!st.empty()) {
        //     result = st.top() + result; 
        //     st.pop();
        // }
        return st;
    }
};