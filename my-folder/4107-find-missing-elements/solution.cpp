class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> res;
        int a=*min_element(nums.begin(),nums.end());
        int b=*max_element(nums.begin(),nums.end()); 
        for(int n=a;n<b;n++){
            auto it=find(nums.begin(),nums.end(),n);
            if(it==nums.end()) res.push_back(n);
        }      
        return res;
    }
};
