class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        long long maxSum=0;
        long long sum=0;
        for(int i=0;i<k;i++){
            count[nums[i]]++;
            sum+=nums[i];
        }
        if(count.size()==k) maxSum=max(maxSum,sum);
        int j=0;
        for(int i=k;i<nums.size();i++){
            sum+=nums[i];
            sum-=nums[j];
            count[nums[j]]--;
            count[nums[i]]++;
            if(count[nums[j]]==0) count.erase(nums[j]);
            j++;
            if(count.size()==k) maxSum=max(maxSum,sum);
        } 
        return maxSum;
    }
};
