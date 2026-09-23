class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int target=sum-x;
        if(target<0) return -1;
        if(target==0) return nums.size();
        int maxLen=-1;
        int currSum=0;
        int l=0;
        for(int r=0;r<nums.size();r++){
            currSum+=nums[r];
            while(currSum>target && l<=r){
                currSum-=nums[l];
                l++;
            }
            if(currSum==target) maxLen=max(maxLen,r-l+1);
        }
        return (maxLen==-1) ? -1:nums.size()-maxLen;
    }
};
