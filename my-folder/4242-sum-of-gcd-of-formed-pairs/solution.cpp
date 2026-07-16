class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<long long> prefixGcd(n,0);
        int currMax=0;
        for(int i=0;i<n;i++){
            currMax=max(currMax,nums[i]);
            prefixGcd[i]=gcd(nums[i],currMax);
        }      
        sort(prefixGcd.begin(),prefixGcd.end());
        int l=0;
        int r=n-1;
        long long sum=0;
        while(l<r){
            sum+=gcd(prefixGcd[l],prefixGcd[r]);
            l++;
            r--;
        }
        return sum;
    }
};
