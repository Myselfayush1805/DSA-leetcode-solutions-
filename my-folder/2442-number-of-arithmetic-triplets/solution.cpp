class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count=0;
        vector<bool> seen(201,false);
        for(int n:nums){
            if(n>=2*diff && seen[n-diff] && seen[n-2*diff]) count++;
            seen[n]=true;
        }
        return count;
    }
};
