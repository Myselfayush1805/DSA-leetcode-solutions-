class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        if(nums.size()==k) return *max_element(nums.begin(),nums.end());
        unordered_map<int,int> freq;
        for(int n:nums) freq[n]++;
        int maxNum=-1;
        if(k==1){
            for(int n:nums){
                if(freq[n]==1) maxNum=max(maxNum,n);
            }
            return maxNum;
        }
        else{
            int ans=-1;
            if(freq[nums[0]]==1) ans=max(ans,nums[0]);
            if(freq[nums.back()]==1) ans=max(ans,nums.back());
            return ans;
        }
    }
};
