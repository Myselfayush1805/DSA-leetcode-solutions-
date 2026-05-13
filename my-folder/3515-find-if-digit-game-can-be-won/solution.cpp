class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum1=0;
        int sum2=0;
        for(int n:nums){
            if(n/10==0) sum1+=n;
            else sum2+=n;
        }               
        if(sum1==sum2) return false;
        else return true; 
    }
};
