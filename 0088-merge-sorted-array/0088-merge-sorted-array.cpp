class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v2 = nums1;
        int l = 0, r = 0;int i = 0;
        while(l+r<v2.size()) {
            if(l>=m){
                nums1[i] = nums2[r]; r++; i++;
            }
            else if (r>=n) {
                nums1[i] = v2[l]; l++; i++;
            }
            else {
                if(v2[l] <= nums2[r]) {
                nums1[i] = v2[l]; l++; i++;
                }
                else if (v2[l] > nums2[r]) {
                nums1[i] = nums2[r]; r++; i++;
                }
            }
            
        }
    }
};