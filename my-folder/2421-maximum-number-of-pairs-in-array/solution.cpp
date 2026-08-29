class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int n:nums) freq[n]++;
        int count=0;
        int left=0;
        for(const auto& [key,value]:freq){
            if(value%2==0) count+=value/2;
            else{
                left++;
                count+=value/2;
            }
        }        
        return {count,left};
    }
};
