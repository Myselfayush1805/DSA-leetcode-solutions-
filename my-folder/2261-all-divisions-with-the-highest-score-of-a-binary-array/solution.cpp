class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        vector<int> res={0};
        int count=0;
        for(int n:nums){
            if(n==1) count++;
        }
        int maxSum=count;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) count++;
            else count--;
            int idx=i+1;
            if(count>maxSum){
                maxSum=count;
                res={idx};
            }
            else if(count==maxSum) res.push_back(idx);
        }        
        return res;
    }
};
