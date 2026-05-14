class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()!=nums.back()+1) return false;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=i+1) return false;                    
        }        
        return true;
    }
};
