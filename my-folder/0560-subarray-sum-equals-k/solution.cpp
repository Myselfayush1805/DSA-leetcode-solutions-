class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>prefCount;
        prefCount[0]=1;
        int prefSum=0;
        int count=0;
        for(int n:nums){
            prefSum+=n;
            if(prefCount.find(prefSum-k)!=prefCount.end()){
                count+=prefCount[prefSum-k];
            }
            prefCount[prefSum]++;
        } 
        return count;              
   }
};
