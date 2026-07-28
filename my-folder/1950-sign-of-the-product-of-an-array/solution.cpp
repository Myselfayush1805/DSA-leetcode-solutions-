class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count=0;
        for(int n:nums){
            if(n<0) count++;
            if(n==0) return 0;
        }        
        return (count%2==0) ? 1:-1;
    }
};
