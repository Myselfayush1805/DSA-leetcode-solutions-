class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        for(const int& n:nums){
            if(n%3!=0) count++;
        }        
        return count;
    }
};
