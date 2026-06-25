// class Solution {
// public:
//     int jump(vector<int>& nums) {
//         int maxi = 0,c=0;
//         //if(nums[0]==0) return 0;
//         for(int i = 0;i<nums.size()-1;i++){
//             if(i > maxi) return false;
//             int pre = maxi;
//             maxi = max(maxi, i + nums[i]);
//             if(maxi!=pre) c++;
//         }
//         return c;
//     }
// };


//Final 

class Solution {
public:
    int jump(vector<int>& nums) {
        int maxi = 0, curr = 0, count = 0;
        for (int i  =0;i<nums.size()-1;i++) {
            maxi = max(maxi,i+nums[i]);
            if (i ==  curr) {
                count++;
                curr = maxi;
            }
        }
        return count;
    }
};