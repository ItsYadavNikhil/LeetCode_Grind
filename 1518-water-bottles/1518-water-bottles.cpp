class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        // // if(numBottles%numExchange == 0 )return 1+numBottles+(numBottles/numExchange);
        // // else return numBottles+((numBottles+(numBottles%numExchange))/numExchange);
        // return numBottles+(numBottles/numExchange)+(((numBottles%numExchange)+(numBottles/numExchange))/numExchange);
        int ans = numBottles;
        while(numBottles >= numExchange) {
            int newBottles = numBottles / numExchange;
            int remainBottles = numBottles % numExchange;
            ans += newBottles ;
            numBottles = newBottles + remainBottles;
        }
        return ans;
    }
};