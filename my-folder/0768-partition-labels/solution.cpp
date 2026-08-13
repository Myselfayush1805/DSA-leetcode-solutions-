class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> res;
        unordered_map<char,int> seen;
        int start=0;
        int end=0;
        for(int i=0;i<s.size();i++) seen[s[i]]=i;       
        for(int j=0;j<s.size();j++){
            end=max(end,seen[s[j]]);
            if(end==j){
                res.push_back(end-start+1);
                start=j+1;
            }
        }
        return res;
    }
};
