class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int i=0;
       for(int n:nums){
        i=i^n;
       }
       return i;
    }
};
