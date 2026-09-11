class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        if (n == 1) {
            ans.push_back("1"); 
        }
        else {
            ans.push_back("1");
            ans.push_back("2");
        }   
        for (int i = 3; i<=n; i++) {
            if(i%3 == 0 && i%5 == 0 && i>=5) {ans.push_back("FizzBuzz");continue;}
            else if(i%3 == 0 && i>=3) ans.push_back("Fizz");
            else if(i%5 == 0 && i>=5) ans.push_back("Buzz");
            else ans.push_back(to_string(i));
        }
        return ans;
    }
};