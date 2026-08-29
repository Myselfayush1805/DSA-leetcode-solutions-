class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        vector<int> pref(n,1);
        vector<int> suff(n,1);
        for(int i=1;i<n;i++){
            if(nums[i]>=nums[i-1]) pref[i]=pref[i-1]+1;
        }  
        for(int i=n-2;i>=0;i--){
            if(nums[i]<=nums[i+1]) suff[i]=suff[i+1]+1;
        }    
        int maxLen=1;
        for(int i=0;i<n;i++){
            if(i>0 && i<n-1 && nums[i+1]>=nums[i-1]) maxLen=max(maxLen,pref[i-1]+1+suff[i+1]);
            if(i>0) maxLen=max(maxLen,pref[i-1]+1);
            if(i<n-1) maxLen=max(maxLen,suff[i+1]+1);
        }
        return maxLen;
    }
};
