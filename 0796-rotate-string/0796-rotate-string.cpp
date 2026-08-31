// First Approach I got, not very Optimal

// class Solution {
// public:
//     bool rotateString(string s, string goal) {
//         for (int i = 0; i < s.length(); i++) {
//             s = s + s[0];
//             s.erase(0,1);
//             if(s == goal) return true;
//         }
//         return false;
//     }
// };

// Optimal Approach

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) {
            return false;
        }
        return (s + s).find(goal) != string::npos;
    }
};