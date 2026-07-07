class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int> res;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            bool isLonely=true;
            if(i>0 && nums[i]-nums[i-1]<=1) isLonely=false;
            if(i<n-1 && nums[i+1]-nums[i]<=1) isLonely=false;
            if(isLonely) res.push_back(nums[i]);
        }
        return res;
    }
};
