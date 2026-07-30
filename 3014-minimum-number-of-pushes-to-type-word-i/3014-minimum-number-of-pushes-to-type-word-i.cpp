class Solution {
public:
    int minimumPushes(string word) {
        int len = word.size();
        int c=1, cost = 0;
        while(len>0) {
            if(len>=8) {
                cost = cost + (8*c);
                c++;
                len = len - 8;
            }
            else {
                cost = cost + (len*c);
                len = len-8;
            }
        }
        return cost;
    }
};