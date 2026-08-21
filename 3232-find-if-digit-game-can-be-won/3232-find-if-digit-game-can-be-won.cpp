class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int s1=0,s2=0;
        for (int x : nums) {
            if(x < 10) s1+=x;
            else s2+=x;
        }
        return s1 != s2 ? true : false;
    }
};