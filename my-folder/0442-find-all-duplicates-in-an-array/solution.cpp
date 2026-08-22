class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;   
        unordered_map<int,int> freq;
        for(int n:nums) freq[n]++;
        for(const auto& [key,value]:freq){
            if(value>1) res.push_back(key);
        }    
        return res;
    }
};
