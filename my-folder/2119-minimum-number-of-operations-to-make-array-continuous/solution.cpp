class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int count=INT_MAX;
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        int j=0;
        for(int i=0;i<nums.size();i++){
            while(j<nums.size() && nums[j]<=nums[i]+n-1) j++;
            int elements=j-i;
            count=min(count,n-elements);
        }  
        return count;    
    }
};
