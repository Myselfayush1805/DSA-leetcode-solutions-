class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>prefCount;
        prefCount[0]=-1;
        int prefSum=0;
        int maxLen=0;
        for(int i=0;i<nums.size();i++){
            int val=(nums[i]==0?-1:1);
            prefSum+=val;
            if(prefCount.find(prefSum)!=prefCount.end()){
                maxLen=max(maxLen,i-prefCount[prefSum]); 
            }
            else{
                prefCount[prefSum]=i;
            }
        }   
        return maxLen;   
    }
};
