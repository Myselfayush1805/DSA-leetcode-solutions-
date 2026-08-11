class Solution {
public:
    int maxUniqueSplit(string s) {
        int count=0;
        unordered_set<string> seen;
        backtrack(seen,s,0,count);
        return count;       
    }
private:
    void backtrack(unordered_set<string>& seen, string& s, int idx, int& count) {
        if(idx==s.size()){
            count=max(count,(int)seen.size());
            return;
        }
        for(int i=idx;i<s.size();i++){
            string chunk=s.substr(idx,i-idx+1);
            if(seen.find(chunk)==seen.end()){
                seen.insert(chunk);
                backtrack(seen,s,i+1,count);
                seen.erase(chunk);
            }
        }
    }
};
