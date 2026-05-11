class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;
        for(int n:nums){
            string str=to_string(n);
            for(char c:str) res.push_back(c-'0');
        }     
        return res;  
    }
};
