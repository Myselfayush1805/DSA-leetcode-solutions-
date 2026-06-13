class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res{};
        for(string a:words){
            int sum=0;
            for(char c:a){
                int n=c-'a';
                sum+=weights[n];
            }
            res.push_back('z'-(sum%26));
        }        
        return res;
    }
};
