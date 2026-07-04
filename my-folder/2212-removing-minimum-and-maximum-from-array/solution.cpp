class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int i=distance(nums.begin(),max_element(nums.begin(),nums.end()));
        int j=distance(nums.begin(),min_element(nums.begin(),nums.end()));
        int left_i=i+1;
        int left_j=j+1;
        int right_i=n-i;
        int right_j=n-j;
        int front=max(left_i,left_j);
        int back=max(right_i,right_j);
        int both=min(left_i+right_j,left_j+right_i);
        return min({front,back,both});    
    }
};
