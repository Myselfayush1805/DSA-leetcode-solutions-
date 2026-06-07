class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> res(nums.size());
        for(int i=0;i<nums.size();i++){
            unordered_set<int> pref;
            unordered_set<int> suff; 
            for(int k=0;k<=i;k++){
                pref.insert(nums[k]);
            }
            for(int j=i+1;j<nums.size();j++){
                suff.insert(nums[j]);
            }
            res[i]=pref.size()-suff.size();
        }     
        return res;
    }
};
