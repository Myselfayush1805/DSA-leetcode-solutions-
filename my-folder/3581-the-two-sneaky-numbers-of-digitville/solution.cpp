class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> res;
        unordered_map<int,int> freq;
        for(int n:nums) freq[n]++;
        for(const auto& [key,value]:freq){
            if(value==2) res.push_back(key);
        }        
        return res;
    }
};
