class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        vector<bool> seen(101,false);
        for(int n:nums){
            if(n>0) seen[n]=true;
        }
        for(bool c:seen){
            if(c==true) count++;
        }
        return count;
    }
};
