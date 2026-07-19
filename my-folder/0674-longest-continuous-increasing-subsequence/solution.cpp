class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int maxLen=1;
        int count=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]>nums[i]) count++;
            else count=1;
            maxLen=max(maxLen,count);
        }       
        return maxLen;
    }
};
