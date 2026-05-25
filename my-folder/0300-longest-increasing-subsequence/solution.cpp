class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> count;
        for(int n:nums){
            auto i=lower_bound(count.begin(),count.end(),n);
            if(i==count.end()) count.push_back(n);
            else *i=n;
        }
        return count.size();
    }
};
