class Solution {
public:
    int addDigits(int num) {
    int r,sum=0;
    if(num == 0){
        return 0;
    }

    while(num>0){
        r=num%10;
        sum+=r;
        num/=10;
    }
        if(sum>=10) {
            int res = addDigits(sum);
            return res;
        }
        
        return sum;
    }
};