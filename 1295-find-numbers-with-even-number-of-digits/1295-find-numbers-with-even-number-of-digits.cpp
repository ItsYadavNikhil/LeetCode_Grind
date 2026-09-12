class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(int& n : nums) {
            if ((static_cast<int>(log10(abs(n))) + 1) % 2 == 0) c++;
        }
        return c;
    }
};