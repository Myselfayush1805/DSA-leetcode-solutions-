class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int> set;
        int a=INT_MIN;
        for(const int& n:nums){
            a=max(a,n);
            if(n>0) set.insert(n);
        }       
        int sum=accumulate(set.begin(),set.end(),0);
        return (sum>0) ? sum:a;
    }
};
