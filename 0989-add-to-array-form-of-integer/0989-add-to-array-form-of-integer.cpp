class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        long l = num.size();
        int dif=(int(log10(abs(k)) + 1))-l;
        if(l<(log10(abs(k)) + 1)){
            while(dif>0){
                num.insert(num.begin(),0);
                dif--;
            }
            l= num.size();
        }
        int Carry = 0;
        for(int n=l-1;n>=0;n--) {
            int dig = num[n];
            int di= dig+(k % 10 + Carry);
            k = k / 10;
            if(di<10){
                num[n]=di;
                Carry=0;
            }
            else{
                num[n]=di%10;di=di/10;Carry=di;
            }
        }
        if(Carry!=0) num.insert(num.begin(),Carry);
        return num;
    }
};