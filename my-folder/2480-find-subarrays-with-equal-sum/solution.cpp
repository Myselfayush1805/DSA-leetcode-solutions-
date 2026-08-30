class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_set<int> sum;
        for(int i=1;i<nums.size();i++){
            int currSum=nums[i]+nums[i-1];
            if(sum.count(currSum)) return true;
            sum.insert(currSum);
        }
        return false;
    }
};
