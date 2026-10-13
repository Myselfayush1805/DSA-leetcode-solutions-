class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int &n:nums) n=abs(n);
        sort(nums.begin(),nums.end());
        long long ans=0;        
        int l=0;
        int r=nums.size()-1;
        while(l<r){
            ans+=(nums[r]*nums[r]);
            r--;
            ans-=(nums[l]*nums[l]);
            l++;
        }
        if(l==r) ans+=(nums[r]*nums[r]);
        return ans;
    }
};
