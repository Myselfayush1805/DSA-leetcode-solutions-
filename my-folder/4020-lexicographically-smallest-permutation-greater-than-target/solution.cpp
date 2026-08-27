class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        unordered_map<char,int> freq;
        for(char c:s) freq[c]++;   
        string res="";
        if(backtrack(0,false,target,freq,res)) return res;
        return "";
    }
private: 
    bool backtrack(int idx, bool isGreater, string& target, unordered_map<char,int>& freq, string& res) {
        if(idx==target.size()) return isGreater;
        for(char c='a';c<='z';c++){
            if(freq[c]==0) continue;
            if(!isGreater && c<target[idx]) continue;
            freq[c]--;
            res.push_back(c);
            bool nextisGreater=isGreater || (c>target[idx]);
            if(backtrack(idx+1,nextisGreater,target,freq,res)) return true;
            res.pop_back();
            freq[c]++;
        }
        return false;
    }
};
