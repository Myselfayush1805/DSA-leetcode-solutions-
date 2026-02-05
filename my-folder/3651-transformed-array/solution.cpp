class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int> res;
        int n=nums.size();
        for(int i=0;i<n;i++){
            long long a=nums[i]+i;
            int ans=(a%n+n)%n;
            res.push_back(nums[ans]);
        }       
        return res;
    }
};
