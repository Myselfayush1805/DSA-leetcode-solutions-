class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       vector<int> result(nums.size());
       int k=result.size()-1;
       int l=0;
       int r=nums.size()-1;
       while(l<=r){
        if((nums[l]*nums[l])>(nums[r]*nums[r])){
           result[k]=nums[l]*nums[l];
           l++;
        }
        else{
            result[k]=nums[r]*nums[r];
            r--;
        }
        k--;
       }  
       return result;           
    }
};
