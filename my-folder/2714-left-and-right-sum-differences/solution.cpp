class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int rightsum=0;
        for(int n:nums) rightsum+=n;
        int leftsum=0;
        vector<int> res(nums.size());
        for(int i=0;i<nums.size();i++){
            rightsum-=nums[i];
            res[i]=abs(leftsum-rightsum);
            leftsum+=nums[i];
        }
        return res;
    }
};
