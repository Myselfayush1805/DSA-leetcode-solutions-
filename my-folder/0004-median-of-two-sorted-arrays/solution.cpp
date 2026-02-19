class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged(nums1.size()+nums2.size());
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),merged.begin());
        int mid=merged.size()/2;
        if(merged.size()%2==0){
            return (merged[mid-1]+merged[mid])/2.0;
        }  
        else{
            return merged[mid];
        }
    }
};
