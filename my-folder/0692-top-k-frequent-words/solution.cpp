class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        struct Compare{
            bool operator()(const pair<int,string>&a,const pair<int,string>&b){
                if(a.first==b.first) return a.second>b.second;
            return a.first<b.first;
            }
        };
        priority_queue<pair<int,string>,vector<pair<int,string>>,Compare> mh;
        unordered_map<string,int> freq;
        vector<string> res;
        for(auto& n:words) freq[n]++;
        for(auto& [n,count]:freq){
            mh.push({count,n});
        }        
        for(int i=0;i<k;i++){
            res.push_back(mh.top().second);
            mh.pop();
        }
        return res;
    }
};
