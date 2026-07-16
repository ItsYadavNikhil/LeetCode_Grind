class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size()-1;
        int maxi = 0;

        while(l<r) {
            int len = r-l;
            int h = min(height[l],height[r]);
            maxi = max((len*h),maxi);
            if(height[l]<height[r]) l++;    
            else r--;
        }
        return maxi;
        
    }
};