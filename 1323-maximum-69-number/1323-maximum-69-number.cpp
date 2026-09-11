class Solution {
public:
    int maximum69Number (int num) {
        string st = to_string(num);
        if(st.find('6') != string::npos) {
            int pos = st.find('6');
            st[pos] = '9';
        }
        return stoi(st);
        
    }
};