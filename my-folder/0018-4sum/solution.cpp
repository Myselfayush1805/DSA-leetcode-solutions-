class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int l=j+1;
                int r=n-1;
                if(i>0 && nums[i]==nums[i-1]) continue;
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                while(l<r){
                    if((long long)nums[i]+nums[j]+nums[l]+nums[r]==target){
                        res.push_back({nums[i],nums[j],nums[l],nums[r]});
                        l++;
                        r--;
                        while(l<r && nums[l]==nums[l-1]) l++;
                        while(l<r && nums[r]==nums[r+1]) r--;
                    }
                    else if((long long)nums[i]+nums[j]+nums[l]+nums[r]<target) l++;
                    else r--;
                }
            }
        }    
        return res;  
    }
};
