class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        long long sum=1LL*k*(k+1)/2;
        int boundary=k;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=boundary){
                sum-=nums[i];
                sum+=boundary+1;
                boundary+=1;
            }
        }
        return sum;
    }
};
