class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        bool isValid=true;
        int j=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                if(j!=-1){
                    if(i-j-1<k) isValid=false;
                }
                j=i;
            }
        }                
        return isValid;
    }
};
