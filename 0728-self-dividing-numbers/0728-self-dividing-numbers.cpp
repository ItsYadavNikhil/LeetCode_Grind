class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        while(left<=right) {
            bool flag = true;
            int n = left;
            while(n>0) {
                int b = n%10;
                if(b == 0) {
                    flag = false;
                    break;
                }
                if(left%b != 0) {
                    flag = false;
                    break;
                }
                n /= 10;
            }
            if(flag) ans.push_back(left);
            left++;
        }
        return ans;
    }
};