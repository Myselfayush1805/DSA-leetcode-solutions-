class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int>prefCount;
        prefCount[0]=1;
        int prefSum=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                prefSum++;
            }
            if(prefCount.find(prefSum-k)!=prefCount.end()){
                count+=prefCount[prefSum-k];                
            }
            prefCount[prefSum]++;
        }  
        return count;      
    }
};
