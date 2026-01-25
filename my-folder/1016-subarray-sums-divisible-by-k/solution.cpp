class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>prefCount;
        prefCount[0]=1;
        int prefSum=0;
        int count=0;
        for(int n:nums){
            prefSum+=n; 
            int mod=((prefSum%k)+k)%k;    
        if(prefCount.find(mod)!=prefCount.end()){
            count+=prefCount[mod];
        }
        prefCount[mod]++;
        }
        return count;
    }
};
