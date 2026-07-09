class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0;
        long long curr_sum=0;
        long long maxFreq=0;
        for(int j=0;j<nums.size();j++){
            curr_sum+=nums[j];
            long long window=j-i+1;
            long long cost=(window*nums[j])-curr_sum;
            while(cost>k){
                curr_sum-=nums[i];
                i++;
                window=j-i+1;
                cost=(window*nums[j])-curr_sum;
            }
            maxFreq=max(maxFreq,window);
        }
        return maxFreq;
    }
};
