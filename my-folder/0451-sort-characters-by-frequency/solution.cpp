class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int,char>> mh;
        unordered_map<char,int> freq;
        string res;
        for(char n:s) freq[n]++;
        for(auto& [n,count]:freq){
            mh.push({count,n});
        }    
        while(!mh.empty()){  
            auto [count,n]=mh.top();
            mh.pop();
            for(int i=0;i<count;i++){
                res.push_back(n);
            }
        }
        return res;
    }
};
