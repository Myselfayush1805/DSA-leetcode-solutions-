class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            int subarrays=1;
            int currSum=0;
            for(int n:nums){
                if(currSum+n>mid){
                    subarrays++;
                    currSum=0;
                }
                currSum+=n;
            }
            if(subarrays<=k){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }   
};
