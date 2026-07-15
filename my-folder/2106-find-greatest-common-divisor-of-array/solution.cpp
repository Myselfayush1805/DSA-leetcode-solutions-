class Solution {
public:
    int findGCD(vector<int>& nums) {
        int i=*min_element(nums.begin(),nums.end());
        int j=*max_element(nums.begin(),nums.end());
        return gcd(i,j);       
    }
};
