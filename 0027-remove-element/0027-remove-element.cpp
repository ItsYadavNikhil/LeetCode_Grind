class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0,n=nums.size();
        for(int i=0; i<nums.size(); i++){
            if(nums[i]== val){
                nums.erase(nums.begin()+i);
                i--;
                k++;
            } 
        }
        for(int i=0;i<k;i++){
            nums.push_back(0);
        }
        return n-k;
    }
};