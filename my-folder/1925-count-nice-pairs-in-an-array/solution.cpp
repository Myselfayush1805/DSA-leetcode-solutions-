class Solution {
public:
    int reverse(int n){
        int reversed=0;
        while(n!=0){
            reversed=reversed*10+(n%10);
            n/=10;
        }
        return reversed;
    }
    int countNicePairs(vector<int>& nums) {
        int count=0;
        unordered_map<int,int> freq;
        for(int n:nums){
            int diff=n-reverse(n);
            count=(count+freq[diff]) % 1000000007;
            freq[diff]++;
        }
        return count;
    }
};
