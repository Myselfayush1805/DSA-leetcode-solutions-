class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count=0;
        for(int n:nums){
            while(n>0){
                int k=n%10;
                if(k==digit) count++;
                n/=10;
            }
        } 
        return count;
    }
};
