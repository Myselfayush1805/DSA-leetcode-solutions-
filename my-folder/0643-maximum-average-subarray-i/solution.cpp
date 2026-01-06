class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double Sum=0;
        for(int i=0;i<k;i++){
            Sum+=nums[i];
        }    
        double maxSum=Sum;
        for(int j=k;j<nums.size();j++){
            Sum+=nums[j]-nums[j-k];
            maxSum=max(maxSum,Sum);
        }   
        return maxSum/k;       
    }
};
