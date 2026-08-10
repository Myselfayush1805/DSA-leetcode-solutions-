class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int n:nums) freq[n]++;
        bool isValid=true;
        for(auto& [key,value]:freq){
            if(value%2!=0) isValid=false;
        }        
        return isValid;
    }
};
