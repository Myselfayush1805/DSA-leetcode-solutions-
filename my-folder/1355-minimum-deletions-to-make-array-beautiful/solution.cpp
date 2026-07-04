class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n-1;){
            if(nums[i]==nums[i+1]){
                count++;
                i++;
            }
            else i+=2;
        }       
        return ((n-count)%2==0)?count:count+1;
    }
};
