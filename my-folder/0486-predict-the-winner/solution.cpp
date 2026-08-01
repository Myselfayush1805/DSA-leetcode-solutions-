class Solution {
public:
    int getScore(vector<int>& nums, int left, int right) {
        if(left==right) return nums[left];
        return max(nums[left]-getScore(nums,left+1,right),nums[right]-getScore(nums,left,right-1));
    }
    bool predictTheWinner(vector<int>& nums) { 
        int n=nums.size();  
        if(n%2==0) return true;   
        return getScore(nums,0,n-1)>=0;
    }
};
