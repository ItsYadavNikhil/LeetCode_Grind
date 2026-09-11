class Solution {
public:
    int maximum69Number (int num) {
        string st = to_string(num);
        auto pos = st.find('6');
        if(pos != string::npos) {
            st[pos] = '9';
        }
        return stoi(st);
        
    }
};