class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3) return 0;  
        int count=0;
        int i=0;
        for(int j=2;j<nums.size();j++){
            if(nums[j]-nums[j-1]==nums[j-1]-nums[j-2]) count+=(j-i-1);
            else i=j-1;
        }
        return count;
    }
};
