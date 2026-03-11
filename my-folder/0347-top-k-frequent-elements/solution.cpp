class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int,int> freq;;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> mh;
        for(int n:nums) freq[n]++;
        for(auto& [n,count]:freq){
            mh.push({count,n});
            if(mh.size()>k) mh.pop();
        }
        for(int i=0;i<k;i++){
            res.push_back(mh.top().second);
            mh.pop();
        }
        return res;
    }
};
