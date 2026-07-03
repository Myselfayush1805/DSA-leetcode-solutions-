class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxOnes=0;
        int i=0;
        int k=1;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==0)k--;
            while(k<0){
                if(nums[i]==0) k++;
                i++;
            }
            maxOnes=max(maxOnes,j-i);
        }      
        return maxOnes;
    }
};
