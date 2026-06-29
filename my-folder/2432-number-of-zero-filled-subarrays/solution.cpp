class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long total=0;
        long long count=0;
        for(int n:nums){
            if(n==0) count++;
            else count=0;
            total+=count;
        }        
        return total;
    }
};
