class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> nums(arr);
        vector<int> res;
        unordered_map<int,int> mp;
        int rank=1;
        sort(nums.begin(),nums.end());
        for(int n:nums){
            if(mp.find(n)==mp.end()){
                mp[n]=rank;
                rank++;
            }
        }
        for(int n:arr) res.push_back(mp[n]);
        return res;
    }
};
