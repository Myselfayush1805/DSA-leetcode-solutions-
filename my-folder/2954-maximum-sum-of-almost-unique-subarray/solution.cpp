class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        long long maxSum=0;
        long long sum=0;
        unordered_map<int,int> count;
        for(int i=0;i<k;i++){
            sum+=nums[i];
            count[nums[i]]++;
        }  
        if(count.size()>=m) maxSum=max(maxSum,sum);
        int j=0;
        for(int i=k;i<nums.size();i++){
            sum+=nums[i];
            sum-=nums[j];
            count[nums[j]]--;
            count[nums[i]]++;
            if(count[nums[j]]==0) count.erase(nums[j]);
            j++;
            if(count.size()>=m) maxSum=max(maxSum,sum);
        }
        return maxSum; 
    }
};
