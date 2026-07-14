class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,long long> mp;
        bool found=false;
        long long sum=0;
        long long maxSum=LONG_MIN;
        for(int n:nums){
            long long currSum=sum+n;
            if(mp.count(n-k)){
                maxSum=max(maxSum,currSum-mp[n-k]);
                found=true;
            } 
            if(mp.count(n+k)){
                maxSum=max(maxSum,currSum-mp[n+k]);
                found=true;
            }
            if(mp.count(n)) mp[n]=min(mp[n],sum);
            else mp[n]=sum;
            sum=currSum;
        }   
        return found? maxSum:0;
    }
};
