class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int minSum=INT_MAX;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]<nums[j]){
                    for(int k=j+1;k<nums.size();k++){
                        if(nums[k]<nums[j]) minSum=min(minSum,nums[i]+nums[j]+nums[k]);
                    }
                }
            }
        }        
        return (minSum==INT_MAX) ? -1:minSum;
    }
};
