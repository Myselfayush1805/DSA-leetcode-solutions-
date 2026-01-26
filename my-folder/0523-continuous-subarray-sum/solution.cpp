class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>prefCount;
        prefCount[0]=-1;
        int prefSum=0;
        for(int i=0;i<nums.size();i++){
            prefSum+=nums[i];
            int mod=prefSum%k;
            if(prefCount.find(mod)!=prefCount.end()){
                if(i-prefCount[mod]>=2){
                    return true;
                }
            }
            else{
                prefCount[mod]=i;
            }
        }  
        return false;
    }  
};
