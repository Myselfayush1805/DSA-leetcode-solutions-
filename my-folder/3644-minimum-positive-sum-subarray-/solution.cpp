class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int i=0;
        int minSum=INT_MAX;
        while(i<nums.size()){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                if(sum>0 && j-i+1>=l && j-i+1<=r) minSum=min(sum,minSum);
            }
            i++;
        }
        return (minSum==INT_MAX) ? -1:minSum;
    }
};
