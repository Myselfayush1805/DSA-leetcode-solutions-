class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int count=0;
        int l=0;
        int r=nums.size()-1;
        while(l<=r){
            if(nums[l]==0 && nums[r]!=0){
                swap(nums[l],nums[r]);
                l++;
                r--;
                count++;
            }
            else if(nums[l]!=0) l++;
            else if(nums[r]==0) r--;
            else{
                l++;
                r--;
            }
        }
        return count;
    }
};
