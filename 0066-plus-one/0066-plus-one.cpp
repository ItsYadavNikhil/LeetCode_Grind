class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.size() == 1 && digits[0] == 9){
            digits[0] = 0;
            digits.insert(digits.begin(),1);
            return digits;
        }
        if(digits.size() == 1 && digits[0] < 9){
            digits[0] = digits[0]+1;
            return digits;
        }
        int last = digits.size()-1, c = 0;
        while(true){
            if(last == 0 && c == 1) {
                if(digits[last] == 9) digits[last] = 0;
                else {
                    digits[last] = digits[last] + 1; break;
                }
                digits.insert(digits.begin(),1); break;
            }
            if(digits[last] < 9) {
                digits[last] = digits[last] + 1; break;
            }
            if(digits[last] == 9) {
                c=1;
                digits[last] = 0;
                last--;
            }
        }
        return digits;
    }
};