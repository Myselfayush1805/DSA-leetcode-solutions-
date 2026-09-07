class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> res;
        unordered_map<int,int> freq;
        for(auto& arr:nums){
            for(int n:arr) freq[n]++;
        }
        for(auto& [key,value]:freq){
            if(value==nums.size()) res.push_back(key);
        }       
        sort(res.begin(),res.end());
        return res;
    }
};
