class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        unordered_map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        int prev = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            int curr = mp[s[i]];
            if (curr < prev) {
                sum -= curr;
            }
            else {
                sum += curr;
                prev = curr;
            }
        }
        return sum;
    }
};