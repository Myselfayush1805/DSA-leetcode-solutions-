class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        for(int& n:nums) n=abs(n);
        sort(nums.begin(),nums.end());
        return 1LL*nums.back()*nums[nums.size()-2]*1e5;
    }
};
