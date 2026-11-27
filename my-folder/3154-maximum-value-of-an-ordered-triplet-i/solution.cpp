class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long maxVal=LONG_MIN;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    long long val=1LL*(nums[i]-nums[j])*nums[k];
                    maxVal=max(maxVal,val);
                }
            }
        }        
        return (maxVal<0) ? 0:maxVal;
    }
};
