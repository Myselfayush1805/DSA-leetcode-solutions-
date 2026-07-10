class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n=nums.size();
        int count=1;
        vector<int> res(n-k+1,-1);
        for(int i=0;i<n;i++){
            if(i>0 && nums[i-1]+1==nums[i]) count++;
            else count=1;
            if(count>=k) res[i-k+1]=nums[i];
        }
        return res;   
    }
};
